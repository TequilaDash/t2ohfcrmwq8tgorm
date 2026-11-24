//
//  LCSingleTaskOverlayWindow.h
//  LCSingleTaskSwitcher — 反编译恢复的接口
//  浮层窗口：StatusBar+90 层级，自定义 hitTest 让穿透生效
//  来源: IDA 9.3 Hex-Rays, ARM64 Mach-O, SHA256 47bbd44d...1508590d6d7
//
#import <UIKit/UIKit.h>

@interface LCSingleTaskOverlayWindow : UIWindow
{
    LCSingleTaskOverlayController * _overlayController;
}

// 0x878C  - (void)arg1:(id)arg1;
// 0x87E0  - (void)withEvent:(id)withEvent arg2:(id)arg2;
// 0x8874  - (void)overlayController;
// 0x8894  - (void)arg1:(id)arg1;

@end
