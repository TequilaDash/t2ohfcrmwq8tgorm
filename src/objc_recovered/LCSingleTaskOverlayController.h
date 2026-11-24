//
//  LCSingleTaskOverlayController.h
//  LCSingleTaskSwitcher — 反编译恢复的接口
//  浮层控制器：组装微珠/抽屉/遮罩/转场，处理手势布局与自动收起
//  来源: IDA 9.3 Hex-Rays, ARM64 Mach-O, SHA256 47bbd44d...1508590d6d7
//
#import <UIKit/UIKit.h>

@interface LCSingleTaskOverlayController : UIViewController
{
    LCSingleTaskBeadView * _beadView;
    LCSingleTaskDrawerView * _drawerView;
    UIView * _dimmingMaskView;
    LCSingleTaskHandoffView * _transitionOverlayView;
    BOOL _drawerOpen;
    BOOL _beadPinnedRight;
    CGFloat _beadCenterYRatio;
    NSTimer * _inactivityTimer;
}

// 0x88B8  - (void)viewDidLoad;
// 0x8988  - (void)viewDidLayoutSubviews;
// 0x89F0  - (void)shouldAutorotate;
// 0x89F8  - (void)supportedInterfaceOrientations;
// 0x8A00  - (void)withTransitionCoordinator:(id)withTransitionCoordinator arg2:(id)arg2;
// 0x8B40  - (void)inWindow:(id)inWindow withEvent:(id)withEvent arg3:(id)arg3;
// 0x8DE4  - (void)setupComponents;
// 0x96E8  - (void)loadSavedBeadPosition;
// 0x9798  - (void)saveBeadPosition;
// 0x9810  - (void)arg1:(id)arg1;
// 0x99D4  - (void)arg1:(id)arg1;
// 0x9CAC  - (void)handleMaskTap;
// 0x9CB8  - (void)animated:(id)animated arg2:(id)arg2;
// 0xA068  - (void)refreshAppList;
// 0xA0D8  - (void)arg1:(id)arg1;
// 0xA1B0  - (void)resetInactivityTimer;
// 0xA450  - (void)beadView;
// 0xA460  - (void)arg1:(id)arg1;
// 0xA474  - (void)drawerView;
// 0xA484  - (void)arg1:(id)arg1;
// 0xA498  - (void)dimmingMaskView;
// 0xA4A8  - (void)arg1:(id)arg1;
// 0xA4BC  - (void)transitionOverlayView;
// 0xA4CC  - (void)arg1:(id)arg1;
// 0xA4E0  - (void)isDrawerOpen;
// 0xA4F0  - (void)arg1:(id)arg1;
// 0xA500  - (void)isBeadPinnedRight;
// 0xA510  - (void)arg1:(id)arg1;
// 0xA520  - (void)beadCenterYRatio;
// 0xA530  - (void)arg1:(id)arg1;

@end
