#import "LCSingleTaskSwitcher.h"

@implementation LCSingleTaskBeadView

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self setupUI];
    }
    return self;
}

- (void)setupUI
{
    self.clipsToBounds = NO;
    self.backgroundColor = UIColor.clearColor;
    self.autoresizingMask = UIViewAutoresizingNone;

    // 毛玻璃底: style 16 对应系统极薄材质
    UIBlurEffect *effect = [UIBlurEffect effectWithStyle:(UIBlurEffectStyle)16];
    UIVisualEffectView *blur = [[UIVisualEffectView alloc] initWithEffect:effect];
    blur.frame = self.bounds;
    blur.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    blur.layer.cornerRadius = self.bounds.size.height * 0.5;
    blur.layer.cornerCurve = kCACornerCurveContinuous;
    blur.clipsToBounds = YES;
    blur.layer.borderWidth = 0.8;
    blur.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.35].CGColor;
    self.blurView = blur;
    [self addSubview:blur];

    self.layer.shadowColor = UIColor.blackColor.CGColor;
    self.layer.shadowOpacity = 0.32;
    self.layer.shadowRadius = 8.0;
    self.layer.shadowOffset = CGSizeMake(0.0, 2.0);

    UIImageSymbolConfiguration *symCfg =
        [UIImageSymbolConfiguration configurationWithPointSize:18.0 weight:UIImageSymbolWeightBold];
    UIImage *symbol = [UIImage systemImageNamed:@"square.stack.3d.up.fill" withConfiguration:symCfg];
    if (!symbol) {
        symbol = [UIImage systemImageNamed:@"arrow.triangle.2.circlepath" withConfiguration:symCfg];
    }
    UIImageView *icon = [[UIImageView alloc] initWithImage:symbol];
    icon.tintColor = [UIColor colorWithWhite:1.0 alpha:0.95];
    icon.contentMode = UIViewContentModeScaleAspectFit;
    icon.frame = CGRectMake((self.bounds.size.width - 22.0) * 0.5,
                            (self.bounds.size.height - 22.0) * 0.5,
                            22.0, 22.0);
    icon.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin |
                            UIViewAutoresizingFlexibleRightMargin |
                            UIViewAutoresizingFlexibleTopMargin |
                            UIViewAutoresizingFlexibleBottomMargin;
    self.iconImageView = icon;
    [blur.contentView addSubview:icon];

    UIView *ring = [[UIView alloc] initWithFrame:self.bounds];
    ring.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    ring.layer.cornerRadius = self.bounds.size.height * 0.5;
    ring.layer.cornerCurve = kCACornerCurveContinuous;
    ring.layer.borderWidth = 1.0;
    ring.layer.borderColor = [[UIColor systemCyanColor] colorWithAlphaComponent:0.5].CGColor;
    ring.userInteractionEnabled = NO;
    self.indicatorRingView = ring;
    [self addSubview:ring];

    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleTap)];
    [self addGestureRecognizer:tap];
    UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(handlePan:)];
    [self addGestureRecognizer:pan];
}

// 扩大命中区域: 视觉直径 46pt, 可点击 60pt
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event
{
    CGFloat expand = 14.0;
    CGRect hit = CGRectInset(self.bounds, -expand, -expand);
    return CGRectContainsPoint(hit, point);
}

- (void)handleTap
{
    if (self.onUserInteraction) self.onUserInteraction();
    if (self.onTap) self.onTap();
}

- (void)handlePan:(UIPanGestureRecognizer *)gesture
{
    if (self.onUserInteraction) self.onUserInteraction();
    UIView *superview = self.superview;
    if (!superview) return;

    UIGestureRecognizerState state = gesture.state;
    if (state == UIGestureRecognizerStateBegan) {
        self.initialPanCenter = self.center;
        [UIView animateWithDuration:0.15 animations:^{
            self.transform = CGAffineTransformMakeScale(1.12, 1.12);
        }];
    } else if (state == UIGestureRecognizerStateChanged) {
        CGPoint t = [gesture translationInView:superview];
        CGPoint newCenter = CGPointMake(t.x + self.initialPanCenter.x,
                                        t.y + self.initialPanCenter.y);
        self.center = newCenter;
        if (self.onPanMoved) self.onPanMoved(newCenter);
    } else if (state == UIGestureRecognizerStateEnded ||
               state == UIGestureRecognizerStateCancelled) {
        [UIView animateWithDuration:0.25 delay:0.0
         usingSpringWithDamping:0.8 initialSpringVelocity:0.5
                        options:UIViewAnimationOptionAllowUserInteraction
                     animations:^{
            self.transform = CGAffineTransformIdentity;
        } completion:nil];
        if (self.onPanEnded) self.onPanEnded(self.center);
    }
}

- (void)resetVisualState
{
    [UIView animateWithDuration:0.15 animations:^{
        self.transform = CGAffineTransformIdentity;
        self.alpha = 1.0;
    }];
}

@end
