//
//  LCSingleTaskSwitcher.h
//  LCSingleTaskSwitcher — 反编译恢复的接口
//  单例管理器：安装扫描、宿主通信、URL 调度、微珠挂载
//  来源: IDA 9.3 Hex-Rays, ARM64 Mach-O, SHA256 47bbd44d...1508590d6d7
//
#import <UIKit/UIKit.h>

@interface LCSingleTaskSwitcher : NSObject
{
    LCSingleTaskOverlayWindow * _overlayWindow;
    LCSingleTaskOverlayController * _overlayController;
    BOOL _isSetup;
}

// 0xA5BC  + (void)sharedManager;
// 0xA61C  + (void)setupIfNeeded;
// 0xA74C  - (void)performSetup;
// 0xAA80  - (void)ensureWindowAttached;
// 0xAC34  + (void)scanInstalledApps;
// 0xB178  + (void)plist:(id)plist arg2:(id)arg2;
// 0xB548  + (void)completion:(id)completion arg2:(id)arg2;
// 0xBEA8  + (void)arg1:(id)arg1;
// 0xC208  + (void)dataUUID:(id)dataUUID requestID:(id)requestID isJIT:(id)isJIT arg4:(id)arg4;
// 0xC8B0  + (void)clearLaunchSelectionFromHost;
// 0xCD10  + (void)dataUUID:(id)dataUUID arg2:(id)arg2;
// 0xD6C8  + (void)dispatchReturnHome;
// 0xDAD0  + (void)dataUUID:(id)dataUUID isJIT:(id)isJIT completion:(id)completion arg4:(id)arg4;
// 0xDB98  + (void)arg1:(id)arg1;
// 0xDBF0  + (void)realHostDocumentsDirectory;
// 0xDE70  + (void)currentGuestFolderName;
// 0xE0A4  + (void)hostBundleIdentifier;
// 0xE1CC  + (void)isContainerGuestRunning;
// 0xE370  - (void)overlayWindow;
// 0xE378  - (void)arg1:(id)arg1;
// 0xE384  - (void)overlayController;
// 0xE38C  - (void)arg1:(id)arg1;
// 0xE398  - (void)isSetup;
// 0xE3A0  - (void)arg1:(id)arg1;

@end
