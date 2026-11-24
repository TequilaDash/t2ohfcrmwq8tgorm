//
//  LCSingleTaskHandoffView.h
//  LCSingleTaskSwitcher — 反编译恢复的接口
//  转场交接覆盖层：显示切入/退出 App 的过场动画与状态文字
//  来源: IDA 9.3 Hex-Rays, ARM64 Mach-O, SHA256 47bbd44d...1508590d6d7
//
#import <UIKit/UIKit.h>

@interface LCSingleTaskHandoffView : UIView
{
    UIVisualEffectView * _blurView;
    UIView * _cardView;
    UIImageView * _iconImageView;
    UILabel * _statusLabel;
    UIActivityIndicatorView * _indicatorView;
}

// 0x4CF0  - (void)arg1:(id)arg1;
// 0x4D3C  - (void)setupUI;
// 0x5834  - (void)icon:(id)icon status:(id)status arg3:(id)arg3;
// 0x5910  - (void)arg1:(id)arg1;
// 0x5A34  - (void)arg1:(id)arg1;

@end
