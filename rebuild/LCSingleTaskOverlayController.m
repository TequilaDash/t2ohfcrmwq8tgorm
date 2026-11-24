#import "LCSingleTaskSwitcher.h"

@implementation LCSingleTaskOverlayController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = UIColor.clearColor;
    [self setupComponents];
    [self loadSavedBeadPosition];
}

#pragma mark - 命中测试

// 抽屉关闭时只让微珠响应; 打开时抽屉与遮罩响应, 其余区域穿透.
- (UIView *)resolveHitTestAtPoint:(CGPoint)point inWindow:(UIWindow *)window withEvent:(UIEvent *)event
{
    CGPoint local = [self.view convertPoint:point fromView:window];
    if (self.drawerOpen) {
        UIView *drawerHit = [self.drawerView hitTest:local withEvent:event];
        if (drawerHit) return drawerHit;
        if (CGRectContainsPoint(self.dimmingMaskView.frame, local)) return self.dimmingMaskView;
    }
    UIView *beadHit = [self.beadView hitTest:local withEvent:event];
    if (beadHit) return beadHit;
    return nil;
}

#pragma mark - 组件装配

- (void)setupComponents
{
    UIView *mask = [[UIView alloc] initWithFrame:self.view.bounds];
    mask.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    mask.backgroundColor = [UIColor colorWithWhite:0.0 alpha:0.35];
    mask.alpha = 0.0;
    mask.hidden = YES;
    UITapGestureRecognizer *maskTap = [[UITapGestureRecognizer alloc]
                                       initWithTarget:self action:@selector(handleMaskTap)];
    [mask addGestureRecognizer:maskTap];
    self.dimmingMaskView = mask;
    [self.view addSubview:mask];

    LCSingleTaskBeadView *bead = [[LCSingleTaskBeadView alloc]
                                  initWithFrame:CGRectMake(0, 0, 46.0, 46.0)];
    __weak typeof(self) weakSelf = self;
    bead.onTap = ^{
        __strong typeof(weakSelf) s = weakSelf;
        if (s) [s setDrawerOpen:YES animated:YES];
    };
    bead.onPanMoved = ^(CGPoint center) {
        __strong typeof(weakSelf) s = weakSelf;
        if (s) s.beadView.indicatorRingView.hidden = NO;
    };
    bead.onPanEnded = ^(CGPoint center) {
        __strong typeof(weakSelf) s = weakSelf;
        if (s) [s handleBeadPanEnded:center];
    };
    bead.onUserInteraction = ^{
        __strong typeof(weakSelf) s = weakSelf;
        if (s) [s resetInactivityTimer];
    };
    self.beadView = bead;
    [self.view addSubview:bead];

    LCSingleTaskDrawerView *drawer = [[LCSingleTaskDrawerView alloc]
                                      initWithFrame:CGRectMake(0, 0, 300.0, 420.0)];
    drawer.onSelectApp = ^(LCSingleTaskAppInfo *app) {
        __strong typeof(weakSelf) s = weakSelf;
        if (s) [s handleAppSelected:app];
    };
    drawer.onReturnHome = ^{
        __strong typeof(weakSelf) s = weakSelf;
        if (!s) return;
        [s setDrawerOpen:NO animated:YES];
        [LCSingleTaskSwitcher presentTransitionAndReturnHomeWithCompletion:^{
            [LCSingleTaskSwitcher dispatchReturnHome];
        }];
    };
    drawer.onClose = ^{
        __strong typeof(weakSelf) s = weakSelf;
        if (s) [s setDrawerOpen:NO animated:YES];
    };
    drawer.onUserInteraction = ^{
        __strong typeof(weakSelf) s = weakSelf;
        if (s) [s resetInactivityTimer];
    };
    self.drawerView = drawer;
    [self.view addSubview:drawer];

    LCSingleTaskHandoffView *handoff = [[LCSingleTaskHandoffView alloc]
                                        initWithFrame:self.view.bounds];
    handoff.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    handoff.hidden = YES;
    self.transitionOverlayView = handoff;
    [self.view addSubview:handoff];

    [self updateLayoutForCanvasSize:self.view.bounds.size];
    [self refreshAppList];
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(handleUserDidTakeScreenshot:)
                                                 name:UIApplicationUserDidTakeScreenshotNotification
                                               object:nil];
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    [self.inactivityTimer invalidate];
}

- (void)handleUserDidTakeScreenshot:(NSNotification *)note
{
    [self resetInactivityTimer];
}

#pragma mark - 位置持久化

- (void)loadSavedBeadPosition
{
    NSUserDefaults *ud = NSUserDefaults.standardUserDefaults;
    self.beadPinnedRight = [ud boolForKey:@"LCSingleTask_BeadPinnedRight"];
    double ratio = [ud doubleForKey:@"LCSingleTask_BeadCenterYRatio"];
    self.beadCenterYRatio = ratio > 0.0 ? (CGFloat)ratio : 0.5;
    [self updateLayoutForCanvasSize:self.view.bounds.size];
}

- (void)saveBeadPosition
{
    NSUserDefaults *ud = NSUserDefaults.standardUserDefaults;
    [ud setBool:self.beadPinnedRight forKey:@"LCSingleTask_BeadPinnedRight"];
    [ud setDouble:(double)self.beadCenterYRatio forKey:@"LCSingleTask_BeadCenterYRatio"];
}

- (void)updateLayoutForCanvasSize:(CGSize)size
{
    CGFloat margin = 6.0;
    CGFloat x = self.beadPinnedRight ? (size.width - 46.0 - margin) : margin;
    CGFloat y = size.height * self.beadCenterYRatio - 23.0;
    y = MAX(60.0, MIN(y, size.height - 46.0 - 40.0));
    self.beadView.center = CGPointMake(x + 23.0, y + 23.0);

    CGFloat drawerX = self.beadPinnedRight ? (size.width - 306.0) : 6.0;
    CGFloat drawerY = self.beadView.center.y - 210.0;
    drawerY = MAX(50.0, MIN(drawerY, size.height - 420.0 - 20.0));
    self.drawerView.frame = CGRectMake(drawerX, drawerY, 300.0, 420.0);
    self.dimmingMaskView.frame = self.view.bounds;
    self.transitionOverlayView.frame = self.view.bounds;
}

- (void)handleBeadPanEnded:(CGPoint)center
{
    CGFloat mid = self.view.bounds.size.width * 0.5;
    self.beadPinnedRight = center.x >= mid;
    self.beadCenterYRatio = center.y / MAX(1.0, self.view.bounds.size.height);
    [self saveBeadPosition];
    [self updateLayoutForCanvasSize:self.view.bounds.size];
}

#pragma mark - 抽屉

- (void)handleMaskTap
{
    [self setDrawerOpen:NO animated:YES];
}

- (void)setDrawerOpen:(BOOL)open animated:(BOOL)animated
{
    self.drawerOpen = open;
    if (open) {
        [self refreshAppList];
        self.drawerView.hidden = NO;
        self.dimmingMaskView.hidden = NO;
    }
    void (^anim)(void) = ^{
        self.dimmingMaskView.alpha = open ? 1.0 : 0.0;
        self.drawerView.alpha = open ? 1.0 : 0.0;
        self.drawerView.transform = open ? CGAffineTransformIdentity
                                         : CGAffineTransformMakeTranslation(
                                             self.beadPinnedRight ? 40.0 : -40.0, 0);
    };
    if (animated) {
        [UIView animateWithDuration:0.28 delay:0.0
         usingSpringWithDamping:0.85 initialSpringVelocity:0.4
                        options:UIViewAnimationOptionAllowUserInteraction
                     animations:anim completion:^(BOOL finished) {
            if (!open) {
                self.drawerView.hidden = YES;
                self.dimmingMaskView.hidden = YES;
            }
        }];
    } else {
        anim();
    }
    if (open) [self resetInactivityTimer];
    else [self.inactivityTimer invalidate], self.inactivityTimer = nil;
}

- (void)refreshAppList
{
    NSArray *apps = [LCSingleTaskSwitcher scanInstalledApps] ?: @[];
    [self.drawerView reloadWithApps:apps
                     runningFolder:[LCSingleTaskSwitcher currentGuestFolderName]];
}

- (void)handleAppSelected:(LCSingleTaskAppInfo *)app
{
    NSString *current = [LCSingleTaskSwitcher currentGuestFolderName];
    if (current.length && [app.folderName isEqualToString:current]) {
        UIImpactFeedbackGenerator *fb = [[UIImpactFeedbackGenerator alloc]
                                         initWithStyle:UIImpactFeedbackStyleLight];
        [fb impactOccurred];
        [self setDrawerOpen:NO animated:YES];
        return;
    }
    [self setDrawerOpen:NO animated:YES];
    [LCSingleTaskSwitcher presentTransitionAndSwitchToApp:app completion:^{
        [LCSingleTaskSwitcher fallbackSwitchToFolder:app.folderName
                                            dataUUID:app.dataUUID
                                               isJIT:app.isJITEnabled
                                          completion:nil];
    }];
}

- (void)resetInactivityTimer
{
    [self.inactivityTimer invalidate];
    __weak typeof(self) weakSelf = self;
    self.inactivityTimer = [NSTimer scheduledTimerWithTimeInterval:5.0
                                                           repeats:NO
                                                             block:^(NSTimer *timer) {
        __strong typeof(weakSelf) s = weakSelf;
        if (s && s.drawerOpen) [s setDrawerOpen:NO animated:YES];
    }];
}

#pragma mark - 旋转

- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    [self updateLayoutForCanvasSize:self.view.bounds.size];
}

- (BOOL)shouldAutorotate
{
    return YES;
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations
{
    return UIInterfaceOrientationMaskAll;
}

- (void)viewWillTransitionToSize:(CGSize)size
       withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator
{
    [super viewWillTransitionToSize:size withTransitionCoordinator:coordinator];
    [coordinator animateAlongsideTransition:^(id<UIViewControllerTransitionCoordinatorContext> ctx) {
        [self updateLayoutForCanvasSize:size];
    } completion:nil];
}

@end
