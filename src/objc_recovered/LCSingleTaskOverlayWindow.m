//
//  LCSingleTaskOverlayWindow.m
//  LCSingleTaskSwitcher — Hex-Rays 反编译伪代码（按方法组织）
//  浮层窗口：StatusBar+90 层级，自定义 hitTest 让穿透生效
//
#import "LCSingleTaskOverlayWindow.h"

/*
 * 注意：以下是 IDA Hex-Rays 输出的 C 伪代码，不是可直接编译的 Objective-C 源码。
 * 它精确反映 ARM64 机器码语义（objc_msgSend / retain-release / block 结构均被显式展开）。
 * 每个方法前标注原始虚拟地址，便于对照反汇编复核。
 */

// LCSingleTaskSwitcher - decompiled pseudo code
// class: LCSingleTaskOverlayWindow | functions: 5

// ===== -[LCSingleTaskOverlayWindow initWithWindowScene:] @ 0x878C (size=84) =====
LCSingleTaskOverlayWindow *__cdecl -[LCSingleTaskOverlayWindow initWithWindowScene:](
        LCSingleTaskOverlayWindow *self,
        SEL a2,
        id a3)
{
  LCSingleTaskOverlayWindow *result; // x0
  LCSingleTaskOverlayWindow *v4; // x19
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___LCSingleTaskOverlayWindow;
  result = -[LCSingleTaskOverlayWindow initWithWindowScene:](&v5, "initWithWindowScene:", a3);
  if ( result )
  {
    v4 = result;
    -[LCSingleTaskOverlayWindow setAccessibilityIdentifier:](
      result,
      "setAccessibilityIdentifier:",
      CFSTR("LCSingleTaskOverlayWindow"));
    return v4;
  }
  return result;
}


// ===== -[LCSingleTaskOverlayWindow hitTest:withEvent:] @ 0x87E0 (size=148) =====
id __cdecl -[LCSingleTaskOverlayWindow hitTest:withEvent:](LCSingleTaskOverlayWindow *self, SEL a2, CGPoint a3, id a4)
{
  double y; // d8
  double x; // d9
  id v7; // x19
  void *v8; // x21
  void *v9; // x21
  void *v10; // x20

  y = a3.y;
  x = a3.x;
  v7 = objc_retain(a4);
  v8 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayWindow overlayController](self, "overlayController"));
  objc_release(v8);
  if ( v8 )
  {
    v9 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayWindow overlayController](self, "overlayController"));
    v10 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v9, "resolveHitTestAtPoint:inWindow:withEvent:", self, v7, x, y));
    objc_release(v9);
  }
  else
  {
    v10 = 0;
  }
  objc_release(v7);
  return objc_autoreleaseReturnValue(v10);
}


// ===== -[LCSingleTaskOverlayWindow overlayController] @ 0x8874 (size=32) =====
LCSingleTaskOverlayController *__cdecl -[LCSingleTaskOverlayWindow overlayController](
        LCSingleTaskOverlayWindow *self,
        SEL a2)
{
  return (LCSingleTaskOverlayController *)objc_autoreleaseReturnValue(objc_loadWeakRetained((id *)&self->_overlayController));
}


// ===== -[LCSingleTaskOverlayWindow setOverlayController:] @ 0x8894 (size=20) =====
void __cdecl -[LCSingleTaskOverlayWindow setOverlayController:](LCSingleTaskOverlayWindow *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_overlayController, a3);
}


// ===== -[LCSingleTaskOverlayWindow .cxx_destruct] @ 0x88A8 (size=16) =====
void __cdecl -[LCSingleTaskOverlayWindow .cxx_destruct](LCSingleTaskOverlayWindow *self, SEL a2)
{
  objc_destroyWeak((id *)&self->_overlayController);
}



