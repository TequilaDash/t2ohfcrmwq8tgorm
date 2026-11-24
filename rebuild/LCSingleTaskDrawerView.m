#import "LCSingleTaskSwitcher.h"

@implementation LCSingleTaskDrawerView

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self setupUI];
        [self setupReturnHomeCard];
    }
    return self;
}

- (void)setupUI
{
    self.backgroundColor = UIColor.clearColor;
    self.clipsToBounds = YES;
    self.layer.cornerRadius = 20.0;
    self.layer.cornerCurve = kCACornerCurveContinuous;

    UIBlurEffect *effect = [UIBlurEffect effectWithStyle:(UIBlurEffectStyle)16];
    UIVisualEffectView *blur = [[UIVisualEffectView alloc] initWithEffect:effect];
    blur.frame = self.bounds;
    blur.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.blurView = blur;
    [self addSubview:blur];

    UIView *header = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.bounds.size.width, 46.0)];
    header.autoresizingMask = UIViewAutoresizingFlexibleWidth;
    [blur.contentView addSubview:header];
    self.headerView = header;

    UILabel *title = [[UILabel alloc] initWithFrame:CGRectMake(16, 0, 200, 46)];
    title.text = @"沙盒快速切换";
    title.textColor = UIColor.labelColor;
    title.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightSemibold];
    [header addSubview:title];

    UIButton *closeBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    closeBtn.frame = CGRectMake(self.bounds.size.width - 44, 7, 30, 30);
    closeBtn.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin;
    [closeBtn setImage:[UIImage systemImageNamed:@"xmark.circle.fill"] forState:UIControlStateNormal];
    [closeBtn addTarget:self action:@selector(handleClose) forControlEvents:UIControlEventTouchUpInside];
    [header addSubview:closeBtn];

    UIScrollView *scroll = [[UIScrollView alloc] initWithFrame:CGRectZero];
    scroll.translatesAutoresizingMaskIntoConstraints = NO;
    scroll.showsVerticalScrollIndicator = NO;
    self.scrollView = scroll;
    [blur.contentView addSubview:scroll];

    UIStackView *stack = [[UIStackView alloc] initWithFrame:CGRectZero];
    stack.translatesAutoresizingMaskIntoConstraints = NO;
    stack.axis = UILayoutConstraintAxisVertical;
    stack.spacing = 6.0;
    stack.alignment = UIStackViewAlignmentFill;
    self.stackView = stack;
    [scroll addSubview:stack];

    [NSLayoutConstraint activateConstraints:@[
        [scroll.topAnchor constraintEqualToAnchor:header.bottomAnchor constant:4.0],
        [scroll.leadingAnchor constraintEqualToAnchor:blur.contentView.leadingAnchor],
        [scroll.trailingAnchor constraintEqualToAnchor:blur.contentView.trailingAnchor],
        [scroll.bottomAnchor constraintEqualToAnchor:blur.contentView.bottomAnchor],

        [stack.topAnchor constraintEqualToAnchor:scroll.topAnchor constant:8.0],
        [stack.leadingAnchor constraintEqualToAnchor:scroll.leadingAnchor constant:12.0],
        [stack.trailingAnchor constraintEqualToAnchor:scroll.trailingAnchor constant:-12.0],
        [stack.bottomAnchor constraintEqualToAnchor:scroll.bottomAnchor constant:-8.0],
        [stack.widthAnchor constraintEqualToAnchor:scroll.widthAnchor constant:-24.0],
    ]];
}

- (void)setupReturnHomeCard
{
    UIView *card = [[UIView alloc] initWithFrame:CGRectZero];
    card.translatesAutoresizingMaskIntoConstraints = NO;
    card.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.10];
    card.layer.cornerRadius = 14.0;
    card.layer.cornerCurve = kCACornerCurveContinuous;
    card.userInteractionEnabled = YES;
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]
                                   initWithTarget:self action:@selector(handleReturnHome)];
    [card addGestureRecognizer:tap];

    UIImageView *icon = [[UIImageView alloc] initWithImage:[UIImage systemImageNamed:@"house.fill"]];
    icon.translatesAutoresizingMaskIntoConstraints = NO;
    icon.tintColor = UIColor.systemCyanColor;
    [card addSubview:icon];

    UILabel *label = [[UILabel alloc] initWithFrame:CGRectZero];
    label.translatesAutoresizingMaskIntoConstraints = NO;
    label.text = @"返回宿主主页";
    label.textColor = UIColor.labelColor;
    label.font = [UIFont systemFontOfSize:14.0 weight:UIFontWeightMedium];
    [card addSubview:label];

    UIImageView *chev = [[UIImageView alloc] initWithImage:[UIImage systemImageNamed:@"chevron.right"]];
    chev.translatesAutoresizingMaskIntoConstraints = NO;
    chev.tintColor = UIColor.secondaryLabelColor;
    [card addSubview:chev];

    [NSLayoutConstraint activateConstraints:@[
        [icon.leadingAnchor constraintEqualToAnchor:card.leadingAnchor constant:14.0],
        [icon.centerYAnchor constraintEqualToAnchor:card.centerYAnchor],
        [icon.widthAnchor constraintEqualToConstant:22.0],
        [icon.heightAnchor constraintEqualToConstant:22.0],

        [label.leadingAnchor constraintEqualToAnchor:icon.trailingAnchor constant:12.0],
        [label.centerYAnchor constraintEqualToAnchor:card.centerYAnchor],

        [chev.trailingAnchor constraintEqualToAnchor:card.trailingAnchor constant:-14.0],
        [chev.centerYAnchor constraintEqualToAnchor:card.centerYAnchor],
        [card.heightAnchor constraintEqualToConstant:48.0],
    ]];
    [self.stackView addArrangedSubview:card];
}

- (void)reloadWithApps:(NSArray<LCSingleTaskAppInfo *> *)apps runningFolder:(NSString *)folder
{
    self.apps = apps;
    self.runningFolder = folder;

    for (UIView *v in [self.stackView.arrangedSubviews copy]) {
        if (v == self.stackView.arrangedSubviews.firstObject &&
            [v.gestureRecognizers.firstObject isKindOfClass:UITapGestureRecognizer.class]) {
            // 保留返回主页卡片 (第一个)
            if ([v.subviews count] == 3) continue;
        }
        [self.stackView removeArrangedSubview:v];
        [v removeFromSuperview];
    }

    for (LCSingleTaskAppInfo *app in apps) {
        BOOL running = folder.length > 0 && [app.folderName isEqualToString:folder];
        UIView *row = [self createAppRowWithApp:app isRunning:running];
        [self.stackView addArrangedSubview:row];
    }
}

- (UIView *)createAppRowWithApp:(LCSingleTaskAppInfo *)app isRunning:(BOOL)running
{
    UIView *row = [[UIView alloc] initWithFrame:CGRectZero];
    row.translatesAutoresizingMaskIntoConstraints = NO;
    row.backgroundColor = [UIColor colorWithWhite:1.0 alpha:running ? 0.16 : 0.07];
    row.layer.cornerRadius = 12.0;
    row.layer.cornerCurve = kCACornerCurveContinuous;
    row.tag = [self.apps indexOfObject:app];

    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]
                                   initWithTarget:self action:@selector(selectAppTapped:)];
    [row addGestureRecognizer:tap];

    UIImageView *icon = [[UIImageView alloc] initWithImage:app.icon ?: [UIImage systemImageNamed:@"app.fill"]];
    icon.translatesAutoresizingMaskIntoConstraints = NO;
    icon.contentMode = UIViewContentModeScaleAspectFit;
    icon.layer.cornerRadius = 10.0;
    icon.clipsToBounds = YES;
    [row addSubview:icon];

    UIStackView *texts = [[UIStackView alloc] initWithFrame:CGRectZero];
    texts.translatesAutoresizingMaskIntoConstraints = NO;
    texts.axis = UILayoutConstraintAxisVertical;
    texts.spacing = 2.0;

    UILabel *name = [[UILabel alloc] initWithFrame:CGRectZero];
    name.text = app.name;
    name.textColor = UIColor.labelColor;
    name.font = [UIFont systemFontOfSize:14.0 weight:UIFontWeightMedium];
    [texts addArrangedSubview:name];

    NSString *sub = app.bundleId.length ? app.bundleId : app.version;
    UILabel *subLabel = [[UILabel alloc] initWithFrame:CGRectZero];
    subLabel.text = sub;
    subLabel.textColor = UIColor.secondaryLabelColor;
    subLabel.font = [UIFont systemFontOfSize:11.0];
    [texts addArrangedSubview:subLabel];
    [row addSubview:texts];

    if (running) {
        UILabel *badge = [[UILabel alloc] initWithFrame:CGRectZero];
        badge.translatesAutoresizingMaskIntoConstraints = NO;
        badge.text = @"● 运行中";
        badge.textColor = UIColor.systemGreenColor;
        badge.font = [UIFont systemFontOfSize:11.0 weight:UIFontWeightSemibold];
        [row addSubview:badge];
        [NSLayoutConstraint activateConstraints:@[
            [badge.trailingAnchor constraintEqualToAnchor:row.trailingAnchor constant:-12.0],
            [badge.centerYAnchor constraintEqualToAnchor:row.centerYAnchor],
        ]];
    }

    [NSLayoutConstraint activateConstraints:@[
        [icon.leadingAnchor constraintEqualToAnchor:row.leadingAnchor constant:12.0],
        [icon.centerYAnchor constraintEqualToAnchor:row.centerYAnchor],
        [icon.widthAnchor constraintEqualToConstant:36.0],
        [icon.heightAnchor constraintEqualToConstant:36.0],
        [texts.leadingAnchor constraintEqualToAnchor:icon.trailingAnchor constant:10.0],
        [texts.centerYAnchor constraintEqualToAnchor:row.centerYAnchor],
        [texts.trailingAnchor constraintEqualToAnchor:row.trailingAnchor constant:-90.0],
        [row.heightAnchor constraintEqualToConstant:54.0],
    ]];
    return row;
}

- (void)selectAppTapped:(UITapGestureRecognizer *)gesture
{
    NSInteger idx = gesture.view.tag;
    if (idx >= 0 && idx < (NSInteger)self.apps.count) {
        if (self.onUserInteraction) self.onUserInteraction();
        if (self.onSelectApp) self.onSelectApp(self.apps[idx]);
    }
}

- (void)handleClose
{
    if (self.onUserInteraction) self.onUserInteraction();
    if (self.onClose) self.onClose();
}

- (void)handleReturnHome
{
    if (self.onUserInteraction) self.onUserInteraction();
    if (self.onReturnHome) self.onReturnHome();
}

@end
