//
//  LCSingleTaskSwitcher.h
//  Reconstructed from ARM64 Mach-O by IDA 9.3 Hex-Rays.
//  All public and private API access goes through runtime lookup.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#pragma mark - LCSingleTaskAppInfo

@interface LCSingleTaskAppInfo : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *folderName;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *dataUUID;
@property (nonatomic, copy) NSString *appPath;
@property (nonatomic, strong) UIImage *icon;
@property (nonatomic, assign) BOOL isJITEnabled;
- (instancetype)initWithName:(NSString *)name
                  folderName:(NSString *)folderName
                    bundleId:(NSString *)bundleId
                     version:(NSString *)version
                    dataUUID:(NSString *)dataUUID
                     appPath:(NSString *)appPath
                        icon:(UIImage *)icon
                isJITEnabled:(BOOL)isJITEnabled;
@end

#pragma mark - LCSingleTaskBeadView

@interface LCSingleTaskBeadView : UIView
@property (nonatomic, strong) UIVisualEffectView *blurView;
@property (nonatomic, strong) UIImageView *iconImageView;
@property (nonatomic, strong) UIView *indicatorRingView;
@property (nonatomic, assign) CGPoint initialPanCenter;
@property (nonatomic, copy) void (^onTap)(void);
@property (nonatomic, copy) void (^onPanMoved)(CGPoint center);
@property (nonatomic, copy) void (^onPanEnded)(CGPoint center);
@property (nonatomic, copy) void (^onUserInteraction)(void);
- (void)setupUI;
- (void)resetVisualState;
@end

#pragma mark - LCSingleTaskHandoffView

@interface LCSingleTaskHandoffView : UIView
@property (nonatomic, strong) UIVisualEffectView *blurView;
@property (nonatomic, strong) UIView *cardView;
@property (nonatomic, strong) UIImageView *iconImageView;
@property (nonatomic, strong) UILabel *statusLabel;
@property (nonatomic, strong) UIActivityIndicatorView *indicatorView;
- (void)setupUI;
- (void)configureWithAppName:(NSString *)name icon:(UIImage *)icon status:(NSString *)status;
- (void)updateStatus:(NSString *)status;
- (void)showWithCompletion:(void (^)(void))completion;
@end

#pragma mark - LCSingleTaskDrawerView

@interface LCSingleTaskDrawerView : UIView
@property (nonatomic, strong) UIVisualEffectView *blurView;
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIStackView *stackView;
@property (nonatomic, strong) UIView *headerView;
@property (nonatomic, strong) UIView *dimView;
@property (nonatomic, copy) NSArray<LCSingleTaskAppInfo *> *apps;
@property (nonatomic, copy) NSString *runningFolder;
@property (nonatomic, copy) void (^onSelectApp)(LCSingleTaskAppInfo *app);
@property (nonatomic, copy) void (^onReturnHome)(void);
@property (nonatomic, copy) void (^onClose)(void);
@property (nonatomic, copy) void (^onUserInteraction)(void);
- (void)setupUI;
- (void)setupReturnHomeCard;
- (void)reloadWithApps:(NSArray<LCSingleTaskAppInfo *> *)apps runningFolder:(NSString *)folder;
- (UIView *)createAppRowWithApp:(LCSingleTaskAppInfo *)app isRunning:(BOOL)running;
@end

#pragma mark - LCSingleTaskOverlayWindow

@class LCSingleTaskOverlayController;

@interface LCSingleTaskOverlayWindow : UIWindow
@property (nonatomic, weak) LCSingleTaskOverlayController *overlayController;
@end

#pragma mark - LCSingleTaskOverlayController

@interface LCSingleTaskOverlayController : UIViewController
@property (nonatomic, strong) LCSingleTaskBeadView *beadView;
@property (nonatomic, strong) LCSingleTaskDrawerView *drawerView;
@property (nonatomic, strong) UIView *dimmingMaskView;
@property (nonatomic, strong) LCSingleTaskHandoffView *transitionOverlayView;
@property (nonatomic, assign) BOOL drawerOpen;
@property (nonatomic, assign) BOOL beadPinnedRight;
@property (nonatomic, assign) CGFloat beadCenterYRatio;
@property (nonatomic, strong) NSTimer *inactivityTimer;
- (UIView *)resolveHitTestAtPoint:(CGPoint)point inWindow:(UIWindow *)window withEvent:(UIEvent *)event;
- (void)setupComponents;
- (void)loadSavedBeadPosition;
- (void)saveBeadPosition;
- (void)updateLayoutForCanvasSize:(CGSize)size;
- (void)handleBeadPanEnded:(CGPoint)center;
- (void)setDrawerOpen:(BOOL)open animated:(BOOL)animated;
- (void)refreshAppList;
- (void)handleAppSelected:(LCSingleTaskAppInfo *)app;
- (void)resetInactivityTimer;
@end

#pragma mark - LCSingleTaskSwitcher

@interface LCSingleTaskSwitcher : NSObject
@property (nonatomic, strong) LCSingleTaskOverlayWindow *overlayWindow;
@property (nonatomic, strong) LCSingleTaskOverlayController *overlayController;
@property (nonatomic, assign) BOOL isSetup;
+ (instancetype)sharedManager;
+ (void)setupIfNeeded;
- (void)performSetup;
- (void)ensureWindowAttached;
+ (NSArray<LCSingleTaskAppInfo *> *)scanInstalledApps;
+ (UIImage *)extractAppIconFromAppPath:(NSString *)appPath plist:(NSDictionary *)info;
+ (void)presentTransitionAndSwitchToApp:(LCSingleTaskAppInfo *)app completion:(void (^)(void))completion;
+ (void)presentTransitionAndReturnHomeWithCompletion:(void (^)(void))completion;
+ (void)syncLaunchSelectionToHost:(NSString *)folderName dataUUID:(NSString *)dataUUID requestID:(NSString *)requestID isJIT:(BOOL)isJIT;
+ (void)clearLaunchSelectionFromHost;
+ (void)dispatchSwitchToApp:(NSString *)folderName dataUUID:(NSString *)dataUUID;
+ (void)dispatchReturnHome;
+ (void)fallbackSwitchToFolder:(NSString *)folder dataUUID:(NSString *)uuid isJIT:(BOOL)jit completion:(void (^)(void))completion;
+ (void)fallbackReturnHomeWithCompletion:(void (^)(void))completion;
+ (NSString *)realHostDocumentsDirectory;
+ (NSString *)currentGuestFolderName;
+ (NSString *)hostBundleIdentifier;
+ (BOOL)isContainerGuestRunning;
@end
