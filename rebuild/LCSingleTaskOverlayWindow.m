#import "LCSingleTaskSwitcher.h"

@implementation LCSingleTaskOverlayWindow

- (instancetype)initWithWindowScene:(UIWindowScene *)scene
{
    self = [super initWithWindowScene:scene];
    if (self) {
        self.windowLevel = UIWindowLevelStatusBar + 90.0;
        self.backgroundColor = UIColor.clearColor;
        self.hidden = NO;
    }
    return self;
}

// 透明浮层默认吞掉全部触摸; 委托给 controller 决定哪些区域响应,
// 其余区域穿透到下层 App.
- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event
{
    if (!self.overlayController) {
        return [super hitTest:point withEvent:event];
    }
    return [self.overlayController resolveHitTestAtPoint:point inWindow:self withEvent:event];
}

@end
