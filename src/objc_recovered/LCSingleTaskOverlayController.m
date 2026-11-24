//
//  LCSingleTaskOverlayController.m
//  LCSingleTaskSwitcher — Hex-Rays 反编译伪代码（按方法组织）
//  浮层控制器：组装微珠/抽屉/遮罩/转场，处理手势布局与自动收起
//
#import "LCSingleTaskOverlayController.h"

/*
 * 注意：以下是 IDA Hex-Rays 输出的 C 伪代码，不是可直接编译的 Objective-C 源码。
 * 它精确反映 ARM64 机器码语义（objc_msgSend / retain-release / block 结构均被显式展开）。
 * 每个方法前标注原始虚拟地址，便于对照反汇编复核。
 */

// LCSingleTaskSwitcher - decompiled pseudo code
// class: LCSingleTaskOverlayController | functions: 31

// ===== -[LCSingleTaskOverlayController viewDidLoad] @ 0x88B8 (size=208) =====
void __cdecl -[LCSingleTaskOverlayController viewDidLoad](LCSingleTaskOverlayController *self, SEL a2)
{
  void *v3; // x20
  void *v4; // x21
  objc_super v5; // [xsp+0h] [xbp-30h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___LCSingleTaskOverlayController;
  -[LCSingleTaskOverlayController viewDidLoad](&v5, "viewDidLoad");
  v3 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor clearColor](&OBJC_CLASS___UIColor, "clearColor"));
  v4 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  objc_msgSend(v4, "setBackgroundColor:", v3);
  objc_release(v4);
  objc_release(v3);
  self->_beadSize = 44.0;
  self->_drawerWidth = 280.0;
  self->_beadCenterYRatio = 0.45;
  self->_isBeadPinnedRight = 1;
  -[LCSingleTaskOverlayController setupComponents](self, "setupComponents");
}


// ===== -[LCSingleTaskOverlayController viewDidLayoutSubviews] @ 0x8988 (size=104) =====
void __cdecl -[LCSingleTaskOverlayController viewDidLayoutSubviews](LCSingleTaskOverlayController *self, SEL a2)
{
  void *v3; // x20
  double v4; // d2
  double v5; // d3
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___LCSingleTaskOverlayController;
  -[LCSingleTaskOverlayController viewDidLayoutSubviews](&v6, "viewDidLayoutSubviews");
  v3 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  objc_msgSend(v3, "bounds");
  -[LCSingleTaskOverlayController updateLayoutForCanvasSize:](self, "updateLayoutForCanvasSize:", v4, v5);
  objc_release(v3);
}


// ===== -[LCSingleTaskOverlayController shouldAutorotate] @ 0x89F0 (size=8) =====
bool __cdecl -[LCSingleTaskOverlayController shouldAutorotate](LCSingleTaskOverlayController *self, SEL a2)
{
  return 1;
}


// ===== -[LCSingleTaskOverlayController supportedInterfaceOrientations] @ 0x89F8 (size=8) =====
unsigned __int64 __cdecl -[LCSingleTaskOverlayController supportedInterfaceOrientations](
        LCSingleTaskOverlayController *self,
        SEL a2)
{
  return 30;
}


// ===== -[LCSingleTaskOverlayController viewWillTransitionToSize:withTransitionCoordinator:] @ 0x8A00 (size=212) =====
void __cdecl -[LCSingleTaskOverlayController viewWillTransitionToSize:withTransitionCoordinator:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        CGSize a3,
        id a4)
{
  double height; // d8
  double width; // d9
  id v7; // x19
  _QWORD v8[4]; // [xsp+0h] [xbp-70h] BYREF
  id v9[3]; // [xsp+20h] [xbp-50h] BYREF
  id location; // [xsp+38h] [xbp-38h] BYREF
  objc_super v11; // [xsp+40h] [xbp-30h] BYREF

  height = a3.height;
  width = a3.width;
  v7 = objc_retain(a4);
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___LCSingleTaskOverlayController;
  -[LCSingleTaskOverlayController viewWillTransitionToSize:withTransitionCoordinator:](
    &v11,
    "viewWillTransitionToSize:withTransitionCoordinator:",
    v7,
    width,
    height);
  objc_initWeak(&location, self);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_8AF0;
  v8[3] = &unk_140C0;
  objc_copyWeak(v9, &location);
  v9[1] = *(id *)&width;
  v9[2] = *(id *)&height;
  objc_msgSend(v7, "animateAlongsideTransition:completion:", v8, 0);
  objc_destroyWeak(v9);
  objc_destroyWeak(&location);
  objc_release(v7);
}


// ===== -[LCSingleTaskOverlayController resolveHitTestAtPoint:inWindow:withEvent:] @ 0x8B40 (size=676) =====
id __cdecl -[LCSingleTaskOverlayController resolveHitTestAtPoint:inWindow:withEvent:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        CGPoint a3,
        id a4,
        id a5)
{
  double y; // d8
  double x; // d9
  id v9; // x19
  id v10; // x20
  void *v11; // x22
  double v12; // d0
  double v13; // d10
  void *v14; // x22
  double v15; // d0
  double v16; // d8
  double v17; // d1
  double v18; // d9
  void *v19; // x0
  void *v20; // x22
  void *v21; // x21
  void *v23; // x22
  double v24; // d0
  CGFloat v25; // d10
  double v26; // d1
  CGFloat v27; // d11
  void *v28; // x22
  _BOOL4 v29; // w23
  void *v30; // x22
  double v31; // d0
  double v32; // d1
  void *v33; // x22
  _BOOL4 v34; // w23
  void *v35; // x22
  void *v36; // x22
  double v37; // d0
  double v38; // d8
  double v39; // d1
  double v40; // d9
  void *v41; // x0
  void *v42; // x23
  id v43; // x0
  CGRect v44; // 0:kr00_32.32
  CGPoint v45; // 0:d4.8,8:d5.8
  CGPoint v46; // 0:d4.8,8:d5.8
  CGPoint v47; // 0:d4.8,8:d5.8
  CGRect v48; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v49; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v50; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  y = a3.y;
  x = a3.x;
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController transitionOverlayView](self, "transitionOverlayView"));
  objc_msgSend(v11, "alpha");
  v13 = v12;
  objc_release(v11);
  if ( v13 <= 0.05 )
  {
    v23 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
    objc_msgSend(v23, "convertPoint:fromView:", v9, x, y);
    v25 = v24;
    v27 = v26;
    objc_release(v23);
    if ( -[LCSingleTaskOverlayController isDrawerOpen](self, "isDrawerOpen") )
    {
      v28 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
      objc_msgSend(v28, "frame");
      v45.x = v25;
      v45.y = v27;
      v29 = CGRectContainsPoint(v48, v45);
      objc_release(v28);
      if ( v29 )
      {
        v30 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
        objc_msgSend(v30, "convertPoint:fromView:", v9, x, y);
        v16 = v31;
        v18 = v32;
        objc_release(v30);
        v19 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
        goto LABEL_3;
      }
      v33 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController dimmingMaskView](self, "dimmingMaskView"));
      objc_msgSend(v33, "frame");
      v46.x = v25;
      v46.y = v27;
      v34 = CGRectContainsPoint(v49, v46);
      objc_release(v33);
      if ( v34 )
      {
        v21 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController dimmingMaskView](self, "dimmingMaskView"));
        goto LABEL_5;
      }
    }
    v35 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController beadView](self, "beadView"));
    objc_msgSend(v35, "frame");
    v44 = CGRectInset(v50, -14.0, -14.0);
    objc_release(v35);
    v47.x = v25;
    v47.y = v27;
    if ( !CGRectContainsPoint(v44, v47) )
    {
      v21 = 0;
      goto LABEL_5;
    }
    v36 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController beadView](self, "beadView"));
    objc_msgSend(v36, "convertPoint:fromView:", v9, x, y);
    v38 = v37;
    v40 = v39;
    objc_release(v36);
    v20 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController beadView](self, "beadView"));
    v41 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v20, "hitTest:withEvent:", v10, v38, v40));
    v42 = v41;
    if ( v41 )
      v43 = objc_retain(v41);
    else
      v43 = (id)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController beadView](self, "beadView"));
    v21 = v43;
    objc_release(v42);
    goto LABEL_4;
  }
  v14 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController transitionOverlayView](self, "transitionOverlayView"));
  objc_msgSend(v14, "convertPoint:fromView:", v9, x, y);
  v16 = v15;
  v18 = v17;
  objc_release(v14);
  v19 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController transitionOverlayView](self, "transitionOverlayView"));
LABEL_3:
  v20 = v19;
  v21 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v19, "hitTest:withEvent:", v10, v16, v18));
LABEL_4:
  objc_release(v20);
LABEL_5:
  objc_release(v10);
  objc_release(v9);
  return objc_autoreleaseReturnValue(v21);
}


// ===== -[LCSingleTaskOverlayController setupComponents] @ 0x8DE4 (size=1592) =====
void __cdecl -[LCSingleTaskOverlayController setupComponents](LCSingleTaskOverlayController *self, SEL a2)
{
  id v3; // x20
  void *v4; // x21
  void *v5; // x20
  void *v6; // x20
  void *v7; // x20
  void *v8; // x21
  void *v9; // x20
  void *v10; // x20
  void *v11; // x21
  void *v12; // x21
  void *v13; // x22
  LCSingleTaskDrawerView *v14; // x21
  void *v15; // x21
  void *v16; // x21
  void *v17; // x21
  void *v18; // x21
  void *v19; // x21
  void *v20; // x22
  LCSingleTaskBeadView *v21; // x21
  void *v22; // x21
  void *v23; // x21
  void *v24; // x21
  void *v25; // x21
  void *v26; // x21
  void *v27; // x22
  LCSingleTaskHandoffView *v28; // x22
  void *v29; // x21
  LCSingleTaskHandoffView *v30; // x22
  void *v31; // x21
  void *v32; // x21
  void *v33; // x22
  void *v34; // x21
  double v35; // d2
  double v36; // d8
  double v37; // d3
  void *v38; // x23
  double v39; // d2
  double v40; // d9
  double v41; // d3
  double v42; // d10
  void *v43; // x23
  double v44; // d2
  double v45; // d3
  __int64 v46; // [xsp+0h] [xbp-1C0h] BYREF
  id v47; // [xsp+20h] [xbp-1A0h] BYREF
  _QWORD v48[4]; // [xsp+28h] [xbp-198h] BYREF
  id v49; // [xsp+48h] [xbp-178h] BYREF
  _QWORD v50[4]; // [xsp+50h] [xbp-170h] BYREF
  id v51; // [xsp+70h] [xbp-150h] BYREF
  _QWORD v52[4]; // [xsp+78h] [xbp-148h] BYREF
  id v53; // [xsp+98h] [xbp-128h] BYREF
  _QWORD v54[4]; // [xsp+A0h] [xbp-120h] BYREF
  id v55; // [xsp+C0h] [xbp-100h] BYREF
  _QWORD v56[4]; // [xsp+C8h] [xbp-F8h] BYREF
  id v57; // [xsp+E8h] [xbp-D8h] BYREF
  _QWORD v58[4]; // [xsp+F0h] [xbp-D0h] BYREF
  id v59; // [xsp+110h] [xbp-B0h] BYREF
  _QWORD v60[4]; // [xsp+118h] [xbp-A8h] BYREF
  id v61; // [xsp+138h] [xbp-88h] BYREF
  id location[2]; // [xsp+140h] [xbp-80h] BYREF

  v3 = objc_alloc((Class)&OBJC_CLASS___UIView);
  v4 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  objc_msgSend(v4, "bounds");
  v5 = objc_msgSend(v3, "initWithFrame:");
  -[LCSingleTaskOverlayController setDimmingMaskView:](self, "setDimmingMaskView:", v5);
  objc_release(v5);
  objc_release(v4);
  v6 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController dimmingMaskView](self, "dimmingMaskView"));
  objc_msgSend(v6, "setAutoresizingMask:", 18);
  objc_release(v6);
  v7 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 0.0, 0.4));
  v8 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController dimmingMaskView](self, "dimmingMaskView"));
  objc_msgSend(v8, "setBackgroundColor:", v7);
  objc_release(v8);
  objc_release(v7);
  v9 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController dimmingMaskView](self, "dimmingMaskView"));
  objc_msgSend(v9, "setAlpha:", 0.0);
  objc_release(v9);
  v10 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___UITapGestureRecognizer),
          "initWithTarget:action:",
          self,
          "handleMaskTap");
  v11 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController dimmingMaskView](self, "dimmingMaskView"));
  objc_msgSend(v11, "addGestureRecognizer:", v10);
  objc_release(v11);
  v12 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  v13 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController dimmingMaskView](self, "dimmingMaskView"));
  objc_msgSend(v12, "addSubview:", v13);
  objc_release(v13);
  objc_release(v12);
  v14 = -[LCSingleTaskDrawerView initWithFrame:](
          objc_alloc(&OBJC_CLASS___LCSingleTaskDrawerView),
          "initWithFrame:",
          CGRectZero.origin.x,
          CGRectZero.origin.y,
          CGRectZero.size.width,
          CGRectZero.size.height);
  -[LCSingleTaskOverlayController setDrawerView:](self, "setDrawerView:", v14);
  objc_release(v14);
  objc_initWeak(location, self);
  v60[0] = _NSConcreteStackBlock;
  v60[1] = 3254779904LL;
  v60[2] = sub_94F0;
  v60[3] = &unk_140F0;
  objc_copyWeak(&v61, location);
  v15 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
  objc_msgSend(v15, "setOnClose:", v60);
  objc_release(v15);
  v58[0] = _NSConcreteStackBlock;
  v58[1] = 3254779904LL;
  v58[2] = sub_9524;
  v58[3] = &unk_140F0;
  objc_copyWeak(&v59, location);
  v16 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
  objc_msgSend(v16, "setOnReturnHome:", v58);
  objc_release(v16);
  v56[0] = _NSConcreteStackBlock;
  v56[1] = 3254779904LL;
  v56[2] = sub_9564;
  v56[3] = &unk_14120;
  objc_copyWeak(&v57, location);
  v17 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
  objc_msgSend(v17, "setOnSelectApp:", v56);
  objc_release(v17);
  v54[0] = _NSConcreteStackBlock;
  v54[1] = 3254779904LL;
  v54[2] = sub_95AC;
  v54[3] = &unk_140F0;
  objc_copyWeak(&v55, location);
  v18 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
  objc_msgSend(v18, "setOnUserInteraction:", v54);
  objc_release(v18);
  v19 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  v20 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
  objc_msgSend(v19, "addSubview:", v20);
  objc_release(v20);
  objc_release(v19);
  v21 = -[LCSingleTaskBeadView initWithFrame:](
          objc_alloc(&OBJC_CLASS___LCSingleTaskBeadView),
          "initWithFrame:",
          0.0,
          0.0,
          self->_beadSize,
          self->_beadSize);
  -[LCSingleTaskOverlayController setBeadView:](self, "setBeadView:", v21);
  objc_release(v21);
  v52[0] = _NSConcreteStackBlock;
  v52[1] = 3254779904LL;
  v52[2] = sub_95D8;
  v52[3] = &unk_140F0;
  objc_copyWeak(&v53, location);
  v22 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController beadView](self, "beadView"));
  objc_msgSend(v22, "setOnTap:", v52);
  objc_release(v22);
  v50[0] = _NSConcreteStackBlock;
  v50[1] = 3254779904LL;
  v50[2] = sub_964C;
  v50[3] = &unk_14150;
  objc_copyWeak(&v51, location);
  v23 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController beadView](self, "beadView"));
  objc_msgSend(v23, "setOnPanMoved:", v50);
  objc_release(v23);
  v48[0] = _NSConcreteStackBlock;
  v48[1] = 3254779904LL;
  v48[2] = sub_9678;
  v48[3] = &unk_14150;
  objc_copyWeak(&v49, location);
  v24 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController beadView](self, "beadView"));
  objc_msgSend(v24, "setOnPanEnded:", v48);
  objc_release(v24);
  objc_copyWeak(&v47, location);
  v25 = (void *)objc_claimAutoreleasedReturnValue(
                  -[LCSingleTaskOverlayController beadView](
                    self,
                    "beadView",
                    _NSConcreteStackBlock,
                    3254779904LL,
                    sub_96BC,
                    &unk_140F0));
  objc_msgSend(v25, "setOnUserInteraction:", &v46);
  objc_release(v25);
  v26 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  v27 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController beadView](self, "beadView"));
  objc_msgSend(v26, "addSubview:", v27);
  objc_release(v27);
  objc_release(v26);
  v28 = objc_alloc(&OBJC_CLASS___LCSingleTaskHandoffView);
  v29 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  objc_msgSend(v29, "bounds");
  v30 = -[LCSingleTaskHandoffView initWithFrame:](v28, "initWithFrame:");
  -[LCSingleTaskOverlayController setTransitionOverlayView:](self, "setTransitionOverlayView:", v30);
  objc_release(v30);
  objc_release(v29);
  v31 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController transitionOverlayView](self, "transitionOverlayView"));
  objc_msgSend(v31, "setAutoresizingMask:", 18);
  objc_release(v31);
  v32 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  v33 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController transitionOverlayView](self, "transitionOverlayView"));
  objc_msgSend(v32, "addSubview:", v33);
  objc_release(v33);
  objc_release(v32);
  -[LCSingleTaskOverlayController loadSavedBeadPosition](self, "loadSavedBeadPosition");
  v34 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  objc_msgSend(v34, "bounds");
  v36 = v35;
  if ( v35 > 0.0 )
  {
    v33 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
    objc_msgSend(v33, "bounds");
    if ( v37 > 0.0 )
    {
      v38 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
      objc_msgSend(v38, "bounds");
      v40 = v39;
      v42 = v41;
      objc_release(v38);
LABEL_5:
      objc_release(v33);
      goto LABEL_6;
    }
  }
  v43 = (void *)objc_claimAutoreleasedReturnValue(+[UIScreen mainScreen](&OBJC_CLASS___UIScreen, "mainScreen"));
  objc_msgSend(v43, "bounds");
  v40 = v44;
  v42 = v45;
  objc_release(v43);
  if ( v36 > 0.0 )
    goto LABEL_5;
LABEL_6:
  objc_release(v34);
  -[LCSingleTaskOverlayController updateLayoutForCanvasSize:](self, "updateLayoutForCanvasSize:", v40, v42);
  -[LCSingleTaskOverlayController resetInactivityTimer](self, "resetInactivityTimer");
  objc_destroyWeak(&v47);
  objc_destroyWeak(&v49);
  objc_destroyWeak(&v51);
  objc_destroyWeak(&v53);
  objc_destroyWeak(&v55);
  objc_destroyWeak(&v57);
  objc_destroyWeak(&v59);
  objc_destroyWeak(&v61);
  objc_destroyWeak(location);
  objc_release(v10);
}


// ===== -[LCSingleTaskOverlayController loadSavedBeadPosition] @ 0x96E8 (size=176) =====
void __cdecl -[LCSingleTaskOverlayController loadSavedBeadPosition](LCSingleTaskOverlayController *self, SEL a2)
{
  double v3; // d0
  void *v4; // x20
  id v5; // [xsp+8h] [xbp-18h]

  v5 = (id)objc_claimAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
  objc_msgSend(v5, "doubleForKey:", CFSTR("LCSingleTask_BeadCenterYRatio"));
  if ( v3 > 0.1 && v3 < 0.9 )
    self->_beadCenterYRatio = v3;
  v4 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", CFSTR("LCSingleTask_BeadPinnedRight")));
  objc_release(v4);
  if ( v4 )
    self->_isBeadPinnedRight = (unsigned __int8)objc_msgSend(v5, "boolForKey:", CFSTR("LCSingleTask_BeadPinnedRight"));
  objc_release(v5);
}


// ===== -[LCSingleTaskOverlayController saveBeadPosition] @ 0x9798 (size=120) =====
void __cdecl -[LCSingleTaskOverlayController saveBeadPosition](LCSingleTaskOverlayController *self, SEL a2)
{
  id v3; // [xsp+8h] [xbp-18h]

  v3 = (id)objc_claimAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
  objc_msgSend(v3, "setDouble:forKey:", CFSTR("LCSingleTask_BeadCenterYRatio"), self->_beadCenterYRatio);
  objc_msgSend(v3, "setBool:forKey:", self->_isBeadPinnedRight, CFSTR("LCSingleTask_BeadPinnedRight"));
  objc_msgSend(v3, "synchronize");
  objc_release(v3);
}


// ===== -[LCSingleTaskOverlayController updateLayoutForCanvasSize:] @ 0x9810 (size=452) =====
void __cdecl -[LCSingleTaskOverlayController updateLayoutForCanvasSize:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        CGSize a3)
{
  double height; // d10
  double width; // d8
  void *v6; // x20
  double v7; // d0
  double v8; // d9
  double v9; // d2
  double v10; // d11
  double v11; // d0
  double v12; // d10
  double beadSize; // d11
  double v14; // d0
  double v15; // d12
  double v16; // d13
  void *v17; // x20
  double drawerWidth; // d11
  unsigned int v19; // w20
  _BOOL4 isBeadPinnedRight; // w21
  void *v21; // x0
  double v22; // d0
  double v23; // d1
  id v24; // [xsp+8h] [xbp-58h]

  if ( a3.width > 0.0 )
  {
    height = a3.height;
    if ( a3.height > 0.0 )
    {
      width = a3.width;
      v6 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
      objc_msgSend(v6, "safeAreaInsets");
      v8 = v7;
      v10 = v9;
      objc_release(v6);
      if ( v8 <= 0.0 )
        v8 = 44.0;
      v11 = 34.0;
      if ( v10 > 0.0 )
        v11 = v10;
      v12 = height - v8 - v11;
      beadSize = self->_beadSize;
      v14 = v12 - beadSize;
      if ( v12 - beadSize < 100.0 )
        v14 = 100.0;
      v15 = v8 + v14 * self->_beadCenterYRatio;
      if ( self->_isBeadPinnedRight )
        v16 = width - beadSize + -12.0;
      else
        v16 = 12.0;
      v17 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController beadView](self, "beadView"));
      objc_msgSend(v17, "setFrame:", v16, v15, beadSize, beadSize);
      objc_release(v17);
      if ( self->_drawerWidth >= width + -48.0 )
        drawerWidth = width + -48.0;
      else
        drawerWidth = self->_drawerWidth;
      v19 = -[LCSingleTaskOverlayController isDrawerOpen](self, "isDrawerOpen");
      isBeadPinnedRight = self->_isBeadPinnedRight;
      v21 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
      v24 = v21;
      v22 = width + 20.0;
      if ( !isBeadPinnedRight )
        v22 = -20.0 - drawerWidth;
      v23 = width - drawerWidth + -8.0;
      if ( !isBeadPinnedRight )
        v23 = 8.0;
      if ( v19 )
        v22 = v23;
      objc_msgSend(v21, "setFrame:", v22, v8, drawerWidth, v12);
      objc_release(v24);
    }
  }
}


// ===== -[LCSingleTaskOverlayController handleBeadPanEnded:] @ 0x99D4 (size=540) =====
void __cdecl -[LCSingleTaskOverlayController handleBeadPanEnded:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        CGPoint a3)
{
  double y; // d10
  double x; // d8
  void *v6; // x20
  double v7; // d2
  double v8; // d9
  double v9; // d3
  double v10; // d11
  void *v11; // x20
  double v12; // d0
  double v13; // d12
  double v14; // d2
  double v15; // d13
  double v16; // d0
  double v17; // d1
  double beadSize; // d3
  double v19; // d2
  double v20; // d3
  double v21; // d4
  double v22; // d1
  double v23; // d10
  double v24; // d8
  double v25; // d9
  _QWORD v26[4]; // [xsp+0h] [xbp-C0h] BYREF
  id v27; // [xsp+20h] [xbp-A0h] BYREF
  _QWORD v28[4]; // [xsp+28h] [xbp-98h] BYREF
  id v29[4]; // [xsp+48h] [xbp-78h] BYREF
  id location; // [xsp+68h] [xbp-58h] BYREF

  y = a3.y;
  x = a3.x;
  v6 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  objc_msgSend(v6, "bounds");
  v8 = v7;
  v10 = v9;
  objc_release(v6);
  v11 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
  objc_msgSend(v11, "safeAreaInsets");
  v13 = v12;
  v15 = v14;
  objc_release(v11);
  v16 = 44.0;
  if ( v13 > 0.0 )
    v16 = v13;
  v17 = 34.0;
  if ( v15 > 0.0 )
    v17 = v15;
  beadSize = self->_beadSize;
  v19 = v10 - v16 - v17 - beadSize;
  if ( v19 < 100.0 )
    v19 = 100.0;
  v20 = beadSize * 0.5;
  v21 = v16 + v20;
  if ( y >= v16 + v20 )
    v21 = y;
  v22 = v10 - v17 - v20;
  if ( v21 >= v22 )
    v23 = v22;
  else
    v23 = v21;
  self->_beadCenterYRatio = (v23 - v16) / v19;
  self->_isBeadPinnedRight = x >= v8 * 0.5;
  -[LCSingleTaskOverlayController saveBeadPosition](self, "saveBeadPosition");
  v24 = self->_beadSize;
  if ( self->_isBeadPinnedRight )
    v25 = v8 - v24 + -12.0;
  else
    v25 = 12.0;
  objc_initWeak(&location, self);
  v28[0] = _NSConcreteStackBlock;
  v28[1] = 3254779904LL;
  v28[2] = sub_9C14;
  v28[3] = &unk_14180;
  objc_copyWeak(v29, &location);
  v29[1] = *(id *)&v25;
  *(double *)&v29[2] = v23 - v24 * 0.5;
  v29[3] = *(id *)&v24;
  v26[0] = _NSConcreteStackBlock;
  v26[1] = 3254779904LL;
  v26[2] = sub_9C80;
  v26[3] = &unk_141B0;
  objc_copyWeak(&v27, &location);
  +[UIView animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:](
    &OBJC_CLASS___UIView,
    "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:",
    0,
    v28,
    v26,
    0.35,
    0.0,
    0.82,
    0.5);
  objc_destroyWeak(&v27);
  objc_destroyWeak(v29);
  objc_destroyWeak(&location);
}


// ===== -[LCSingleTaskOverlayController handleMaskTap] @ 0x9CAC (size=12) =====
void __cdecl -[LCSingleTaskOverlayController handleMaskTap](LCSingleTaskOverlayController *self, SEL a2)
{
  -[LCSingleTaskOverlayController setDrawerOpen:animated:](self, "setDrawerOpen:animated:", 0, 1);
}


// ===== -[LCSingleTaskOverlayController setDrawerOpen:animated:] @ 0x9CB8 (size=612) =====
void __cdecl -[LCSingleTaskOverlayController setDrawerOpen:animated:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        bool a3,
        bool a4)
{
  _BOOL4 v4; // w21
  _BOOL4 v5; // w19
  void *v7; // x22
  double v8; // d2
  double v9; // d11
  double v10; // d3
  double v11; // d9
  void *v12; // x22
  double v13; // d0
  double v14; // d8
  double v15; // d2
  double v16; // d10
  double v17; // d0
  double v18; // d9
  double drawerWidth; // d10
  double v20; // d12
  double v21; // d11
  void *v22; // x22
  double v23; // d11
  _QWORD v24[4]; // [xsp+8h] [xbp-D8h] BYREF
  id v25; // [xsp+28h] [xbp-B8h] BYREF
  bool v26; // [xsp+30h] [xbp-B0h]
  _QWORD v27[4]; // [xsp+38h] [xbp-A8h] BYREF
  id v28[5]; // [xsp+58h] [xbp-88h] BYREF
  bool v29; // [xsp+80h] [xbp-60h]
  id location; // [xsp+88h] [xbp-58h] BYREF

  if ( self->_isDrawerOpen != a3 )
  {
    v4 = a4;
    v5 = a3;
    self->_isDrawerOpen = a3;
    -[LCSingleTaskOverlayController resetInactivityTimer](self, "resetInactivityTimer");
    if ( v5 )
      -[LCSingleTaskOverlayController refreshAppList](self, "refreshAppList");
    v7 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
    objc_msgSend(v7, "bounds");
    v9 = v8;
    v11 = v10;
    objc_release(v7);
    v12 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController view](self, "view"));
    objc_msgSend(v12, "safeAreaInsets");
    v14 = v13;
    v16 = v15;
    objc_release(v12);
    if ( v14 <= 0.0 )
      v14 = 44.0;
    v17 = 34.0;
    if ( v16 > 0.0 )
      v17 = v16;
    v18 = v11 - v14 - v17;
    if ( self->_drawerWidth >= v9 + -48.0 )
      drawerWidth = v9 + -48.0;
    else
      drawerWidth = self->_drawerWidth;
    if ( v5 )
    {
      if ( self->_isBeadPinnedRight )
        v20 = v9 - drawerWidth + -8.0;
      else
        v20 = 8.0;
      if ( self->_isBeadPinnedRight )
        v21 = v9 + 20.0;
      else
        v21 = -20.0 - drawerWidth;
      v22 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
      objc_msgSend(v22, "setFrame:", v21, v14, drawerWidth, v18);
      objc_release(v22);
    }
    else if ( self->_isBeadPinnedRight )
    {
      v20 = v9 + 20.0;
    }
    else
    {
      v20 = -20.0 - drawerWidth;
    }
    if ( v4 )
      v23 = 0.28;
    else
      v23 = 0.0;
    objc_initWeak(&location, self);
    v27[0] = _NSConcreteStackBlock;
    v27[1] = 3254779904LL;
    v27[2] = sub_9F40;
    v27[3] = &unk_141E0;
    objc_copyWeak(v28, &location);
    v29 = v5;
    v28[1] = *(id *)&v20;
    v28[2] = *(id *)&v14;
    v28[3] = *(id *)&drawerWidth;
    v28[4] = *(id *)&v18;
    v24[0] = _NSConcreteStackBlock;
    v24[1] = 3254779904LL;
    v24[2] = sub_A030;
    v24[3] = &unk_14210;
    v26 = v5;
    objc_copyWeak(&v25, &location);
    +[UIView animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:](
      &OBJC_CLASS___UIView,
      "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:",
      0,
      v27,
      v24,
      v23,
      0.0,
      0.86,
      0.6);
    objc_destroyWeak(&v25);
    objc_destroyWeak(v28);
    objc_destroyWeak(&location);
  }
}


// ===== -[LCSingleTaskOverlayController refreshAppList] @ 0xA068 (size=112) =====
void __cdecl -[LCSingleTaskOverlayController refreshAppList](LCSingleTaskOverlayController *self, SEL a2)
{
  void *v3; // x20
  void *v4; // x19
  id v5; // [xsp+8h] [xbp-18h]

  v5 = (id)objc_claimAutoreleasedReturnValue(+[LCSingleTaskSwitcher scanInstalledApps](&OBJC_CLASS___LCSingleTaskSwitcher, "scanInstalledApps"));
  v3 = (void *)objc_claimAutoreleasedReturnValue(
                 +[LCSingleTaskSwitcher currentGuestFolderName](
                   &OBJC_CLASS___LCSingleTaskSwitcher,
                   "currentGuestFolderName"));
  v4 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskOverlayController drawerView](self, "drawerView"));
  objc_msgSend(v4, "reloadWithApps:runningFolder:", v5, v3);
  objc_release(v4);
  objc_release(v3);
  objc_release(v5);
}


// ===== -[LCSingleTaskOverlayController handleAppSelected:] @ 0xA0D8 (size=216) =====
void __cdecl -[LCSingleTaskOverlayController handleAppSelected:](LCSingleTaskOverlayController *self, SEL a2, id a3)
{
  void *v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  void *v7; // x21
  id v8; // [xsp+8h] [xbp-38h]

  v8 = objc_retain(a3);
  v4 = (void *)objc_claimAutoreleasedReturnValue(
                 +[LCSingleTaskSwitcher currentGuestFolderName](
                   &OBJC_CLASS___LCSingleTaskSwitcher,
                   "currentGuestFolderName"));
  if ( objc_msgSend(v4, "length")
    && (v5 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v8, "folderName")),
        v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", v4),
        objc_release(v5),
        v6) )
  {
    v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UIImpactFeedbackGenerator), "initWithStyle:", 0);
    objc_msgSend(v7, "impactOccurred");
    -[LCSingleTaskOverlayController setDrawerOpen:animated:](self, "setDrawerOpen:animated:", 0, 1);
    objc_release(v7);
  }
  else
  {
    -[LCSingleTaskOverlayController setDrawerOpen:animated:](self, "setDrawerOpen:animated:", 0, 1);
    +[LCSingleTaskSwitcher presentTransitionAndSwitchToApp:completion:](
      &OBJC_CLASS___LCSingleTaskSwitcher,
      "presentTransitionAndSwitchToApp:completion:",
      v8,
      0);
  }
  objc_release(v4);
  objc_release(v8);
}


// ===== -[LCSingleTaskOverlayController resetInactivityTimer] @ 0xA1B0 (size=284) =====
void __cdecl -[LCSingleTaskOverlayController resetInactivityTimer](LCSingleTaskOverlayController *self, SEL a2)
{
  NSTimer *inactivityTimer; // x8
  NSTimer *v4; // x0
  NSTimer *v5; // x8
  _QWORD v6[4]; // [xsp+8h] [xbp-88h] BYREF
  id v7; // [xsp+28h] [xbp-68h] BYREF
  id location; // [xsp+30h] [xbp-60h] BYREF
  _QWORD v9[5]; // [xsp+38h] [xbp-58h] BYREF

  -[NSTimer invalidate](self->_inactivityTimer, "invalidate");
  inactivityTimer = self->_inactivityTimer;
  self->_inactivityTimer = 0;
  objc_release(inactivityTimer);
  if ( !-[LCSingleTaskOverlayController isDrawerOpen](self, "isDrawerOpen") )
  {
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 3254779904LL;
    v9[2] = sub_A2E8;
    v9[3] = &unk_14000;
    v9[4] = self;
    +[UIView animateWithDuration:animations:](&OBJC_CLASS___UIView, "animateWithDuration:animations:", v9, 0.2);
  }
  objc_initWeak(&location, self);
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_A31C;
  v6[3] = &unk_14240;
  objc_copyWeak(&v7, &location);
  v4 = (NSTimer *)objc_claimAutoreleasedReturnValue(
                    +[NSTimer scheduledTimerWithTimeInterval:repeats:block:](
                      &OBJC_CLASS___NSTimer,
                      "scheduledTimerWithTimeInterval:repeats:block:",
                      0,
                      v6,
                      3.0));
  v5 = self->_inactivityTimer;
  self->_inactivityTimer = v4;
  objc_release(v5);
  objc_destroyWeak(&v7);
  objc_destroyWeak(&location);
}


// ===== -[LCSingleTaskOverlayController beadView] @ 0xA450 (size=16) =====
LCSingleTaskBeadView *__cdecl -[LCSingleTaskOverlayController beadView](LCSingleTaskOverlayController *self, SEL a2)
{
  return self->_beadView;
}


// ===== -[LCSingleTaskOverlayController setBeadView:] @ 0xA460 (size=20) =====
void __cdecl -[LCSingleTaskOverlayController setBeadView:](LCSingleTaskOverlayController *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_beadView, a3);
}


// ===== -[LCSingleTaskOverlayController drawerView] @ 0xA474 (size=16) =====
LCSingleTaskDrawerView *__cdecl -[LCSingleTaskOverlayController drawerView](
        LCSingleTaskOverlayController *self,
        SEL a2)
{
  return self->_drawerView;
}


// ===== -[LCSingleTaskOverlayController setDrawerView:] @ 0xA484 (size=20) =====
void __cdecl -[LCSingleTaskOverlayController setDrawerView:](LCSingleTaskOverlayController *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_drawerView, a3);
}


// ===== -[LCSingleTaskOverlayController dimmingMaskView] @ 0xA498 (size=16) =====
UIView *__cdecl -[LCSingleTaskOverlayController dimmingMaskView](LCSingleTaskOverlayController *self, SEL a2)
{
  return self->_dimmingMaskView;
}


// ===== -[LCSingleTaskOverlayController setDimmingMaskView:] @ 0xA4A8 (size=20) =====
void __cdecl -[LCSingleTaskOverlayController setDimmingMaskView:](LCSingleTaskOverlayController *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_dimmingMaskView, a3);
}


// ===== -[LCSingleTaskOverlayController transitionOverlayView] @ 0xA4BC (size=16) =====
LCSingleTaskHandoffView *__cdecl -[LCSingleTaskOverlayController transitionOverlayView](
        LCSingleTaskOverlayController *self,
        SEL a2)
{
  return self->_transitionOverlayView;
}


// ===== -[LCSingleTaskOverlayController setTransitionOverlayView:] @ 0xA4CC (size=20) =====
void __cdecl -[LCSingleTaskOverlayController setTransitionOverlayView:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        id a3)
{
  objc_storeStrong((id *)&self->_transitionOverlayView, a3);
}


// ===== -[LCSingleTaskOverlayController isDrawerOpen] @ 0xA4E0 (size=16) =====
bool __cdecl -[LCSingleTaskOverlayController isDrawerOpen](LCSingleTaskOverlayController *self, SEL a2)
{
  return self->_isDrawerOpen;
}


// ===== -[LCSingleTaskOverlayController setIsDrawerOpen:] @ 0xA4F0 (size=16) =====
void __cdecl -[LCSingleTaskOverlayController setIsDrawerOpen:](LCSingleTaskOverlayController *self, SEL a2, bool a3)
{
  self->_isDrawerOpen = a3;
}


// ===== -[LCSingleTaskOverlayController isBeadPinnedRight] @ 0xA500 (size=16) =====
bool __cdecl -[LCSingleTaskOverlayController isBeadPinnedRight](LCSingleTaskOverlayController *self, SEL a2)
{
  return self->_isBeadPinnedRight;
}


// ===== -[LCSingleTaskOverlayController setIsBeadPinnedRight:] @ 0xA510 (size=16) =====
void __cdecl -[LCSingleTaskOverlayController setIsBeadPinnedRight:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        bool a3)
{
  self->_isBeadPinnedRight = a3;
}


// ===== -[LCSingleTaskOverlayController beadCenterYRatio] @ 0xA520 (size=16) =====
double __cdecl -[LCSingleTaskOverlayController beadCenterYRatio](LCSingleTaskOverlayController *self, SEL a2)
{
  return self->_beadCenterYRatio;
}


// ===== -[LCSingleTaskOverlayController setBeadCenterYRatio:] @ 0xA530 (size=16) =====
void __cdecl -[LCSingleTaskOverlayController setBeadCenterYRatio:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        double a3)
{
  self->_beadCenterYRatio = a3;
}


// ===== -[LCSingleTaskOverlayController .cxx_destruct] @ 0xA540 (size=124) =====
void __cdecl -[LCSingleTaskOverlayController .cxx_destruct](LCSingleTaskOverlayController *self, SEL a2)
{
  objc_storeStrong((id *)&self->_transitionOverlayView, 0);
  objc_storeStrong((id *)&self->_dimmingMaskView, 0);
  objc_storeStrong((id *)&self->_drawerView, 0);
  objc_storeStrong((id *)&self->_beadView, 0);
  objc_storeStrong((id *)&self->_inactivityTimer, 0);
}



