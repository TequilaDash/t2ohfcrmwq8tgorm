//
//  LCSingleTaskDrawerView.h
//  LCSingleTaskSwitcher — 反编译恢复的接口
//  抽屉面板：App 列表、运行中标记、返回宿主卡片
//  来源: IDA 9.3 Hex-Rays, ARM64 Mach-O, SHA256 47bbd44d...1508590d6d7
//
#import <UIKit/UIKit.h>

@interface LCSingleTaskDrawerView : UIView
{
    UIScrollView * _scrollView;
    UIStackView * _stackView;
    UIView * _headerView;
    UIView * _dimView;
    NSArray<LCSingleTaskAppInfo *> * _apps;
    void (^)(LCSingleTaskAppInfo *) _onSelectApp;
    void (^)(void) _onReturnHome;
    void (^)(void) _onClose;
    void (^)(void) _onUserInteraction;
}

// 0x5C68  - (void)arg1:(id)arg1;
// 0x5CB4  - (void)setupUI;
// 0x6CC8  - (void)setupReturnHomeCard;
// 0x746C  - (void)handleClose;
// 0x7504  - (void)handleReturnHome;
// 0x759C  - (void)runningFolder:(id)runningFolder arg2:(id)arg2;
// 0x781C  - (void)isRunning:(id)isRunning arg2:(id)arg2;
// 0x8600  - (void)onSelectApp;
// 0x8610  - (void)arg1:(id)arg1;
// 0x861C  - (void)onReturnHome;
// 0x862C  - (void)arg1:(id)arg1;
// 0x8638  - (void)onClose;
// 0x8648  - (void)arg1:(id)arg1;
// 0x8654  - (void)onUserInteraction;
// 0x8664  - (void)arg1:(id)arg1;

@end
