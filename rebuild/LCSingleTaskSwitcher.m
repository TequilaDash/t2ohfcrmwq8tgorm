#import "LCSingleTaskSwitcher.h"
#import <sys/stat.h>
#import <objc/runtime.h>

// 原样本通过外部 (LiveContainer 宿主) 调用 +setupIfNeeded 挂载.
// 还原版提供 +load 自注册通知监听, 使其被 dlopen 后即可自行工作.

typedef BOOL (*BoolSelectorIMP)(id, SEL);
typedef id (*IdSelectorIMP)(id, SEL);

static id LCSafeCall(Class cls, NSString *selName, BOOL *outSuccess)
{
    SEL sel = NSSelectorFromString(selName);
    if (!cls || ![cls respondsToSelector:sel]) {
        if (outSuccess) *outSuccess = NO;
        return nil;
    }
    IdSelectorIMP imp = (IdSelectorIMP)[cls methodForSelector:sel];
    id result = imp ? imp(cls, sel) : nil;
    if (outSuccess) *outSuccess = (result != nil);
    return result;
}

static BOOL LCSafeCallBool(Class cls, NSString *selName, BOOL defaultValue)
{
    SEL sel = NSSelectorFromString(selName);
    if (!cls || ![cls respondsToSelector:sel]) return defaultValue;
    BoolSelectorIMP imp = (BoolSelectorIMP)[cls methodForSelector:sel];
    return imp ? imp(cls, sel) : defaultValue;
}

static BOOL LCIsDirectory(NSString *path)
{
    if (path.length == 0) return NO;
    struct stat st;
    if (stat([path fileSystemRepresentation], &st) != 0) return NO;
    return (st.st_mode & S_IFMT) == S_IFDIR;
}

static NSString *LCEntropyEnv(const char *name)
{
    const char *v = getenv(name);
    return (v && *v) ? [NSString stringWithUTF8String:v] : nil;
}

static NSMutableDictionary *LCDefaultsForKey(NSString *key)
{
    NSMutableDictionary *out = [NSMutableDictionary dictionary];
    NSUserDefaults *standard = NSUserDefaults.standardUserDefaults;
    if (standard) out[@"standard"] = standard;

    NSArray *names = @[@"lcSharedDefaults", @"lcUserDefaults"];
    for (NSString *name in names) {
        SEL sel = NSSelectorFromString(name);
        if ([NSUserDefaults respondsToSelector:sel]) {
            id d = ((IdSelectorIMP)[NSUserDefaults methodForSelector:sel])([NSUserDefaults class], sel);
            if (d) out[name] = d;
        }
    }
    return out;
}

@implementation LCSingleTaskSwitcher

+ (instancetype)sharedManager
{
    static LCSingleTaskSwitcher *instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] init];
    });
    return instance;
}

+ (void)load
{
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        NSNotificationCenter *nc = NSNotificationCenter.defaultCenter;
        [nc addObserver:self
               selector:@selector(lc_launchNotification:)
                   name:UIApplicationDidFinishLaunchingNotification
                 object:nil];
        [nc addObserver:self
               selector:@selector(lc_launchNotification:)
                   name:UISceneWillConnectNotification
                 object:nil];
        [nc addObserver:self
               selector:@selector(lc_launchNotification:)
                   name:UISceneDidActivateNotification
                 object:nil];
    });
}

+ (void)lc_launchNotification:(NSNotification *)note
{
    [self setupIfNeeded];
}

+ (void)setupIfNeeded
{
    if (![self isContainerGuestRunning]) return;
    NSString *bundlePath = NSBundle.mainBundle.bundlePath;
    if ([bundlePath hasSuffix:@".appex"]) return;

    id enabled = [NSUserDefaults.standardUserDefaults objectForKey:@"GnoixContainer_SingleTaskQuickSwitcher"];
    if (enabled && ![enabled boolValue]) return;

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.2 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [[self sharedManager] performSetup];
    });
}

- (void)performSetup
{
    if (self.isSetup) {
        [self ensureWindowAttached];
        return;
    }

    UIWindowScene *scene = nil;
    for (UIScene *candidate in UIApplication.sharedApplication.connectedScenes) {
        if (![candidate isKindOfClass:UIWindowScene.class]) continue;
        if (candidate.activationState == UISceneActivationStateForegroundActive) {
            scene = (UIWindowScene *)candidate;
            break;
        }
    }
    if (!scene) {
        __weak typeof(self) weakSelf = self;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            [weakSelf performSetup];
        });
        return;
    }

    LCSingleTaskOverlayWindow *window = [[LCSingleTaskOverlayWindow alloc] initWithWindowScene:scene];
    LCSingleTaskOverlayController *controller = [[LCSingleTaskOverlayController alloc] init];
    window.overlayController = controller;
    window.rootViewController = controller;
    window.hidden = NO;
    self.overlayWindow = window;
    self.overlayController = controller;
    self.isSetup = YES;
    NSLog(@"[LCSingleTaskSwitcher] single-task bead mounted (Scene: %@)", scene);
}

- (void)ensureWindowAttached
{
    if (self.overlayWindow && !self.overlayWindow.hidden) return;
    self.isSetup = NO;
    [self performSetup];
}

#pragma mark - 扫描

+ (NSArray<LCSingleTaskAppInfo *> *)scanInstalledApps
{
    NSString *hostDocs = [self realHostDocumentsDirectory];
    if (hostDocs.length == 0) return @[];

    NSString *appsDir = [hostDocs stringByAppendingPathComponent:@"Applications"];
    NSFileManager *fm = NSFileManager.defaultManager;
    NSArray *entries = [fm contentsOfDirectoryAtPath:appsDir error:nil] ?: @[];
    NSMutableArray *result = [NSMutableArray array];

    for (NSString *entry in entries) {
        if (![entry hasSuffix:@".app"]) continue;
        NSString *appPath = [appsDir stringByAppendingPathComponent:entry];
        BOOL isDir = NO;
        if (![fm fileExistsAtPath:appPath isDirectory:&isDir] || !isDir) continue;

        NSString *infoPath = [appPath stringByAppendingPathComponent:@"Info.plist"];
        if (![fm fileExistsAtPath:infoPath]) continue;
        NSString *lcPath = [appPath stringByAppendingPathComponent:@"LCAppInfo.plist"];
        NSDictionary *info = [NSDictionary dictionaryWithContentsOfFile:infoPath] ?: @{};
        NSDictionary *lc = [NSDictionary dictionaryWithContentsOfFile:lcPath] ?: @{};

        NSString *name = info[@"CFBundleDisplayName"] ?: info[@"CFBundleName"]
                         ?: [entry stringByReplacingOccurrencesOfString:@".app" withString:@""];
        NSString *bundleId = info[@"CFBundleIdentifier"] ?: @"";
        NSString *version = info[@"CFBundleShortVersionString"] ?: @"";
        NSString *uuid = lc[@"LCDataUUID"] ?: @"";
        BOOL jit = [lc[@"isJITNeeded"] boolValue] || [lc[@"isJITEnabled"] boolValue];
        UIImage *icon = [self extractAppIconFromAppPath:appPath plist:info];

        LCSingleTaskAppInfo *app = [[LCSingleTaskAppInfo alloc]
            initWithName:name folderName:entry bundleId:bundleId version:version
                dataUUID:uuid appPath:appPath icon:icon isJITEnabled:jit];
        [result addObject:app];
    }

    [result sortUsingComparator:^NSComparisonResult(LCSingleTaskAppInfo *a, LCSingleTaskAppInfo *b) {
        return [a.name compare:b.name options:NSCaseInsensitiveSearch];
    }];
    return result;
}

+ (UIImage *)extractAppIconFromAppPath:(NSString *)appPath plist:(NSDictionary *)info
{
    NSDictionary *icons = info[@"CFBundleIcons"];
    if (![icons isKindOfClass:NSDictionary.class]) icons = info[@"CFBundleIconFiles"];
    NSDictionary *primary = icons[@"CFBundlePrimaryIcon"] ?: icons;
    NSArray *files = primary[@"CFBundleIconFiles"] ?: @[];
    if (files.count == 0 && [info[@"CFBundleIconFile"] isKindOfClass:NSString.class]) {
        files = @[info[@"CFBundleIconFile"]];
    }

    NSFileManager *fm = NSFileManager.defaultManager;
    NSArray *suffixes = @[@"", @"@2x.png", @"@3x.png"];
    for (NSString *base in files) {
        for (NSString *suffix in suffixes) {
            NSString *fileName = [base hasSuffix:@".png"] ? base
                                                          : [base stringByAppendingString:@".png"];
            if (suffix.length) {
                fileName = [[base stringByDeletingPathExtension]
                            stringByAppendingFormat:@"%@.png", suffix];
            }
            NSString *path = [appPath stringByAppendingPathComponent:fileName];
            if ([fm fileExistsAtPath:path]) {
                UIImage *img = [UIImage imageWithContentsOfFile:path];
                if (img) return img;
            }
        }
    }
    return nil;
}

#pragma mark - 路径探测

+ (NSString *)realHostDocumentsDirectory
{
    NSString *envPath = LCEntropyEnv("GNOIX_REAL_DOCUMENTS");
    if (LCIsDirectory(envPath)) return envPath;

    NSString *homePath = LCEntropyEnv("LC_HOME_PATH");
    if (homePath.length) {
        NSString *docs = [homePath stringByAppendingPathComponent:@"Documents"];
        if (LCIsDirectory(docs)) return docs;
    }

    NSString *home = LCEntropyEnv("HOME");
    if (home.length) {
        NSRange r1 = [home rangeOfString:@"/Documents/Data/Application/"];
        if (r1.location != NSNotFound) {
            NSString *cut = [home substringToIndex:r1.location + [@"/Documents" length]];
            if (LCIsDirectory(cut)) return cut;
        }
        NSRange r2 = [home rangeOfString:@"/Data/Application/"];
        if (r2.location != NSNotFound) {
            NSString *base = [home substringToIndex:r2.location];
            NSString *docs = [base stringByAppendingPathComponent:@"Documents"];
            if (LCIsDirectory(docs)) return docs;
        }
        NSString *docs = [home stringByAppendingPathComponent:@"Documents"];
        if (LCIsDirectory(docs)) return docs;
    }

    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    return paths.firstObject ?: @"";
}

+ (NSString *)currentGuestFolderName
{
    NSString *appId = LCEntropyEnv("LC_APP_ID");
    if (appId.length) return appId;

    SEL guestSel = NSSelectorFromString(@"lcGuestAppId");
    if ([NSUserDefaults respondsToSelector:guestSel]) {
        id v = ((IdSelectorIMP)[NSUserDefaults methodForSelector:guestSel])([NSUserDefaults class], guestSel);
        if ([v isKindOfClass:NSString.class] && [v length]) return v;
    }
    SEL defaultsSel = NSSelectorFromString(@"lcUserDefaults");
    if ([NSUserDefaults respondsToSelector:defaultsSel]) {
        id store = ((IdSelectorIMP)[NSUserDefaults methodForSelector:defaultsSel])([NSUserDefaults class], defaultsSel);
        NSString *selected = [store objectForKey:@"selected"];
        if (selected.length) return selected;
    }
    NSString *selected = [NSUserDefaults.standardUserDefaults stringForKey:@"selected"];
    if (selected.length) return selected;

    NSString *bundlePath = NSBundle.mainBundle.bundlePath;
    if ([bundlePath hasSuffix:@".app"]) return bundlePath.lastPathComponent;
    return @"";
}

+ (NSString *)hostBundleIdentifier
{
    NSString *stored = [NSUserDefaults.standardUserDefaults stringForKey:@"GnoixHostRealBundleIdentifier"];
    if (stored.length) return stored;

    SEL mainSel = NSSelectorFromString(@"lcMainBundle");
    if ([NSUserDefaults respondsToSelector:mainSel]) {
        id bundle = ((IdSelectorIMP)[NSUserDefaults methodForSelector:mainSel])([NSUserDefaults class], mainSel);
        NSString *bid = [bundle bundleIdentifier];
        if (bid.length) return bid;
    }
    NSString *env = LCEntropyEnv("LC_HOST_BUNDLE_ID");
    return env.length ? env : @"com.kdt.livecontainer";
}

+ (BOOL)isContainerGuestRunning
{
    if ([[NSBundle.mainBundle.bundlePath lastPathComponent] hasSuffix:@".appex"]) return NO;
    if (getenv("LC_APP_ID") || getenv("GNOIX_REAL_DOCUMENTS") || getenv("LC_HOME_PATH")) return YES;
    if ([NSUserDefaults.standardUserDefaults objectForKey:@"selected"]) return YES;

    Class helper = NSClassFromString(@"LCMachOHelper");
    if (!helper) return NO;
    return LCSafeCallBool(helper, @"isContainerGuestRunning", NO);
}

#pragma mark - 宿主启动选择同步

+ (void)syncLaunchSelectionToHost:(NSString *)folderName
                         dataUUID:(NSString *)dataUUID
                        requestID:(NSString *)requestID
                            isJIT:(BOOL)isJIT
{
    NSString *rid = requestID ?: [NSUUID UUID].UUIDString;
    NSTimeInterval now = NSDate.date.timeIntervalSince1970;
    NSDictionary *defaults = LCDefaultsForKey(nil);

    for (NSUserDefaults *store in defaults.allValues) {
        if (![store respondsToSelector:@selector(setObject:forKey:)]) continue;
        [store setObject:folderName ?: @"" forKey:@"lastLaunchDataUUID"];
        [store setObject:rid forKey:@"GnoixContainerLaunchRequestID"];
        [store setDouble:now forKey:@"GnoixContainerLaunchRequestTime"];
        [store setBool:isJIT forKey:@"GnoixNeedInternalJIT"];
        [store synchronize];
    }

    NSString *docs = [self realHostDocumentsDirectory];
    if (docs.length) {
        NSMutableDictionary *plist = [NSMutableDictionary dictionaryWithContentsOfFile:
                                      [docs stringByAppendingPathComponent:@"next_launch_container.plist"]] ?:
                                      [NSMutableDictionary dictionary];
        plist[@"lastLaunchDataUUID"] = folderName ?: @"";
        plist[@"dataUUID"] = dataUUID ?: @"";
        plist[@"GnoixContainerLaunchRequestID"] = rid;
        plist[@"GnoixContainerLaunchRequestTime"] = @(now);
        plist[@"isJIT"] = @(isJIT);
        [plist writeToFile:[docs stringByAppendingPathComponent:@"next_launch_container.plist"]
                atomically:YES];
        [[NSFileManager defaultManager]
            createFileAtPath:[docs stringByAppendingPathComponent:@"container_launch_in_progress.flag"]
                    contents:[@"1" dataUsingEncoding:NSUTF8StringEncoding]
                  attributes:nil];
    }
}

+ (void)clearLaunchSelectionFromHost
{
    NSDictionary *defaults = LCDefaultsForKey(nil);
    for (NSUserDefaults *store in defaults.allValues) {
        [store removeObjectForKey:@"lastLaunchDataUUID"];
        [store removeObjectForKey:@"GnoixContainerLaunchRequestID"];
        [store removeObjectForKey:@"GnoixContainerLaunchRequestTime"];
        [store synchronize];
    }
    NSString *docs = [self realHostDocumentsDirectory];
    if (docs.length) {
        [[NSFileManager defaultManager]
            removeItemAtPath:[docs stringByAppendingPathComponent:@"next_launch_container.plist"]
                       error:nil];
        [[NSFileManager defaultManager]
            removeItemAtPath:[docs stringByAppendingPathComponent:@"container_launch_in_progress.flag"]
                       error:nil];
    }
}

#pragma mark - 转场

+ (void)presentTransitionAndSwitchToApp:(LCSingleTaskAppInfo *)app completion:(void (^)(void))completion
{
    NSString *label = [NSString stringWithFormat:@"正在无缝拉起《%@》...", app.name ?: @""];
    LCSingleTaskSwitcher *mgr = [self sharedManager];
    LCSingleTaskHandoffView *handoff = mgr.overlayController.transitionOverlayView;
    if (!handoff) {
        if (completion) completion();
        return;
    }
    [handoff configureWithAppName:app.name icon:app.icon status:label];
    [handoff showWithCompletion:completion];
}

+ (void)presentTransitionAndReturnHomeWithCompletion:(void (^)(void))completion
{
    LCSingleTaskSwitcher *mgr = [self sharedManager];
    LCSingleTaskHandoffView *handoff = mgr.overlayController.transitionOverlayView;
    if (!handoff) {
        if (completion) completion();
        return;
    }
    BOOL guest = [self isContainerGuestRunning];
    NSString *label = guest ? @"正在退出沙盒，返回宿主主页..." : @"即将进入宿主主界面...";
    [handoff configureWithAppName:@"容器宿主主页"
                             icon:[UIImage systemImageNamed:@"house.fill"]
                           status:label];
    [handoff showWithCompletion:completion];
}

#pragma mark - 切换调度

+ (void)dispatchSwitchToApp:(NSString *)folderName dataUUID:(NSString *)dataUUID
{
    Class utils = NSClassFromString(@"LCSharedUtils");
    NSMutableArray *schemes = [NSMutableArray array];

    id custom = LCSafeCall(utils, @"lcUrlSchemes", nil);
    if ([custom isKindOfClass:NSArray.class]) {
        for (id s in (NSArray *)custom) {
            if ([s isKindOfClass:NSString.class] && [s length]) [schemes addObject:s];
        }
    }
    if (![schemes containsObject:@"livecontainer"]) [schemes addObject:@"livecontainer"];
    if (![schemes containsObject:@"gnoix"]) [schemes addObject:@"gnoix"];

    NSString *scheme = schemes.firstObject ?: @"livecontainer";
    NSCharacterSet *allowed = NSCharacterSet.URLQueryAllowedCharacterSet;
    NSString *encFolder = [folderName stringByAddingPercentEncodingWithAllowedCharacters:allowed] ?: folderName;
    NSString *encUUID = [dataUUID stringByAddingPercentEncodingWithAllowedCharacters:allowed] ?: dataUUID;

    NSString * (^buildURL)(NSString *) = ^NSString *(NSString *s) {
        return [NSString stringWithFormat:
                @"%@://livecontainer-launch?bundle-name=%@&container-folder-name=%@&folder-name=%@",
                s, encFolder, encUUID, encFolder];
    };
    NSString *urlString = buildURL(scheme);
    NSURL *url = [NSURL URLWithString:urlString];
    NSLog(@"[LCSingleTaskSwitcher] switching to target=%@ URL=%@", folderName, urlString);

    SEL launchSel = NSSelectorFromString(@"launchToGuestAppWithURL:");
    if (utils && [utils respondsToSelector:launchSel]) {
        BOOL (*imp)(id, SEL, NSURL *) = (BOOL (*)(id, SEL, NSURL *))[utils methodForSelector:launchSel];
        if (imp && imp(utils, launchSel, url)) {
            NSLog(@"[LCSingleTaskSwitcher] LCSharedUtils launchToGuestAppWithURL succeeded");
            return;
        }
    }

    for (NSString *s in schemes) {
        NSURL *u = [NSURL URLWithString:buildURL(s)];
        if (u) {
            [UIApplication.sharedApplication openURL:u options:@{} completionHandler:nil];
        }
    }

    Class workspace = NSClassFromString(@"LSApplicationWorkspace");
    id ws = LCSafeCall(workspace, @"defaultWorkspace", nil);
    if (ws) {
        Class configCls = NSClassFromString(@"_LSOpenConfiguration");
        id config = configCls ? [[configCls alloc] init] : nil;
        if (config && [config respondsToSelector:NSSelectorFromString(@"setFrontBoardOptions:")]) {
            {
                SEL cs = NSSelectorFromString(@"setFrontBoardOptions:");
                void (*cimp)(id, SEL, id) = (void (*)(id, SEL, id))[config methodForSelector:cs];
                if (cimp) cimp(config, cs, @{@"__URL__": url.absoluteString});
            }
        }
        NSArray *sels = @[
            @"openApplicationWithBundleIdentifier:configuration:completionHandler:",
            @"openApplicationWithBundleIdentifier:usingConfiguration:completionHandler:"
        ];
        for (NSString *name in sels) {
            SEL sel = NSSelectorFromString(name);
            if ([ws respondsToSelector:sel]) {
                void (*imp)(id, SEL, id, id, id) = (void (*)(id, SEL, id, id, id))[ws methodForSelector:sel];
                if (imp) imp(ws, sel, [self hostBundleIdentifier], config, nil);
                break;
            }
        }
    }

    if (utils && [utils respondsToSelector:NSSelectorFromString(@"launchToGuestAppWithClassicMode:")]) {
        void (*imp)(id, SEL, BOOL) = (void (*)(id, SEL, BOOL))
            [utils methodForSelector:NSSelectorFromString(@"launchToGuestAppWithClassicMode:")];
        if (imp) imp(utils, NSSelectorFromString(@"launchToGuestAppWithClassicMode:"), NO);
    }
}

+ (void)dispatchReturnHome
{
    [self clearLaunchSelectionFromHost];
    Class utils = NSClassFromString(@"LCSharedUtils");
    BOOL ok = LCSafeCallBool(utils, @"launchToGuestAppWithClassicMode:", NO);
    if (ok) {
        NSLog(@"[LCSingleTaskSwitcher] LCSharedUtils classic mode succeeded");
        return;
    }
    NSArray *urls = @[@"livecontainer://", @"gnoix://"];
    for (NSString *s in urls) {
        NSURL *u = [NSURL URLWithString:s];
        if (u) [UIApplication.sharedApplication openURL:u options:@{} completionHandler:nil];
    }
}

+ (void)fallbackSwitchToFolder:(NSString *)folder
                      dataUUID:(NSString *)uuid
                         isJIT:(BOOL)jit
                    completion:(void (^)(void))completion
{
    [self syncLaunchSelectionToHost:folder dataUUID:uuid
                          requestID:[NSUUID UUID].UUIDString isJIT:jit];
    [self dispatchSwitchToApp:folder dataUUID:uuid];
    if (completion) completion();
}

+ (void)fallbackReturnHomeWithCompletion:(void (^)(void))completion
{
    [self dispatchReturnHome];
    if (completion) completion();
}

@end
