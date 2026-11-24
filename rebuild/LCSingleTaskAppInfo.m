#import "LCSingleTaskSwitcher.h"

@implementation LCSingleTaskAppInfo

- (instancetype)initWithName:(NSString *)name
                  folderName:(NSString *)folderName
                    bundleId:(NSString *)bundleId
                     version:(NSString *)version
                    dataUUID:(NSString *)dataUUID
                     appPath:(NSString *)appPath
                        icon:(UIImage *)icon
                isJITEnabled:(BOOL)isJITEnabled
{
    self = [super init];
    if (self) {
        _name = [name copy];
        _folderName = [folderName copy];
        _bundleId = [bundleId copy];
        _version = [version copy];
        _dataUUID = [dataUUID copy];
        _appPath = [appPath copy];
        _icon = icon;
        _isJITEnabled = isJITEnabled;
    }
    return self;
}

@end
