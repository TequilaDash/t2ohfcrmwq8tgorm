//
//  LCSingleTaskAppInfo.h
//  LCSingleTaskSwitcher — 反编译恢复的接口
//  App 信息模型：扫描到的每个客态 App 的元数据
//  来源: IDA 9.3 Hex-Rays, ARM64 Mach-O, SHA256 47bbd44d...1508590d6d7
//
#import <UIKit/UIKit.h>

@interface LCSingleTaskAppInfo : NSObject
{
    NSString * _name;
    NSString * _folderName;
    NSString * _bundleId;
    NSString * _version;
    NSString * _dataUUID;
    NSString * _appPath;
    UIImage * _icon;
    BOOL _isJITEnabled;
}

// 0x4000  - (void)folderName:(id)folderName bundleId:(id)bundleId version:(id)version dataUUID:(id)dataUUID appPath:(id)appPath icon:(id)icon isJITEnabled:(id)isJITEnabled arg8:(id)arg8;
// 0x41C4  - (void)name;
// 0x41CC  - (void)arg1:(id)arg1;
// 0x41D4  - (void)folderName;
// 0x41DC  - (void)arg1:(id)arg1;
// 0x41E4  - (void)bundleId;
// 0x41EC  - (void)arg1:(id)arg1;
// 0x41F4  - (void)version;
// 0x41FC  - (void)arg1:(id)arg1;
// 0x4204  - (void)dataUUID;
// 0x420C  - (void)arg1:(id)arg1;
// 0x4214  - (void)appPath;
// 0x421C  - (void)arg1:(id)arg1;
// 0x4224  - (void)icon;
// 0x422C  - (void)arg1:(id)arg1;
// 0x4238  - (void)isJITEnabled;
// 0x4240  - (void)arg1:(id)arg1;

@end
