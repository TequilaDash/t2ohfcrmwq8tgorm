#import "LCSingleTaskSwitcher.h"

@implementation LCSingleTaskHandoffView

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
    self.backgroundColor = UIColor.clearColor;
    self.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;

    UIBlurEffect *effect = [UIBlurEffect effectWithStyle:UIBlurEffectStyleDark];
    UIVisualEffectView *blur = [[UIVisualEffectView alloc] initWithEffect:effect];
    blur.frame = self.bounds;
    blur.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.blurView = blur;
    [self addSubview:blur];

    UIView *card = [[UIView alloc] initWithFrame:CGRectZero];
    card.translatesAutoresizingMaskIntoConstraints = NO;
    card.backgroundColor = [UIColor colorWithWhite:0.1 alpha:0.82];
    card.layer.cornerRadius = 22.0;
    card.layer.cornerCurve = kCACornerCurveContinuous;
    self.cardView = card;
    [blur.contentView addSubview:card];

    UIImageView *icon = [[UIImageView alloc] initWithFrame:CGRectZero];
    icon.translatesAutoresizingMaskIntoConstraints = NO;
    icon.contentMode = UIViewContentModeScaleAspectFit;
    icon.layer.cornerRadius = 14.0;
    icon.clipsToBounds = YES;
    self.iconImageView = icon;
    [card addSubview:icon];

    UILabel *label = [[UILabel alloc] initWithFrame:CGRectZero];
    label.translatesAutoresizingMaskIntoConstraints = NO;
    label.textColor = UIColor.whiteColor;
    label.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightMedium];
    label.textAlignment = NSTextAlignmentCenter;
    label.numberOfLines = 0;
    self.statusLabel = label;
    [card addSubview:label];

    UIActivityIndicatorView *ind = [[UIActivityIndicatorView alloc]
                                    initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleMedium];
    ind.translatesAutoresizingMaskIntoConstraints = NO;
    ind.color = UIColor.systemCyanColor;
    self.indicatorView = ind;
    [card addSubview:ind];

    [NSLayoutConstraint activateConstraints:@[
        [card.centerXAnchor constraintEqualToAnchor:blur.contentView.centerXAnchor],
        [card.centerYAnchor constraintEqualToAnchor:blur.contentView.centerYAnchor],
        [card.widthAnchor constraintEqualToConstant:240.0],

        [icon.topAnchor constraintEqualToAnchor:card.topAnchor constant:22.0],
        [icon.centerXAnchor constraintEqualToAnchor:card.centerXAnchor],
        [icon.widthAnchor constraintEqualToConstant:64.0],
        [icon.heightAnchor constraintEqualToConstant:64.0],

        [label.topAnchor constraintEqualToAnchor:icon.bottomAnchor constant:18.0],
        [label.leadingAnchor constraintEqualToAnchor:card.leadingAnchor constant:16.0],
        [label.trailingAnchor constraintEqualToAnchor:card.trailingAnchor constant:-16.0],

        [ind.topAnchor constraintEqualToAnchor:label.bottomAnchor constant:16.0],
        [ind.centerXAnchor constraintEqualToAnchor:card.centerXAnchor],
        [ind.bottomAnchor constraintEqualToAnchor:card.bottomAnchor constant:-22.0],
    ]];
    [ind startAnimating];
}

- (void)configureWithAppName:(NSString *)name icon:(UIImage *)icon status:(NSString *)status
{
    self.iconImageView.image = icon ?: [UIImage systemImageNamed:@"app.fill"];
    self.statusLabel.text = status.length ? status : name;
}

- (void)updateStatus:(NSString *)status
{
    self.statusLabel.text = status;
}

- (void)showWithCompletion:(void (^)(void))completion
{
    self.alpha = 0.0;
    self.cardView.transform = CGAffineTransformMakeScale(0.88, 0.88);
    self.hidden = NO;
    [UIView animateWithDuration:0.22 animations:^{
        self.alpha = 1.0;
        self.cardView.transform = CGAffineTransformIdentity;
    } completion:^(BOOL finished) {
        if (completion) completion();
    }];
}

@end
