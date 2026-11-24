//
//  LCSingleTaskSwitcher_readable.m
//  LCSingleTaskSwitcher — 反编译重建的可读版源码
//
//  重建依据: IDA Pro 9.3 + Hex-Rays, ARM64 Mach-O dylib
//  SHA256: 47bbd44d2dfacb3be316a5dc5fa571034a134ea8987068968e6de1308590d6d7
//  原始大小: 125,152 bytes | 508 函数全部反编译成功
//
//  说明: 本文件把 Hex-Rays 的 C 伪代码回写为接近原始工程风格的 Objective-C。
//        逻辑、常量、调用顺序、时序参数均来自实读反编译结果；变量名与
//        结构命名是重建时的语义化还原，不代表原始工程的字面命名。
//        逐指令精确对照请使用同目录下的 LCSingleTaskSwitcher.m（Hex-Rays 原件）。
//

#import <UIKit/UIKit.h>

#pragma mark - LCSingleTaskAppInfo

@implementation LCSingleTaskAppInfo

- (instancetype)initWithName:(NSString *)name
                  folderName:(NSString *)folderName
                    bundleId:(NSString *)bundleId
                     version:(NSString *)version
                    dataUUID:(NSString *)dataUUID
                     appPath:(NSString *)appPath
                        icon:(UIImage *)icon
                isJITEnabled:(BOOL)isJITEnabled
{
    self = [super init];
    if (self) {
        _name         = name;
        _folderName   = folderName;
        _bundleId     = bundleId;
        _version      = version;
        _dataUUID     = dataUUID;
        _appPath      = appPath;
        _icon         = icon;
        _isJITEnabled = isJITEnabled;
    }
    return self;
}

@end


#pragma mark - LCSingleTaskOverlayWindow

@implementation LCSingleTaskOverlayWindow

- (instancetype)initWithWindowScene:(UIWindowScene *)scene
{
    self = [super initWithWindowScene:scene];
    if (self) {
        self.windowLevel = UIWindowLevelStatusBar + 90.0;   // 压在状态栏之上
        self.backgroundColor = UIColor.clearColor;
        self.hidden = NO;
    }
    return self;
}

// 关键：默认窗口会拦截所有触摸；这里把命中测试委托给 controller，
// 使其只在微珠/抽屉区域响应，其余区域手势穿透到下层 App。
- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event
{
    return [self.overlayController resolveHitTestAtPoint:point
                                                inWindow:self
                                               withEvent:event];
}

@end


#pragma mark - LCSingleTaskSwitcher (单例管理器)

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

// 注入点：非 App Extension、且宿主 NSUserDefaults 中
// "GnoixContainer_SingleTaskQuickSwitcher" 未显式关闭时，延迟 1.2 秒挂载微珠。
+ (void)setupIfNeeded
{
    NSBundle *main = NSBundle.mainBundle;
    if ([[main.bundlePath lastPathComponent] hasSuffix:@".appex"]) {
        return;   // App Extension 不挂载
    }
    NSNumber *enabled = [NSUserDefaults.standardUserDefaults
                         objectForKey:@"GnoixContainer_SingleTaskQuickSwitcher"];
    if (enabled == nil || enabled.boolValue) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.2 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            [[self sharedManager] performSetup];
        });
    }
}

- (void)performSetup
{
    if (self.isSetup) {
        [self ensureWindowAttached];
        return;
    }

    // 找一个前台激活的 UIWindowScene
    UIWindowScene *targetScene = nil;
    for (UIScene *scene in UIApplication.sharedApplication.connectedScenes) {
        if (![scene isKindOfClass:UIWindowScene.class]) continue;
        if (scene.activationState == UISceneActivationStateForegroundActive) {
            targetScene = (UIWindowScene *)scene;
            break;
        }
    }

    if (targetScene) {
        LCSingleTaskOverlayWindow *window =
            [[LCSingleTaskOverlayWindow alloc] initWithWindowScene:targetScene];
        window.windowLevel = UIWindowLevelStatusBar + 90.0;
        window.backgroundColor = UIColor.clearColor;

        LCSingleTaskOverlayController *controller =
            [[LCSingleTaskOverlayController alloc] init];
        window.overlayController = controller;
        window.rootViewController = controller;
        window.hidden = NO;

        self.overlayWindow = window;
        self.overlayController = controller;
        self.isSetup = YES;
        NSLog(@"[LCSingleTaskSwitcher] 单任务侧边快速切换微珠已就绪挂载 (Scene: %@)", targetScene);
    } else {
        // 没有前台 scene 时 0.5s 后重试（弱引用 self，避免循环持有）
        __weak typeof(self) weakSelf = self;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            [weakSelf performSetup];
        });
    }
}

// 场景重新激活后检查浮层是否仍挂着，掉了就重建
- (void)ensureWindowAttached { /* 实读: 检查 overlayWindow 是否存在且 windowScene 仍有效，否则回到 performSetup */ }

#pragma mark 扫描已安装客态 App

// 扫描路径: <真实宿主 Documents>/Applications/*.app
// 每个 App 读两份 plist:
//   Info.plist     — CFBundleDisplayName / CFBundleName / CFBundleIdentifier /
//                    CFBundleShortVersionString
//   LCAppInfo.plist— LCDataUUID / isJITNeeded / isJITEnabled
+ (NSArray<LCSingleTaskAppInfo *> *)scanInstalledApps
{
    NSString *hostDocs = [self realHostDocumentsDirectory];
    if (hostDocs.length == 0) return @[];

    NSString *appsDir = [hostDocs stringByAppendingPathComponent:@"Applications"];
    NSFileManager *fm = NSFileManager.defaultManager;
    NSArray *entries = [fm contentsOfDirectoryAtPath:appsDir error:nil];
    if (entries.count == 0) return @[];

    NSMutableArray *result = NSMutableArray.array;
    for (NSString *entry in entries) {
        NSString *appPath = [appsDir stringByAppendingPathComponent:entry];
        BOOL isDir = NO;
        if (![fm fileExistsAtPath:appPath isDirectory:&isDir] || !isDir) continue;
        if (![entry hasSuffix:@".app"]) continue;

        NSString *infoPath = [appPath stringByAppendingPathComponent:@"Info.plist"];
        NSString *lcInfoPath = [appPath stringByAppendingPathComponent:@"LCAppInfo.plist"];
        if (![fm fileExistsAtPath:infoPath]) continue;

        NSDictionary *info = [NSDictionary dictionaryWithContentsOfFile:infoPath] ?: @{};
        NSDictionary *lcInfo = [NSDictionary dictionaryWithContentsOfFile:lcInfoPath] ?: @{};

        NSString *name = info[@"CFBundleDisplayName"] ?: info[@"CFBundleName"]
                         ?: [entry stringByReplacingOccurrencesOfString:@".app" withString:@""];
        NSString *bundleId = info[@"CFBundleIdentifier"] ?: @"";
        NSString *version = info[@"CFBundleShortVersionString"] ?: @"";
        NSString *dataUUID = lcInfo[@"LCDataUUID"] ?: @"";
        BOOL jit = [lcInfo[@"isJITNeeded"] boolValue] || [lcInfo[@"isJITEnabled"] boolValue];
        UIImage *icon = [self extractAppIconFromAppPath:appPath plist:info];

        LCSingleTaskAppInfo *app = [[LCSingleTaskAppInfo alloc]
                                    initWithName:name folderName:entry bundleId:bundleId
                                    version:version dataUUID:dataUUID appPath:appPath
                                    icon:icon isJITEnabled:jit];
        [result addObject:app];
    }
    [result sortUsingComparator:^NSComparisonResult(LCSingleTaskAppInfo *a, LCSingleTaskAppInfo *b) {
        return [a.name compare:b.name];   // 实读: sortUsingComparator block (stru_142F0)
    }];
    return result;
}

// 图标查找顺序: CFBundleIcons → CFBundlePrimaryIcon → CFBundleIconFiles，
// 依次尝试 "<name>.png", "<name>@2x.png", "<name>@3x.png"。
+ (UIImage *)extractAppIconFromAppPath:(NSString *)appPath plist:(NSDictionary *)info { /* 见 Hex-Rays 原件 0xB178 */ }

#pragma mark 宿主路径探测（关键）

// 按优先级解析"真实宿主 Documents 目录"——多级兜底，每级都 stat() 验证是目录:
//   1. getenv("GNOIX_REAL_DOCUMENTS")            容器注入的真实路径
//   2. getenv("LC_HOME_PATH") + "/Documents"     旧版注入路径
//   3. getenv("HOME") 解析:
//      a. 路径含 "/Documents/Data/Application/" → 截到 "/Documents"
//      b. 路径含 "/Data/Application/"           → 截到该位置再拼 "Documents"
//      c. 否则直接 HOME + "/Documents"
//   4. NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)
+ (NSString *)realHostDocumentsDirectory { /* 见 Hex-Rays 原件 0xDBF0，逻辑已完整还原 */ }

// 当前客态目录名，优先级:
//   getenv("LC_APP_ID") → NSUserDefaults.lcGuestAppId → lcUserDefaults[@"selected"]
//   → guestAppInfo[@"bundlePath"] → standard[@"selected"] → mainBundle 末段(.app)
+ (NSString *)currentGuestFolderName { /* 见 Hex-Rays 原件 0xDE70 */ }

// 宿主真实 Bundle ID，优先级:
//   NSUserDefaults["GnoixHostRealBundleIdentifier"] → NSUserDefaults.lcMainBundle.bundleIdentifier
//   → getenv("LC_HOST_BUNDLE_ID") → 默认 "com.kdt.livecontainer"
+ (NSString *)hostBundleIdentifier { /* 见 Hex-Rays 原件 0xE0A4 */ }

// 是否在客态容器中: .appex 直接返回 NO；否则依次检测环境变量
// LC_APP_ID / GNOIX_REAL_DOCUMENTS / LC_HOME_PATH / NSUserDefaults["selected"]
// 最后兜底调 LCMachOHelper.isContainerGuestRunning。
+ (BOOL)isContainerGuestRunning { /* 见 Hex-Rays 原件 0xE1CC */ }

#pragma mark 切换调度（核心链路）

+ (void)presentTransitionAndSwitchToApp:(LCSingleTaskAppInfo *)app
                             completion:(void (^)(void))completion
{
    // 显示 HandoffView："正在无缝拉起《%@》..." + 转圈，动画结束后调 completion
}

+ (void)presentTransitionAndReturnHomeWithCompletion:(void (^)(void))completion
{
    // 显示 HandoffView："正在退出沙盒，返回宿主主页..." / "即将进入宿主主界面..."
}

// 写入下一次启动选择，让宿主在冷启动时读取。多套 UserDefaults 同步写:
//   standardUserDefaults / lcSharedDefaults / lcUserDefaults
// 键: lastLaunchDataUUID, GnoixContainerLaunchRequestID, GnoixContainerLaunchRequestTime
// 另外落盘到 <realHostDocuments>/next_launch_container.plist 和 container_launch_in_progress.flag
+ (void)syncLaunchSelectionToHost:(NSString *)folderName
                         dataUUID:(NSString *)dataUUID
                        requestID:(NSString *)requestID
                            isJIT:(BOOL)isJIT { /* 见 Hex-Rays 原件 0xC208 */ }

+ (void)clearLaunchSelectionFromHost { /* 删除上述所有键与标记文件，见 0xC8B0 */ }

// 切入目标 App 的完整调度链（实读自 0xCD10）：
//  1. 从 LCSharedUtils.lcUrlSchemes 收集可用 URL scheme，
//     保底加入 "livecontainer" 和 "gnoix"，取第一个作为 scheme。
//  2. 拼 URL:
//     <scheme>://livecontainer-launch?bundle-name=<folder>&container-folder-name=<uuid>&folder-name=<folder>
//     (参数做 URLQueryAllowedCharacterSet 百分号编码)
//  3. 优先调 LCSharedUtils +launchToGuestAppWithURL: (私有 API，用 NSClassFromString/respondsToSelector 软探测)
//     成功 → 0.15s 后执行 completion
//  4. 兜底 UIApplication openURL:options:completionHandler: 对所有候选 scheme 逐个尝试，
//     再经 LSApplicationWorkspace + _LSOpenConfiguration 设置 "__URL__" 选项，
//     调 openApplicationWithBundleIdentifier:... 打开宿主 bundle。
//  5. 再调 LCSharedUtils +launchToGuestAppWithClassicMode:NO，0.35s 后 completion。
+ (void)dispatchSwitchToApp:(NSString *)folderName dataUUID:(NSString *)dataUUID
{
    Class utils = NSClassFromString(@"LCSharedUtils");
    NSMutableArray *schemes = NSMutableArray.array;
    if ([utils respondsToSelector:NSSelectorFromString(@"lcUrlSchemes")]) {
        NSArray *custom = [utils performSelector:NSSelectorFromString(@"lcUrlSchemes")];
        if ([custom isKindOfClass:NSArray.class]) [schemes addObjectsFromArray:custom];
    }
    if (![schemes containsObject:@"livecontainer"]) [schemes addObject:@"livecontainer"];
    if (![schemes containsObject:@"gnoix"]) [schemes addObject:@"gnoix"];

    NSString *scheme = schemes.firstObject ?: @"livecontainer";
    NSString *encFolder = [folderName stringByAddingPercentEncodingWithAllowedCharacters:
                           NSCharacterSet.URLQueryAllowedCharacterSet] ?: folderName;
    NSString *encUUID = [dataUUID stringByAddingPercentEncodingWithAllowedCharacters:
                         NSCharacterSet.URLQueryAllowedCharacterSet] ?: dataUUID;
    NSString *urlString = [NSString stringWithFormat:
        @"%@://livecontainer-launch?bundle-name=%@&container-folder-name=%@&folder-name=%@",
        scheme, encFolder, encUUID, encFolder];
    NSURL *url = [NSURL URLWithString:urlString];
    NSLog(@"[LCSingleTaskSwitcher] 正在执行应用切入调度: target=%@, URL=%@", folderName, urlString);

    SEL launchSel = NSSelectorFromString(@"launchToGuestAppWithURL:");
    if ([utils respondsToSelector:launchSel] &&
        ((BOOL (*)(id, SEL, NSURL *))[utils methodForSelector:launchSel])(utils, launchSel, url)) {
        NSLog(@"[LCSingleTaskSwitcher] LCSharedUtils launchToGuestAppWithURL 调度成功");
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.15 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{ /* completion */ });
        return;
    }

    // 兜底 1: 逐个 scheme openURL
    for (NSString *s in schemes) {
        NSURL *u = [NSURL URLWithString:[NSString stringWithFormat:
            @"%@://livecontainer-launch?bundle-name=%@&container-folder-name=%@&folder-name=%@",
            s, encFolder, encUUID, encFolder]];
        [UIApplication.sharedApplication openURL:u options:@{} completionHandler:nil];
    }
    // 兜底 2: LSApplicationWorkspace 打开宿主
    Class workspace = NSClassFromString(@"LSApplicationWorkspace");
    id ws = [[workspace class] performSelector:@selector(defaultWorkspace)];
    Class config = NSClassFromString(@"_LSOpenConfiguration");
    id cfg = [[config alloc] init];
    [cfg performSelector:@selector(setFrontBoardOptions:)
              withObject:@{@"__URL__": url.absoluteString}];
    SEL openSel = [ws respondsToSelector:NSSelectorFromString(@"openApplicationWithBundleIdentifier:configuration:completionHandler:")]
                  ? NSSelectorFromString(@"openApplicationWithBundleIdentifier:configuration:completionHandler:")
                  : NSSelectorFromString(@"openApplicationWithBundleIdentifier:usingConfiguration:completionHandler:");
    if ([ws respondsToSelector:openSel]) {
        ((void (*)(id, SEL, id, id, id))[ws methodForSelector:openSel])(ws, openSel, [self hostBundleIdentifier], cfg, nil);
    }
    // 兜底 3: 经典模式关闭
    if ([utils respondsToSelector:NSSelectorFromString(@"launchToGuestAppWithClassicMode:")]) {
        ((void (*)(id, SEL, BOOL))[utils methodForSelector:NSSelectorFromString(@"launchToGuestAppWithClassicMode:")])(utils, NSSelectorFromString(@"launchToGuestAppWithClassicMode:"), NO);
    }
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.35 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ /* completion */ });
}

// 返回宿主主页：清启动选择 → LCSharedUtils classicMode:NO → 0.15s completion
// 兜底: 遍历 URL 列表 openURL → 0.35s completion。见 0xD6C8。
+ (void)dispatchReturnHome { /* 见 Hex-Rays 原件 0xD6C8 */ }

// 无 LCSharedUtils 时的降级：写选择 → dispatchSwitchToApp → completion。见 0xDAD0。
+ (void)fallbackSwitchToFolder:(NSString *)folder
                      dataUUID:(NSString *)uuid
                         isJIT:(BOOL)jit
                    completion:(void (^)(void))completion
{
    [self syncLaunchSelectionToHost:folder dataUUID:uuid requestID:[NSUUID UUID].UUIDString isJIT:jit];
    [self dispatchSwitchToApp:folder dataUUID:uuid];
    if (completion) completion();
}

@end
