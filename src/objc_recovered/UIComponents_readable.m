//
//  UIComponents_readable.m
//  LCSingleTaskSwitcher — UI 层反编译重建源码
//
//  逻辑来自 IDA Hex-Rays 实读；变量名语义化。逐指令对照见 classes/*.m。
//

#import <UIKit/UIKit.h>

#pragma mark - LCSingleTaskBeadView（侧边悬浮微珠）

@implementation LCSingleTaskBeadView

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // setupUI (0x4300): 建 iconImageView + indicatorRingView + blur 背景，
        // 圆形裁剪 + 阴影，添加 UITapGestureRecognizer(handleTap) 与
        // UIPanGestureRecognizer(handlePan:)。
        [self setupUI];
    }
    return self;
}

// 扩大命中区域：微珠视觉尺寸小于可点击区域，这里做了额外容差。
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event { /* 0x47E8 */ }

- (void)handleTap
{
    if (self.onUserInteraction) self.onUserInteraction();
    if (self.onTap) self.onTap();          // 交给 controller → 展开抽屉
}

- (void)handlePan:(UIPanGestureRecognizer *)gesture
{
    if (self.onUserInteraction) self.onUserInteraction();
    UIView *superview = self.superview;
    if (!superview) return;

    UIGestureRecognizerState state = gesture.state;
    if (state == UIGestureRecognizerStateBegan) {
        self.initialPanCenter = self.center;
        [UIView animateWithDuration:0.15 animations:^{ /* 放大高亮 */ }];
    } else if (state == UIGestureRecognizerStateChanged) {
        CGPoint t = [gesture translationInView:superview];
        CGPoint newCenter = CGPointMake(t.x + self.initialPanCenter.x,
                                        t.y + self.initialPanCenter.y);
        self.center = newCenter;
        if (self.onPanMoved) self.onPanMoved(newCenter);
    } else if (state == UIGestureRecognizerStateEnded ||
               state == UIGestureRecognizerStateCancelled) {
        // 0.25s 弹簧回弹 (damping=0.8, velocity=0.5)
        [UIView animateWithDuration:0.25 delay:0
         usingSpringWithDamping:0.8 initialSpringVelocity:0.5
                        options:0 animations:^{ /* 归位到边缘 */ } completion:nil];
        if (self.onPanEnded) self.onPanEnded(self.center);
    }
}

- (void)resetVisualState { /* 恢复默认大小/透明度 0x4B8C */ }

@end


#pragma mark - LCSingleTaskOverlayController（浮层总控）

@implementation LCSingleTaskOverlayController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self setupComponents];
    [self loadSavedBeadPosition];
}

// 最关键的命中测试：透明浮层默认吞掉所有触摸，这里根据抽屉开关状态决定
// 是否把事件透传给下层；只有微珠和抽屉的实际区域才返回对应 view。
- (UIView *)resolveHitTestAtPoint:(CGPoint)point
                         inWindow:(UIWindow *)window
                        withEvent:(UIEvent *)event
{
    // 0x8B40: 先 hitTest beadView → drawerView → dimmingMaskView；
    // 抽屉关闭且点不在微珠上时返回 nil（穿透）；打开时遮罩可点击关闭。
    if (self.drawerOpen) {
        UIView *drawerHit = [self.drawerView hitTest:point withEvent:event];
        if (drawerHit) return drawerHit;
        if ([self.dimmingMaskView pointInside:point withEvent:event]) return self.dimmingMaskView;
    }
    UIView *beadHit = [self.beadView hitTest:point withEvent:event];
    return beadHit;
}

- (void)setupComponents
{
    // 0x8DE4: 创建 dimmingMaskView / beadView / drawerView / transitionOverlayView，
    // 装配四个 block 回调（onTap / onPanMoved / onPanEnded / onUserInteraction），
    // onUserInteraction 里调用 resetInactivityTimer。
}

// 微珠位置持久化（NSUserDefaults）：LCSingleTask_BeadPinnedRight (BOOL) 和
// LCSingleTask_BeadCenterYRatio (double)。
- (void)loadSavedBeadPosition { /* 0x96E8 */ }
- (void)saveBeadPosition      { /* 0x9798 */ }

- (void)updateLayoutForCanvasSize:(CGSize)size
{
    // 0x9810: 根据 pinnedRight / centerYRatio 算出微珠中心，
    // 保持安全边距，横竖屏切换时重新布局抽屉与遮罩。
}

- (void)handleBeadPanEnded:(CGPoint)center
{
    // 0x99D4: 根据 center.x 相对屏宽中点决定吸附左/右边缘，
    // 更新 beadPinnedRight 与 beadCenterYRatio，写回 NSUserDefaults。
}

- (void)setDrawerOpen:(BOOL)open animated:(BOOL)animated
{
    // 0x9CB8: 抽屉展开/收起动画（frame 位移 + 遮罩透明度），
    // 展开时刷新 App 列表并启动 5s 无操作自动收起计时器。
    self.drawerOpen = open;
}

- (void)refreshAppList
{
    NSArray *apps = [LCSingleTaskSwitcher scanInstalledApps];
    [self.drawerView reloadWithApps:apps
                     runningFolder:[LCSingleTaskSwitcher currentGuestFolderName]];
}

- (void)handleAppSelected:(LCSingleTaskAppInfo *)app
{
    // 0xA0D8: 关闭手牌列表 → presentTransitionAndSwitchToApp →
    // fallbackSwitchToFolder:dataUUID:isJIT:completion: → 完成后隐藏转场层。
}

- (void)resetInactivityTimer
{
    // 0xA1B0: NSTimer 5s 无操作自动 setDrawerOpen:NO animated:YES
}

- (void)viewWillTransitionToSize:(CGSize)size
       withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    [super viewWillTransitionToSize:size withTransitionCoordinator:coordinator];
    [coordinator animateAlongsideTransition:^(id ctx) { [self updateLayoutForCanvasSize:size]; }
                                 completion:nil];
}

- (BOOL)shouldAutorotate { return YES; }
- (UIInterfaceOrientationMask)supportedInterfaceOrientations { return UIInterfaceOrientationMaskAll; }

@end


#pragma mark - LCSingleTaskDrawerView（App 抽屉）

@implementation LCSingleTaskDrawerView

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self setupUI];                 // 0x5CB4: 毛玻璃背景 + header + scrollView + stackView
        [self setupReturnHomeCard];     // 0x6CC8: "返回宿主主页" 卡片 (house.fill)
    }
    return self;
}

- (void)reloadWithApps:(NSArray<LCSingleTaskAppInfo *> *)apps
        runningFolder:(NSString *)folder
{
    // 0x759C: 清空 stackView，为每个 app 调 createAppRowWithApp:isJIT:
    // isRunning = [app.folderName isEqualToString:folder]
}

// 每个 App 行 (0x781C)：图标 + 名称 + bundle id/version + 运行中圆点("● 运行中")
// + chevron.right，点击触发 onSelectApp(app)。
- (UIView *)createAppRowWithApp:(LCSingleTaskAppInfo *)app isRunning:(BOOL)running { /* 0x781C */ }

- (void)handleClose        { if (self.onClose) self.onClose(); }
- (void)handleReturnHome   { if (self.onReturnHome) self.onReturnHome(); }

@end


#pragma mark - LCSingleTaskHandoffView（转场覆盖层）

@implementation LCSingleTaskHandoffView

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) { [self setupUI]; }  // 0x4D3C: blurView + cardView + icon + label + indicator
    return self;
}

- (void)configureWithAppName:(NSString *)name icon:(UIImage *)icon status:(NSString *)status
{
    // 0x5834: iconImageView.image = icon; statusLabel.text = status
}

- (void)updateStatus:(NSString *)status { /* 0x5910 */ }

- (void)showWithCompletion:(void (^)(void))completion
{
    // 0x5A34: alpha 0→1 淡入 + 卡片缩放 (CGAffineTransformMakeScale)，
    // dispatch 后执行 completion。
}

@end
