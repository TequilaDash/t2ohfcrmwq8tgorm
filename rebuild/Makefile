TARGET := iphone:clang:16.5:15.0
ARCHS := arm64
THEOS_PACKAGE_SCHEME := rootless

include $(THEOS)/makefiles/common.mk

LIBRARY_NAME := LCSingleTaskSwitcher
LCSingleTaskSwitcher_FILES := LCSingleTaskAppInfo.m \
                              LCSingleTaskBeadView.m \
                              LCSingleTaskHandoffView.m \
                              LCSingleTaskDrawerView.m \
                              LCSingleTaskOverlayWindow.m \
                              LCSingleTaskOverlayController.m \
                              LCSingleTaskSwitcher.m
LCSingleTaskSwitcher_CFLAGS := -fobjc-arc
LCSingleTaskSwitcher_FRAMEWORKS := Foundation UIKit QuartzCore CoreGraphics
LCSingleTaskSwitcher_LIBRARIES := objc

include $(THEOS_MAKE_PATH)/library.mk
