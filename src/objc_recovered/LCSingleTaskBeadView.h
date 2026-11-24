//
//  LCSingleTaskBeadView.h
//  LCSingleTaskSwitcher — 反编译恢复的接口
//  侧边悬浮球视图：点击展开抽屉、拖拽调整位置
//  来源: IDA 9.3 Hex-Rays, ARM64 Mach-O, SHA256 47bbd44d...1508590d6d7
//
#import <UIKit/UIKit.h>

@interface LCSingleTaskBeadView : UIView
{
    UIView * _beadView;
    UIImageView * _iconImageView;
    UIView * _indicatorRingView;
    CGPoint _initialPanCenter;
    void (^)(void) _onTap;
    void (^)(void) _onPanMoved;
    void (^)(CGPoint) _onPanEnded;
    void (^)(void) _onUserInteraction;
}

// 0x42B4  - (void)arg1:(id)arg1;
// 0x4300  - (void)setupUI;
// 0x47E8  - (void)withEvent:(id)withEvent arg2:(id)arg2;
// 0x4820  - (void)handleTap;
// 0x48B8  - (void)arg1:(id)arg1;
// 0x4B8C  - (void)resetVisualState;
// 0x4BDC  - (void)onTap;
// 0x4BEC  - (void)arg1:(id)arg1;
// 0x4BF8  - (void)onPanMoved;
// 0x4C08  - (void)arg1:(id)arg1;
// 0x4C14  - (void)onPanEnded;
// 0x4C24  - (void)arg1:(id)arg1;
// 0x4C30  - (void)onUserInteraction;
// 0x4C40  - (void)arg1:(id)arg1;

@end
