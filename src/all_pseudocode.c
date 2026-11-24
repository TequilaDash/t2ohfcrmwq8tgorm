

/* ===== CLASS LCSingleTaskAppInfo ===== */
// -[LCSingleTaskAppInfo initWithName:folderName:bundleId:version:dataUUID:appPath:icon:isJITEnabled:] @ 0x4000
LCSingleTaskAppInfo *__cdecl -[LCSingleTaskAppInfo initWithName:folderName:bundleId:version:dataUUID:appPath:icon:isJITEnabled:](
        LCSingleTaskAppInfo *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8,
        id a9,
        bool a10)
{
  id v16; // x19
  id v17; // x20
  id v18; // x21
  id v19; // x23
  id v20; // x24
  id v21; // x26
  id v22; // x27
  LCSingleTaskAppInfo *v23; // x25
  __CFString *v24; // x0
  __CFString *v25; // x28
  __CFString *v26; // x1
  __CFString *v27; // x0
  __CFString *v28; // x28
  __CFString *v29; // x1
  __CFString *v30; // x0
  __CFString *v31; // x28
  __CFString *v32; // x1
  __CFString *v33; // x0
  __CFString *v34; // x28
  __CFString *v35; // x1
  __CFString *v36; // x0
  __CFString *v37; // x28
  __CFString *v38; // x1
  __CFString *v39; // x0
  __CFString *v40; // x28
  __CFString *v41; // x1
  objc_super v43; // [xsp+10h] [xbp-60h] BYREF

  v16 = objc_retain(a3);
  v17 = objc_retain(a4);
  v18 = objc_retain(a5);
  v19 = objc_retain(a6);
  v20 = objc_retain(a7);
  v21 = objc_retain(a8);
  v22 = objc_retain(a9);
  v43.receiver = self;
  v43.super_class = (Class)&OBJC_CLASS___LCSingleTaskAppInfo;
  v23 = -[LCSingleTaskAppInfo init](&v43, "init");
  if ( v23 )
  {
    v24 = (__CFString *)objc_msgSend(v16, "copy");
    v25 = v24;
    if ( v24 )
      v26 = v24;
    else
      v26 = &stru_144B0;
    objc_storeStrong((id *)&v23->_name, v26);
    objc_release(v25);
    v27 = (__CFString *)objc_msgSend(v17, "copy");
    v28 = v27;
    if ( v27 )
      v29 = v27;
    else
      v29 = &stru_144B0;
    objc_storeStrong((id *)&v23->_folderName, v29);
    objc_release(v28);
    v30 = (__CFString *)objc_msgSend(v18, "copy");
    v31 = v30;
    if ( v30 )
      v32 = v30;
    else
      v32 = &stru_144B0;
    objc_storeStrong((id *)&v23->_bundleId, v32);
    objc_release(v31);
    v33 = (__CFString *)objc_msgSend(v19, "copy");
    v34 = v33;
    if ( v33 )
      v35 = v33;
    else
      v35 = &stru_144B0;
    objc_storeStrong((id *)&v23->_version, v35);
    objc_release(v34);
    v36 = (__CFString *)objc_msgSend(v20, "copy");
    v37 = v36;
    if ( v36 )
      v38 = v36;
    else
      v38 = &stru_144B0;
    objc_storeStrong((id *)&v23->_dataUUID, v38);
    objc_release(v37);
    v39 = (__CFString *)objc_msgSend(v21, "copy");
    v40 = v39;
    if ( v39 )
      v41 = v39;
    else
      v41 = &stru_144B0;
    objc_storeStrong((id *)&v23->_appPath, v41);
    objc_release(v40);
    objc_storeStrong((id *)&v23->_icon, a9);
    v23->_isJITEnabled = a10;
  }
  objc_release(v22);
  objc_release(v21);
  objc_release(v20);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  return v23;
}


// -[LCSingleTaskAppInfo name] @ 0x41C4
NSString *__cdecl -[LCSingleTaskAppInfo name](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_name;
}


// -[LCSingleTaskAppInfo setName:] @ 0x41CC
void __cdecl -[LCSingleTaskAppInfo setName:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 16);
}


// -[LCSingleTaskAppInfo folderName] @ 0x41D4
NSString *__cdecl -[LCSingleTaskAppInfo folderName](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_folderName;
}


// -[LCSingleTaskAppInfo setFolderName:] @ 0x41DC
void __cdecl -[LCSingleTaskAppInfo setFolderName:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 24);
}


// -[LCSingleTaskAppInfo bundleId] @ 0x41E4
NSString *__cdecl -[LCSingleTaskAppInfo bundleId](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_bundleId;
}


// -[LCSingleTaskAppInfo setBundleId:] @ 0x41EC
void __cdecl -[LCSingleTaskAppInfo setBundleId:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 32);
}


// -[LCSingleTaskAppInfo version] @ 0x41F4
NSString *__cdecl -[LCSingleTaskAppInfo version](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_version;
}


// -[LCSingleTaskAppInfo setVersion:] @ 0x41FC
void __cdecl -[LCSingleTaskAppInfo setVersion:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 40);
}


// -[LCSingleTaskAppInfo dataUUID] @ 0x4204
NSString *__cdecl -[LCSingleTaskAppInfo dataUUID](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_dataUUID;
}


// -[LCSingleTaskAppInfo setDataUUID:] @ 0x420C
void __cdecl -[LCSingleTaskAppInfo setDataUUID:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 48);
}


// -[LCSingleTaskAppInfo appPath] @ 0x4214
NSString *__cdecl -[LCSingleTaskAppInfo appPath](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_appPath;
}


// -[LCSingleTaskAppInfo setAppPath:] @ 0x421C
void __cdecl -[LCSingleTaskAppInfo setAppPath:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 56);
}


// -[LCSingleTaskAppInfo icon] @ 0x4224
UIImage *__cdecl -[LCSingleTaskAppInfo icon](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_icon;
}


// -[LCSingleTaskAppInfo setIcon:] @ 0x422C
void __cdecl -[LCSingleTaskAppInfo setIcon:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_icon, a3);
}


// -[LCSingleTaskAppInfo isJITEnabled] @ 0x4238
bool __cdecl -[LCSingleTaskAppInfo isJITEnabled](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_isJITEnabled;
}


// -[LCSingleTaskAppInfo setIsJITEnabled:] @ 0x4240
void __cdecl -[LCSingleTaskAppInfo setIsJITEnabled:](LCSingleTaskAppInfo *self, SEL a2, bool a3)
{
  self->_isJITEnabled = a3;
}


// -[LCSingleTaskAppInfo .cxx_destruct] @ 0x4248
void __cdecl -[LCSingleTaskAppInfo .cxx_destruct](LCSingleTaskAppInfo *self, SEL a2)
{
  objc_storeStrong((id *)&self->_icon, 0);
  objc_storeStrong((id *)&self->_appPath, 0);
  objc_storeStrong((id *)&self->_dataUUID, 0);
  objc_storeStrong((id *)&self->_version, 0);
  objc_storeStrong((id *)&self->_bundleId, 0);
  objc_storeStrong((id *)&self->_folderName, 0);
  objc_storeStrong((id *)&self->_name, 0);
}




/* ===== CLASS LCSingleTaskBeadView ===== */
// -[LCSingleTaskBeadView initWithFrame:] @ 0x42B4
LCSingleTaskBeadView *__cdecl -[LCSingleTaskBeadView initWithFrame:](LCSingleTaskBeadView *self, SEL a2, CGRect a3)
{
  LCSingleTaskBeadView *result; // x0
  LCSingleTaskBeadView *v4; // x19
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___LCSingleTaskBeadView;
  result = -[LCSingleTaskBeadView initWithFrame:](
             &v5,
             "initWithFrame:",
             a3.origin.x,
             a3.origin.y,
             a3.size.width,
             a3.size.height);
  if ( result )
  {
    v4 = result;
    -[LCSingleTaskBeadView setupUI](result, "setupUI");
    return v4;
  }
  return result;
}


// -[LCSingleTaskBeadView setupUI] @ 0x4300
void __cdecl -[LCSingleTaskBeadView setupUI](LCSingleTaskBeadView *self, SEL a2)
{
  void *v3; // x20
  UIVisualEffectView *v4; // x0
  UIVisualEffectView *blurView; // x8
  double v6; // d2
  double v7; // d8
  void *v8; // x20
  void *v9; // x21
  void *v10; // x21
  void *v11; // x21
  void *v12; // x22
  void *v13; // x23
  void *v14; // x21
  void *v15; // x22
  void *v16; // x23
  void *v17; // x21
  double v18; // d0
  void *v19; // x21
  void *v20; // x21
  void *v21; // x21
  void *v22; // x22
  UIImageView *v23; // x0
  UIImageView *iconImageView; // x8
  void *v25; // x23
  double v26; // d2
  double v27; // d8
  double v28; // d3
  void *v29; // x23
  id v30; // x23
  UIView *v31; // x0
  UIView *indicatorRingView; // x8
  double v33; // d2
  double v34; // d8
  void *v35; // x23
  void *v36; // x23
  void *v37; // x20
  void *v38; // x20
  void *v39; // x23
  void *v40; // x24
  void *v41; // x25
  void *v42; // x20
  void *v43; // x23
  id v44; // [xsp+8h] [xbp-68h]

  -[LCSingleTaskBeadView setClipsToBounds:](self, "setClipsToBounds:", 0);
  v3 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor clearColor](&OBJC_CLASS___UIColor, "clearColor"));
  -[LCSingleTaskBeadView setBackgroundColor:](self, "setBackgroundColor:", v3);
  objc_release(v3);
  -[LCSingleTaskBeadView setAutoresizingMask:](self, "setAutoresizingMask:", 0);
  v44 = (id)objc_claimAutoreleasedReturnValue(+[UIBlurEffect effectWithStyle:](&OBJC_CLASS___UIBlurEffect, "effectWithStyle:", 16));
  v4 = (UIVisualEffectView *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UIVisualEffectView), "initWithEffect:", v44);
  blurView = self->_blurView;
  self->_blurView = v4;
  objc_release(blurView);
  -[LCSingleTaskBeadView bounds](self, "bounds");
  -[UIVisualEffectView setFrame:](self->_blurView, "setFrame:");
  -[UIVisualEffectView setAutoresizingMask:](self->_blurView, "setAutoresizingMask:", 18);
  -[LCSingleTaskBeadView bounds](self, "bounds");
  v7 = v6 * 0.5;
  v8 = (void *)objc_claimAutoreleasedReturnValue(-[UIVisualEffectView layer](self->_blurView, "layer"));
  objc_msgSend(v8, "setCornerRadius:", v7);
  objc_release(v8);
  v9 = (void *)objc_claimAutoreleasedReturnValue(-[UIVisualEffectView layer](self->_blurView, "layer"));
  objc_msgSend(v9, "setCornerCurve:", kCACornerCurveContinuous);
  objc_release(v9);
  -[UIVisualEffectView setClipsToBounds:](self->_blurView, "setClipsToBounds:", 1);
  v10 = (void *)objc_claimAutoreleasedReturnValue(-[UIVisualEffectView layer](self->_blurView, "layer"));
  objc_msgSend(v10, "setBorderWidth:", 0.8);
  objc_release(v10);
  v11 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.35));
  v12 = objc_msgSend(objc_retainAutorelease(v11), "CGColor");
  v13 = (void *)objc_claimAutoreleasedReturnValue(-[UIVisualEffectView layer](self->_blurView, "layer"));
  objc_msgSend(v13, "setBorderColor:", v12);
  objc_release(v13);
  objc_release(v11);
  -[LCSingleTaskBeadView addSubview:](self, "addSubview:", self->_blurView);
  v14 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor blackColor](&OBJC_CLASS___UIColor, "blackColor"));
  v15 = objc_msgSend(objc_retainAutorelease(v14), "CGColor");
  v16 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView layer](self, "layer"));
  objc_msgSend(v16, "setShadowColor:", v15);
  objc_release(v16);
  objc_release(v14);
  v17 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView layer](self, "layer"));
  LODWORD(v18) = 1055286886;
  objc_msgSend(v17, "setShadowOpacity:", v18);
  objc_release(v17);
  v19 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView layer](self, "layer"));
  objc_msgSend(v19, "setShadowRadius:", 8.0);
  objc_release(v19);
  v20 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView layer](self, "layer"));
  objc_msgSend(v20, "setShadowOffset:", 0.0, 2.0);
  objc_release(v20);
  v21 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIImageSymbolConfiguration configurationWithPointSize:weight:](
                    &OBJC_CLASS___UIImageSymbolConfiguration,
                    "configurationWithPointSize:weight:",
                    6,
                    18.0));
  v22 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIImage systemImageNamed:withConfiguration:](
                    &OBJC_CLASS___UIImage,
                    "systemImageNamed:withConfiguration:",
                    CFSTR("square.stack.3d.up.fill"),
                    v21));
  if ( !v22 )
    v22 = (void *)objc_claimAutoreleasedReturnValue(
                    +[UIImage systemImageNamed:withConfiguration:](
                      &OBJC_CLASS___UIImage,
                      "systemImageNamed:withConfiguration:",
                      CFSTR("arrow.triangle.2.circlepath"),
                      v21));
  v23 = (UIImageView *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UIImageView), "initWithImage:", v22);
  iconImageView = self->_iconImageView;
  self->_iconImageView = v23;
  objc_release(iconImageView);
  v25 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.95));
  -[UIImageView setTintColor:](self->_iconImageView, "setTintColor:", v25);
  objc_release(v25);
  -[UIImageView setContentMode:](self->_iconImageView, "setContentMode:", 1);
  -[LCSingleTaskBeadView bounds](self, "bounds");
  v27 = (v26 + -22.0) * 0.5;
  -[LCSingleTaskBeadView bounds](self, "bounds");
  -[UIImageView setFrame:](self->_iconImageView, "setFrame:", v27, (v28 + -22.0) * 0.5, 22.0, 22.0);
  -[UIImageView setAutoresizingMask:](self->_iconImageView, "setAutoresizingMask:", 45);
  v29 = (void *)objc_claimAutoreleasedReturnValue(-[UIVisualEffectView contentView](self->_blurView, "contentView"));
  objc_msgSend(v29, "addSubview:", self->_iconImageView);
  objc_release(v29);
  v30 = objc_alloc((Class)&OBJC_CLASS___UIView);
  -[LCSingleTaskBeadView bounds](self, "bounds");
  v31 = (UIView *)objc_msgSend(v30, "initWithFrame:");
  indicatorRingView = self->_indicatorRingView;
  self->_indicatorRingView = v31;
  objc_release(indicatorRingView);
  -[UIView setAutoresizingMask:](self->_indicatorRingView, "setAutoresizingMask:", 18);
  -[LCSingleTaskBeadView bounds](self, "bounds");
  v34 = v33 * 0.5;
  v35 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_indicatorRingView, "layer"));
  objc_msgSend(v35, "setCornerRadius:", v34);
  objc_release(v35);
  v36 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_indicatorRingView, "layer"));
  objc_msgSend(v36, "setCornerCurve:", kCACornerCurveContinuous);
  objc_release(v36);
  v37 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_indicatorRingView, "layer"));
  objc_msgSend(v37, "setBorderWidth:", 1.0);
  objc_release(v37);
  v38 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor systemCyanColor](&OBJC_CLASS___UIColor, "systemCyanColor"));
  v39 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v38, "colorWithAlphaComponent:", 0.5));
  v40 = objc_msgSend(objc_retainAutorelease(v39), "CGColor");
  v41 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_indicatorRingView, "layer"));
  objc_msgSend(v41, "setBorderColor:", v40);
  objc_release(v41);
  objc_release(v39);
  objc_release(v38);
  -[UIView setUserInteractionEnabled:](self->_indicatorRingView, "setUserInteractionEnabled:", 0);
  -[LCSingleTaskBeadView addSubview:](self, "addSubview:", self->_indicatorRingView);
  v42 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___UITapGestureRecognizer),
          "initWithTarget:action:",
          self,
          "handleTap");
  -[LCSingleTaskBeadView addGestureRecognizer:](self, "addGestureRecognizer:", v42);
  v43 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___UIPanGestureRecognizer),
          "initWithTarget:action:",
          self,
          "handlePan:");
  -[LCSingleTaskBeadView addGestureRecognizer:](self, "addGestureRecognizer:", v43);
  objc_release(v43);
  objc_release(v42);
  objc_release(v22);
  objc_release(v21);
  objc_release(v44);
}


// -[LCSingleTaskBeadView pointInside:withEvent:] @ 0x47E8
bool __cdecl -[LCSingleTaskBeadView pointInside:withEvent:](LCSingleTaskBeadView *self, SEL a2, CGPoint a3, id a4)
{
  CGFloat y; // d8
  CGFloat x; // d9
  CGPoint v7; // 0:d4.8,8:d5.8
  CGRect v8; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v9; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  y = a3.y;
  x = a3.x;
  -[LCSingleTaskBeadView bounds](self, "bounds", a4);
  v9 = CGRectInset(v8, -14.0, -14.0);
  v7.x = x;
  v7.y = y;
  return CGRectContainsPoint(v9, v7);
}


// -[LCSingleTaskBeadView handleTap] @ 0x4820
void __cdecl -[LCSingleTaskBeadView handleTap](LCSingleTaskBeadView *self, SEL a2)
{
  void *v3; // x20
  void (**v4)(void); // x20
  void *v5; // x20
  void (**v6)(void); // [xsp+8h] [xbp-18h]

  v3 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView onUserInteraction](self, "onUserInteraction"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = (void (**)(void))objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView onUserInteraction](self, "onUserInteraction"));
    v4[2]();
    objc_release(v4);
  }
  v5 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView onTap](self, "onTap"));
  objc_release(v5);
  if ( v5 )
  {
    v6 = (void (**)(void))objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView onTap](self, "onTap"));
    v6[2]();
    objc_release(v6);
  }
}


// -[LCSingleTaskBeadView handlePan:] @ 0x48B8
void __cdecl -[LCSingleTaskBeadView handlePan:](LCSingleTaskBeadView *self, SEL a2, id a3)
{
  __n128 v3; // q8
  __n128 v4; // q9
  void *v6; // x19
  void (**v7)(void); // x19
  void *v8; // x19
  char *v9; // x0
  CGFloat v10; // d0
  CGFloat v11; // d1
  void *v12; // x21
  void (__fastcall **v13)(_QWORD); // x21
  double v14; // d0
  double v15; // d1
  void *v16; // x21
  void (__fastcall **v17)(__n128, __n128); // x20
  id v18; // [xsp+8h] [xbp-88h]
  _QWORD v19[5]; // [xsp+10h] [xbp-80h] BYREF
  _QWORD v20[5]; // [xsp+38h] [xbp-58h] BYREF

  v18 = objc_retain(a3);
  v6 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView onUserInteraction](self, "onUserInteraction"));
  objc_release(v6);
  if ( v6 )
  {
    v7 = (void (**)(void))objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView onUserInteraction](self, "onUserInteraction"));
    v7[2]();
    objc_release(v7);
  }
  v8 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView superview](self, "superview"));
  if ( v8 )
  {
    v9 = (char *)objc_msgSend(v18, "state");
    if ( (unsigned __int64)(v9 - 3) < 2 )
    {
      v19[0] = _NSConcreteStackBlock;
      v19[1] = 3254779904LL;
      v19[2] = sub_4B50;
      v19[3] = &unk_14000;
      v19[4] = self;
      +[UIView animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:](
        &OBJC_CLASS___UIView,
        "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:",
        0,
        v19,
        0,
        0.25,
        0.0,
        0.8,
        0.5);
      v12 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView onPanEnded](self, "onPanEnded"));
      objc_release(v12);
      if ( v12 )
      {
        v13 = (void (__fastcall **)(_QWORD))objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView onPanEnded](self, "onPanEnded"));
        -[LCSingleTaskBeadView center](self, "center");
        v13[2](v13);
        objc_release(v13);
      }
    }
    else if ( v9 == (_BYTE *)&dword_0 + 2 )
    {
      objc_msgSend(v18, "translationInView:", v8);
      v3.n128_f64[0] = v14 + self->_initialPanCenter.x;
      v4.n128_f64[0] = v15 + self->_initialPanCenter.y;
      -[LCSingleTaskBeadView setCenter:](self, "setCenter:", v3.n128_f64[0], v4.n128_f64[0]);
      v16 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView onPanMoved](self, "onPanMoved"));
      objc_release(v16);
      if ( v16 )
      {
        v17 = (void (__fastcall **)(__n128, __n128))objc_claimAutoreleasedReturnValue(-[LCSingleTaskBeadView onPanMoved](self, "onPanMoved"));
        v17[2](v3, v4);
        objc_release(v17);
      }
    }
    else if ( v9 == (_BYTE *)&dword_0 + 1 )
    {
      -[LCSingleTaskBeadView center](self, "center");
      self->_initialPanCenter.x = v10;
      self->_initialPanCenter.y = v11;
      v20[0] = _NSConcreteStackBlock;
      v20[1] = 3254779904LL;
      v20[2] = sub_4AE0;
      v20[3] = &unk_14000;
      v20[4] = self;
      +[UIView animateWithDuration:animations:](&OBJC_CLASS___UIView, "animateWithDuration:animations:", v20, 0.15);
    }
  }
  objc_release(v8);
  objc_release(v18);
}


// -[LCSingleTaskBeadView resetVisualState] @ 0x4B8C
void __cdecl -[LCSingleTaskBeadView resetVisualState](LCSingleTaskBeadView *self, SEL a2)
{
  __int128 v3; // q1
  _OWORD v4[3]; // [xsp+0h] [xbp-40h] BYREF

  v3 = *(_OWORD *)&CGAffineTransformIdentity.c;
  v4[0] = *(_OWORD *)&CGAffineTransformIdentity.a;
  v4[1] = v3;
  v4[2] = *(_OWORD *)&CGAffineTransformIdentity.tx;
  -[LCSingleTaskBeadView setTransform:](self, "setTransform:", v4);
  -[LCSingleTaskBeadView setAlpha:](self, "setAlpha:", 1.0);
}


// -[LCSingleTaskBeadView onTap] @ 0x4BDC
id __cdecl -[LCSingleTaskBeadView onTap](LCSingleTaskBeadView *self, SEL a2)
{
  return self->_onTap;
}


// -[LCSingleTaskBeadView setOnTap:] @ 0x4BEC
void __cdecl -[LCSingleTaskBeadView setOnTap:](LCSingleTaskBeadView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 48);
}


// -[LCSingleTaskBeadView onPanMoved] @ 0x4BF8
id __cdecl -[LCSingleTaskBeadView onPanMoved](LCSingleTaskBeadView *self, SEL a2)
{
  return self->_onPanMoved;
}


// -[LCSingleTaskBeadView setOnPanMoved:] @ 0x4C08
void __cdecl -[LCSingleTaskBeadView setOnPanMoved:](LCSingleTaskBeadView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 56);
}


// -[LCSingleTaskBeadView onPanEnded] @ 0x4C14
id __cdecl -[LCSingleTaskBeadView onPanEnded](LCSingleTaskBeadView *self, SEL a2)
{
  return self->_onPanEnded;
}


// -[LCSingleTaskBeadView setOnPanEnded:] @ 0x4C24
void __cdecl -[LCSingleTaskBeadView setOnPanEnded:](LCSingleTaskBeadView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 64);
}


// -[LCSingleTaskBeadView onUserInteraction] @ 0x4C30
id __cdecl -[LCSingleTaskBeadView onUserInteraction](LCSingleTaskBeadView *self, SEL a2)
{
  return self->_onUserInteraction;
}


// -[LCSingleTaskBeadView setOnUserInteraction:] @ 0x4C40
void __cdecl -[LCSingleTaskBeadView setOnUserInteraction:](LCSingleTaskBeadView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 72);
}


// -[LCSingleTaskBeadView .cxx_destruct] @ 0x4C4C
void __cdecl -[LCSingleTaskBeadView .cxx_destruct](LCSingleTaskBeadView *self, SEL a2)
{
  objc_storeStrong(&self->_onUserInteraction, 0);
  objc_storeStrong(&self->_onPanEnded, 0);
  objc_storeStrong(&self->_onPanMoved, 0);
  objc_storeStrong(&self->_onTap, 0);
  objc_storeStrong((id *)&self->_indicatorRingView, 0);
  objc_storeStrong((id *)&self->_iconImageView, 0);
  objc_storeStrong((id *)&self->_blurView, 0);
}




/* ===== CLASS LCSingleTaskDrawerView ===== */
// -[LCSingleTaskDrawerView initWithFrame:] @ 0x5C68
LCSingleTaskDrawerView *__cdecl -[LCSingleTaskDrawerView initWithFrame:](
        LCSingleTaskDrawerView *self,
        SEL a2,
        CGRect a3)
{
  LCSingleTaskDrawerView *result; // x0
  LCSingleTaskDrawerView *v4; // x19
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___LCSingleTaskDrawerView;
  result = -[LCSingleTaskDrawerView initWithFrame:](
             &v5,
             "initWithFrame:",
             a3.origin.x,
             a3.origin.y,
             a3.size.width,
             a3.size.height);
  if ( result )
  {
    v4 = result;
    -[LCSingleTaskDrawerView setupUI](result, "setupUI");
    return v4;
  }
  return result;
}


// -[LCSingleTaskDrawerView setupUI] @ 0x5CB4
void __cdecl -[LCSingleTaskDrawerView setupUI](LCSingleTaskDrawerView *self, SEL a2)
{
  void *v3; // x19
  UIVisualEffectView *v4; // x0
  UIVisualEffectView *blurView; // x8
  void *v6; // x19
  void *v7; // x21
  void *v8; // x21
  void *v9; // x21
  void *v10; // x22
  void *v11; // x23
  void *v12; // x21
  void *v13; // x22
  void *v14; // x23
  void *v15; // x21
  double v16; // d0
  void *v17; // x21
  void *v18; // x21
  UIView *v19; // x0
  UIView *headerView; // x8
  UILabel *v21; // x0
  UILabel *titleLabel; // x8
  void *v23; // x21
  void *v24; // x21
  UILabel *v25; // x0
  UILabel *countBadge; // x8
  void *v27; // x21
  void *v28; // x21
  void *v29; // x21
  void *v30; // x21
  void *v31; // x21
  UIButton *v32; // x0
  UIButton *closeButton; // x8
  UIButton *v34; // x19
  void *v35; // x21
  void *v36; // x19
  UIView *v37; // x0
  UIView *divider; // x8
  void *v39; // x19
  UIScrollView *v40; // x0
  UIScrollView *scrollView; // x8
  UIStackView *v42; // x0
  UIStackView *stackView; // x8
  void *v44; // x19
  void *v45; // x21
  void *v46; // x22
  void *v47; // x23
  void *v48; // x24
  void *v49; // x25
  void *v50; // x26
  void *v51; // x20
  void *v52; // x27
  void *v53; // x28
  void *v54; // [xsp+8h] [xbp-3F8h]
  void *v55; // [xsp+10h] [xbp-3F0h]
  void *v56; // [xsp+18h] [xbp-3E8h]
  void *v57; // [xsp+20h] [xbp-3E0h]
  void *v58; // [xsp+28h] [xbp-3D8h]
  void *v59; // [xsp+30h] [xbp-3D0h]
  void *v60; // [xsp+38h] [xbp-3C8h]
  void *v61; // [xsp+40h] [xbp-3C0h]
  void *v62; // [xsp+48h] [xbp-3B8h]
  void *v63; // [xsp+50h] [xbp-3B0h]
  void *v64; // [xsp+58h] [xbp-3A8h]
  void *v65; // [xsp+60h] [xbp-3A0h]
  void *v66; // [xsp+68h] [xbp-398h]
  void *v67; // [xsp+70h] [xbp-390h]
  void *v68; // [xsp+78h] [xbp-388h]
  void *v69; // [xsp+80h] [xbp-380h]
  void *v70; // [xsp+88h] [xbp-378h]
  void *v71; // [xsp+90h] [xbp-370h]
  void *v72; // [xsp+98h] [xbp-368h]
  void *v73; // [xsp+A0h] [xbp-360h]
  void *v74; // [xsp+A8h] [xbp-358h]
  void *v75; // [xsp+B0h] [xbp-350h]
  void *v76; // [xsp+B8h] [xbp-348h]
  void *v77; // [xsp+C0h] [xbp-340h]
  void *v78; // [xsp+C8h] [xbp-338h]
  void *v79; // [xsp+D0h] [xbp-330h]
  void *v80; // [xsp+D8h] [xbp-328h]
  void *v81; // [xsp+E0h] [xbp-320h]
  void *v82; // [xsp+E8h] [xbp-318h]
  void *v83; // [xsp+F0h] [xbp-310h]
  void *v84; // [xsp+F8h] [xbp-308h]
  void *v85; // [xsp+100h] [xbp-300h]
  void *v86; // [xsp+108h] [xbp-2F8h]
  void *v87; // [xsp+110h] [xbp-2F0h]
  void *v88; // [xsp+118h] [xbp-2E8h]
  void *v89; // [xsp+120h] [xbp-2E0h]
  void *v90; // [xsp+128h] [xbp-2D8h]
  void *v91; // [xsp+130h] [xbp-2D0h]
  void *v92; // [xsp+138h] [xbp-2C8h]
  void *v93; // [xsp+140h] [xbp-2C0h]
  void *v94; // [xsp+148h] [xbp-2B8h]
  void *v95; // [xsp+150h] [xbp-2B0h]
  void *v96; // [xsp+158h] [xbp-2A8h]
  void *v97; // [xsp+160h] [xbp-2A0h]
  void *v98; // [xsp+168h] [xbp-298h]
  void *v99; // [xsp+170h] [xbp-290h]
  void *v100; // [xsp+180h] [xbp-280h]
  void *v101; // [xsp+188h] [xbp-278h]
  void *v102; // [xsp+190h] [xbp-270h]
  void *v103; // [xsp+198h] [xbp-268h]
  void *v104; // [xsp+1A0h] [xbp-260h]
  void *v105; // [xsp+1A8h] [xbp-258h]
  void *v106; // [xsp+1B0h] [xbp-250h]
  void *v107; // [xsp+1B8h] [xbp-248h]
  void *v108; // [xsp+1C0h] [xbp-240h]
  void *v109; // [xsp+1C8h] [xbp-238h]
  void *v110; // [xsp+1D0h] [xbp-230h]
  void *v111; // [xsp+1D8h] [xbp-228h]
  void *v112; // [xsp+1E0h] [xbp-220h]
  void *v113; // [xsp+1E8h] [xbp-218h]
  void *v114; // [xsp+1F0h] [xbp-210h]
  void *v115; // [xsp+1F8h] [xbp-208h]
  void *v116; // [xsp+200h] [xbp-200h]
  void *v117; // [xsp+208h] [xbp-1F8h]
  void *v118; // [xsp+210h] [xbp-1F0h]
  void *v119; // [xsp+218h] [xbp-1E8h]
  void *v120; // [xsp+220h] [xbp-1E0h]
  void *v121; // [xsp+228h] [xbp-1D8h]
  void *v122; // [xsp+230h] [xbp-1D0h]
  void *v123; // [xsp+238h] [xbp-1C8h]
  void *v124; // [xsp+240h] [xbp-1C0h]
  void *v125; // [xsp+248h] [xbp-1B8h]
  void *v126; // [xsp+250h] [xbp-1B0h]
  void *v127; // [xsp+258h] [xbp-1A8h]
  void *v128; // [xsp+260h] [xbp-1A0h]
  void *v129; // [xsp+268h] [xbp-198h]
  void *v130; // [xsp+270h] [xbp-190h]
  void *v131; // [xsp+278h] [xbp-188h]
  void *v132; // [xsp+280h] [xbp-180h]
  void *v133; // [xsp+288h] [xbp-178h]
  void *v134; // [xsp+290h] [xbp-170h]
  _QWORD v135[31]; // [xsp+298h] [xbp-168h] BYREF

  -[LCSingleTaskDrawerView setClipsToBounds:](self, "setClipsToBounds:", 1);
  v3 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor clearColor](&OBJC_CLASS___UIColor, "clearColor"));
  -[LCSingleTaskDrawerView setBackgroundColor:](self, "setBackgroundColor:", v3);
  objc_release(v3);
  -[LCSingleTaskDrawerView setAutoresizingMask:](self, "setAutoresizingMask:", 0);
  v134 = (void *)objc_claimAutoreleasedReturnValue(+[UIBlurEffect effectWithStyle:](&OBJC_CLASS___UIBlurEffect, "effectWithStyle:", 16));
  v4 = (UIVisualEffectView *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UIVisualEffectView), "initWithEffect:", v134);
  blurView = self->_blurView;
  self->_blurView = v4;
  objc_release(blurView);
  -[LCSingleTaskDrawerView bounds](self, "bounds");
  -[UIVisualEffectView setFrame:](self->_blurView, "setFrame:");
  -[UIVisualEffectView setAutoresizingMask:](self->_blurView, "setAutoresizingMask:", 18);
  -[LCSingleTaskDrawerView addSubview:](self, "addSubview:", self->_blurView);
  v6 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView layer](self, "layer"));
  objc_msgSend(v6, "setCornerRadius:", 20.0);
  objc_release(v6);
  v7 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView layer](self, "layer"));
  objc_msgSend(v7, "setCornerCurve:", kCACornerCurveContinuous);
  objc_release(v7);
  v8 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView layer](self, "layer"));
  objc_msgSend(v8, "setBorderWidth:", 0.6);
  objc_release(v8);
  v9 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.25));
  v10 = objc_msgSend(objc_retainAutorelease(v9), "CGColor");
  v11 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView layer](self, "layer"));
  objc_msgSend(v11, "setBorderColor:", v10);
  objc_release(v11);
  objc_release(v9);
  v12 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor blackColor](&OBJC_CLASS___UIColor, "blackColor"));
  v13 = objc_msgSend(objc_retainAutorelease(v12), "CGColor");
  v14 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView layer](self, "layer"));
  objc_msgSend(v14, "setShadowColor:", v13);
  objc_release(v14);
  objc_release(v12);
  v15 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView layer](self, "layer"));
  LODWORD(v16) = 1055286886;
  objc_msgSend(v15, "setShadowOpacity:", v16);
  objc_release(v15);
  v17 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView layer](self, "layer"));
  objc_msgSend(v17, "setShadowRadius:", 18.0);
  objc_release(v17);
  v18 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView layer](self, "layer"));
  objc_msgSend(v18, "setShadowOffset:", 0.0, 4.0);
  objc_release(v18);
  v19 = (UIView *)objc_alloc_init((Class)&OBJC_CLASS___UIView);
  headerView = self->_headerView;
  self->_headerView = v19;
  objc_release(headerView);
  -[UIView setTranslatesAutoresizingMaskIntoConstraints:](
    self->_headerView,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  -[LCSingleTaskDrawerView addSubview:](self, "addSubview:", self->_headerView);
  v21 = (UILabel *)objc_alloc_init((Class)&OBJC_CLASS___UILabel);
  titleLabel = self->_titleLabel;
  self->_titleLabel = v21;
  objc_release(titleLabel);
  -[UILabel setTranslatesAutoresizingMaskIntoConstraints:](
    self->_titleLabel,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  -[UILabel setText:](self->_titleLabel, "setText:", CFSTR("沙盒快速切换"));
  v23 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIFont systemFontOfSize:weight:](
                    &OBJC_CLASS___UIFont,
                    "systemFontOfSize:weight:",
                    16.0,
                    UIFontWeightBold));
  -[UILabel setFont:](self->_titleLabel, "setFont:", v23);
  objc_release(v23);
  v24 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor whiteColor](&OBJC_CLASS___UIColor, "whiteColor"));
  -[UILabel setTextColor:](self->_titleLabel, "setTextColor:", v24);
  objc_release(v24);
  -[UIView addSubview:](self->_headerView, "addSubview:", self->_titleLabel);
  v25 = (UILabel *)objc_alloc_init((Class)&OBJC_CLASS___UILabel);
  countBadge = self->_countBadge;
  self->_countBadge = v25;
  objc_release(countBadge);
  -[UILabel setTranslatesAutoresizingMaskIntoConstraints:](
    self->_countBadge,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  v27 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIFont systemFontOfSize:weight:](
                    &OBJC_CLASS___UIFont,
                    "systemFontOfSize:weight:",
                    11.0,
                    UIFontWeightSemibold));
  -[UILabel setFont:](self->_countBadge, "setFont:", v27);
  objc_release(v27);
  v28 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.9));
  -[UILabel setTextColor:](self->_countBadge, "setTextColor:", v28);
  objc_release(v28);
  v29 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.2));
  -[UILabel setBackgroundColor:](self->_countBadge, "setBackgroundColor:", v29);
  objc_release(v29);
  v30 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel layer](self->_countBadge, "layer"));
  objc_msgSend(v30, "setCornerRadius:", 9.0);
  objc_release(v30);
  v31 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel layer](self->_countBadge, "layer"));
  objc_msgSend(v31, "setCornerCurve:", kCACornerCurveContinuous);
  objc_release(v31);
  -[UILabel setClipsToBounds:](self->_countBadge, "setClipsToBounds:", 1);
  -[UILabel setTextAlignment:](self->_countBadge, "setTextAlignment:", 1);
  -[UIView addSubview:](self->_headerView, "addSubview:", self->_countBadge);
  v133 = (void *)objc_claimAutoreleasedReturnValue(
                   +[UIImageSymbolConfiguration configurationWithPointSize:weight:](
                     &OBJC_CLASS___UIImageSymbolConfiguration,
                     "configurationWithPointSize:weight:",
                     5,
                     18.0));
  v32 = (UIButton *)objc_claimAutoreleasedReturnValue(+[UIButton buttonWithType:](&OBJC_CLASS___UIButton, "buttonWithType:", 1));
  closeButton = self->_closeButton;
  self->_closeButton = v32;
  objc_release(closeButton);
  v34 = self->_closeButton;
  v35 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIImage systemImageNamed:withConfiguration:](
                    &OBJC_CLASS___UIImage,
                    "systemImageNamed:withConfiguration:",
                    CFSTR("xmark.circle.fill"),
                    v133));
  -[UIButton setImage:forState:](v34, "setImage:forState:", v35, 0);
  objc_release(v35);
  v36 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.6));
  -[UIButton setTintColor:](self->_closeButton, "setTintColor:", v36);
  objc_release(v36);
  -[UIButton setTranslatesAutoresizingMaskIntoConstraints:](
    self->_closeButton,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  -[UIButton addTarget:action:forControlEvents:](
    self->_closeButton,
    "addTarget:action:forControlEvents:",
    self,
    "handleClose",
    64);
  -[UIView addSubview:](self->_headerView, "addSubview:", self->_closeButton);
  -[LCSingleTaskDrawerView setupReturnHomeCard](self, "setupReturnHomeCard");
  -[LCSingleTaskDrawerView addSubview:](self, "addSubview:", self->_returnHomeCard);
  v37 = (UIView *)objc_alloc_init((Class)&OBJC_CLASS___UIView);
  divider = self->_divider;
  self->_divider = v37;
  objc_release(divider);
  -[UIView setTranslatesAutoresizingMaskIntoConstraints:](
    self->_divider,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  v39 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.18));
  -[UIView setBackgroundColor:](self->_divider, "setBackgroundColor:", v39);
  objc_release(v39);
  -[LCSingleTaskDrawerView addSubview:](self, "addSubview:", self->_divider);
  v40 = (UIScrollView *)objc_alloc_init((Class)&OBJC_CLASS___UIScrollView);
  scrollView = self->_scrollView;
  self->_scrollView = v40;
  objc_release(scrollView);
  -[UIScrollView setTranslatesAutoresizingMaskIntoConstraints:](
    self->_scrollView,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  -[UIScrollView setShowsVerticalScrollIndicator:](self->_scrollView, "setShowsVerticalScrollIndicator:", 0);
  -[LCSingleTaskDrawerView addSubview:](self, "addSubview:", self->_scrollView);
  v42 = (UIStackView *)objc_alloc_init((Class)&OBJC_CLASS___UIStackView);
  stackView = self->_stackView;
  self->_stackView = v42;
  objc_release(stackView);
  -[UIStackView setTranslatesAutoresizingMaskIntoConstraints:](
    self->_stackView,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  -[UIStackView setAxis:](self->_stackView, "setAxis:", 1);
  -[UIStackView setSpacing:](self->_stackView, "setSpacing:", 8.0);
  -[UIStackView setAlignment:](self->_stackView, "setAlignment:", 0);
  -[UIStackView setDistribution:](self->_stackView, "setDistribution:", 0);
  -[UIScrollView addSubview:](self->_scrollView, "addSubview:", self->_stackView);
  v131 = (void *)objc_claimAutoreleasedReturnValue(-[UIView topAnchor](self->_headerView, "topAnchor"));
  v132 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView safeAreaLayoutGuide](self, "safeAreaLayoutGuide"));
  v130 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v132, "topAnchor"));
  v129 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v131, "constraintEqualToAnchor:constant:", v130, 12.0));
  v135[0] = v129;
  v128 = (void *)objc_claimAutoreleasedReturnValue(-[UIView leadingAnchor](self->_headerView, "leadingAnchor"));
  v127 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView leadingAnchor](self, "leadingAnchor"));
  v126 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v128, "constraintEqualToAnchor:constant:", v127, 16.0));
  v135[1] = v126;
  v125 = (void *)objc_claimAutoreleasedReturnValue(-[UIView trailingAnchor](self->_headerView, "trailingAnchor"));
  v124 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView trailingAnchor](self, "trailingAnchor"));
  v123 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v125, "constraintEqualToAnchor:constant:", v124, -16.0));
  v135[2] = v123;
  v122 = (void *)objc_claimAutoreleasedReturnValue(-[UIView heightAnchor](self->_headerView, "heightAnchor"));
  v121 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v122, "constraintEqualToConstant:", 32.0));
  v135[3] = v121;
  v120 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel leadingAnchor](self->_titleLabel, "leadingAnchor"));
  v119 = (void *)objc_claimAutoreleasedReturnValue(-[UIView leadingAnchor](self->_headerView, "leadingAnchor"));
  v118 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v120, "constraintEqualToAnchor:", v119));
  v135[4] = v118;
  v117 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel centerYAnchor](self->_titleLabel, "centerYAnchor"));
  v116 = (void *)objc_claimAutoreleasedReturnValue(-[UIView centerYAnchor](self->_headerView, "centerYAnchor"));
  v115 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v117, "constraintEqualToAnchor:", v116));
  v135[5] = v115;
  v114 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel leadingAnchor](self->_countBadge, "leadingAnchor"));
  v113 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel trailingAnchor](self->_titleLabel, "trailingAnchor"));
  v112 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v114, "constraintEqualToAnchor:constant:", v113, 8.0));
  v135[6] = v112;
  v111 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel centerYAnchor](self->_countBadge, "centerYAnchor"));
  v110 = (void *)objc_claimAutoreleasedReturnValue(-[UIView centerYAnchor](self->_headerView, "centerYAnchor"));
  v109 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v111, "constraintEqualToAnchor:", v110));
  v135[7] = v109;
  v108 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel widthAnchor](self->_countBadge, "widthAnchor"));
  v107 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v108, "constraintGreaterThanOrEqualToConstant:", 24.0));
  v135[8] = v107;
  v106 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel heightAnchor](self->_countBadge, "heightAnchor"));
  v105 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v106, "constraintEqualToConstant:", 18.0));
  v135[9] = v105;
  v104 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton trailingAnchor](self->_closeButton, "trailingAnchor"));
  v103 = (void *)objc_claimAutoreleasedReturnValue(-[UIView trailingAnchor](self->_headerView, "trailingAnchor"));
  v102 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v104, "constraintEqualToAnchor:", v103));
  v135[10] = v102;
  v101 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton centerYAnchor](self->_closeButton, "centerYAnchor"));
  v100 = (void *)objc_claimAutoreleasedReturnValue(-[UIView centerYAnchor](self->_headerView, "centerYAnchor"));
  v99 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v101, "constraintEqualToAnchor:", v100));
  v135[11] = v99;
  v98 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton widthAnchor](self->_closeButton, "widthAnchor"));
  v97 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v98, "constraintEqualToConstant:", 28.0));
  v135[12] = v97;
  v96 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton heightAnchor](self->_closeButton, "heightAnchor"));
  v95 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v96, "constraintEqualToConstant:", 28.0));
  v135[13] = v95;
  v94 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton topAnchor](self->_returnHomeCard, "topAnchor"));
  v93 = (void *)objc_claimAutoreleasedReturnValue(-[UIView bottomAnchor](self->_headerView, "bottomAnchor"));
  v92 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v94, "constraintEqualToAnchor:constant:", v93, 12.0));
  v135[14] = v92;
  v91 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton leadingAnchor](self->_returnHomeCard, "leadingAnchor"));
  v90 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView leadingAnchor](self, "leadingAnchor"));
  v89 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v91, "constraintEqualToAnchor:constant:", v90, 14.0));
  v135[15] = v89;
  v88 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton trailingAnchor](self->_returnHomeCard, "trailingAnchor"));
  v87 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView trailingAnchor](self, "trailingAnchor"));
  v86 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v88, "constraintEqualToAnchor:constant:", v87, -14.0));
  v135[16] = v86;
  v85 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton heightAnchor](self->_returnHomeCard, "heightAnchor"));
  v84 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v85, "constraintEqualToConstant:", 52.0));
  v135[17] = v84;
  v83 = (void *)objc_claimAutoreleasedReturnValue(-[UIView topAnchor](self->_divider, "topAnchor"));
  v82 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton bottomAnchor](self->_returnHomeCard, "bottomAnchor"));
  v81 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v83, "constraintEqualToAnchor:constant:", v82, 12.0));
  v135[18] = v81;
  v80 = (void *)objc_claimAutoreleasedReturnValue(-[UIView leadingAnchor](self->_divider, "leadingAnchor"));
  v79 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView leadingAnchor](self, "leadingAnchor"));
  v78 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v80, "constraintEqualToAnchor:constant:", v79, 14.0));
  v135[19] = v78;
  v77 = (void *)objc_claimAutoreleasedReturnValue(-[UIView trailingAnchor](self->_divider, "trailingAnchor"));
  v76 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView trailingAnchor](self, "trailingAnchor"));
  v75 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v77, "constraintEqualToAnchor:constant:", v76, -14.0));
  v135[20] = v75;
  v74 = (void *)objc_claimAutoreleasedReturnValue(-[UIView heightAnchor](self->_divider, "heightAnchor"));
  v73 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v74, "constraintEqualToConstant:", 0.6));
  v135[21] = v73;
  v72 = (void *)objc_claimAutoreleasedReturnValue(-[UIScrollView topAnchor](self->_scrollView, "topAnchor"));
  v71 = (void *)objc_claimAutoreleasedReturnValue(-[UIView bottomAnchor](self->_divider, "bottomAnchor"));
  v70 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v72, "constraintEqualToAnchor:constant:", v71, 8.0));
  v135[22] = v70;
  v69 = (void *)objc_claimAutoreleasedReturnValue(-[UIScrollView leadingAnchor](self->_scrollView, "leadingAnchor"));
  v68 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView leadingAnchor](self, "leadingAnchor"));
  v67 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v69, "constraintEqualToAnchor:constant:", v68, 14.0));
  v135[23] = v67;
  v66 = (void *)objc_claimAutoreleasedReturnValue(-[UIScrollView trailingAnchor](self->_scrollView, "trailingAnchor"));
  v65 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView trailingAnchor](self, "trailingAnchor"));
  v64 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v66, "constraintEqualToAnchor:constant:", v65, -14.0));
  v135[24] = v64;
  v62 = (void *)objc_claimAutoreleasedReturnValue(-[UIScrollView bottomAnchor](self->_scrollView, "bottomAnchor"));
  v63 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView safeAreaLayoutGuide](self, "safeAreaLayoutGuide"));
  v61 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v63, "bottomAnchor"));
  v60 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v62, "constraintEqualToAnchor:constant:", v61, -12.0));
  v135[25] = v60;
  v59 = (void *)objc_claimAutoreleasedReturnValue(-[UIStackView topAnchor](self->_stackView, "topAnchor"));
  v58 = (void *)objc_claimAutoreleasedReturnValue(-[UIScrollView topAnchor](self->_scrollView, "topAnchor"));
  v57 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v59, "constraintEqualToAnchor:", v58));
  v135[26] = v57;
  v56 = (void *)objc_claimAutoreleasedReturnValue(-[UIStackView leadingAnchor](self->_stackView, "leadingAnchor"));
  v55 = (void *)objc_claimAutoreleasedReturnValue(-[UIScrollView leadingAnchor](self->_scrollView, "leadingAnchor"));
  v54 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v56, "constraintEqualToAnchor:", v55));
  v135[27] = v54;
  v44 = (void *)objc_claimAutoreleasedReturnValue(-[UIStackView trailingAnchor](self->_stackView, "trailingAnchor"));
  v45 = (void *)objc_claimAutoreleasedReturnValue(-[UIScrollView trailingAnchor](self->_scrollView, "trailingAnchor"));
  v46 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v44, "constraintEqualToAnchor:", v45));
  v135[28] = v46;
  v47 = (void *)objc_claimAutoreleasedReturnValue(-[UIStackView bottomAnchor](self->_stackView, "bottomAnchor"));
  v48 = (void *)objc_claimAutoreleasedReturnValue(-[UIScrollView bottomAnchor](self->_scrollView, "bottomAnchor"));
  v49 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v47, "constraintEqualToAnchor:", v48));
  v135[29] = v49;
  v50 = (void *)objc_claimAutoreleasedReturnValue(-[UIStackView widthAnchor](self->_stackView, "widthAnchor"));
  v51 = (void *)objc_claimAutoreleasedReturnValue(-[UIScrollView widthAnchor](self->_scrollView, "widthAnchor"));
  v52 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v50, "constraintEqualToAnchor:", v51));
  v135[30] = v52;
  v53 = (void *)objc_claimAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v135, 31));
  +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v53);
  objc_release(v53);
  objc_release(v52);
  objc_release(v51);
  objc_release(v50);
  objc_release(v49);
  objc_release(v48);
  objc_release(v47);
  objc_release(v46);
  objc_release(v45);
  objc_release(v44);
  objc_release(v54);
  objc_release(v55);
  objc_release(v56);
  objc_release(v57);
  objc_release(v58);
  objc_release(v59);
  objc_release(v60);
  objc_release(v61);
  objc_release(v63);
  objc_release(v62);
  objc_release(v64);
  objc_release(v65);
  objc_release(v66);
  objc_release(v67);
  objc_release(v68);
  objc_release(v69);
  objc_release(v70);
  objc_release(v71);
  objc_release(v72);
  objc_release(v73);
  objc_release(v74);
  objc_release(v75);
  objc_release(v76);
  objc_release(v77);
  objc_release(v78);
  objc_release(v79);
  objc_release(v80);
  objc_release(v81);
  objc_release(v82);
  objc_release(v83);
  objc_release(v84);
  objc_release(v85);
  objc_release(v86);
  objc_release(v87);
  objc_release(v88);
  objc_release(v89);
  objc_release(v90);
  objc_release(v91);
  objc_release(v92);
  objc_release(v93);
  objc_release(v94);
  objc_release(v95);
  objc_release(v96);
  objc_release(v97);
  objc_release(v98);
  objc_release(v99);
  objc_release(v100);
  objc_release(v101);
  objc_release(v102);
  objc_release(v103);
  objc_release(v104);
  objc_release(v105);
  objc_release(v106);
  objc_release(v107);
  objc_release(v108);
  objc_release(v109);
  objc_release(v110);
  objc_release(v111);
  objc_release(v112);
  objc_release(v113);
  objc_release(v114);
  objc_release(v115);
  objc_release(v116);
  objc_release(v117);
  objc_release(v118);
  objc_release(v119);
  objc_release(v120);
  objc_release(v121);
  objc_release(v122);
  objc_release(v123);
  objc_release(v124);
  objc_release(v125);
  objc_release(v126);
  objc_release(v127);
  objc_release(v128);
  objc_release(v129);
  objc_release(v130);
  objc_release(v132);
  objc_release(v131);
  objc_release(v133);
  objc_release(v134);
}


// -[LCSingleTaskDrawerView setupReturnHomeCard] @ 0x6CC8
void __cdecl -[LCSingleTaskDrawerView setupReturnHomeCard](LCSingleTaskDrawerView *self, SEL a2)
{
  UIButton *v3; // x0
  UIButton *returnHomeCard; // x8
  void *v5; // x19
  void *v6; // x19
  void *v7; // x20
  void *v8; // x19
  void *v9; // x19
  void *v10; // x20
  void *v11; // x22
  id v12; // x28
  void *v13; // x19
  void *v14; // x19
  id v15; // x20
  id v16; // x22
  void *v17; // x19
  void *v18; // x19
  id v19; // x25
  void *v20; // x19
  void *v21; // x19
  id v22; // x25
  void *v23; // x19
  void *v24; // x19
  void *v25; // x24
  void *v26; // x20
  void *v27; // x21
  void *v28; // x23
  void *v29; // x19
  void *v30; // x26
  void *v31; // x27
  void *v32; // x22
  void *v33; // x28
  void *v34; // [xsp+8h] [xbp-198h]
  void *v35; // [xsp+10h] [xbp-190h]
  void *v36; // [xsp+18h] [xbp-188h]
  void *v37; // [xsp+20h] [xbp-180h]
  void *v38; // [xsp+28h] [xbp-178h]
  void *v39; // [xsp+30h] [xbp-170h]
  void *v40; // [xsp+38h] [xbp-168h]
  void *v41; // [xsp+40h] [xbp-160h]
  void *v42; // [xsp+48h] [xbp-158h]
  void *v43; // [xsp+50h] [xbp-150h]
  void *v44; // [xsp+60h] [xbp-140h]
  void *v45; // [xsp+68h] [xbp-138h]
  void *v46; // [xsp+70h] [xbp-130h]
  void *v47; // [xsp+78h] [xbp-128h]
  void *v48; // [xsp+80h] [xbp-120h]
  void *v49; // [xsp+88h] [xbp-118h]
  void *v50; // [xsp+90h] [xbp-110h]
  void *v51; // [xsp+98h] [xbp-108h]
  void *v52; // [xsp+A0h] [xbp-100h]
  void *v53; // [xsp+A8h] [xbp-F8h]
  void *v54; // [xsp+B0h] [xbp-F0h]
  void *v55; // [xsp+B8h] [xbp-E8h]
  void *v56; // [xsp+C0h] [xbp-E0h]
  void *v57; // [xsp+C8h] [xbp-D8h]
  void *v58; // [xsp+D0h] [xbp-D0h]
  void *v59; // [xsp+D8h] [xbp-C8h]
  void *v60; // [xsp+E0h] [xbp-C0h]
  _QWORD v61[11]; // [xsp+E8h] [xbp-B8h] BYREF

  v3 = (UIButton *)objc_claimAutoreleasedReturnValue(+[UIButton buttonWithType:](&OBJC_CLASS___UIButton, "buttonWithType:", 0));
  returnHomeCard = self->_returnHomeCard;
  self->_returnHomeCard = v3;
  objc_release(returnHomeCard);
  -[UIButton setTranslatesAutoresizingMaskIntoConstraints:](
    self->_returnHomeCard,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  v5 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.12));
  -[UIButton setBackgroundColor:](self->_returnHomeCard, "setBackgroundColor:", v5);
  objc_release(v5);
  v6 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton layer](self->_returnHomeCard, "layer"));
  objc_msgSend(v6, "setCornerRadius:", 14.0);
  objc_release(v6);
  v7 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton layer](self->_returnHomeCard, "layer"));
  objc_msgSend(v7, "setCornerCurve:", kCACornerCurveContinuous);
  objc_release(v7);
  v8 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton layer](self->_returnHomeCard, "layer"));
  objc_msgSend(v8, "setBorderWidth:", 0.5);
  objc_release(v8);
  v9 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.25));
  v10 = objc_msgSend(objc_retainAutorelease(v9), "CGColor");
  v11 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton layer](self->_returnHomeCard, "layer"));
  objc_msgSend(v11, "setBorderColor:", v10);
  objc_release(v11);
  objc_release(v9);
  -[UIButton addTarget:action:forControlEvents:](
    self->_returnHomeCard,
    "addTarget:action:forControlEvents:",
    self,
    "handleReturnHome",
    64);
  v12 = objc_alloc_init((Class)&OBJC_CLASS___UIImageView);
  v60 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIImageSymbolConfiguration configurationWithPointSize:weight:](
                    &OBJC_CLASS___UIImageSymbolConfiguration,
                    "configurationWithPointSize:weight:",
                    6,
                    18.0));
  v13 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIImage systemImageNamed:withConfiguration:](
                    &OBJC_CLASS___UIImage,
                    "systemImageNamed:withConfiguration:",
                    CFSTR("house.fill"),
                    v60));
  objc_msgSend(v12, "setImage:", v13);
  objc_release(v13);
  v14 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor systemCyanColor](&OBJC_CLASS___UIColor, "systemCyanColor"));
  objc_msgSend(v12, "setTintColor:", v14);
  objc_release(v14);
  objc_msgSend(v12, "setContentMode:", 1);
  objc_msgSend(v12, "setTranslatesAutoresizingMaskIntoConstraints:", 0);
  -[UIButton addSubview:](self->_returnHomeCard, "addSubview:", v12);
  v15 = objc_alloc_init((Class)&OBJC_CLASS___UIStackView);
  objc_msgSend(v15, "setAxis:", 1);
  objc_msgSend(v15, "setSpacing:", 2.0);
  objc_msgSend(v15, "setTranslatesAutoresizingMaskIntoConstraints:", 0);
  objc_msgSend(v15, "setUserInteractionEnabled:", 0);
  v16 = objc_alloc_init((Class)&OBJC_CLASS___UILabel);
  objc_msgSend(v16, "setText:", CFSTR("返回宿主主页"));
  v17 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIFont systemFontOfSize:weight:](
                    &OBJC_CLASS___UIFont,
                    "systemFontOfSize:weight:",
                    14.0,
                    UIFontWeightSemibold));
  objc_msgSend(v16, "setFont:", v17);
  objc_release(v17);
  v18 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor whiteColor](&OBJC_CLASS___UIColor, "whiteColor"));
  v59 = v16;
  objc_msgSend(v16, "setTextColor:", v18);
  objc_release(v18);
  v19 = objc_alloc_init((Class)&OBJC_CLASS___UILabel);
  objc_msgSend(v19, "setText:", CFSTR("退出当前客态，回到容器管理页"));
  v20 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIFont systemFontOfSize:weight:](
                    &OBJC_CLASS___UIFont,
                    "systemFontOfSize:weight:",
                    11.0,
                    UIFontWeightRegular));
  v58 = v19;
  objc_msgSend(v19, "setFont:", v20);
  objc_release(v20);
  v21 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.7));
  objc_msgSend(v19, "setTextColor:", v21);
  objc_release(v21);
  objc_msgSend(v15, "addArrangedSubview:", v16);
  objc_msgSend(v15, "addArrangedSubview:", v19);
  -[UIButton addSubview:](self->_returnHomeCard, "addSubview:", v15);
  v22 = objc_alloc_init((Class)&OBJC_CLASS___UIImageView);
  v57 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIImageSymbolConfiguration configurationWithPointSize:weight:](
                    &OBJC_CLASS___UIImageSymbolConfiguration,
                    "configurationWithPointSize:weight:",
                    5,
                    12.0));
  v23 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIImage systemImageNamed:withConfiguration:](
                    &OBJC_CLASS___UIImage,
                    "systemImageNamed:withConfiguration:",
                    CFSTR("chevron.right"),
                    v57));
  objc_msgSend(v22, "setImage:", v23);
  objc_release(v23);
  v24 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.4));
  objc_msgSend(v22, "setTintColor:", v24);
  objc_release(v24);
  objc_msgSend(v22, "setContentMode:", 1);
  objc_msgSend(v22, "setTranslatesAutoresizingMaskIntoConstraints:", 0);
  -[UIButton addSubview:](self->_returnHomeCard, "addSubview:", v22);
  v56 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v12, "leadingAnchor"));
  v55 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton leadingAnchor](self->_returnHomeCard, "leadingAnchor"));
  v54 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v56, "constraintEqualToAnchor:constant:", v55, 14.0));
  v61[0] = v54;
  v52 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v12, "centerYAnchor"));
  v51 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton centerYAnchor](self->_returnHomeCard, "centerYAnchor"));
  v50 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v52, "constraintEqualToAnchor:", v51));
  v61[1] = v50;
  v49 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v12, "widthAnchor"));
  v48 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v49, "constraintEqualToConstant:", 22.0));
  v61[2] = v48;
  v53 = v12;
  v46 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v12, "heightAnchor"));
  v45 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v46, "constraintEqualToConstant:", 22.0));
  v61[3] = v45;
  v44 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v15, "leadingAnchor"));
  v43 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v12, "trailingAnchor"));
  v42 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v44, "constraintEqualToAnchor:constant:", v43, 10.0));
  v61[4] = v42;
  v47 = v15;
  v41 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v15, "centerYAnchor"));
  v40 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton centerYAnchor](self->_returnHomeCard, "centerYAnchor"));
  v39 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v41, "constraintEqualToAnchor:", v40));
  v61[5] = v39;
  v38 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v15, "trailingAnchor"));
  v37 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v22, "leadingAnchor"));
  v36 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v38, "constraintLessThanOrEqualToAnchor:constant:", v37, -8.0));
  v61[6] = v36;
  v35 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v22, "trailingAnchor"));
  v34 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton trailingAnchor](self->_returnHomeCard, "trailingAnchor"));
  v25 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v35, "constraintEqualToAnchor:constant:", v34, -14.0));
  v61[7] = v25;
  v26 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v22, "centerYAnchor"));
  v27 = (void *)objc_claimAutoreleasedReturnValue(-[UIButton centerYAnchor](self->_returnHomeCard, "centerYAnchor"));
  v28 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v26, "constraintEqualToAnchor:", v27));
  v61[8] = v28;
  v29 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v22, "widthAnchor"));
  v30 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v29, "constraintEqualToConstant:", 12.0));
  v61[9] = v30;
  v31 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v22, "heightAnchor"));
  v32 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v31, "constraintEqualToConstant:", 12.0));
  v61[10] = v32;
  v33 = (void *)objc_claimAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v61, 11));
  +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v33);
  objc_release(v33);
  objc_release(v32);
  objc_release(v31);
  objc_release(v30);
  objc_release(v29);
  objc_release(v28);
  objc_release(v27);
  objc_release(v26);
  objc_release(v25);
  objc_release(v34);
  objc_release(v35);
  objc_release(v36);
  objc_release(v37);
  objc_release(v38);
  objc_release(v39);
  objc_release(v40);
  objc_release(v41);
  objc_release(v42);
  objc_release(v43);
  objc_release(v44);
  objc_release(v45);
  objc_release(v46);
  objc_release(v48);
  objc_release(v49);
  objc_release(v50);
  objc_release(v51);
  objc_release(v52);
  objc_release(v54);
  objc_release(v55);
  objc_release(v56);
  objc_release(v57);
  objc_release(v22);
  objc_release(v58);
  objc_release(v59);
  objc_release(v47);
  objc_release(v60);
  objc_release(v53);
}


// -[LCSingleTaskDrawerView handleClose] @ 0x746C
void __cdecl -[LCSingleTaskDrawerView handleClose](LCSingleTaskDrawerView *self, SEL a2)
{
  void *v3; // x20
  void (**v4)(void); // x20
  void *v5; // x20
  void (**v6)(void); // [xsp+8h] [xbp-18h]

  v3 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView onUserInteraction](self, "onUserInteraction"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = (void (**)(void))objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView onUserInteraction](self, "onUserInteraction"));
    v4[2]();
    objc_release(v4);
  }
  v5 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView onClose](self, "onClose"));
  objc_release(v5);
  if ( v5 )
  {
    v6 = (void (**)(void))objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView onClose](self, "onClose"));
    v6[2]();
    objc_release(v6);
  }
}


// -[LCSingleTaskDrawerView handleReturnHome] @ 0x7504
void __cdecl -[LCSingleTaskDrawerView handleReturnHome](LCSingleTaskDrawerView *self, SEL a2)
{
  void *v3; // x20
  void (**v4)(void); // x20
  void *v5; // x20
  void (**v6)(void); // [xsp+8h] [xbp-18h]

  v3 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView onUserInteraction](self, "onUserInteraction"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = (void (**)(void))objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView onUserInteraction](self, "onUserInteraction"));
    v4[2]();
    objc_release(v4);
  }
  v5 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView onReturnHome](self, "onReturnHome"));
  objc_release(v5);
  if ( v5 )
  {
    v6 = (void (**)(void))objc_claimAutoreleasedReturnValue(-[LCSingleTaskDrawerView onReturnHome](self, "onReturnHome"));
    v6[2]();
    objc_release(v6);
  }
}


// -[LCSingleTaskDrawerView reloadWithApps:runningFolder:] @ 0x759C
void __cdecl -[LCSingleTaskDrawerView reloadWithApps:runningFolder:](
        LCSingleTaskDrawerView *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x20
  void *v8; // x22
  void *v9; // x23
  void *v10; // x22
  void *v11; // x0
  void *v12; // x23
  __int64 v13; // x25
  void *i; // x27
  void *v15; // x24
  id v16; // x21
  void *v17; // x0
  void *v18; // x22
  __int64 v19; // x27
  void *j; // x28
  void *v21; // x23
  void *v22; // x25
  void *v23; // x24
  void *v24; // x23
  __int128 v25; // [xsp+10h] [xbp-1E0h] BYREF
  __int128 v26; // [xsp+20h] [xbp-1D0h]
  __int128 v27; // [xsp+30h] [xbp-1C0h]
  __int128 v28; // [xsp+40h] [xbp-1B0h]
  __int128 v29; // [xsp+50h] [xbp-1A0h] BYREF
  __int128 v30; // [xsp+60h] [xbp-190h]
  __int128 v31; // [xsp+70h] [xbp-180h]
  __int128 v32; // [xsp+80h] [xbp-170h]
  _BYTE v33[128]; // [xsp+90h] [xbp-160h] BYREF
  _BYTE v34[128]; // [xsp+110h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (void *)objc_claimAutoreleasedReturnValue(
                 +[NSString stringWithFormat:](
                   &OBJC_CLASS___NSString,
                   "stringWithFormat:",
                   CFSTR(" %lu "),
                   objc_msgSend(v6, "count")));
  -[UILabel setText:](self->_countBadge, "setText:", v8);
  objc_release(v8);
  v31 = 0u;
  v32 = 0u;
  v29 = 0u;
  v30 = 0u;
  v9 = (void *)objc_claimAutoreleasedReturnValue(-[UIStackView arrangedSubviews](self->_stackView, "arrangedSubviews"));
  v10 = objc_msgSend(v9, "copy");
  objc_release(v9);
  v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v29, v34, 16);
  if ( v11 )
  {
    v12 = v11;
    v13 = *(_QWORD *)v30;
    do
    {
      for ( i = 0; i != v12; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v30 != v13 )
          objc_enumerationMutation(v10);
        v15 = *(void **)(*((_QWORD *)&v29 + 1) + 8LL * (_QWORD)i);
        -[UIStackView removeArrangedSubview:](self->_stackView, "removeArrangedSubview:", v15);
        objc_msgSend(v15, "removeFromSuperview");
      }
      v12 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v29, v34, 16);
    }
    while ( v12 );
  }
  objc_release(v10);
  v27 = 0u;
  v28 = 0u;
  v25 = 0u;
  v26 = 0u;
  v16 = objc_retain(v6);
  v17 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v25, v33, 16);
  if ( v17 )
  {
    v18 = v17;
    v19 = *(_QWORD *)v26;
    do
    {
      for ( j = 0; j != v18; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v26 != v19 )
          objc_enumerationMutation(v16);
        v21 = *(void **)(*((_QWORD *)&v25 + 1) + 8LL * (_QWORD)j);
        if ( objc_msgSend(v7, "length") )
        {
          v22 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v21, "folderName"));
          v23 = objc_msgSend(v22, "isEqualToString:", v7);
          objc_release(v22);
        }
        else
        {
          v23 = 0;
        }
        v24 = (void *)objc_claimAutoreleasedReturnValue(
                        -[LCSingleTaskDrawerView createAppRowWithApp:isRunning:](
                          self,
                          "createAppRowWithApp:isRunning:",
                          v21,
                          v23));
        -[UIStackView addArrangedSubview:](self->_stackView, "addArrangedSubview:", v24);
        objc_release(v24);
      }
      v18 = objc_msgSend(v16, "countByEnumeratingWithState:objects:count:", &v25, v33, 16);
    }
    while ( v18 );
  }
  objc_release(v16);
  objc_release(v7);
  objc_release(v16);
}


// -[LCSingleTaskDrawerView createAppRowWithApp:isRunning:] @ 0x781C
id __cdecl -[LCSingleTaskDrawerView createAppRowWithApp:isRunning:](
        LCSingleTaskDrawerView *self,
        SEL a2,
        id a3,
        bool a4)
{
  _BOOL4 v4; // w27
  void *v5; // x19
  void *v6; // x20
  void *v7; // x21
  double v8; // d8
  void *v9; // x19
  void *v10; // x19
  void *v11; // x19
  void *v12; // x19
  void *v13; // x20
  void *v14; // x21
  void *v15; // x22
  void *v16; // x19
  void *v17; // x21
  void *v18; // x20
  void *v19; // x19
  void *v20; // x19
  void *v21; // x19
  void *v22; // x19
  void *v23; // x20
  void *v24; // x21
  id v25; // x19
  void *v26; // x19
  const UIFontWeight *v27; // x8
  void *v28; // x19
  void *v29; // x19
  void *v30; // x19
  void *v31; // x20
  __CFString *v32; // x21
  void *v33; // x19
  void *v34; // x20
  void *v35; // x19
  void *v36; // x19
  id v37; // x19
  void *v38; // x20
  void *v39; // x20
  void *v40; // x20
  void *v41; // x21
  void *v42; // x20
  void *v43; // x20
  void *v44; // x20
  void *v45; // x21
  void *v46; // x19
  void *v47; // x22
  void *v48; // x23
  id v49; // x19
  void *v50; // x21
  void *v51; // x21
  void *v52; // x25
  void *v53; // x25
  void *v54; // x28
  void *v55; // x19
  void *v56; // x21
  void *v57; // x22
  void *v58; // x27
  void *v59; // x26
  void *v60; // x20
  void *v61; // x24
  void *v62; // x23
  id v63; // x19
  void *v64; // x20
  __CFString *v67; // [xsp+28h] [xbp-1E8h]
  void *v68; // [xsp+30h] [xbp-1E0h]
  void *v69; // [xsp+38h] [xbp-1D8h]
  void *v70; // [xsp+40h] [xbp-1D0h]
  void *v71; // [xsp+48h] [xbp-1C8h]
  void *v72; // [xsp+50h] [xbp-1C0h]
  void *v73; // [xsp+58h] [xbp-1B8h]
  void *v74; // [xsp+60h] [xbp-1B0h]
  void *v75; // [xsp+68h] [xbp-1A8h]
  void *v76; // [xsp+70h] [xbp-1A0h]
  void *v77; // [xsp+78h] [xbp-198h]
  void *v78; // [xsp+80h] [xbp-190h]
  void *v79; // [xsp+88h] [xbp-188h]
  void *v80; // [xsp+90h] [xbp-180h]
  void *v81; // [xsp+98h] [xbp-178h]
  void *v82; // [xsp+A0h] [xbp-170h]
  void *v83; // [xsp+A8h] [xbp-168h]
  void *v84; // [xsp+B0h] [xbp-160h]
  void *v85; // [xsp+B8h] [xbp-158h]
  id v86; // [xsp+C0h] [xbp-150h]
  void *v87; // [xsp+C8h] [xbp-148h]
  id v88; // [xsp+D0h] [xbp-140h]
  id v89; // [xsp+D8h] [xbp-138h]
  id v90; // [xsp+E0h] [xbp-130h]
  id v91; // [xsp+E8h] [xbp-128h]
  id v92; // [xsp+F0h] [xbp-120h]
  _QWORD v93[4]; // [xsp+F8h] [xbp-118h] BYREF
  id v94; // [xsp+118h] [xbp-F8h]
  id v95; // [xsp+120h] [xbp-F0h] BYREF
  id location; // [xsp+128h] [xbp-E8h] BYREF
  _QWORD v97[10]; // [xsp+130h] [xbp-E0h] BYREF
  _QWORD v98[2]; // [xsp+180h] [xbp-90h] BYREF
  _QWORD v99[2]; // [xsp+190h] [xbp-80h] BYREF

  v4 = a4;
  v89 = objc_retain(a3);
  v92 = (id)objc_claimAutoreleasedReturnValue(+[UIButton buttonWithType:](&OBJC_CLASS___UIButton, "buttonWithType:", 0));
  objc_msgSend(v92, "setTranslatesAutoresizingMaskIntoConstraints:", 0);
  if ( v4 )
  {
    v5 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor systemGreenColor](&OBJC_CLASS___UIColor, "systemGreenColor"));
    v6 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v5, "colorWithAlphaComponent:", 0.22));
    v7 = v92;
    objc_msgSend(v92, "setBackgroundColor:", v6);
    objc_release(v6);
    v8 = 1.0;
  }
  else
  {
    v5 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.09));
    v7 = v92;
    objc_msgSend(v92, "setBackgroundColor:", v5);
    v8 = 0.5;
  }
  objc_release(v5);
  v9 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v7, "layer"));
  objc_msgSend(v9, "setCornerRadius:", 14.0);
  objc_release(v9);
  v10 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v92, "layer"));
  objc_msgSend(v10, "setCornerCurve:", kCACornerCurveContinuous);
  objc_release(v10);
  v11 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v92, "layer"));
  objc_msgSend(v11, "setBorderWidth:", v8);
  objc_release(v11);
  if ( v4 )
  {
    v12 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor systemGreenColor](&OBJC_CLASS___UIColor, "systemGreenColor"));
    v13 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v12, "colorWithAlphaComponent:", 0.6));
  }
  else
  {
    v13 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.18));
    v12 = v13;
  }
  v14 = objc_msgSend(objc_retainAutorelease(v13), "CGColor");
  v15 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v92, "layer"));
  objc_msgSend(v15, "setBorderColor:", v14);
  objc_release(v15);
  if ( v4 )
    objc_release(v13);
  objc_release(v12);
  v91 = objc_alloc_init((Class)&OBJC_CLASS___UIImageView);
  v16 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v89, "icon"));
  if ( v16 )
  {
    v17 = v91;
    objc_msgSend(v91, "setImage:", v16);
  }
  else
  {
    v18 = (void *)objc_claimAutoreleasedReturnValue(+[UIImage systemImageNamed:](&OBJC_CLASS___UIImage, "systemImageNamed:", CFSTR("app.fill")));
    v17 = v91;
    objc_msgSend(v91, "setImage:", v18);
    objc_release(v18);
  }
  objc_release(v16);
  objc_msgSend(v17, "setContentMode:", 2);
  v19 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v17, "layer"));
  objc_msgSend(v19, "setCornerRadius:", 10.0);
  objc_release(v19);
  v20 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v91, "layer"));
  objc_msgSend(v20, "setCornerCurve:", kCACornerCurveContinuous);
  objc_release(v20);
  objc_msgSend(v91, "setClipsToBounds:", 1);
  v21 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v91, "layer"));
  objc_msgSend(v21, "setBorderWidth:", 0.5);
  objc_release(v21);
  v22 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.25));
  v23 = objc_msgSend(objc_retainAutorelease(v22), "CGColor");
  v24 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v91, "layer"));
  objc_msgSend(v24, "setBorderColor:", v23);
  objc_release(v24);
  objc_release(v22);
  objc_msgSend(v91, "setTranslatesAutoresizingMaskIntoConstraints:", 0);
  objc_msgSend(v92, "addSubview:", v91);
  v25 = objc_alloc_init((Class)&OBJC_CLASS___UIStackView);
  objc_msgSend(v25, "setAxis:", 1);
  objc_msgSend(v25, "setSpacing:", 2.0);
  objc_msgSend(v25, "setTranslatesAutoresizingMaskIntoConstraints:", 0);
  v87 = v25;
  objc_msgSend(v25, "setUserInteractionEnabled:", 0);
  v88 = objc_alloc_init((Class)&OBJC_CLASS___UILabel);
  v26 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v89, "name"));
  objc_msgSend(v88, "setText:", v26);
  objc_release(v26);
  v27 = &UIFontWeightBold;
  if ( !v4 )
    v27 = &UIFontWeightMedium;
  v28 = (void *)objc_claimAutoreleasedReturnValue(+[UIFont systemFontOfSize:weight:](&OBJC_CLASS___UIFont, "systemFontOfSize:weight:", 14.0, *v27));
  objc_msgSend(v88, "setFont:", v28);
  objc_release(v28);
  v29 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor whiteColor](&OBJC_CLASS___UIColor, "whiteColor"));
  objc_msgSend(v88, "setTextColor:", v29);
  objc_release(v29);
  objc_msgSend(v88, "setNumberOfLines:", 1);
  v86 = objc_alloc_init((Class)&OBJC_CLASS___UILabel);
  v30 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v89, "version"));
  if ( objc_msgSend(v30, "length") )
  {
    v31 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v89, "version"));
    v32 = (__CFString *)objc_claimAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("v%@"), v31));
    objc_release(v31);
    objc_release(v30);
    v67 = v32;
    if ( -[__CFString length](v32, "length") )
    {
LABEL_16:
      v33 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v89, "folderName"));
      v34 = (void *)objc_claimAutoreleasedReturnValue(
                      +[NSString stringWithFormat:](
                        &OBJC_CLASS___NSString,
                        "stringWithFormat:",
                        CFSTR("%@ • %@"),
                        v67,
                        v33));
      objc_msgSend(v86, "setText:", v34);
      objc_release(v34);
      goto LABEL_19;
    }
  }
  else
  {
    objc_release(v30);
    v67 = &stru_144B0;
    if ( objc_msgSend(&stru_144B0, "length") )
      goto LABEL_16;
  }
  v33 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v89, "folderName"));
  objc_msgSend(v86, "setText:", v33);
LABEL_19:
  objc_release(v33);
  v35 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIFont systemFontOfSize:weight:](
                    &OBJC_CLASS___UIFont,
                    "systemFontOfSize:weight:",
                    11.0,
                    UIFontWeightRegular));
  objc_msgSend(v86, "setFont:", v35);
  objc_release(v35);
  v36 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.65));
  objc_msgSend(v86, "setTextColor:", v36);
  objc_release(v36);
  objc_msgSend(v86, "setNumberOfLines:", 1);
  objc_msgSend(v87, "addArrangedSubview:", v88);
  objc_msgSend(v87, "addArrangedSubview:", v86);
  objc_msgSend(v92, "addSubview:", v87);
  if ( v4 )
  {
    v37 = objc_alloc_init((Class)&OBJC_CLASS___UILabel);
    objc_msgSend(v37, "setText:", CFSTR("● 运行中"));
    v38 = (void *)objc_claimAutoreleasedReturnValue(
                    +[UIFont systemFontOfSize:weight:](
                      &OBJC_CLASS___UIFont,
                      "systemFontOfSize:weight:",
                      11.0,
                      UIFontWeightSemibold));
    objc_msgSend(v37, "setFont:", v38);
    objc_release(v38);
    v39 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor systemGreenColor](&OBJC_CLASS___UIColor, "systemGreenColor"));
    objc_msgSend(v37, "setTextColor:", v39);
    objc_release(v39);
    v40 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor systemGreenColor](&OBJC_CLASS___UIColor, "systemGreenColor"));
    v41 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v40, "colorWithAlphaComponent:", 0.25));
    objc_msgSend(v37, "setBackgroundColor:", v41);
    objc_release(v41);
    objc_release(v40);
    v42 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v37, "layer"));
    objc_msgSend(v42, "setCornerRadius:", 9.0);
    objc_release(v42);
    v43 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v37, "layer"));
    objc_msgSend(v43, "setCornerCurve:", kCACornerCurveContinuous);
    objc_release(v43);
    objc_msgSend(v37, "setClipsToBounds:", 1);
    objc_msgSend(v37, "setTextAlignment:", 1);
    objc_msgSend(v37, "setTranslatesAutoresizingMaskIntoConstraints:", 0);
    v90 = objc_retain(v37);
    v44 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v90, "widthAnchor"));
    v45 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v44, "constraintEqualToConstant:", 62.0));
    v99[0] = v45;
    v46 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v90, "heightAnchor"));
    objc_release(v90);
    v47 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v46, "constraintEqualToConstant:", 20.0));
    v99[1] = v47;
    v48 = (void *)objc_claimAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v99, 2));
    +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v48);
  }
  else
  {
    v49 = objc_alloc_init((Class)&OBJC_CLASS___UIImageView);
    v44 = (void *)objc_claimAutoreleasedReturnValue(
                    +[UIImageSymbolConfiguration configurationWithPointSize:weight:](
                      &OBJC_CLASS___UIImageSymbolConfiguration,
                      "configurationWithPointSize:weight:",
                      5,
                      14.0));
    v50 = (void *)objc_claimAutoreleasedReturnValue(
                    +[UIImage systemImageNamed:withConfiguration:](
                      &OBJC_CLASS___UIImage,
                      "systemImageNamed:withConfiguration:",
                      CFSTR("arrow.right.circle"),
                      v44));
    objc_msgSend(v49, "setImage:", v50);
    objc_release(v50);
    v51 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.4));
    objc_msgSend(v49, "setTintColor:", v51);
    objc_release(v51);
    objc_msgSend(v49, "setContentMode:", 1);
    objc_msgSend(v49, "setTranslatesAutoresizingMaskIntoConstraints:", 0);
    v90 = objc_retain(v49);
    v45 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v90, "widthAnchor"));
    v46 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v45, "constraintEqualToConstant:", 18.0));
    v98[0] = v46;
    v47 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v90, "heightAnchor"));
    objc_release(v90);
    v48 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v47, "constraintEqualToConstant:", 18.0));
    v98[1] = v48;
    v52 = (void *)objc_claimAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v98, 2));
    +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v52);
    objc_release(v52);
  }
  objc_release(v48);
  objc_release(v47);
  objc_release(v46);
  objc_release(v45);
  objc_release(v44);
  objc_msgSend(v92, "addSubview:", v90);
  v85 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v92, "heightAnchor"));
  v84 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v85, "constraintEqualToConstant:", 54.0));
  v97[0] = v84;
  v83 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v91, "leadingAnchor"));
  v82 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v92, "leadingAnchor"));
  v81 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v83, "constraintEqualToAnchor:constant:", v82, 10.0));
  v97[1] = v81;
  v80 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v91, "centerYAnchor"));
  v79 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v92, "centerYAnchor"));
  v78 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v80, "constraintEqualToAnchor:", v79));
  v97[2] = v78;
  v77 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v91, "widthAnchor"));
  v76 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v77, "constraintEqualToConstant:", 38.0));
  v97[3] = v76;
  v75 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v91, "heightAnchor"));
  v74 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v75, "constraintEqualToConstant:", 38.0));
  v97[4] = v74;
  v73 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v87, "leadingAnchor"));
  v72 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v91, "trailingAnchor"));
  v71 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v73, "constraintEqualToAnchor:constant:", v72, 10.0));
  v97[5] = v71;
  v70 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v87, "centerYAnchor"));
  v69 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v92, "centerYAnchor"));
  v68 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v70, "constraintEqualToAnchor:", v69));
  v97[6] = v68;
  v53 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v87, "trailingAnchor"));
  v54 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v90, "leadingAnchor"));
  v55 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v53, "constraintLessThanOrEqualToAnchor:constant:", v54, -8.0));
  v97[7] = v55;
  v56 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v90, "trailingAnchor"));
  v57 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v92, "trailingAnchor"));
  v58 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v56, "constraintEqualToAnchor:constant:", v57, -12.0));
  v97[8] = v58;
  v59 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v90, "centerYAnchor"));
  v60 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v92, "centerYAnchor"));
  v61 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v59, "constraintEqualToAnchor:", v60));
  v97[9] = v61;
  v62 = (void *)objc_claimAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v97, 10));
  +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v62);
  objc_release(v62);
  objc_release(v61);
  objc_release(v60);
  objc_release(v59);
  objc_release(v58);
  objc_release(v57);
  objc_release(v56);
  objc_release(v55);
  objc_release(v54);
  objc_release(v53);
  objc_release(v68);
  objc_release(v69);
  objc_release(v70);
  objc_release(v71);
  objc_release(v72);
  objc_release(v73);
  objc_release(v74);
  objc_release(v75);
  objc_release(v76);
  objc_release(v77);
  objc_release(v78);
  objc_release(v79);
  objc_release(v80);
  objc_release(v81);
  objc_release(v82);
  objc_release(v83);
  objc_release(v84);
  objc_release(v85);
  objc_initWeak(&location, self);
  v93[0] = _NSConcreteStackBlock;
  v93[1] = 3254779904LL;
  v93[2] = sub_84CC;
  v93[3] = &unk_14090;
  objc_copyWeak(&v95, &location);
  v63 = objc_retain(v89);
  v94 = v63;
  v64 = (void *)objc_claimAutoreleasedReturnValue(+[UIAction actionWithHandler:](&OBJC_CLASS___UIAction, "actionWithHandler:", v93));
  objc_msgSend(v92, "addAction:forControlEvents:", v64, 64);
  objc_release(v64);
  objc_release(v94);
  objc_destroyWeak(&v95);
  objc_destroyWeak(&location);
  objc_release(v90);
  objc_release(v67);
  objc_release(v86);
  objc_release(v88);
  objc_release(v87);
  objc_release(v91);
  objc_release(v63);
  return objc_autoreleaseReturnValue(v92);
}


// -[LCSingleTaskDrawerView onSelectApp] @ 0x8600
id __cdecl -[LCSingleTaskDrawerView onSelectApp](LCSingleTaskDrawerView *self, SEL a2)
{
  return self->_onSelectApp;
}


// -[LCSingleTaskDrawerView setOnSelectApp:] @ 0x8610
void __cdecl -[LCSingleTaskDrawerView setOnSelectApp:](LCSingleTaskDrawerView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 80);
}


// -[LCSingleTaskDrawerView onReturnHome] @ 0x861C
id __cdecl -[LCSingleTaskDrawerView onReturnHome](LCSingleTaskDrawerView *self, SEL a2)
{
  return self->_onReturnHome;
}


// -[LCSingleTaskDrawerView setOnReturnHome:] @ 0x862C
void __cdecl -[LCSingleTaskDrawerView setOnReturnHome:](LCSingleTaskDrawerView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 88);
}


// -[LCSingleTaskDrawerView onClose] @ 0x8638
id __cdecl -[LCSingleTaskDrawerView onClose](LCSingleTaskDrawerView *self, SEL a2)
{
  return self->_onClose;
}


// -[LCSingleTaskDrawerView setOnClose:] @ 0x8648
void __cdecl -[LCSingleTaskDrawerView setOnClose:](LCSingleTaskDrawerView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 96);
}


// -[LCSingleTaskDrawerView onUserInteraction] @ 0x8654
id __cdecl -[LCSingleTaskDrawerView onUserInteraction](LCSingleTaskDrawerView *self, SEL a2)
{
  return self->_onUserInteraction;
}


// -[LCSingleTaskDrawerView setOnUserInteraction:] @ 0x8664
void __cdecl -[LCSingleTaskDrawerView setOnUserInteraction:](LCSingleTaskDrawerView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 104);
}


// -[LCSingleTaskDrawerView .cxx_destruct] @ 0x8670
void __cdecl -[LCSingleTaskDrawerView .cxx_destruct](LCSingleTaskDrawerView *self, SEL a2)
{
  objc_storeStrong(&self->_onUserInteraction, 0);
  objc_storeStrong(&self->_onClose, 0);
  objc_storeStrong(&self->_onReturnHome, 0);
  objc_storeStrong(&self->_onSelectApp, 0);
  objc_storeStrong((id *)&self->_stackView, 0);
  objc_storeStrong((id *)&self->_scrollView, 0);
  objc_storeStrong((id *)&self->_divider, 0);
  objc_storeStrong((id *)&self->_returnHomeCard, 0);
  objc_storeStrong((id *)&self->_closeButton, 0);
  objc_storeStrong((id *)&self->_countBadge, 0);
  objc_storeStrong((id *)&self->_titleLabel, 0);
  objc_storeStrong((id *)&self->_headerView, 0);
  objc_storeStrong((id *)&self->_blurView, 0);
}




/* ===== CLASS LCSingleTaskHandoffView ===== */
// -[LCSingleTaskHandoffView initWithFrame:] @ 0x4CF0
LCSingleTaskHandoffView *__cdecl -[LCSingleTaskHandoffView initWithFrame:](
        LCSingleTaskHandoffView *self,
        SEL a2,
        CGRect a3)
{
  LCSingleTaskHandoffView *result; // x0
  LCSingleTaskHandoffView *v4; // x19
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___LCSingleTaskHandoffView;
  result = -[LCSingleTaskHandoffView initWithFrame:](
             &v5,
             "initWithFrame:",
             a3.origin.x,
             a3.origin.y,
             a3.size.width,
             a3.size.height);
  if ( result )
  {
    v4 = result;
    -[LCSingleTaskHandoffView setupUI](result, "setupUI");
    return v4;
  }
  return result;
}


// -[LCSingleTaskHandoffView setupUI] @ 0x4D3C
void __cdecl -[LCSingleTaskHandoffView setupUI](LCSingleTaskHandoffView *self, SEL a2)
{
  void *v3; // x19
  UIVisualEffectView *v4; // x0
  UIVisualEffectView *blurView; // x8
  id v6; // x19
  UIView *v7; // x0
  UIView *dimView; // x8
  void *v9; // x19
  UIView *v10; // x0
  UIView *cardView; // x8
  void *v12; // x19
  void *v13; // x19
  void *v14; // x21
  void *v15; // x21
  void *v16; // x21
  void *v17; // x22
  void *v18; // x23
  void *v19; // x21
  void *v20; // x22
  void *v21; // x23
  void *v22; // x21
  double v23; // d0
  void *v24; // x21
  void *v25; // x21
  UIImageView *v26; // x0
  UIImageView *iconImageView; // x8
  void *v28; // x21
  void *v29; // x21
  void *v30; // x19
  void *v31; // x19
  void *v32; // x21
  void *v33; // x22
  UILabel *v34; // x0
  UILabel *titleLabel; // x8
  void *v36; // x19
  void *v37; // x19
  UIActivityIndicatorView *v38; // x0
  UIActivityIndicatorView *spinner; // x8
  void *v40; // x19
  UILabel *v41; // x0
  UILabel *statusLabel; // x8
  void *v43; // x19
  void *v44; // x19
  void *v45; // x21
  void *v46; // x22
  void *v47; // x23
  void *v48; // x24
  void *v49; // x25
  void *v50; // x26
  void *v51; // x27
  void *v52; // x20
  void *v53; // x28
  void *v54; // x19
  void *v55; // [xsp+0h] [xbp-220h]
  void *v56; // [xsp+8h] [xbp-218h]
  void *v57; // [xsp+10h] [xbp-210h]
  void *v58; // [xsp+18h] [xbp-208h]
  void *v59; // [xsp+20h] [xbp-200h]
  void *v60; // [xsp+28h] [xbp-1F8h]
  void *v61; // [xsp+30h] [xbp-1F0h]
  void *v62; // [xsp+38h] [xbp-1E8h]
  void *v63; // [xsp+40h] [xbp-1E0h]
  void *v64; // [xsp+48h] [xbp-1D8h]
  void *v65; // [xsp+50h] [xbp-1D0h]
  void *v66; // [xsp+58h] [xbp-1C8h]
  void *v67; // [xsp+60h] [xbp-1C0h]
  void *v68; // [xsp+68h] [xbp-1B8h]
  void *v69; // [xsp+70h] [xbp-1B0h]
  void *v70; // [xsp+78h] [xbp-1A8h]
  void *v71; // [xsp+80h] [xbp-1A0h]
  void *v72; // [xsp+88h] [xbp-198h]
  void *v73; // [xsp+90h] [xbp-190h]
  void *v74; // [xsp+A0h] [xbp-180h]
  void *v75; // [xsp+A8h] [xbp-178h]
  void *v76; // [xsp+B0h] [xbp-170h]
  void *v77; // [xsp+B8h] [xbp-168h]
  void *v78; // [xsp+C0h] [xbp-160h]
  void *v79; // [xsp+C8h] [xbp-158h]
  void *v80; // [xsp+D0h] [xbp-150h]
  void *v81; // [xsp+D8h] [xbp-148h]
  void *v82; // [xsp+E0h] [xbp-140h]
  void *v83; // [xsp+E8h] [xbp-138h]
  void *v84; // [xsp+F0h] [xbp-130h]
  void *v85; // [xsp+F8h] [xbp-128h]
  void *v86; // [xsp+100h] [xbp-120h]
  void *v87; // [xsp+108h] [xbp-118h]
  void *v88; // [xsp+110h] [xbp-110h]
  void *v89; // [xsp+118h] [xbp-108h]
  void *v90; // [xsp+120h] [xbp-100h]
  void *v91; // [xsp+128h] [xbp-F8h]
  _QWORD v92[16]; // [xsp+130h] [xbp-F0h] BYREF

  -[LCSingleTaskHandoffView setAlpha:](self, "setAlpha:", 0.0);
  v3 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor clearColor](&OBJC_CLASS___UIColor, "clearColor"));
  -[LCSingleTaskHandoffView setBackgroundColor:](self, "setBackgroundColor:", v3);
  objc_release(v3);
  -[LCSingleTaskHandoffView setAutoresizingMask:](self, "setAutoresizingMask:", 18);
  v91 = (void *)objc_claimAutoreleasedReturnValue(+[UIBlurEffect effectWithStyle:](&OBJC_CLASS___UIBlurEffect, "effectWithStyle:", 16));
  v4 = (UIVisualEffectView *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UIVisualEffectView), "initWithEffect:", v91);
  blurView = self->_blurView;
  self->_blurView = v4;
  objc_release(blurView);
  -[LCSingleTaskHandoffView bounds](self, "bounds");
  -[UIVisualEffectView setFrame:](self->_blurView, "setFrame:");
  -[UIVisualEffectView setAutoresizingMask:](self->_blurView, "setAutoresizingMask:", 18);
  -[LCSingleTaskHandoffView addSubview:](self, "addSubview:", self->_blurView);
  v6 = objc_alloc((Class)&OBJC_CLASS___UIView);
  -[LCSingleTaskHandoffView bounds](self, "bounds");
  v7 = (UIView *)objc_msgSend(v6, "initWithFrame:");
  dimView = self->_dimView;
  self->_dimView = v7;
  objc_release(dimView);
  -[UIView setAutoresizingMask:](self->_dimView, "setAutoresizingMask:", 18);
  v9 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 0.0, 0.45));
  -[UIView setBackgroundColor:](self->_dimView, "setBackgroundColor:", v9);
  objc_release(v9);
  -[LCSingleTaskHandoffView addSubview:](self, "addSubview:", self->_dimView);
  v10 = (UIView *)objc_alloc_init((Class)&OBJC_CLASS___UIView);
  cardView = self->_cardView;
  self->_cardView = v10;
  objc_release(cardView);
  -[UIView setTranslatesAutoresizingMaskIntoConstraints:](
    self->_cardView,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  v12 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 0.12, 0.92));
  -[UIView setBackgroundColor:](self->_cardView, "setBackgroundColor:", v12);
  objc_release(v12);
  v13 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_cardView, "layer"));
  objc_msgSend(v13, "setCornerRadius:", 24.0);
  objc_release(v13);
  v14 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_cardView, "layer"));
  objc_msgSend(v14, "setCornerCurve:", kCACornerCurveContinuous);
  objc_release(v14);
  v15 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_cardView, "layer"));
  objc_msgSend(v15, "setBorderWidth:", 0.8);
  objc_release(v15);
  v16 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.25));
  v17 = objc_msgSend(objc_retainAutorelease(v16), "CGColor");
  v18 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_cardView, "layer"));
  objc_msgSend(v18, "setBorderColor:", v17);
  objc_release(v18);
  objc_release(v16);
  v19 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor blackColor](&OBJC_CLASS___UIColor, "blackColor"));
  v20 = objc_msgSend(objc_retainAutorelease(v19), "CGColor");
  v21 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_cardView, "layer"));
  objc_msgSend(v21, "setShadowColor:", v20);
  objc_release(v21);
  objc_release(v19);
  v22 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_cardView, "layer"));
  LODWORD(v23) = 1055286886;
  objc_msgSend(v22, "setShadowOpacity:", v23);
  objc_release(v22);
  v24 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_cardView, "layer"));
  objc_msgSend(v24, "setShadowRadius:", 24.0);
  objc_release(v24);
  v25 = (void *)objc_claimAutoreleasedReturnValue(-[UIView layer](self->_cardView, "layer"));
  objc_msgSend(v25, "setShadowOffset:", 0.0, 8.0);
  objc_release(v25);
  -[LCSingleTaskHandoffView addSubview:](self, "addSubview:", self->_cardView);
  v26 = (UIImageView *)objc_alloc_init((Class)&OBJC_CLASS___UIImageView);
  iconImageView = self->_iconImageView;
  self->_iconImageView = v26;
  objc_release(iconImageView);
  -[UIImageView setTranslatesAutoresizingMaskIntoConstraints:](
    self->_iconImageView,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  -[UIImageView setContentMode:](self->_iconImageView, "setContentMode:", 2);
  v28 = (void *)objc_claimAutoreleasedReturnValue(-[UIImageView layer](self->_iconImageView, "layer"));
  objc_msgSend(v28, "setCornerRadius:", 18.0);
  objc_release(v28);
  v29 = (void *)objc_claimAutoreleasedReturnValue(-[UIImageView layer](self->_iconImageView, "layer"));
  objc_msgSend(v29, "setCornerCurve:", kCACornerCurveContinuous);
  objc_release(v29);
  -[UIImageView setClipsToBounds:](self->_iconImageView, "setClipsToBounds:", 1);
  v30 = (void *)objc_claimAutoreleasedReturnValue(-[UIImageView layer](self->_iconImageView, "layer"));
  objc_msgSend(v30, "setBorderWidth:", 0.5);
  objc_release(v30);
  v31 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.25));
  v32 = objc_msgSend(objc_retainAutorelease(v31), "CGColor");
  v33 = (void *)objc_claimAutoreleasedReturnValue(-[UIImageView layer](self->_iconImageView, "layer"));
  objc_msgSend(v33, "setBorderColor:", v32);
  objc_release(v33);
  objc_release(v31);
  -[UIView addSubview:](self->_cardView, "addSubview:", self->_iconImageView);
  v34 = (UILabel *)objc_alloc_init((Class)&OBJC_CLASS___UILabel);
  titleLabel = self->_titleLabel;
  self->_titleLabel = v34;
  objc_release(titleLabel);
  -[UILabel setTranslatesAutoresizingMaskIntoConstraints:](
    self->_titleLabel,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  v36 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIFont systemFontOfSize:weight:](
                    &OBJC_CLASS___UIFont,
                    "systemFontOfSize:weight:",
                    18.0,
                    UIFontWeightBold));
  -[UILabel setFont:](self->_titleLabel, "setFont:", v36);
  objc_release(v36);
  v37 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor whiteColor](&OBJC_CLASS___UIColor, "whiteColor"));
  -[UILabel setTextColor:](self->_titleLabel, "setTextColor:", v37);
  objc_release(v37);
  -[UILabel setTextAlignment:](self->_titleLabel, "setTextAlignment:", 1);
  -[UILabel setNumberOfLines:](self->_titleLabel, "setNumberOfLines:", 1);
  -[UIView addSubview:](self->_cardView, "addSubview:", self->_titleLabel);
  v38 = (UIActivityIndicatorView *)objc_msgSend(
                                     objc_alloc((Class)&OBJC_CLASS___UIActivityIndicatorView),
                                     "initWithActivityIndicatorStyle:",
                                     101);
  spinner = self->_spinner;
  self->_spinner = v38;
  objc_release(spinner);
  -[UIActivityIndicatorView setTranslatesAutoresizingMaskIntoConstraints:](
    self->_spinner,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  v40 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor whiteColor](&OBJC_CLASS___UIColor, "whiteColor"));
  -[UIActivityIndicatorView setColor:](self->_spinner, "setColor:", v40);
  objc_release(v40);
  -[UIActivityIndicatorView setHidesWhenStopped:](self->_spinner, "setHidesWhenStopped:", 0);
  -[UIView addSubview:](self->_cardView, "addSubview:", self->_spinner);
  v41 = (UILabel *)objc_alloc_init((Class)&OBJC_CLASS___UILabel);
  statusLabel = self->_statusLabel;
  self->_statusLabel = v41;
  objc_release(statusLabel);
  -[UILabel setTranslatesAutoresizingMaskIntoConstraints:](
    self->_statusLabel,
    "setTranslatesAutoresizingMaskIntoConstraints:",
    0);
  v43 = (void *)objc_claimAutoreleasedReturnValue(
                  +[UIFont systemFontOfSize:weight:](
                    &OBJC_CLASS___UIFont,
                    "systemFontOfSize:weight:",
                    13.0,
                    UIFontWeightMedium));
  -[UILabel setFont:](self->_statusLabel, "setFont:", v43);
  objc_release(v43);
  v44 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor colorWithWhite:alpha:](&OBJC_CLASS___UIColor, "colorWithWhite:alpha:", 1.0, 0.75));
  -[UILabel setTextColor:](self->_statusLabel, "setTextColor:", v44);
  objc_release(v44);
  -[UILabel setTextAlignment:](self->_statusLabel, "setTextAlignment:", 1);
  -[UILabel setNumberOfLines:](self->_statusLabel, "setNumberOfLines:", 1);
  -[UIView addSubview:](self->_cardView, "addSubview:", self->_statusLabel);
  v90 = (void *)objc_claimAutoreleasedReturnValue(-[UIView centerXAnchor](self->_cardView, "centerXAnchor"));
  v89 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskHandoffView centerXAnchor](self, "centerXAnchor"));
  v88 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v90, "constraintEqualToAnchor:", v89));
  v92[0] = v88;
  v87 = (void *)objc_claimAutoreleasedReturnValue(-[UIView centerYAnchor](self->_cardView, "centerYAnchor"));
  v86 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskHandoffView centerYAnchor](self, "centerYAnchor"));
  v85 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v87, "constraintEqualToAnchor:", v86));
  v92[1] = v85;
  v84 = (void *)objc_claimAutoreleasedReturnValue(-[UIView widthAnchor](self->_cardView, "widthAnchor"));
  v83 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v84, "constraintEqualToConstant:", 240.0));
  v92[2] = v83;
  v82 = (void *)objc_claimAutoreleasedReturnValue(-[UIImageView topAnchor](self->_iconImageView, "topAnchor"));
  v81 = (void *)objc_claimAutoreleasedReturnValue(-[UIView topAnchor](self->_cardView, "topAnchor"));
  v80 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v82, "constraintEqualToAnchor:constant:", v81, 28.0));
  v92[3] = v80;
  v79 = (void *)objc_claimAutoreleasedReturnValue(-[UIImageView centerXAnchor](self->_iconImageView, "centerXAnchor"));
  v78 = (void *)objc_claimAutoreleasedReturnValue(-[UIView centerXAnchor](self->_cardView, "centerXAnchor"));
  v77 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v79, "constraintEqualToAnchor:", v78));
  v92[4] = v77;
  v76 = (void *)objc_claimAutoreleasedReturnValue(-[UIImageView widthAnchor](self->_iconImageView, "widthAnchor"));
  v75 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v76, "constraintEqualToConstant:", 72.0));
  v92[5] = v75;
  v74 = (void *)objc_claimAutoreleasedReturnValue(-[UIImageView heightAnchor](self->_iconImageView, "heightAnchor"));
  v73 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v74, "constraintEqualToConstant:", 72.0));
  v92[6] = v73;
  v72 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel topAnchor](self->_titleLabel, "topAnchor"));
  v71 = (void *)objc_claimAutoreleasedReturnValue(-[UIImageView bottomAnchor](self->_iconImageView, "bottomAnchor"));
  v70 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v72, "constraintEqualToAnchor:constant:", v71, 16.0));
  v92[7] = v70;
  v69 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel leadingAnchor](self->_titleLabel, "leadingAnchor"));
  v68 = (void *)objc_claimAutoreleasedReturnValue(-[UIView leadingAnchor](self->_cardView, "leadingAnchor"));
  v67 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v69, "constraintEqualToAnchor:constant:", v68, 16.0));
  v92[8] = v67;
  v66 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel trailingAnchor](self->_titleLabel, "trailingAnchor"));
  v65 = (void *)objc_claimAutoreleasedReturnValue(-[UIView trailingAnchor](self->_cardView, "trailingAnchor"));
  v64 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v66, "constraintEqualToAnchor:constant:", v65, -16.0));
  v92[9] = v64;
  v63 = (void *)objc_claimAutoreleasedReturnValue(-[UIActivityIndicatorView topAnchor](self->_spinner, "topAnchor"));
  v62 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel bottomAnchor](self->_titleLabel, "bottomAnchor"));
  v61 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v63, "constraintEqualToAnchor:constant:", v62, 16.0));
  v92[10] = v61;
  v60 = (void *)objc_claimAutoreleasedReturnValue(-[UIActivityIndicatorView centerXAnchor](self->_spinner, "centerXAnchor"));
  v59 = (void *)objc_claimAutoreleasedReturnValue(-[UIView centerXAnchor](self->_cardView, "centerXAnchor"));
  v58 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v60, "constraintEqualToAnchor:", v59));
  v92[11] = v58;
  v57 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel topAnchor](self->_statusLabel, "topAnchor"));
  v56 = (void *)objc_claimAutoreleasedReturnValue(-[UIActivityIndicatorView bottomAnchor](self->_spinner, "bottomAnchor"));
  v55 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v57, "constraintEqualToAnchor:constant:", v56, 12.0));
  v92[12] = v55;
  v45 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel leadingAnchor](self->_statusLabel, "leadingAnchor"));
  v46 = (void *)objc_claimAutoreleasedReturnValue(-[UIView leadingAnchor](self->_cardView, "leadingAnchor"));
  v47 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v45, "constraintEqualToAnchor:constant:", v46, 16.0));
  v92[13] = v47;
  v48 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel trailingAnchor](self->_statusLabel, "trailingAnchor"));
  v49 = (void *)objc_claimAutoreleasedReturnValue(-[UIView trailingAnchor](self->_cardView, "trailingAnchor"));
  v50 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v48, "constraintEqualToAnchor:constant:", v49, -16.0));
  v92[14] = v50;
  v51 = (void *)objc_claimAutoreleasedReturnValue(-[UILabel bottomAnchor](self->_statusLabel, "bottomAnchor"));
  v52 = (void *)objc_claimAutoreleasedReturnValue(-[UIView bottomAnchor](self->_cardView, "bottomAnchor"));
  v53 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v51, "constraintEqualToAnchor:constant:", v52, -24.0));
  v92[15] = v53;
  v54 = (void *)objc_claimAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v92, 16));
  +[NSLayoutConstraint activateConstraints:](&OBJC_CLASS___NSLayoutConstraint, "activateConstraints:", v54);
  objc_release(v54);
  objc_release(v53);
  objc_release(v52);
  objc_release(v51);
  objc_release(v50);
  objc_release(v49);
  objc_release(v48);
  objc_release(v47);
  objc_release(v46);
  objc_release(v45);
  objc_release(v55);
  objc_release(v56);
  objc_release(v57);
  objc_release(v58);
  objc_release(v59);
  objc_release(v60);
  objc_release(v61);
  objc_release(v62);
  objc_release(v63);
  objc_release(v64);
  objc_release(v65);
  objc_release(v66);
  objc_release(v67);
  objc_release(v68);
  objc_release(v69);
  objc_release(v70);
  objc_release(v71);
  objc_release(v72);
  objc_release(v73);
  objc_release(v74);
  objc_release(v75);
  objc_release(v76);
  objc_release(v77);
  objc_release(v78);
  objc_release(v79);
  objc_release(v80);
  objc_release(v81);
  objc_release(v82);
  objc_release(v83);
  objc_release(v84);
  objc_release(v85);
  objc_release(v86);
  objc_release(v87);
  objc_release(v88);
  objc_release(v89);
  objc_release(v90);
  objc_release(v91);
}


// -[LCSingleTaskHandoffView configureWithAppName:icon:status:] @ 0x5834
void __cdecl -[LCSingleTaskHandoffView configureWithAppName:icon:status:](
        LCSingleTaskHandoffView *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  UILabel *titleLabel; // x22
  id v9; // x20
  void *v10; // x21
  id v11; // [xsp+8h] [xbp-28h]

  v11 = objc_retain(a4);
  titleLabel = self->_titleLabel;
  v9 = objc_retain(a5);
  -[UILabel setText:](titleLabel, "setText:", a3);
  if ( v11 )
  {
    -[UIImageView setImage:](self->_iconImageView, "setImage:", v11);
  }
  else
  {
    v10 = (void *)objc_claimAutoreleasedReturnValue(+[UIImage systemImageNamed:](&OBJC_CLASS___UIImage, "systemImageNamed:", CFSTR("app.fill")));
    -[UIImageView setImage:](self->_iconImageView, "setImage:", v10);
    objc_release(v10);
  }
  -[UILabel setText:](self->_statusLabel, "setText:", v9);
  objc_release(v9);
  -[UIActivityIndicatorView startAnimating](self->_spinner, "startAnimating");
  objc_release(v11);
}


// -[LCSingleTaskHandoffView updateStatus:] @ 0x5910
void __cdecl -[LCSingleTaskHandoffView updateStatus:](LCSingleTaskHandoffView *self, SEL a2, id a3)
{
  id v4; // x20
  UILabel *v5; // x19
  UILabel *v6; // x19
  id v7; // [xsp+8h] [xbp-58h]
  _QWORD v8[4]; // [xsp+10h] [xbp-50h] BYREF
  UILabel *v9; // [xsp+30h] [xbp-30h]
  id v10; // [xsp+38h] [xbp-28h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self->_statusLabel);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_59DC;
  v8[3] = &unk_14030;
  v9 = v5;
  v10 = v4;
  v7 = objc_retain(v4);
  v6 = objc_retain(v5);
  +[UIView transitionWithView:duration:options:animations:completion:](
    &OBJC_CLASS___UIView,
    "transitionWithView:duration:options:animations:completion:",
    v6,
    5242880,
    v8,
    0,
    0.15);
  objc_release(v10);
  objc_release(v9);
  objc_release(v6);
  objc_release(v7);
}


// -[LCSingleTaskHandoffView showWithCompletion:] @ 0x5A34
void __cdecl -[LCSingleTaskHandoffView showWithCompletion:](LCSingleTaskHandoffView *self, SEL a2, id a3)
{
  id v4; // x19
  UIView *v5; // x20
  id v6; // x19
  UIView *v7; // x20
  _QWORD v8[4]; // [xsp+8h] [xbp-D8h] BYREF
  id v9; // [xsp+28h] [xbp-B8h]
  _QWORD v10[5]; // [xsp+30h] [xbp-B0h] BYREF
  UIView *v11; // [xsp+58h] [xbp-88h]
  CGAffineTransform v12; // [xsp+60h] [xbp-80h] BYREF
  CGAffineTransform v13; // [xsp+90h] [xbp-50h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retain(self->_cardView);
  CGAffineTransformMakeScale(&v13, 0.9, 0.9);
  v12 = v13;
  -[UIView setTransform:](v5, "setTransform:", &v12);
  v9 = v4;
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_5B4C;
  v10[3] = &unk_14030;
  v10[4] = self;
  v11 = v5;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_5BA0;
  v8[3] = &unk_14060;
  v6 = objc_retain(v4);
  v7 = objc_retain(v5);
  +[UIView animateWithDuration:delay:options:animations:completion:](
    &OBJC_CLASS___UIView,
    "animateWithDuration:delay:options:animations:completion:",
    0x20000,
    v10,
    v8,
    0.22,
    0.0);
  objc_release(v9);
  objc_release(v11);
  objc_release(v7);
  objc_release(v6);
}


// -[LCSingleTaskHandoffView .cxx_destruct] @ 0x5BC4
void __cdecl -[LCSingleTaskHandoffView .cxx_destruct](LCSingleTaskHandoffView *self, SEL a2)
{
  objc_storeStrong((id *)&self->_spinner, 0);
  objc_storeStrong((id *)&self->_statusLabel, 0);
  objc_storeStrong((id *)&self->_titleLabel, 0);
  objc_storeStrong((id *)&self->_iconImageView, 0);
  objc_storeStrong((id *)&self->_cardView, 0);
  objc_storeStrong((id *)&self->_dimView, 0);
  objc_storeStrong((id *)&self->_blurView, 0);
}




/* ===== CLASS LCSingleTaskOverlayController ===== */
// -[LCSingleTaskOverlayController viewDidLoad] @ 0x88B8
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


// -[LCSingleTaskOverlayController viewDidLayoutSubviews] @ 0x8988
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


// -[LCSingleTaskOverlayController shouldAutorotate] @ 0x89F0
bool __cdecl -[LCSingleTaskOverlayController shouldAutorotate](LCSingleTaskOverlayController *self, SEL a2)
{
  return 1;
}


// -[LCSingleTaskOverlayController supportedInterfaceOrientations] @ 0x89F8
unsigned __int64 __cdecl -[LCSingleTaskOverlayController supportedInterfaceOrientations](
        LCSingleTaskOverlayController *self,
        SEL a2)
{
  return 30;
}


// -[LCSingleTaskOverlayController viewWillTransitionToSize:withTransitionCoordinator:] @ 0x8A00
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


// -[LCSingleTaskOverlayController resolveHitTestAtPoint:inWindow:withEvent:] @ 0x8B40
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


// -[LCSingleTaskOverlayController setupComponents] @ 0x8DE4
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


// -[LCSingleTaskOverlayController loadSavedBeadPosition] @ 0x96E8
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


// -[LCSingleTaskOverlayController saveBeadPosition] @ 0x9798
void __cdecl -[LCSingleTaskOverlayController saveBeadPosition](LCSingleTaskOverlayController *self, SEL a2)
{
  id v3; // [xsp+8h] [xbp-18h]

  v3 = (id)objc_claimAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
  objc_msgSend(v3, "setDouble:forKey:", CFSTR("LCSingleTask_BeadCenterYRatio"), self->_beadCenterYRatio);
  objc_msgSend(v3, "setBool:forKey:", self->_isBeadPinnedRight, CFSTR("LCSingleTask_BeadPinnedRight"));
  objc_msgSend(v3, "synchronize");
  objc_release(v3);
}


// -[LCSingleTaskOverlayController updateLayoutForCanvasSize:] @ 0x9810
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


// -[LCSingleTaskOverlayController handleBeadPanEnded:] @ 0x99D4
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


// -[LCSingleTaskOverlayController handleMaskTap] @ 0x9CAC
void __cdecl -[LCSingleTaskOverlayController handleMaskTap](LCSingleTaskOverlayController *self, SEL a2)
{
  -[LCSingleTaskOverlayController setDrawerOpen:animated:](self, "setDrawerOpen:animated:", 0, 1);
}


// -[LCSingleTaskOverlayController setDrawerOpen:animated:] @ 0x9CB8
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


// -[LCSingleTaskOverlayController refreshAppList] @ 0xA068
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


// -[LCSingleTaskOverlayController handleAppSelected:] @ 0xA0D8
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


// -[LCSingleTaskOverlayController resetInactivityTimer] @ 0xA1B0
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


// -[LCSingleTaskOverlayController beadView] @ 0xA450
LCSingleTaskBeadView *__cdecl -[LCSingleTaskOverlayController beadView](LCSingleTaskOverlayController *self, SEL a2)
{
  return self->_beadView;
}


// -[LCSingleTaskOverlayController setBeadView:] @ 0xA460
void __cdecl -[LCSingleTaskOverlayController setBeadView:](LCSingleTaskOverlayController *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_beadView, a3);
}


// -[LCSingleTaskOverlayController drawerView] @ 0xA474
LCSingleTaskDrawerView *__cdecl -[LCSingleTaskOverlayController drawerView](
        LCSingleTaskOverlayController *self,
        SEL a2)
{
  return self->_drawerView;
}


// -[LCSingleTaskOverlayController setDrawerView:] @ 0xA484
void __cdecl -[LCSingleTaskOverlayController setDrawerView:](LCSingleTaskOverlayController *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_drawerView, a3);
}


// -[LCSingleTaskOverlayController dimmingMaskView] @ 0xA498
UIView *__cdecl -[LCSingleTaskOverlayController dimmingMaskView](LCSingleTaskOverlayController *self, SEL a2)
{
  return self->_dimmingMaskView;
}


// -[LCSingleTaskOverlayController setDimmingMaskView:] @ 0xA4A8
void __cdecl -[LCSingleTaskOverlayController setDimmingMaskView:](LCSingleTaskOverlayController *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_dimmingMaskView, a3);
}


// -[LCSingleTaskOverlayController transitionOverlayView] @ 0xA4BC
LCSingleTaskHandoffView *__cdecl -[LCSingleTaskOverlayController transitionOverlayView](
        LCSingleTaskOverlayController *self,
        SEL a2)
{
  return self->_transitionOverlayView;
}


// -[LCSingleTaskOverlayController setTransitionOverlayView:] @ 0xA4CC
void __cdecl -[LCSingleTaskOverlayController setTransitionOverlayView:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        id a3)
{
  objc_storeStrong((id *)&self->_transitionOverlayView, a3);
}


// -[LCSingleTaskOverlayController isDrawerOpen] @ 0xA4E0
bool __cdecl -[LCSingleTaskOverlayController isDrawerOpen](LCSingleTaskOverlayController *self, SEL a2)
{
  return self->_isDrawerOpen;
}


// -[LCSingleTaskOverlayController setIsDrawerOpen:] @ 0xA4F0
void __cdecl -[LCSingleTaskOverlayController setIsDrawerOpen:](LCSingleTaskOverlayController *self, SEL a2, bool a3)
{
  self->_isDrawerOpen = a3;
}


// -[LCSingleTaskOverlayController isBeadPinnedRight] @ 0xA500
bool __cdecl -[LCSingleTaskOverlayController isBeadPinnedRight](LCSingleTaskOverlayController *self, SEL a2)
{
  return self->_isBeadPinnedRight;
}


// -[LCSingleTaskOverlayController setIsBeadPinnedRight:] @ 0xA510
void __cdecl -[LCSingleTaskOverlayController setIsBeadPinnedRight:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        bool a3)
{
  self->_isBeadPinnedRight = a3;
}


// -[LCSingleTaskOverlayController beadCenterYRatio] @ 0xA520
double __cdecl -[LCSingleTaskOverlayController beadCenterYRatio](LCSingleTaskOverlayController *self, SEL a2)
{
  return self->_beadCenterYRatio;
}


// -[LCSingleTaskOverlayController setBeadCenterYRatio:] @ 0xA530
void __cdecl -[LCSingleTaskOverlayController setBeadCenterYRatio:](
        LCSingleTaskOverlayController *self,
        SEL a2,
        double a3)
{
  self->_beadCenterYRatio = a3;
}


// -[LCSingleTaskOverlayController .cxx_destruct] @ 0xA540
void __cdecl -[LCSingleTaskOverlayController .cxx_destruct](LCSingleTaskOverlayController *self, SEL a2)
{
  objc_storeStrong((id *)&self->_transitionOverlayView, 0);
  objc_storeStrong((id *)&self->_dimmingMaskView, 0);
  objc_storeStrong((id *)&self->_drawerView, 0);
  objc_storeStrong((id *)&self->_beadView, 0);
  objc_storeStrong((id *)&self->_inactivityTimer, 0);
}




/* ===== CLASS LCSingleTaskOverlayWindow ===== */
// -[LCSingleTaskOverlayWindow initWithWindowScene:] @ 0x878C
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


// -[LCSingleTaskOverlayWindow hitTest:withEvent:] @ 0x87E0
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


// -[LCSingleTaskOverlayWindow overlayController] @ 0x8874
LCSingleTaskOverlayController *__cdecl -[LCSingleTaskOverlayWindow overlayController](
        LCSingleTaskOverlayWindow *self,
        SEL a2)
{
  return (LCSingleTaskOverlayController *)objc_autoreleaseReturnValue(objc_loadWeakRetained((id *)&self->_overlayController));
}


// -[LCSingleTaskOverlayWindow setOverlayController:] @ 0x8894
void __cdecl -[LCSingleTaskOverlayWindow setOverlayController:](LCSingleTaskOverlayWindow *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_overlayController, a3);
}


// -[LCSingleTaskOverlayWindow .cxx_destruct] @ 0x88A8
void __cdecl -[LCSingleTaskOverlayWindow .cxx_destruct](LCSingleTaskOverlayWindow *self, SEL a2)
{
  objc_destroyWeak((id *)&self->_overlayController);
}




/* ===== CLASS LCSingleTaskSwitcher ===== */
// +[LCSingleTaskSwitcher sharedManager] @ 0xA5BC
id __cdecl +[LCSingleTaskSwitcher sharedManager](id a1, SEL a2)
{
  if ( qword_199D0 != -1 )
    sub_E518(a1, a2);
  return objc_retainAutoreleaseReturnValue((id)qword_199C8);
}


// +[LCSingleTaskSwitcher setupIfNeeded] @ 0xA61C
void __cdecl +[LCSingleTaskSwitcher setupIfNeeded](id a1, SEL a2)
{
  void *v3; // x20
  void *v4; // x21
  unsigned __int8 v5; // w22
  void *v6; // x21
  void *v7; // x20
  dispatch_time_t v8; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-48h] BYREF

  if ( (unsigned int)objc_msgSend(a1, "isContainerGuestRunning") )
  {
    v3 = (void *)objc_claimAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v4 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v3, "bundlePath"));
    v5 = (unsigned __int8)objc_msgSend(v4, "hasSuffix:", CFSTR(".appex"));
    objc_release(v4);
    objc_release(v3);
    if ( (v5 & 1) == 0 )
    {
      v6 = (void *)objc_claimAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
      v7 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", CFSTR("GnoixContainer_SingleTaskQuickSwitcher")));
      objc_release(v6);
      if ( !v7 || (unsigned int)objc_msgSend(v7, "boolValue") )
      {
        v8 = dispatch_time(0, 1200000000);
        block[0] = _NSConcreteStackBlock;
        block[1] = 3221225472LL;
        block[2] = sub_A71C;
        block[3] = &unk_142B0;
        block[4] = a1;
        dispatch_after(v8, (dispatch_queue_t)&_dispatch_main_q, block);
      }
      objc_release(v7);
    }
  }
}


// -[LCSingleTaskSwitcher performSetup] @ 0xA74C
void __cdecl -[LCSingleTaskSwitcher performSetup](LCSingleTaskSwitcher *self, SEL a2)
{
  void *v3; // x20
  void *v4; // x21
  void *v5; // x0
  void *v6; // x22
  id v7; // x20
  __int64 v8; // x24
  __int64 v9; // x26
  void *v10; // x23
  __int64 v11; // x0
  id v12; // x22
  LCSingleTaskOverlayWindow *v13; // x21
  void *v14; // x22
  LCSingleTaskOverlayController *v15; // x22
  dispatch_time_t v16; // x19
  _QWORD block[4]; // [xsp+10h] [xbp-150h] BYREF
  id v18; // [xsp+30h] [xbp-130h] BYREF
  id location; // [xsp+38h] [xbp-128h] BYREF
  __int128 v20; // [xsp+40h] [xbp-120h] BYREF
  __int128 v21; // [xsp+50h] [xbp-110h]
  __int128 v22; // [xsp+60h] [xbp-100h]
  __int128 v23; // [xsp+70h] [xbp-F0h]
  _BYTE v24[128]; // [xsp+88h] [xbp-D8h] BYREF

  if ( -[LCSingleTaskSwitcher isSetup](self, "isSetup") )
  {
    -[LCSingleTaskSwitcher ensureWindowAttached](self, "ensureWindowAttached");
    return;
  }
  v22 = 0u;
  v23 = 0u;
  v20 = 0u;
  v21 = 0u;
  v3 = (void *)objc_claimAutoreleasedReturnValue(+[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication"));
  v4 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v3, "connectedScenes"));
  objc_release(v3);
  v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v20, v24, 16);
  if ( !v5 )
  {
    objc_release(v4);
    goto LABEL_18;
  }
  v6 = v5;
  v7 = 0;
  v8 = *(_QWORD *)v21;
LABEL_6:
  v9 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)v21 != v8 )
      objc_enumerationMutation(v4);
    v10 = *(void **)(*((_QWORD *)&v20 + 1) + 8 * v9);
    v11 = objc_opt_class(&OBJC_CLASS___UIWindowScene);
    if ( (objc_opt_isKindOfClass(v10, v11) & 1) == 0 )
      goto LABEL_7;
    if ( !objc_msgSend(v10, "activationState") )
      break;
    if ( !v7 )
      v7 = objc_retain(v10);
LABEL_7:
    if ( v6 == (void *)++v9 )
    {
      v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v20, v24, 16);
      if ( !v6 )
        goto LABEL_15;
      goto LABEL_6;
    }
  }
  v12 = objc_retain(v10);
  objc_release(v7);
  v7 = v12;
LABEL_15:
  objc_release(v4);
  if ( v7 )
  {
    v13 = -[LCSingleTaskOverlayWindow initWithWindowScene:](
            objc_alloc(&OBJC_CLASS___LCSingleTaskOverlayWindow),
            "initWithWindowScene:",
            v7);
    -[LCSingleTaskOverlayWindow setWindowLevel:](v13, "setWindowLevel:", UIWindowLevelStatusBar + 90.0);
    v14 = (void *)objc_claimAutoreleasedReturnValue(+[UIColor clearColor](&OBJC_CLASS___UIColor, "clearColor"));
    -[LCSingleTaskOverlayWindow setBackgroundColor:](v13, "setBackgroundColor:", v14);
    objc_release(v14);
    v15 = objc_alloc_init(&OBJC_CLASS___LCSingleTaskOverlayController);
    -[LCSingleTaskOverlayWindow setOverlayController:](v13, "setOverlayController:", v15);
    -[LCSingleTaskOverlayWindow setRootViewController:](v13, "setRootViewController:", v15);
    -[LCSingleTaskOverlayWindow setHidden:](v13, "setHidden:", 0);
    -[LCSingleTaskSwitcher setOverlayWindow:](self, "setOverlayWindow:", v13);
    -[LCSingleTaskSwitcher setOverlayController:](self, "setOverlayController:", v15);
    -[LCSingleTaskSwitcher setIsSetup:](self, "setIsSetup:", 1);
    NSLog(&CFSTR("[LCSingleTaskSwitcher] ⚡ 单任务侧边快速切换微珠已就绪挂载 (Scene: %@)").isa, v7);
    objc_release(v15);
    objc_release(v13);
    objc_release(v7);
    return;
  }
LABEL_18:
  objc_initWeak(&location, self);
  v16 = dispatch_time(0, 500000000);
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_AA54;
  block[3] = &unk_140F0;
  objc_copyWeak(&v18, &location);
  dispatch_after(v16, (dispatch_queue_t)&_dispatch_main_q, block);
  objc_destroyWeak(&v18);
  objc_destroyWeak(&location);
}


// -[LCSingleTaskSwitcher ensureWindowAttached] @ 0xAA80
void __cdecl -[LCSingleTaskSwitcher ensureWindowAttached](LCSingleTaskSwitcher *self, SEL a2)
{
  void *v3; // x20
  void *v4; // x21
  void *v5; // x20
  void *v6; // x0
  void *v7; // x21
  __int64 v8; // x23
  __int64 v9; // x25
  void *v10; // x22
  __int64 v11; // x0
  void *v12; // x21
  void *v13; // x23
  void *v14; // x21
  void *v15; // x19
  __int128 v16; // [xsp+0h] [xbp-110h] BYREF
  __int128 v17; // [xsp+10h] [xbp-100h]
  __int128 v18; // [xsp+20h] [xbp-F0h]
  __int128 v19; // [xsp+30h] [xbp-E0h]
  _BYTE v20[128]; // [xsp+48h] [xbp-C8h] BYREF

  v3 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskSwitcher overlayWindow](self, "overlayWindow"));
  objc_release(v3);
  if ( v3 )
  {
    v18 = 0u;
    v19 = 0u;
    v16 = 0u;
    v17 = 0u;
    v4 = (void *)objc_claimAutoreleasedReturnValue(+[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication", 0));
    v5 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v4, "connectedScenes"));
    objc_release(v4);
    v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v16, v20, 16);
    if ( v6 )
    {
      v7 = v6;
      v8 = *(_QWORD *)v17;
LABEL_5:
      v9 = 0;
      while ( 1 )
      {
        if ( *(_QWORD *)v17 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(void **)(*((_QWORD *)&v16 + 1) + 8 * v9);
        v11 = objc_opt_class(&OBJC_CLASS___UIWindowScene);
        if ( (objc_opt_isKindOfClass(v10, v11) & 1) != 0 && !objc_msgSend(v10, "activationState") )
          break;
        if ( v7 == (void *)++v9 )
        {
          v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v16, v20, 16);
          if ( !v7 )
            goto LABEL_13;
          goto LABEL_5;
        }
      }
      v12 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskSwitcher overlayWindow](self, "overlayWindow"));
      v13 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v12, "windowScene"));
      objc_release(v13);
      objc_release(v12);
      if ( v13 != v10 )
      {
        v14 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskSwitcher overlayWindow](self, "overlayWindow"));
        objc_msgSend(v14, "setWindowScene:", v10);
        objc_release(v14);
      }
    }
LABEL_13:
    objc_release(v5);
    v15 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskSwitcher overlayWindow](self, "overlayWindow"));
    objc_msgSend(v15, "setHidden:", 0);
    objc_release(v15);
  }
}


// +[LCSingleTaskSwitcher scanInstalledApps] @ 0xAC34
id __cdecl +[LCSingleTaskSwitcher scanInstalledApps](id a1, SEL a2)
{
  void *v2; // x19
  void *v3; // x20
  void *v4; // x22
  void *v5; // x21
  id v6; // x21
  void *v7; // x0
  void *v8; // x19
  void *v9; // x22
  void *v10; // x25
  __int64 v11; // x23
  void *v12; // x27
  void *v13; // x22
  unsigned __int8 v14; // w25
  void *v15; // x22
  LCSingleTaskAppInfo *v16; // x24
  void *v17; // x23
  void *v18; // x26
  void *v19; // x24
  void *v20; // x21
  __int64 v21; // x0
  void *v22; // x20
  void *v23; // x8
  id v24; // x19
  __int64 v25; // x0
  void *v26; // x20
  void *v27; // x8
  id v28; // x26
  void *v29; // x0
  void *v30; // x20
  void *v31; // x0
  void *v32; // x25
  id v33; // x0
  __int64 v34; // x0
  void *v35; // x20
  __CFString *v36; // x8
  __int64 v37; // x0
  void *v38; // x25
  __CFString *v39; // x8
  __CFString *v40; // x20
  __int64 v41; // x0
  void *v42; // x25
  __CFString *v43; // x8
  __CFString *v44; // x28
  void *v45; // x23
  void *v46; // x26
  void *v47; // x8
  __int64 v49; // [xsp+8h] [xbp-198h]
  void *v50; // [xsp+10h] [xbp-190h]
  void *v51; // [xsp+18h] [xbp-188h]
  id v52; // [xsp+20h] [xbp-180h]
  void *v53; // [xsp+28h] [xbp-178h]
  void *v54; // [xsp+30h] [xbp-170h]
  id v56; // [xsp+40h] [xbp-160h]
  void *v57; // [xsp+48h] [xbp-158h]
  __CFString *v58; // [xsp+50h] [xbp-150h]
  id v59; // [xsp+58h] [xbp-148h]
  void *v60; // [xsp+60h] [xbp-140h]
  void *v61; // [xsp+68h] [xbp-138h]
  __int64 v62; // [xsp+70h] [xbp-130h]
  char v63; // [xsp+7Fh] [xbp-121h] BYREF
  __int128 v64; // [xsp+80h] [xbp-120h] BYREF
  __int128 v65; // [xsp+90h] [xbp-110h]
  __int128 v66; // [xsp+A0h] [xbp-100h]
  __int128 v67; // [xsp+B0h] [xbp-F0h]
  _BYTE v68[128]; // [xsp+C0h] [xbp-E0h] BYREF

  v2 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(a1, "realHostDocumentsDirectory"));
  if ( objc_msgSend(v2, "length") )
  {
    v3 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v2, "stringByAppendingPathComponent:", CFSTR("Applications")));
    v4 = (void *)objc_claimAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v5 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v4, "contentsOfDirectoryAtPath:error:", v3, 0));
    if ( objc_msgSend(v5, "count") )
    {
      v51 = v2;
      v56 = (id)objc_claimAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
      v64 = 0u;
      v65 = 0u;
      v66 = 0u;
      v67 = 0u;
      v50 = v5;
      v6 = objc_retain(v5);
      v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v64, v68, 16);
      v8 = v4;
      v9 = v6;
      if ( v7 )
      {
        v10 = v7;
        v11 = *(_QWORD *)v65;
        v53 = v8;
        v54 = v3;
        v52 = v6;
        v62 = *(_QWORD *)v65;
        do
        {
          v12 = 0;
          v57 = v10;
          do
          {
            if ( *(_QWORD *)v65 != v11 )
              objc_enumerationMutation(v9);
            v19 = *(void **)(*((_QWORD *)&v64 + 1) + 8LL * (_QWORD)v12);
            v20 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v3, "stringByAppendingPathComponent:", v19));
            v63 = 0;
            if ( (unsigned int)objc_msgSend(v8, "fileExistsAtPath:isDirectory:", v20, &v63)
              && (v63 & 1) != 0
              && (unsigned int)objc_msgSend(v19, "hasSuffix:", CFSTR(".app")) )
            {
              v18 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v20, "stringByAppendingPathComponent:", CFSTR("Info.plist")));
              v17 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v20, "stringByAppendingPathComponent:", CFSTR("LCAppInfo.plist")));
              if ( (unsigned int)objc_msgSend(v8, "fileExistsAtPath:", v18) )
              {
                v61 = v18;
                v21 = objc_claimAutoreleasedReturnValue(
                        +[NSDictionary dictionaryWithContentsOfFile:](
                          &OBJC_CLASS___NSDictionary,
                          "dictionaryWithContentsOfFile:",
                          v18));
                v22 = (void *)v21;
                if ( v21 )
                  v23 = (void *)v21;
                else
                  v23 = &__NSDictionary0__struct;
                v24 = objc_retain(v23);
                objc_release(v22);
                v25 = objc_claimAutoreleasedReturnValue(
                        +[NSDictionary dictionaryWithContentsOfFile:](
                          &OBJC_CLASS___NSDictionary,
                          "dictionaryWithContentsOfFile:",
                          v17));
                v26 = (void *)v25;
                if ( v25 )
                  v27 = (void *)v25;
                else
                  v27 = &__NSDictionary0__struct;
                v28 = objc_retain(v27);
                objc_release(v26);
                v29 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v24, "objectForKeyedSubscript:", CFSTR("CFBundleDisplayName")));
                v30 = v29;
                v60 = v17;
                if ( v29 )
                {
                  v59 = objc_retain(v29);
                }
                else
                {
                  v31 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v24, "objectForKeyedSubscript:", CFSTR("CFBundleName")));
                  v32 = v31;
                  if ( v31 )
                    v33 = objc_retain(v31);
                  else
                    v33 = (id)objc_claimAutoreleasedReturnValue(
                                objc_msgSend(
                                  v19,
                                  "stringByReplacingOccurrencesOfString:withString:",
                                  CFSTR(".app"),
                                  &stru_144B0));
                  v59 = v33;
                  objc_release(v32);
                }
                objc_release(v30);
                v34 = objc_claimAutoreleasedReturnValue(objc_msgSend(v24, "objectForKeyedSubscript:", CFSTR("CFBundleIdentifier")));
                v35 = (void *)v34;
                if ( v34 )
                  v36 = (__CFString *)v34;
                else
                  v36 = &stru_144B0;
                v58 = objc_retain(v36);
                objc_release(v35);
                v37 = objc_claimAutoreleasedReturnValue(objc_msgSend(v24, "objectForKeyedSubscript:", CFSTR("CFBundleShortVersionString")));
                v38 = (void *)v37;
                if ( v37 )
                  v39 = (__CFString *)v37;
                else
                  v39 = &stru_144B0;
                v40 = objc_retain(v39);
                objc_release(v38);
                v41 = objc_claimAutoreleasedReturnValue(objc_msgSend(v28, "objectForKeyedSubscript:", CFSTR("LCDataUUID")));
                v42 = (void *)v41;
                if ( v41 )
                  v43 = (__CFString *)v41;
                else
                  v43 = &stru_144B0;
                v44 = objc_retain(v43);
                objc_release(v42);
                v45 = v28;
                v46 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v28, "objectForKeyedSubscript:", CFSTR("isJITNeeded")));
                if ( ((unsigned int)objc_msgSend(v46, "boolValue") & 1) != 0 )
                {
                  v14 = 1;
                }
                else
                {
                  v13 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v45, "objectForKeyedSubscript:", CFSTR("isJITEnabled")));
                  v14 = (unsigned __int8)objc_msgSend(v13, "boolValue");
                  objc_release(v13);
                }
                objc_release(v46);
                v15 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(a1, "extractAppIconFromAppPath:plist:", v20, v24));
                LOBYTE(v49) = v14;
                v16 = -[LCSingleTaskAppInfo initWithName:folderName:bundleId:version:dataUUID:appPath:icon:isJITEnabled:](
                        objc_alloc(&OBJC_CLASS___LCSingleTaskAppInfo),
                        "initWithName:folderName:bundleId:version:dataUUID:appPath:icon:isJITEnabled:",
                        v59,
                        v19,
                        v58,
                        v40,
                        v44,
                        v20,
                        v15,
                        v49);
                objc_release(v44);
                objc_msgSend(v56, "addObject:", v16);
                objc_release(v16);
                objc_release(v15);
                objc_release(v40);
                objc_release(v58);
                objc_release(v59);
                objc_release(v45);
                objc_release(v24);
                v8 = v53;
                v3 = v54;
                v9 = v52;
                v10 = v57;
                v17 = v60;
                v18 = v61;
              }
              objc_release(v17);
              objc_release(v18);
              v11 = v62;
            }
            objc_release(v20);
            v12 = (char *)v12 + 1;
          }
          while ( v10 != v12 );
          v10 = objc_msgSend(v9, "countByEnumeratingWithState:objects:count:", &v64, v68, 16);
        }
        while ( v10 );
      }
      v47 = v9;
      v4 = v8;
      objc_release(v47);
      objc_msgSend(v56, "sortUsingComparator:", &stru_142F0);
      v5 = v50;
      v2 = v51;
    }
    else
    {
      v56 = &__NSArray0__struct;
    }
    objc_release(v5);
    objc_release(v4);
    objc_release(v3);
  }
  else
  {
    v56 = &__NSArray0__struct;
  }
  objc_release(v2);
  return objc_autoreleaseReturnValue(v56);
}


// +[LCSingleTaskSwitcher extractAppIconFromAppPath:plist:] @ 0xB178
id __cdecl +[LCSingleTaskSwitcher extractAppIconFromAppPath:plist:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x21
  void *v8; // x22
  __int64 v9; // x0
  void *v10; // x25
  __int64 v11; // x0
  void *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x25
  void *v15; // x26
  void *v16; // x27
  void *v17; // x28
  void *v18; // x25
  id v19; // x26
  void *v20; // x0
  __int64 v21; // x25
  void *v22; // x0
  void *v23; // x24
  __int64 v24; // x26
  __int64 v25; // x28
  void *v26; // x25
  __int64 v27; // x0
  __int64 v29; // x23
  void *v30; // x28
  __int64 v31; // x0
  char v32; // w23
  void *v33; // [xsp+8h] [xbp-218h]
  void *v34; // [xsp+10h] [xbp-210h]
  void *v35; // [xsp+18h] [xbp-208h]
  __int128 v36; // [xsp+20h] [xbp-200h] BYREF
  __int128 v37; // [xsp+30h] [xbp-1F0h]
  __int128 v38; // [xsp+40h] [xbp-1E0h]
  __int128 v39; // [xsp+50h] [xbp-1D0h]
  __int128 v40; // [xsp+60h] [xbp-1C0h] BYREF
  __int128 v41; // [xsp+70h] [xbp-1B0h]
  __int128 v42; // [xsp+80h] [xbp-1A0h]
  __int128 v43; // [xsp+90h] [xbp-190h]
  _BYTE v44[128]; // [xsp+A0h] [xbp-180h] BYREF
  _BYTE v45[128]; // [xsp+120h] [xbp-100h] BYREF
  _QWORD v46[4]; // [xsp+1A0h] [xbp-80h] BYREF

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = (void *)objc_claimAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v8 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", CFSTR("CFBundleIcons")));
  v9 = objc_opt_class(&OBJC_CLASS___NSDictionary);
  if ( (objc_opt_isKindOfClass(v8, v9) & 1) == 0 )
  {
LABEL_9:
    v38 = 0u;
    v39 = 0u;
    v36 = 0u;
    v37 = 0u;
    v22 = objc_msgSend(&off_15118, "countByEnumeratingWithState:objects:count:", &v36, v44, 16);
    if ( v22 )
    {
      v23 = v22;
      v24 = *(_QWORD *)v37;
LABEL_12:
      v25 = 0;
      while ( 1 )
      {
        if ( *(_QWORD *)v37 != v24 )
          objc_enumerationMutation(&off_15118);
        v26 = (void *)objc_claimAutoreleasedReturnValue(
                        objc_msgSend(
                          v5,
                          "stringByAppendingPathComponent:",
                          *(_QWORD *)(*((_QWORD *)&v36 + 1) + 8 * v25)));
        if ( (unsigned int)objc_msgSend(v7, "fileExistsAtPath:", v26) )
        {
          v27 = objc_claimAutoreleasedReturnValue(+[UIImage imageWithContentsOfFile:](&OBJC_CLASS___UIImage, "imageWithContentsOfFile:", v26));
          if ( v27 )
            break;
        }
        objc_release(v26);
        if ( v23 == (void *)++v25 )
        {
          v23 = objc_msgSend(&off_15118, "countByEnumeratingWithState:objects:count:", &v36, v44, 16);
          if ( !v23 )
            goto LABEL_19;
          goto LABEL_12;
        }
      }
      v16 = (void *)v27;
      objc_release(v26);
    }
    else
    {
LABEL_19:
      v16 = 0;
    }
    goto LABEL_20;
  }
  v10 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", CFSTR("CFBundlePrimaryIcon")));
  v11 = objc_opt_class(&OBJC_CLASS___NSDictionary);
  if ( (objc_opt_isKindOfClass(v10, v11) & 1) == 0 )
  {
LABEL_8:
    objc_release(v10);
    goto LABEL_9;
  }
  v12 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v10, "objectForKeyedSubscript:", CFSTR("CFBundleIconFiles")));
  v13 = objc_opt_class(&OBJC_CLASS___NSArray);
  if ( (objc_opt_isKindOfClass(v12, v13) & 1) == 0 || !objc_msgSend(v12, "count") )
  {
    objc_release(v12);
    goto LABEL_8;
  }
  v34 = v12;
  v35 = v10;
  v14 = objc_claimAutoreleasedReturnValue(objc_msgSend(v12, "lastObject"));
  v15 = (void *)objc_claimAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@@2x.png"), v14));
  v46[0] = v15;
  v16 = (void *)objc_claimAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@@3x.png"), v14));
  v46[1] = v16;
  v17 = (void *)objc_claimAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@.png"), v14));
  v46[2] = v17;
  v46[3] = v14;
  v33 = (void *)v14;
  v18 = (void *)objc_claimAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v46, 4));
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  v42 = 0u;
  v43 = 0u;
  v40 = 0u;
  v41 = 0u;
  v19 = objc_retain(v18);
  v20 = objc_msgSend(v19, "countByEnumeratingWithState:objects:count:", &v40, v45, 16);
  if ( v20 )
  {
    v16 = v20;
    v21 = *(_QWORD *)v41;
LABEL_22:
    v29 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)v41 != v21 )
        objc_enumerationMutation(v19);
      v30 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v5, "stringByAppendingPathComponent:", *(_QWORD *)(*((_QWORD *)&v40 + 1) + 8 * v29)));
      if ( (unsigned int)objc_msgSend(v7, "fileExistsAtPath:", v30) )
      {
        v31 = objc_claimAutoreleasedReturnValue(+[UIImage imageWithContentsOfFile:](&OBJC_CLASS___UIImage, "imageWithContentsOfFile:", v30));
        if ( v31 )
          break;
      }
      objc_release(v30);
      if ( v16 == (void *)++v29 )
      {
        v16 = objc_msgSend(v19, "countByEnumeratingWithState:objects:count:", &v40, v45, 16);
        if ( !v16 )
          goto LABEL_29;
        goto LABEL_22;
      }
    }
    v16 = (void *)v31;
    objc_release(v30);
    v32 = 0;
  }
  else
  {
LABEL_29:
    v32 = 1;
  }
  objc_release(v19);
  objc_release(v19);
  objc_release(v33);
  objc_release(v34);
  objc_release(v35);
  if ( (v32 & 1) != 0 )
    goto LABEL_9;
LABEL_20:
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  return objc_autoreleaseReturnValue(v16);
}


// +[LCSingleTaskSwitcher presentTransitionAndSwitchToApp:completion:] @ 0xB548
void __cdecl +[LCSingleTaskSwitcher presentTransitionAndSwitchToApp:completion:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  void *v8; // x21
  void *v9; // x22
  void *v10; // x24
  void *v11; // x25
  void *v12; // x26
  void *v13; // x27
  id v14; // x23
  void *v15; // x25
  _QWORD v16[4]; // [xsp+0h] [xbp-90h] BYREF
  id v17; // [xsp+20h] [xbp-70h]
  id v18; // [xsp+28h] [xbp-68h]
  id v19; // [xsp+30h] [xbp-60h]
  id v20; // [xsp+38h] [xbp-58h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  objc_msgSend(a1, "setupIfNeeded");
  v8 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(a1, "sharedManager"));
  v9 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v8, "overlayController"));
  if ( v9 )
  {
    v10 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UIImpactFeedbackGenerator), "initWithStyle:", 4);
    objc_msgSend(v10, "impactOccurred");
    v11 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v9, "transitionOverlayView"));
    v12 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "name"));
    v13 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "icon"));
    objc_msgSend(v11, "configureWithAppName:icon:status:", v12, v13, CFSTR("正在准备切入沙盒环境..."));
    objc_release(v13);
    objc_release(v12);
    v16[0] = _NSConcreteStackBlock;
    v16[1] = 3254779904LL;
    v16[2] = sub_B6FC;
    v16[3] = &unk_14370;
    v20 = a1;
    v17 = objc_retain(v6);
    v18 = v11;
    v19 = objc_retain(v7);
    v14 = objc_retain(v11);
    objc_msgSend(v14, "showWithCompletion:", v16);
    objc_release(v19);
    objc_release(v18);
    objc_release(v17);
    objc_release(v14);
  }
  else
  {
    v10 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "folderName"));
    v15 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "dataUUID"));
    objc_msgSend(
      a1,
      "fallbackSwitchToFolder:dataUUID:isJIT:completion:",
      v10,
      v15,
      objc_msgSend(v6, "isJITEnabled"),
      v7);
    objc_release(v15);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
}


// +[LCSingleTaskSwitcher presentTransitionAndReturnHomeWithCompletion:] @ 0xBEA8
void __cdecl +[LCSingleTaskSwitcher presentTransitionAndReturnHomeWithCompletion:](id a1, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  void *v6; // x21
  void *v7; // x23
  void *v8; // x24
  void *v9; // x25
  id v10; // x22
  _QWORD v11[4]; // [xsp+8h] [xbp-78h] BYREF
  id v12; // [xsp+28h] [xbp-58h]
  id v13; // [xsp+30h] [xbp-50h]
  id v14; // [xsp+38h] [xbp-48h]

  v4 = objc_retain(a3);
  objc_msgSend(a1, "setupIfNeeded");
  v5 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(a1, "sharedManager"));
  v6 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v5, "overlayController"));
  if ( v6 )
  {
    v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UIImpactFeedbackGenerator), "initWithStyle:", 1);
    objc_msgSend(v7, "impactOccurred");
    v8 = (void *)objc_claimAutoreleasedReturnValue(+[UIImage systemImageNamed:](&OBJC_CLASS___UIImage, "systemImageNamed:", CFSTR("house.fill")));
    v9 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "transitionOverlayView"));
    objc_msgSend(
      v9,
      "configureWithAppName:icon:status:",
      CFSTR("容器宿主主页"),
      v8,
      CFSTR("正在退出沙盒，返回宿主主页..."));
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3254779904LL;
    v11[2] = sub_BFF8;
    v11[3] = &unk_143A0;
    v14 = a1;
    v12 = v9;
    v13 = objc_retain(v4);
    v10 = objc_retain(v9);
    objc_msgSend(v10, "showWithCompletion:", v11);
    objc_release(v13);
    objc_release(v12);
    objc_release(v10);
    objc_release(v8);
    objc_release(v7);
  }
  else
  {
    objc_msgSend(a1, "fallbackReturnHomeWithCompletion:", v4);
  }
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
}


// +[LCSingleTaskSwitcher syncLaunchSelectionToHost:dataUUID:requestID:isJIT:] @ 0xC208
void __cdecl +[LCSingleTaskSwitcher syncLaunchSelectionToHost:dataUUID:requestID:isJIT:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        bool a6)
{
  _BOOL4 v6; // w22
  id v9; // x21
  __CFString *v10; // x0
  void *v11; // x20
  __CFString *v12; // x25
  id v13; // x23
  void *v14; // x19
  double v15; // d0
  double v16; // d8
  SEL v17; // x0
  void *v18; // x0
  void *v19; // x19
  SEL v20; // x0
  void *v21; // x0
  void *v22; // x19
  void *v23; // x19
  Class v24; // x0
  Class v25; // x21
  SEL v26; // x0
  void *v27; // x0
  void *v28; // x21
  void *v29; // x0
  void *v30; // x27
  void *v31; // x25
  __int64 v32; // x26
  void *i; // x28
  void *v34; // x20
  _BOOL8 v35; // x27
  void *v36; // x26
  void *v37; // x24
  void *v38; // x23
  const __CFString *v39; // x8
  void *v40; // x19
  void *v41; // x25
  void *v42; // x20
  void *v43; // x21
  void *v44; // x22
  void *v45; // x19
  void *v46; // x20
  void *v48; // [xsp+8h] [xbp-1B8h]
  id obj; // [xsp+10h] [xbp-1B0h]
  __CFString *v50; // [xsp+18h] [xbp-1A8h]
  __int128 v51; // [xsp+20h] [xbp-1A0h] BYREF
  __int128 v52; // [xsp+30h] [xbp-190h]
  __int128 v53; // [xsp+40h] [xbp-180h]
  __int128 v54; // [xsp+50h] [xbp-170h]
  _QWORD v55[7]; // [xsp+60h] [xbp-160h] BYREF
  _QWORD v56[7]; // [xsp+98h] [xbp-128h] BYREF
  _BYTE v57[128]; // [xsp+D0h] [xbp-F0h] BYREF

  v6 = a6;
  v9 = objc_retain(a3);
  v10 = (__CFString *)objc_retain(a4);
  v11 = v9;
  v12 = v10;
  v13 = objc_retain(a5);
  v14 = (void *)objc_claimAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  objc_msgSend(v14, "timeIntervalSince1970");
  v16 = v15;
  objc_release(v14);
  v17 = NSSelectorFromString(&CFSTR("lcUserDefaults").isa);
  if ( (objc_opt_respondsToSelector(&OBJC_CLASS___NSUserDefaults, v17) & 1) != 0 )
  {
    v18 = +[NSUserDefaults performSelector:](
            &OBJC_CLASS___NSUserDefaults,
            "performSelector:",
            NSSelectorFromString(&CFSTR("lcUserDefaults").isa));
    v19 = (void *)objc_claimAutoreleasedReturnValue(v18);
    objc_msgSend(v19, "setObject:forKey:", v9, CFSTR("selected"));
    objc_msgSend(v19, "setObject:forKey:", v12, CFSTR("selectedContainer"));
    objc_msgSend(v19, "setObject:forKey:", v12, CFSTR("lastLaunchDataUUID"));
    objc_msgSend(v19, "setObject:forKey:", v13, CFSTR("GnoixContainerLaunchRequestID"));
    objc_msgSend(v19, "setDouble:forKey:", CFSTR("GnoixContainerLaunchRequestTime"), v16);
    objc_msgSend(v19, "setBool:forKey:", 0, CFSTR("LCKeepSelectedWhenQuit"));
    objc_msgSend(v19, "setBool:forKey:", !v6, CFSTR("LCIgnoreJITOnLaunch"));
    objc_msgSend(v19, "synchronize");
    objc_release(v19);
  }
  v20 = NSSelectorFromString(&CFSTR("lcSharedDefaults").isa);
  if ( (objc_opt_respondsToSelector(&OBJC_CLASS___NSUserDefaults, v20) & 1) != 0 )
  {
    v21 = +[NSUserDefaults performSelector:](
            &OBJC_CLASS___NSUserDefaults,
            "performSelector:",
            NSSelectorFromString(&CFSTR("lcSharedDefaults").isa));
    v22 = (void *)objc_claimAutoreleasedReturnValue(v21);
    objc_msgSend(v22, "setObject:forKey:", v9, CFSTR("selected"));
    objc_msgSend(v22, "setObject:forKey:", v12, CFSTR("selectedContainer"));
    objc_msgSend(v22, "setObject:forKey:", v12, CFSTR("lastLaunchDataUUID"));
    objc_msgSend(v22, "setObject:forKey:", v13, CFSTR("GnoixContainerLaunchRequestID"));
    objc_msgSend(v22, "setDouble:forKey:", CFSTR("GnoixContainerLaunchRequestTime"), v16);
    objc_msgSend(v22, "setBool:forKey:", 0, CFSTR("LCKeepSelectedWhenQuit"));
    objc_msgSend(v22, "setBool:forKey:", !v6, CFSTR("LCIgnoreJITOnLaunch"));
    objc_msgSend(v22, "synchronize");
    objc_release(v22);
  }
  v23 = (void *)objc_claimAutoreleasedReturnValue(+[NSMutableArray arrayWithArray:](&OBJC_CLASS___NSMutableArray, "arrayWithArray:", &off_15130));
  v24 = NSClassFromString(&CFSTR("LCSharedUtils").isa);
  if ( v24 )
  {
    v25 = v24;
    v26 = NSSelectorFromString(&CFSTR("appGroupID").isa);
    if ( (objc_opt_respondsToSelector(v25, v26) & 1) != 0 )
    {
      v27 = -[objc_class performSelector:](v25, "performSelector:", NSSelectorFromString(&CFSTR("appGroupID").isa));
      v28 = (void *)objc_claimAutoreleasedReturnValue(v27);
      if ( objc_msgSend(v28, "length") && ((unsigned int)objc_msgSend(v23, "containsObject:", v28) & 1) == 0 )
        objc_msgSend(v23, "addObject:", v28);
      objc_release(v28);
    }
  }
  v53 = 0u;
  v54 = 0u;
  v51 = 0u;
  v52 = 0u;
  obj = objc_retain(v23);
  v29 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v51, v57, 16);
  v50 = v12;
  if ( v29 )
  {
    v30 = v29;
    v31 = v11;
    v32 = *(_QWORD *)v52;
    do
    {
      for ( i = 0; i != v30; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v52 != v32 )
          objc_enumerationMutation(obj);
        v34 = objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS___NSUserDefaults),
                "initWithSuiteName:",
                *(_QWORD *)(*((_QWORD *)&v51 + 1) + 8LL * (_QWORD)i));
        objc_msgSend(v34, "setObject:forKey:", v31, CFSTR("selected"));
        objc_msgSend(v34, "setObject:forKey:", v50, CFSTR("selectedContainer"));
        objc_msgSend(v34, "setObject:forKey:", v50, CFSTR("lastLaunchDataUUID"));
        objc_msgSend(v34, "setObject:forKey:", v13, CFSTR("GnoixContainerLaunchRequestID"));
        objc_msgSend(v34, "setDouble:forKey:", CFSTR("GnoixContainerLaunchRequestTime"), v16);
        objc_msgSend(v34, "setBool:forKey:", 0, CFSTR("LCKeepSelectedWhenQuit"));
        objc_msgSend(v34, "setBool:forKey:", !v6, CFSTR("LCIgnoreJITOnLaunch"));
        objc_msgSend(v34, "synchronize");
        objc_release(v34);
      }
      v30 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v51, v57, 16);
    }
    while ( v30 );
    v11 = v31;
    v12 = v50;
    v35 = !v6;
  }
  else
  {
    v35 = !v6;
  }
  objc_release(obj);
  v36 = (void *)objc_claimAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
  objc_msgSend(v36, "setObject:forKey:", v11, CFSTR("selected"));
  objc_msgSend(v36, "setObject:forKey:", v12, CFSTR("selectedContainer"));
  objc_msgSend(v36, "setObject:forKey:", v12, CFSTR("lastLaunchDataUUID"));
  objc_msgSend(v36, "setObject:forKey:", v13, CFSTR("GnoixContainerLaunchRequestID"));
  objc_msgSend(v36, "setDouble:forKey:", CFSTR("GnoixContainerLaunchRequestTime"), v16);
  objc_msgSend(v36, "setBool:forKey:", 0, CFSTR("LCKeepSelectedWhenQuit"));
  objc_msgSend(v36, "setBool:forKey:", v35, CFSTR("LCIgnoreJITOnLaunch"));
  objc_msgSend(v36, "synchronize");
  v37 = v13;
  v38 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(a1, "realHostDocumentsDirectory"));
  if ( objc_msgSend(v38, "length") )
  {
    v48 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v38, "stringByAppendingPathComponent:", CFSTR("next_launch_container.plist")));
    v39 = &stru_144B0;
    v55[0] = CFSTR("selected");
    v55[1] = CFSTR("selectedContainer");
    if ( v12 )
      v39 = v12;
    v56[0] = v11;
    v56[1] = v39;
    v55[2] = CFSTR("lastLaunchDataUUID");
    v55[3] = CFSTR("GnoixContainerLaunchRequestID");
    v56[2] = v39;
    v56[3] = v37;
    v55[4] = CFSTR("GnoixContainerLaunchRequestTime");
    v40 = (void *)objc_claimAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v16));
    v56[4] = v40;
    v55[5] = CFSTR("GnoixNeedInternalJIT");
    v41 = v11;
    v42 = (void *)objc_claimAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v6));
    v56[5] = v42;
    v55[6] = CFSTR("LCIgnoreJITOnLaunch");
    v43 = (void *)objc_claimAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", v35));
    v56[6] = v43;
    v44 = (void *)objc_claimAutoreleasedReturnValue(
                    +[NSDictionary dictionaryWithObjects:forKeys:count:](
                      &OBJC_CLASS___NSDictionary,
                      "dictionaryWithObjects:forKeys:count:",
                      v56,
                      v55,
                      7));
    objc_release(v43);
    objc_release(v42);
    objc_release(v40);
    objc_msgSend(v44, "writeToFile:atomically:", v48, 1);
    v45 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v38, "stringByAppendingPathComponent:", CFSTR("container_launch_in_progress.flag")));
    v46 = (void *)objc_claimAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    objc_msgSend(v46, "removeItemAtPath:error:", v45, 0);
    objc_release(v46);
    v11 = v41;
    v12 = v50;
    objc_release(v45);
    objc_release(v44);
    objc_release(v48);
  }
  objc_release(v38);
  objc_release(v36);
  objc_release(obj);
  objc_release(v37);
  objc_release(v12);
  objc_release(v11);
}


// +[LCSingleTaskSwitcher clearLaunchSelectionFromHost] @ 0xC8B0
void __cdecl +[LCSingleTaskSwitcher clearLaunchSelectionFromHost](id a1, SEL a2)
{
  SEL v2; // x0
  void *v3; // x0
  void *v4; // x20
  SEL v5; // x0
  void *v6; // x0
  void *v7; // x20
  void *v8; // x19
  Class v9; // x0
  Class v10; // x21
  SEL v11; // x0
  void *v12; // x0
  void *v13; // x21
  void *v14; // x0
  void *v15; // x23
  __int64 v16; // x19
  void *i; // x28
  void *v18; // x27
  void *v19; // x21
  void *v20; // x19
  void *v21; // x22
  void *v22; // x23
  void *v23; // x23
  void *v24; // x24
  void *v26; // [xsp+0h] [xbp-130h]
  id obj; // [xsp+8h] [xbp-128h]
  __int128 v28; // [xsp+10h] [xbp-120h] BYREF
  __int128 v29; // [xsp+20h] [xbp-110h]
  __int128 v30; // [xsp+30h] [xbp-100h]
  __int128 v31; // [xsp+40h] [xbp-F0h]
  _BYTE v32[128]; // [xsp+50h] [xbp-E0h] BYREF

  v2 = NSSelectorFromString(&CFSTR("lcUserDefaults").isa);
  if ( (objc_opt_respondsToSelector(&OBJC_CLASS___NSUserDefaults, v2) & 1) != 0 )
  {
    v3 = +[NSUserDefaults performSelector:](
           &OBJC_CLASS___NSUserDefaults,
           "performSelector:",
           NSSelectorFromString(&CFSTR("lcUserDefaults").isa));
    v4 = (void *)objc_claimAutoreleasedReturnValue(v3);
    objc_msgSend(v4, "removeObjectForKey:", CFSTR("selected"));
    objc_msgSend(v4, "removeObjectForKey:", CFSTR("selectedContainer"));
    objc_msgSend(v4, "removeObjectForKey:", CFSTR("lastLaunchDataUUID"));
    objc_msgSend(v4, "removeObjectForKey:", CFSTR("GnoixContainerLaunchRequestID"));
    objc_msgSend(v4, "removeObjectForKey:", CFSTR("GnoixContainerLaunchRequestTime"));
    objc_msgSend(v4, "synchronize");
    objc_release(v4);
  }
  v5 = NSSelectorFromString(&CFSTR("lcSharedDefaults").isa);
  if ( (objc_opt_respondsToSelector(&OBJC_CLASS___NSUserDefaults, v5) & 1) != 0 )
  {
    v6 = +[NSUserDefaults performSelector:](
           &OBJC_CLASS___NSUserDefaults,
           "performSelector:",
           NSSelectorFromString(&CFSTR("lcSharedDefaults").isa));
    v7 = (void *)objc_claimAutoreleasedReturnValue(v6);
    objc_msgSend(v7, "removeObjectForKey:", CFSTR("selected"));
    objc_msgSend(v7, "removeObjectForKey:", CFSTR("selectedContainer"));
    objc_msgSend(v7, "removeObjectForKey:", CFSTR("lastLaunchDataUUID"));
    objc_msgSend(v7, "removeObjectForKey:", CFSTR("GnoixContainerLaunchRequestID"));
    objc_msgSend(v7, "removeObjectForKey:", CFSTR("GnoixContainerLaunchRequestTime"));
    objc_msgSend(v7, "synchronize");
    objc_release(v7);
  }
  v8 = (void *)objc_claimAutoreleasedReturnValue(+[NSMutableArray arrayWithArray:](&OBJC_CLASS___NSMutableArray, "arrayWithArray:", &off_15148, a1));
  v9 = NSClassFromString(&CFSTR("LCSharedUtils").isa);
  if ( v9 )
  {
    v10 = v9;
    v11 = NSSelectorFromString(&CFSTR("appGroupID").isa);
    if ( (objc_opt_respondsToSelector(v10, v11) & 1) != 0 )
    {
      v12 = -[objc_class performSelector:](v10, "performSelector:", NSSelectorFromString(&CFSTR("appGroupID").isa));
      v13 = (void *)objc_claimAutoreleasedReturnValue(v12);
      if ( objc_msgSend(v13, "length") && ((unsigned int)objc_msgSend(v8, "containsObject:", v13) & 1) == 0 )
        objc_msgSend(v8, "addObject:", v13);
      objc_release(v13);
    }
  }
  v30 = 0u;
  v31 = 0u;
  v28 = 0u;
  v29 = 0u;
  obj = objc_retain(v8);
  v14 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v28, v32, 16);
  if ( v14 )
  {
    v15 = v14;
    v16 = *(_QWORD *)v29;
    do
    {
      for ( i = 0; i != v15; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v29 != v16 )
          objc_enumerationMutation(obj);
        v18 = objc_msgSend(
                objc_alloc((Class)&OBJC_CLASS___NSUserDefaults),
                "initWithSuiteName:",
                *(_QWORD *)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)i));
        objc_msgSend(v18, "removeObjectForKey:", CFSTR("selected"));
        objc_msgSend(v18, "removeObjectForKey:", CFSTR("selectedContainer"));
        objc_msgSend(v18, "removeObjectForKey:", CFSTR("lastLaunchDataUUID"));
        objc_msgSend(v18, "removeObjectForKey:", CFSTR("GnoixContainerLaunchRequestID"));
        objc_msgSend(v18, "removeObjectForKey:", CFSTR("GnoixContainerLaunchRequestTime"));
        objc_msgSend(v18, "synchronize");
        objc_release(v18);
      }
      v15 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v28, v32, 16);
    }
    while ( v15 );
  }
  objc_release(obj);
  v19 = (void *)objc_claimAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
  objc_msgSend(v19, "removeObjectForKey:", CFSTR("selected"));
  objc_msgSend(v19, "removeObjectForKey:", CFSTR("selectedContainer"));
  objc_msgSend(v19, "removeObjectForKey:", CFSTR("lastLaunchDataUUID"));
  objc_msgSend(v19, "removeObjectForKey:", CFSTR("GnoixContainerLaunchRequestID"));
  objc_msgSend(v19, "removeObjectForKey:", CFSTR("GnoixContainerLaunchRequestTime"));
  objc_msgSend(v19, "synchronize");
  v20 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v26, "realHostDocumentsDirectory"));
  if ( objc_msgSend(v20, "length") )
  {
    v21 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v20, "stringByAppendingPathComponent:", CFSTR("next_launch_container.plist")));
    v22 = (void *)objc_claimAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    objc_msgSend(v22, "removeItemAtPath:error:", v21, 0);
    objc_release(v22);
    v23 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v20, "stringByAppendingPathComponent:", CFSTR("container_launch_in_progress.flag")));
    v24 = (void *)objc_claimAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    objc_msgSend(v24, "removeItemAtPath:error:", v23, 0);
    objc_release(v24);
    objc_release(v23);
    objc_release(v21);
  }
  objc_release(v20);
  objc_release(v19);
  objc_release(obj);
}


// +[LCSingleTaskSwitcher dispatchSwitchToApp:dataUUID:] @ 0xCD10
void __cdecl +[LCSingleTaskSwitcher dispatchSwitchToApp:dataUUID:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x25
  id v6; // x26
  Class v7; // x22
  void *v8; // x28
  SEL v9; // x0
  void *v10; // x0
  void *v11; // x20
  __int64 v12; // x0
  objc_class *v13; // x27
  id v14; // x23
  void *v15; // x0
  void *v16; // x19
  __int64 v17; // x21
  void *i; // x24
  void *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x0
  void *v22; // x20
  __CFString *v23; // x8
  __CFString *v24; // x23
  void *v25; // x19
  __int64 v26; // x0
  void *v27; // x20
  void *v28; // x8
  id v29; // x24
  void *v30; // x19
  __int64 v31; // x0
  void *v32; // x20
  void *v33; // x8
  id v34; // x21
  void *v35; // x20
  void *v36; // x21
  SEL v37; // x0
  SEL v38; // x19
  dispatch_time_t v39; // x19
  void *v40; // x28
  id v41; // x23
  void *v42; // x0
  void *v43; // x19
  __int64 v44; // x25
  void *j; // x20
  void *v46; // x22
  void *v47; // x21
  Class v48; // x0
  Class v49; // x19
  void *v50; // x0
  void *v51; // x23
  objc_class *v52; // x0
  void *v53; // x20
  id v54; // x0
  void *v55; // x25
  void *v56; // x21
  void *v57; // x22
  SEL v58; // x19
  void (__fastcall *v59)(void *, SEL, void *, void *, _QWORD *); // x21
  SEL v60; // x0
  SEL v61; // x19
  dispatch_time_t v62; // x19
  _QWORD *v63; // x21
  void *v64; // [xsp+28h] [xbp-2E8h]
  __CFString *v65; // [xsp+30h] [xbp-2E0h]
  Class v66; // [xsp+38h] [xbp-2D8h]
  id v67; // [xsp+48h] [xbp-2C8h]
  void *v68; // [xsp+50h] [xbp-2C0h]
  _QWORD *v69; // [xsp+58h] [xbp-2B8h]
  void *v70; // [xsp+60h] [xbp-2B0h]
  _QWORD *v72; // [xsp+70h] [xbp-2A0h]
  void *v73; // [xsp+78h] [xbp-298h]
  _QWORD v74[4]; // [xsp+80h] [xbp-290h] BYREF
  id v75; // [xsp+A0h] [xbp-270h]
  _QWORD v76[4]; // [xsp+A8h] [xbp-268h] BYREF
  _QWORD *v77; // [xsp+C8h] [xbp-248h]
  __int128 v78; // [xsp+D0h] [xbp-240h] BYREF
  __int128 v79; // [xsp+E0h] [xbp-230h]
  __int128 v80; // [xsp+F0h] [xbp-220h]
  __int128 v81; // [xsp+100h] [xbp-210h]
  _QWORD block[4]; // [xsp+110h] [xbp-200h] BYREF
  _QWORD *v83; // [xsp+130h] [xbp-1E0h]
  _QWORD v84[5]; // [xsp+138h] [xbp-1D8h] BYREF
  __int128 v85; // [xsp+160h] [xbp-1B0h] BYREF
  __int128 v86; // [xsp+170h] [xbp-1A0h]
  __int128 v87; // [xsp+180h] [xbp-190h]
  __int128 v88; // [xsp+190h] [xbp-180h]
  const __CFString *v89; // [xsp+1A0h] [xbp-170h] BYREF
  void *v90; // [xsp+1A8h] [xbp-168h] BYREF
  _BYTE v91[128]; // [xsp+1B0h] [xbp-160h] BYREF
  _BYTE v92[128]; // [xsp+230h] [xbp-E0h] BYREF

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = NSClassFromString(&CFSTR("LCSharedUtils").isa);
  v8 = (void *)objc_claimAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  if ( v7 )
  {
    v9 = NSSelectorFromString(&CFSTR("lcUrlSchemes").isa);
    if ( (objc_opt_respondsToSelector(v7, v9) & 1) != 0 )
    {
      v10 = -[objc_class performSelector:](v7, "performSelector:", NSSelectorFromString(&CFSTR("lcUrlSchemes").isa));
      v11 = (void *)objc_claimAutoreleasedReturnValue(v10);
      v12 = objc_opt_class(&OBJC_CLASS___NSArray);
      if ( (objc_opt_isKindOfClass(v11, v12) & 1) != 0 )
      {
        v13 = v7;
        v87 = 0u;
        v88 = 0u;
        v85 = 0u;
        v86 = 0u;
        v14 = objc_retain(v11);
        v15 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v85, v92, 16);
        if ( v15 )
        {
          v16 = v15;
          v17 = *(_QWORD *)v86;
          do
          {
            for ( i = 0; i != v16; i = (char *)i + 1 )
            {
              if ( *(_QWORD *)v86 != v17 )
                objc_enumerationMutation(v14);
              v19 = *(void **)(*((_QWORD *)&v85 + 1) + 8LL * (_QWORD)i);
              v20 = objc_opt_class(&OBJC_CLASS___NSString);
              if ( (objc_opt_isKindOfClass(v19, v20) & 1) != 0 && objc_msgSend(v19, "length") )
                objc_msgSend(v8, "addObject:", v19);
            }
            v16 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v85, v92, 16);
          }
          while ( v16 );
        }
        objc_release(v14);
        v7 = v13;
      }
      objc_release(v11);
    }
  }
  if ( ((unsigned int)objc_msgSend(v8, "containsObject:", CFSTR("livecontainer")) & 1) == 0 )
    objc_msgSend(v8, "addObject:", CFSTR("livecontainer"));
  if ( ((unsigned int)objc_msgSend(v8, "containsObject:", CFSTR("gnoix")) & 1) == 0 )
    objc_msgSend(v8, "addObject:", CFSTR("gnoix"));
  v21 = objc_claimAutoreleasedReturnValue(objc_msgSend(v8, "firstObject"));
  v22 = (void *)v21;
  if ( v21 )
    v23 = (__CFString *)v21;
  else
    v23 = CFSTR("livecontainer");
  v24 = objc_retain(v23);
  objc_release(v22);
  v25 = (void *)objc_claimAutoreleasedReturnValue(
                  +[NSCharacterSet URLQueryAllowedCharacterSet](
                    &OBJC_CLASS___NSCharacterSet,
                    "URLQueryAllowedCharacterSet"));
  v26 = objc_claimAutoreleasedReturnValue(objc_msgSend(v5, "stringByAddingPercentEncodingWithAllowedCharacters:", v25));
  v27 = (void *)v26;
  if ( v26 )
    v28 = (void *)v26;
  else
    v28 = v5;
  v29 = objc_retain(v28);
  objc_release(v27);
  objc_release(v25);
  v30 = (void *)objc_claimAutoreleasedReturnValue(
                  +[NSCharacterSet URLQueryAllowedCharacterSet](
                    &OBJC_CLASS___NSCharacterSet,
                    "URLQueryAllowedCharacterSet"));
  v31 = objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "stringByAddingPercentEncodingWithAllowedCharacters:", v30));
  v32 = (void *)v31;
  if ( v31 )
    v33 = (void *)v31;
  else
    v33 = v6;
  v34 = objc_retain(v33);
  objc_release(v32);
  objc_release(v30);
  v73 = v34;
  v35 = (void *)objc_claimAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("%@://livecontainer-launch?bundle-name=%@&container-folder-name=%@&folder-name=%@"),
                    v24,
                    v29,
                    v34,
                    v29));
  v36 = (void *)objc_claimAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v35));
  NSLog(&CFSTR("[LCSingleTaskSwitcher] 🚀 正在执行应用切入调度: target=%@, URL=%@").isa, v5, v35);
  v84[0] = _NSConcreteStackBlock;
  v84[1] = 3221225472LL;
  v84[2] = sub_D50C;
  v84[3] = &unk_142B0;
  v84[4] = a1;
  v69 = objc_retainBlock(v84);
  v37 = NSSelectorFromString(&CFSTR("launchToGuestAppWithURL:").isa);
  v70 = v8;
  if ( v7 )
  {
    v38 = v37;
    if ( (objc_opt_respondsToSelector(v7, v37) & 1) != 0 )
    {
      if ( ((unsigned int (__fastcall *)(Class, SEL, void *))-[objc_class methodForSelector:](
                                                               v7,
                                                               "methodForSelector:",
                                                               v38))(
             v7,
             v38,
             v36) )
      {
        NSLog(&CFSTR("[LCSingleTaskSwitcher] ✅ LCSharedUtils launchToGuestAppWithURL 调度成功").isa);
        v39 = dispatch_time(0, 150000000);
        block[0] = _NSConcreteStackBlock;
        block[1] = 3254779904LL;
        block[2] = sub_D618;
        block[3] = &unk_143D0;
        v83 = v69;
        v72 = objc_retain(v69);
        dispatch_after(v39, (dispatch_queue_t)&_dispatch_main_q, block);
        v40 = v83;
        goto LABEL_62;
      }
    }
  }
  v67 = v5;
  v68 = v36;
  v64 = v35;
  v65 = v24;
  v66 = v7;
  v72 = (_QWORD *)objc_claimAutoreleasedReturnValue(+[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication"));
  v78 = 0u;
  v79 = 0u;
  v80 = 0u;
  v81 = 0u;
  v41 = objc_retain(v8);
  v42 = objc_msgSend(v41, "countByEnumeratingWithState:objects:count:", &v78, v91, 16);
  if ( v42 )
  {
    v43 = v42;
    v44 = *(_QWORD *)v79;
    do
    {
      for ( j = 0; j != v43; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v79 != v44 )
          objc_enumerationMutation(v41);
        v46 = (void *)objc_claimAutoreleasedReturnValue(
                        +[NSString stringWithFormat:](
                          &OBJC_CLASS___NSString,
                          "stringWithFormat:",
                          CFSTR("%@://livecontainer-launch?bundle-name=%@&container-folder-name=%@&folder-name=%@"),
                          *(_QWORD *)(*((_QWORD *)&v78 + 1) + 8LL * (_QWORD)j),
                          v29,
                          v73,
                          v29));
        v47 = (void *)objc_claimAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v46));
        if ( v47 && (objc_opt_respondsToSelector(v72, "openURL:options:completionHandler:") & 1) != 0 )
          objc_msgSend(v72, "openURL:options:completionHandler:", v47, &__NSDictionary0__struct, 0);
        objc_release(v47);
        objc_release(v46);
      }
      v43 = objc_msgSend(v41, "countByEnumeratingWithState:objects:count:", &v78, v91, 16);
    }
    while ( v43 );
  }
  objc_release(v41);
  v40 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(a1, "hostBundleIdentifier"));
  v48 = NSClassFromString(&CFSTR("LSApplicationWorkspace").isa);
  if ( v48 )
  {
    v49 = v48;
    if ( (objc_opt_respondsToSelector(v48, "defaultWorkspace") & 1) != 0 )
    {
      v50 = objc_retainAutoreleasedReturnValue(-[objc_class performSelector:](v49, "performSelector:", "defaultWorkspace"));
      if ( v50 )
      {
        v51 = v50;
        v52 = NSClassFromString(&CFSTR("_LSOpenConfiguration").isa);
        if ( v52 )
        {
          v53 = v68;
        }
        else
        {
          v52 = objc_lookUpClass("_LSOpenConfiguration");
          v53 = v68;
          if ( !v52 )
          {
            v55 = 0;
            v58 = "openApplicationWithBundleIdentifier:configuration:completionHandler:";
            if ( (objc_opt_respondsToSelector(
                    v51,
                    "openApplicationWithBundleIdentifier:configuration:completionHandler:")
                & 1) != 0 )
              goto LABEL_55;
            goto LABEL_54;
          }
        }
        v54 = objc_alloc_init(v52);
        v55 = v54;
        if ( v54 && v53 && (objc_opt_respondsToSelector(v54, "setFrontBoardOptions:") & 1) != 0 )
        {
          v89 = CFSTR("__URL__");
          v56 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v53, "absoluteString"));
          v90 = v56;
          v57 = (void *)objc_claimAutoreleasedReturnValue(
                          +[NSDictionary dictionaryWithObjects:forKeys:count:](
                            &OBJC_CLASS___NSDictionary,
                            "dictionaryWithObjects:forKeys:count:",
                            &v90,
                            &v89,
                            1));
          objc_release(v56);
          objc_msgSend(v55, "performSelector:withObject:", "setFrontBoardOptions:", v57);
          objc_release(v57);
        }
        v58 = "openApplicationWithBundleIdentifier:configuration:completionHandler:";
        if ( (objc_opt_respondsToSelector(v51, "openApplicationWithBundleIdentifier:configuration:completionHandler:")
            & 1) != 0 )
          goto LABEL_55;
LABEL_54:
        v58 = NSSelectorFromString(&CFSTR("openApplicationWithBundleIdentifier:usingConfiguration:completionHandler:").isa);
LABEL_55:
        if ( (objc_opt_respondsToSelector(v51, v58) & 1) != 0 )
        {
          v59 = (void (__fastcall *)(void *, SEL, void *, void *, _QWORD *))objc_msgSend(v51, "methodForSelector:", v58);
          v76[0] = _NSConcreteStackBlock;
          v76[1] = 3254779904LL;
          v76[2] = sub_D624;
          v76[3] = &unk_14400;
          v77 = objc_retain(v69);
          v59(v51, v58, v40, v55, v76);
          objc_release(v77);
        }
        objc_release(v55);
        objc_release(v51);
      }
    }
  }
  v60 = NSSelectorFromString(&CFSTR("launchToGuestAppWithClassicMode:").isa);
  v5 = v67;
  if ( v66 )
  {
    v61 = v60;
    if ( (objc_opt_respondsToSelector(v66, v60) & 1) != 0 )
      ((void (__fastcall *)(Class, SEL, _QWORD))-[objc_class methodForSelector:](v66, "methodForSelector:", v61))(
        v66,
        v61,
        0);
  }
  v62 = dispatch_time(0, 350000000);
  v74[0] = _NSConcreteStackBlock;
  v74[1] = 3254779904LL;
  v74[2] = sub_D6BC;
  v74[3] = &unk_143D0;
  v75 = v69;
  v63 = objc_retain(v69);
  dispatch_after(v62, (dispatch_queue_t)&_dispatch_main_q, v74);
  objc_release(v75);
  objc_release(v63);
  v35 = v64;
  v24 = v65;
  v36 = v68;
LABEL_62:
  objc_release(v40);
  objc_release(v72);
  objc_release(v36);
  objc_release(v35);
  objc_release(v73);
  objc_release(v29);
  objc_release(v24);
  objc_release(v70);
  objc_release(v6);
  objc_release(v5);
}


// +[LCSingleTaskSwitcher dispatchReturnHome] @ 0xD6C8
void __cdecl +[LCSingleTaskSwitcher dispatchReturnHome](id a1, SEL a2)
{
  _QWORD *v3; // x19
  Class v4; // x20
  SEL v5; // x0
  SEL v6; // x21
  dispatch_time_t v7; // x21
  _QWORD *v8; // x20
  id v9; // x19
  void *v10; // x0
  void *v11; // x22
  __int64 v12; // x27
  void *i; // x19
  void *v14; // x25
  dispatch_time_t v15; // x21
  void *v16; // [xsp+0h] [xbp-1A0h]
  _QWORD v17[4]; // [xsp+8h] [xbp-198h] BYREF
  id v18; // [xsp+28h] [xbp-178h]
  __int128 v19; // [xsp+30h] [xbp-170h] BYREF
  __int128 v20; // [xsp+40h] [xbp-160h]
  __int128 v21; // [xsp+50h] [xbp-150h]
  __int128 v22; // [xsp+60h] [xbp-140h]
  _QWORD block[4]; // [xsp+70h] [xbp-130h] BYREF
  _QWORD *v24; // [xsp+90h] [xbp-110h]
  _QWORD v25[5]; // [xsp+98h] [xbp-108h] BYREF
  _BYTE v26[128]; // [xsp+C0h] [xbp-E0h] BYREF

  objc_msgSend(a1, "clearLaunchSelectionFromHost");
  v25[0] = _NSConcreteStackBlock;
  v25[1] = 3221225472LL;
  v25[2] = sub_D9AC;
  v25[3] = &unk_142B0;
  v25[4] = a1;
  v3 = objc_retainBlock(v25);
  v4 = NSClassFromString(&CFSTR("LCSharedUtils").isa);
  v5 = NSSelectorFromString(&CFSTR("launchToGuestAppWithClassicMode:").isa);
  if ( v4
    && (v6 = v5, (objc_opt_respondsToSelector(v4, v5) & 1) != 0)
    && ((unsigned int (__fastcall *)(Class, SEL, _QWORD))-[objc_class methodForSelector:](v4, "methodForSelector:", v6))(
         v4,
         v6,
         0) )
  {
    NSLog(&CFSTR("[LCSingleTaskSwitcher] ✅ 返回宿主：LCSharedUtils launchToGuestAppWithClassicMode 调度成功").isa);
    v7 = dispatch_time(0, 150000000);
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_DAB8;
    block[3] = &unk_143D0;
    v24 = v3;
    v8 = objc_retain(v3);
    dispatch_after(v7, (dispatch_queue_t)&_dispatch_main_q, block);
    v9 = v24;
  }
  else
  {
    v8 = (_QWORD *)objc_claimAutoreleasedReturnValue(+[UIApplication sharedApplication](&OBJC_CLASS___UIApplication, "sharedApplication", v3));
    v19 = 0u;
    v20 = 0u;
    v21 = 0u;
    v22 = 0u;
    v10 = objc_msgSend(&off_15160, "countByEnumeratingWithState:objects:count:", &v19, v26, 16);
    if ( v10 )
    {
      v11 = v10;
      v12 = *(_QWORD *)v20;
      do
      {
        for ( i = 0; i != v11; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v20 != v12 )
            objc_enumerationMutation(&off_15160);
          v14 = (void *)objc_claimAutoreleasedReturnValue(
                          +[NSURL URLWithString:](
                            &OBJC_CLASS___NSURL,
                            "URLWithString:",
                            *(_QWORD *)(*((_QWORD *)&v19 + 1) + 8LL * (_QWORD)i)));
          if ( v14 && (objc_opt_respondsToSelector(v8, "openURL:options:completionHandler:") & 1) != 0 )
            objc_msgSend(v8, "openURL:options:completionHandler:", v14, &__NSDictionary0__struct, 0);
          objc_release(v14);
        }
        v11 = objc_msgSend(&off_15160, "countByEnumeratingWithState:objects:count:", &v19, v26, 16);
      }
      while ( v11 );
    }
    v15 = dispatch_time(0, 350000000);
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_DAC4;
    v17[3] = &unk_143D0;
    v18 = v16;
    v9 = objc_retain(v16);
    dispatch_after(v15, (dispatch_queue_t)&_dispatch_main_q, v17);
    objc_release(v18);
  }
  objc_release(v9);
  objc_release(v8);
}


// +[LCSingleTaskSwitcher fallbackSwitchToFolder:dataUUID:isJIT:completion:] @ 0xDAD0
// local variable allocation has failed, the output may be wrong!
void __cdecl +[LCSingleTaskSwitcher fallbackSwitchToFolder:dataUUID:isJIT:completion:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id a6)
{
  _BOOL8 v7; // x23
  id v10; // x19
  void (__fastcall **v11)(id, __int64); // x21
  void *v12; // x24
  void *v13; // x22
  id v14; // [xsp+8h] [xbp-38h]

  v7 = a5;
  v14 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = (void (__fastcall **)(id, __int64))objc_retain(a6);
  v12 = (void *)objc_claimAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  v13 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v12, "UUIDString"));
  objc_release(v12);
  objc_msgSend(a1, "syncLaunchSelectionToHost:dataUUID:requestID:isJIT:", v14, v10, v13, v7);
  if ( v11 )
    v11[2](v11, 1);
  objc_msgSend(a1, "dispatchSwitchToApp:dataUUID:", v14, v10);
  objc_release(v13);
  objc_release(v11);
  objc_release(v10);
  objc_release(v14);
}


// +[LCSingleTaskSwitcher fallbackReturnHomeWithCompletion:] @ 0xDB98
void __cdecl +[LCSingleTaskSwitcher fallbackReturnHomeWithCompletion:](id a1, SEL a2, id a3)
{
  void (__fastcall **v4)(id, __int64); // [xsp+8h] [xbp-18h]

  v4 = (void (__fastcall **)(id, __int64))objc_retain(a3);
  objc_msgSend(a1, "clearLaunchSelectionFromHost");
  if ( v4 )
    v4[2](v4, 1);
  objc_msgSend(a1, "dispatchReturnHome");
  objc_release(v4);
}


// +[LCSingleTaskSwitcher realHostDocumentsDirectory] @ 0xDBF0
id __cdecl +[LCSingleTaskSwitcher realHostDocumentsDirectory](id a1, SEL a2)
{
  char *v2; // x0
  __CFString *v3; // x19
  char *v4; // x0
  void *v5; // x20
  char *v6; // x0
  void *v7; // x20
  char *v8; // x0
  void *v9; // x0
  void *v10; // x21
  NSArray *v11; // x0
  __int64 v12; // x0
  __CFString *v13; // x8
  stat v15; // [xsp+0h] [xbp-B0h] BYREF

  v2 = getenv("GNOIX_REAL_DOCUMENTS");
  if ( v2 && *v2 )
  {
    v3 = (__CFString *)objc_claimAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v2));
    if ( !stat(
            (const char *)-[__CFString fileSystemRepresentation](objc_retainAutorelease(v3), "fileSystemRepresentation"),
            &v15)
      && (v15.st_mode & 0xF000) == 0x4000 )
    {
      return objc_autoreleaseReturnValue(v3);
    }
    objc_release(v3);
  }
  v4 = getenv("LC_HOME_PATH");
  if ( !v4 || !*v4 )
  {
LABEL_11:
    v6 = getenv("HOME");
    if ( v6 && *v6 )
    {
      v7 = (void *)objc_claimAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v6));
      v8 = (char *)objc_msgSend(v7, "rangeOfString:", CFSTR("/Documents/Data/Application/"));
      if ( v8 != (char *)0x7FFFFFFFFFFFFFFFLL )
      {
        v3 = (__CFString *)objc_claimAutoreleasedReturnValue(
                             objc_msgSend(
                               v7,
                               "substringToIndex:",
                               &v8[(_QWORD)objc_msgSend(CFSTR("/Documents"), "length")]));
        if ( !stat(
                (const char *)-[__CFString fileSystemRepresentation](
                                objc_retainAutorelease(v3),
                                "fileSystemRepresentation"),
                &v15)
          && (v15.st_mode & 0xF000) == 0x4000 )
        {
          goto LABEL_28;
        }
        objc_release(v3);
      }
      v9 = objc_msgSend(v7, "rangeOfString:", CFSTR("/Data/Application/"));
      if ( v9 != (void *)0x7FFFFFFFFFFFFFFFLL )
      {
        v10 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v7, "substringToIndex:", v9));
        v3 = (__CFString *)objc_claimAutoreleasedReturnValue(objc_msgSend(v10, "stringByAppendingPathComponent:", CFSTR("Documents")));
        if ( !stat(
                (const char *)-[__CFString fileSystemRepresentation](
                                objc_retainAutorelease(v3),
                                "fileSystemRepresentation"),
                &v15)
          && (v15.st_mode & 0xF000) == 0x4000 )
        {
LABEL_27:
          objc_release(v10);
LABEL_28:
          objc_release(v7);
          return objc_autoreleaseReturnValue(v3);
        }
        objc_release(v3);
        objc_release(v10);
      }
      v3 = (__CFString *)objc_claimAutoreleasedReturnValue(objc_msgSend(v7, "stringByAppendingPathComponent:", CFSTR("Documents")));
      if ( !stat(
              (const char *)-[__CFString fileSystemRepresentation](
                              objc_retainAutorelease(v3),
                              "fileSystemRepresentation"),
              &v15)
        && (v15.st_mode & 0xF000) == 0x4000 )
      {
        goto LABEL_28;
      }
      objc_release(v3);
      objc_release(v7);
    }
    v11 = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, 1u, 1);
    v7 = (void *)objc_claimAutoreleasedReturnValue(v11);
    v12 = objc_claimAutoreleasedReturnValue(objc_msgSend(v7, "firstObject"));
    v10 = (void *)v12;
    v13 = &stru_144B0;
    if ( v12 )
      v13 = (__CFString *)v12;
    v3 = objc_retain(v13);
    goto LABEL_27;
  }
  v5 = (void *)objc_claimAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v4));
  v3 = (__CFString *)objc_claimAutoreleasedReturnValue(objc_msgSend(v5, "stringByAppendingPathComponent:", CFSTR("Documents")));
  objc_release(v5);
  if ( stat(
         (const char *)-[__CFString fileSystemRepresentation](objc_retainAutorelease(v3), "fileSystemRepresentation"),
         &v15)
    || (v15.st_mode & 0xF000) != 0x4000 )
  {
    objc_release(v3);
    goto LABEL_11;
  }
  return objc_autoreleaseReturnValue(v3);
}


// +[LCSingleTaskSwitcher currentGuestFolderName] @ 0xDE70
id __cdecl +[LCSingleTaskSwitcher currentGuestFolderName](id a1, SEL a2)
{
  char *v2; // x0
  void *v3; // x0
  SEL v4; // x0
  void *v5; // x0
  void *v6; // x19
  void *v7; // x8
  SEL v8; // x0
  void *v9; // x0
  void *v10; // x19
  void *v11; // x20
  void *v13; // x19
  void *v14; // x20
  void *v15; // x20
  id v16; // x21
  void *v17; // x21
  __CFString *v18; // x21

  v2 = getenv("LC_APP_ID");
  if ( !v2 || !*v2 )
  {
    v4 = NSSelectorFromString(&CFSTR("lcGuestAppId").isa);
    if ( (objc_opt_respondsToSelector(&OBJC_CLASS___NSUserDefaults, v4) & 1) != 0 )
    {
      v5 = +[NSUserDefaults performSelector:](
             &OBJC_CLASS___NSUserDefaults,
             "performSelector:",
             NSSelectorFromString(&CFSTR("lcGuestAppId").isa));
      v6 = (void *)objc_claimAutoreleasedReturnValue(v5);
      v7 = objc_msgSend(v6, "length");
      v3 = v6;
      if ( v7 )
        return objc_autoreleaseReturnValue(v3);
      objc_release(v6);
    }
    v8 = NSSelectorFromString(&CFSTR("lcUserDefaults").isa);
    if ( (objc_opt_respondsToSelector(&OBJC_CLASS___NSUserDefaults, v8) & 1) != 0 )
    {
      v9 = +[NSUserDefaults performSelector:](
             &OBJC_CLASS___NSUserDefaults,
             "performSelector:",
             NSSelectorFromString(&CFSTR("lcUserDefaults").isa));
      v10 = (void *)objc_claimAutoreleasedReturnValue(v9);
      v11 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v10, "stringForKey:", CFSTR("selected")));
      if ( objc_msgSend(v11, "length") )
      {
        objc_release(v10);
        return objc_autoreleaseReturnValue(v11);
      }
      objc_release(v11);
      objc_release(v10);
    }
    if ( (objc_opt_respondsToSelector(&OBJC_CLASS___NSUserDefaults, "guestAppInfo") & 1) != 0 )
    {
      v13 = (void *)objc_claimAutoreleasedReturnValue(+[NSUserDefaults guestAppInfo](&OBJC_CLASS___NSUserDefaults, "guestAppInfo"));
      v14 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v13, "objectForKeyedSubscript:", CFSTR("bundlePath")));
      if ( objc_msgSend(v14, "length") )
        goto LABEL_19;
      objc_release(v14);
      objc_release(v13);
    }
    v15 = (void *)objc_claimAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
    v13 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v15, "stringForKey:", CFSTR("selected")));
    objc_release(v15);
    if ( objc_msgSend(v13, "length") )
    {
      v16 = objc_retain(v13);
      objc_release(v13);
      return objc_autoreleaseReturnValue(v16);
    }
    v17 = (void *)objc_claimAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v14 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v17, "bundlePath"));
    objc_release(v17);
    if ( !(unsigned int)objc_msgSend(v14, "hasSuffix:", CFSTR(".app")) )
    {
      v18 = &stru_144B0;
      goto LABEL_21;
    }
LABEL_19:
    v18 = (__CFString *)objc_claimAutoreleasedReturnValue(objc_msgSend(v14, "lastPathComponent"));
LABEL_21:
    objc_release(v14);
    objc_release(v13);
    return objc_autoreleaseReturnValue(v18);
  }
  v3 = (void *)objc_claimAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v2));
  return objc_autoreleaseReturnValue(v3);
}


// +[LCSingleTaskSwitcher hostBundleIdentifier] @ 0xE0A4
id __cdecl +[LCSingleTaskSwitcher hostBundleIdentifier](id a1, SEL a2)
{
  void *v2; // x20
  void *v3; // x19
  id v4; // x0
  void *v5; // x21
  void *v6; // x20
  void *v7; // x21
  void *v8; // x22
  void *v9; // x21
  char *v11; // x0

  v2 = (void *)objc_claimAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
  v3 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v2, "stringForKey:", CFSTR("GnoixHostRealBundleIdentifier")));
  objc_release(v2);
  if ( objc_msgSend(v3, "length") )
  {
    v4 = objc_retain(v3);
  }
  else
  {
    if ( (objc_opt_respondsToSelector(&OBJC_CLASS___NSUserDefaults, "lcMainBundle") & 1) != 0 )
    {
      v6 = (void *)objc_claimAutoreleasedReturnValue(+[NSUserDefaults lcMainBundle](&OBJC_CLASS___NSUserDefaults, "lcMainBundle"));
      v7 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "bundleIdentifier"));
      v8 = objc_msgSend(v7, "length");
      objc_release(v7);
      if ( v8 )
      {
        v9 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "bundleIdentifier"));
        objc_release(v6);
        objc_release(v3);
        return objc_autoreleaseReturnValue(v9);
      }
      objc_release(v6);
    }
    v11 = getenv("LC_HOST_BUNDLE_ID");
    if ( !v11 || !*v11 )
    {
      objc_release(v3);
      return objc_autoreleaseReturnValue(CFSTR("com.kdt.livecontainer"));
    }
    v4 = (id)objc_claimAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v11));
  }
  v5 = v4;
  objc_release(v3);
  return objc_autoreleaseReturnValue(v5);
}


// +[LCSingleTaskSwitcher isContainerGuestRunning] @ 0xE1CC
bool __cdecl +[LCSingleTaskSwitcher isContainerGuestRunning](id a1, SEL a2)
{
  void *v2; // x19
  void *v3; // x20
  unsigned __int8 v4; // w21
  Class v5; // x0
  void *v6; // x19
  void *v7; // x20
  Class v8; // x19
  SEL v9; // x0
  SEL v10; // x1
  bool (__fastcall *v12)(Class, SEL); // [xsp+8h] [xbp-28h]

  v2 = (void *)objc_claimAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v3 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v2, "bundlePath"));
  v4 = (unsigned __int8)objc_msgSend(v3, "hasSuffix:", CFSTR(".appex"));
  objc_release(v3);
  objc_release(v2);
  if ( (v4 & 1) != 0 )
  {
LABEL_2:
    LOBYTE(v5) = 0;
    return (char)v5;
  }
  if ( getenv("LC_APP_ID") )
  {
    LOBYTE(v5) = 1;
  }
  else if ( getenv("GNOIX_REAL_DOCUMENTS") )
  {
    LOBYTE(v5) = 1;
  }
  else if ( getenv("LC_HOME_PATH") )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    v6 = (void *)objc_claimAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
    v7 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "objectForKey:", CFSTR("selected")));
    objc_release(v7);
    objc_release(v6);
    if ( v7 )
    {
      LOBYTE(v5) = 1;
    }
    else
    {
      v5 = NSClassFromString(&CFSTR("LCMachOHelper").isa);
      if ( !v5 )
        return (char)v5;
      v8 = v5;
      v9 = NSSelectorFromString(&CFSTR("isContainerGuestRunning").isa);
      if ( (objc_opt_respondsToSelector(v8, v9) & 1) == 0 )
        goto LABEL_2;
      v12 = (bool (__fastcall *)(Class, SEL))-[objc_class methodForSelector:](
                                               v8,
                                               "methodForSelector:",
                                               NSSelectorFromString(&CFSTR("isContainerGuestRunning").isa));
      v10 = NSSelectorFromString(&CFSTR("isContainerGuestRunning").isa);
      LOBYTE(v5) = v12(v8, v10);
    }
  }
  return (char)v5;
}


// -[LCSingleTaskSwitcher overlayWindow] @ 0xE370
LCSingleTaskOverlayWindow *__cdecl -[LCSingleTaskSwitcher overlayWindow](LCSingleTaskSwitcher *self, SEL a2)
{
  return self->_overlayWindow;
}


// -[LCSingleTaskSwitcher setOverlayWindow:] @ 0xE378
void __cdecl -[LCSingleTaskSwitcher setOverlayWindow:](LCSingleTaskSwitcher *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_overlayWindow, a3);
}


// -[LCSingleTaskSwitcher overlayController] @ 0xE384
LCSingleTaskOverlayController *__cdecl -[LCSingleTaskSwitcher overlayController](LCSingleTaskSwitcher *self, SEL a2)
{
  return self->_overlayController;
}


// -[LCSingleTaskSwitcher setOverlayController:] @ 0xE38C
void __cdecl -[LCSingleTaskSwitcher setOverlayController:](LCSingleTaskSwitcher *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_overlayController, a3);
}


// -[LCSingleTaskSwitcher isSetup] @ 0xE398
bool __cdecl -[LCSingleTaskSwitcher isSetup](LCSingleTaskSwitcher *self, SEL a2)
{
  return self->_isSetup;
}


// -[LCSingleTaskSwitcher setIsSetup:] @ 0xE3A0
void __cdecl -[LCSingleTaskSwitcher setIsSetup:](LCSingleTaskSwitcher *self, SEL a2, bool a3)
{
  self->_isSetup = a3;
}


// -[LCSingleTaskSwitcher .cxx_destruct] @ 0xE3A8
void __cdecl -[LCSingleTaskSwitcher .cxx_destruct](LCSingleTaskSwitcher *self, SEL a2)
{
  objc_storeStrong((id *)&self->_overlayController, 0);
  objc_storeStrong((id *)&self->_overlayWindow, 0);
}




/* ===== CLASS _global_blocks_and_stubs ===== */
// sub_4AE0 @ 0x4AE0
void *__fastcall sub_4AE0(__int64 a1)
{
  void *v2; // x0
  CGAffineTransform v4; // [xsp+0h] [xbp-70h] BYREF
  CGAffineTransform v5; // [xsp+30h] [xbp-40h] BYREF

  CGAffineTransformMakeScale(&v5, 1.1, 1.1);
  v2 = *(void **)(a1 + 32);
  v4 = v5;
  objc_msgSend(v2, "setTransform:", &v4);
  return objc_msgSend(*(id *)(a1 + 32), "setAlpha:", 1.0);
}


// sub_4B40 @ 0x4B40
id __fastcall sub_4B40(__int64 a1, __int64 a2)
{
  return objc_retain(*(id *)(a2 + 32));
}


// sub_4B48 @ 0x4B48
void __fastcall sub_4B48(__int64 a1)
{
  objc_release(*(id *)(a1 + 32));
}


// sub_4B50 @ 0x4B50
void *__fastcall sub_4B50(__int64 a1)
{
  void *v1; // x0
  __int128 v2; // q1
  _OWORD v4[3]; // [xsp+0h] [xbp-30h] BYREF

  v1 = *(void **)(a1 + 32);
  v2 = *(_OWORD *)&CGAffineTransformIdentity.c;
  v4[0] = *(_OWORD *)&CGAffineTransformIdentity.a;
  v4[1] = v2;
  v4[2] = *(_OWORD *)&CGAffineTransformIdentity.tx;
  return objc_msgSend(v1, "setTransform:", v4);
}


// sub_59DC @ 0x59DC
void *__fastcall sub_59DC(__int64 a1)
{
  return objc_msgSend(*(id *)(a1 + 32), "setText:", *(_QWORD *)(a1 + 40));
}


// sub_59E4 @ 0x59E4
id __fastcall sub_59E4(__int64 a1, __int64 a2)
{
  id v3; // x0

  v3 = objc_retain(*(id *)(a2 + 32));
  return objc_retain(*(id *)(a2 + 40));
}


// sub_5A0C @ 0x5A0C
void __fastcall sub_5A0C(__int64 a1)
{
  objc_release(*(id *)(a1 + 40));
  objc_release(*(id *)(a1 + 32));
}


// sub_5B4C @ 0x5B4C
void *__fastcall sub_5B4C(__int64 a1)
{
  void *v2; // x0
  __int128 v3; // q1
  _OWORD v5[3]; // [xsp+0h] [xbp-40h] BYREF

  objc_msgSend(*(id *)(a1 + 32), "setAlpha:", 1.0);
  v2 = *(void **)(a1 + 40);
  v3 = *(_OWORD *)&CGAffineTransformIdentity.c;
  v5[0] = *(_OWORD *)&CGAffineTransformIdentity.a;
  v5[1] = v3;
  v5[2] = *(_OWORD *)&CGAffineTransformIdentity.tx;
  return objc_msgSend(v2, "setTransform:", v5);
}


// sub_5BA0 @ 0x5BA0
__int64 __fastcall sub_5BA0(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 32);
  if ( result )
    return (*(__int64 (**)(void))(result + 16))();
  return result;
}


// sub_5BB4 @ 0x5BB4
void __fastcall sub_5BB4(__int64 a1, __int64 a2)
{
  _Block_object_assign((void *)(a1 + 32), *(const void **)(a2 + 32), 7);
}


// sub_84A8 @ 0x84A8
void __fastcall __noreturn sub_84A8(_Unwind_Exception *a1)
{
  __int64 v1; // x21
  __int64 v2; // x29

  objc_destroyWeak((id *)(v1 + 40));
  objc_destroyWeak((id *)(v2 - 232));
  _Unwind_Resume(a1);
}


// j___Unwind_Resume @ 0x84C8
// attributes: thunk
void __cdecl __noreturn j___Unwind_Resume(_Unwind_Exception *exception_object)
{
  _Unwind_Resume(exception_object);
}


// sub_84CC @ 0x84CC
void __fastcall sub_84CC(__int64 a1)
{
  id WeakRetained; // x20
  void *v3; // x21
  id v4; // x20
  void (**v5)(void); // x21
  id v6; // x20
  void *v7; // x21
  void (__fastcall **v8)(_QWORD, _QWORD); // x20
  id v9; // [xsp+8h] [xbp-28h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 40));
  v3 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(WeakRetained, "onUserInteraction"));
  objc_release(v3);
  objc_release(WeakRetained);
  if ( v3 )
  {
    v4 = objc_loadWeakRetained((id *)(a1 + 40));
    v5 = (void (**)(void))objc_claimAutoreleasedReturnValue(objc_msgSend(v4, "onUserInteraction"));
    v5[2]();
    objc_release(v5);
    objc_release(v4);
  }
  v6 = objc_loadWeakRetained((id *)(a1 + 40));
  v7 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v6, "onSelectApp"));
  objc_release(v7);
  objc_release(v6);
  if ( v7 )
  {
    v9 = objc_loadWeakRetained((id *)(a1 + 40));
    v8 = (void (__fastcall **)(_QWORD, _QWORD))objc_claimAutoreleasedReturnValue(objc_msgSend(v9, "onSelectApp"));
    v8[2](v8, *(_QWORD *)(a1 + 32));
    objc_release(v8);
    objc_release(v9);
  }
}


// sub_85A8 @ 0x85A8
void __fastcall sub_85A8(__int64 a1, __int64 a2)
{
  id v4; // x0

  v4 = objc_retain(*(id *)(a2 + 32));
  objc_copyWeak((id *)(a1 + 40), (id *)(a2 + 40));
}


// sub_85D8 @ 0x85D8
void __fastcall sub_85D8(__int64 a1)
{
  objc_destroyWeak((id *)(a1 + 40));
  objc_release(*(id *)(a1 + 32));
}


// sub_8AD4 @ 0x8AD4
void __fastcall __noreturn sub_8AD4(
        _Unwind_Exception *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        id location)
{
  __int64 v16; // x20

  objc_destroyWeak((id *)(v16 + 32));
  objc_destroyWeak(&location);
  _Unwind_Resume(a1);
}


// sub_8AF0 @ 0x8AF0
void __fastcall sub_8AF0(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-18h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "updateLayoutForCanvasSize:", *(double *)(a1 + 40), *(double *)(a1 + 48));
  objc_release(WeakRetained);
}


// sub_8B2C @ 0x8B2C
void __fastcall sub_8B2C(__int64 a1, __int64 a2)
{
  objc_copyWeak((id *)(a1 + 32), (id *)(a2 + 32));
}


// sub_8B38 @ 0x8B38
void __fastcall sub_8B38(__int64 a1)
{
  objc_destroyWeak((id *)(a1 + 32));
}


// sub_941C @ 0x941C
void __fastcall __noreturn sub_941C(
        _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        id a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        id a28)
{
  __int64 v28; // x24
  __int64 v29; // x25
  __int64 v30; // x26
  __int64 v31; // x27
  __int64 v32; // x28
  __int64 v33; // x29

  objc_destroyWeak((id *)(v30 + 32));
  objc_destroyWeak((id *)(v29 + 32));
  objc_destroyWeak(&a23);
  objc_destroyWeak(&a28);
  objc_destroyWeak((id *)(v31 + 32));
  objc_destroyWeak((id *)(v28 + 32));
  objc_destroyWeak((id *)(v32 + 32));
  objc_destroyWeak((id *)(v33 - 136));
  objc_destroyWeak((id *)(v33 - 128));
  _Unwind_Resume(a1);
}


// sub_94F0 @ 0x94F0
void __fastcall sub_94F0(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "setDrawerOpen:animated:", 0, 1);
  objc_release(WeakRetained);
}


// sub_9524 @ 0x9524
id __fastcall sub_9524(__int64 a1)
{
  id WeakRetained; // x19

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "setDrawerOpen:animated:", 0, 1);
  objc_release(WeakRetained);
  return +[LCSingleTaskSwitcher presentTransitionAndReturnHomeWithCompletion:](
           &OBJC_CLASS___LCSingleTaskSwitcher,
           "presentTransitionAndReturnHomeWithCompletion:",
           0);
}


// sub_9564 @ 0x9564
void __fastcall sub_9564(__int64 a1, void *a2)
{
  id v3; // x20
  id WeakRetained; // [xsp+8h] [xbp-18h]

  v3 = objc_retain(a2);
  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "handleAppSelected:", v3);
  objc_release(v3);
  objc_release(WeakRetained);
}


// sub_95AC @ 0x95AC
void __fastcall sub_95AC(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "resetInactivityTimer");
  objc_release(WeakRetained);
}


// sub_95D8 @ 0x95D8
void __fastcall sub_95D8(__int64 a1)
{
  id v2; // x19
  id v3; // [xsp+8h] [xbp-18h]

  v3 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UIImpactFeedbackGenerator), "initWithStyle:", 0);
  objc_msgSend(v3, "impactOccurred");
  v2 = objc_retainAutoreleasedReturnValue(objc_loadWeakRetained((id *)(a1 + 32)));
  objc_msgSend(v2, "setDrawerOpen:animated:", (unsigned int)objc_msgSend(v2, "isDrawerOpen") ^ 1, 1);
  objc_release(v2);
  objc_release(v2);
  objc_release(v3);
}


// sub_964C @ 0x964C
void __fastcall sub_964C(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "resetInactivityTimer");
  objc_release(WeakRetained);
}


// sub_9678 @ 0x9678
void __fastcall sub_9678(__int64 a1, double a2, double a3)
{
  id WeakRetained; // [xsp+8h] [xbp-18h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "handleBeadPanEnded:", a2, a3);
  objc_release(WeakRetained);
}


// sub_96BC @ 0x96BC
void __fastcall sub_96BC(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "resetInactivityTimer");
  objc_release(WeakRetained);
}


// sub_9BF0 @ 0x9BF0
void __fastcall __noreturn sub_9BF0(_Unwind_Exception *a1)
{
  __int64 v1; // x20
  __int64 v2; // x21
  __int64 v3; // x29

  objc_destroyWeak((id *)(v2 + 32));
  objc_destroyWeak((id *)(v1 + 32));
  objc_destroyWeak((id *)(v3 - 88));
  _Unwind_Resume(a1);
}


// sub_9C14 @ 0x9C14
void __fastcall sub_9C14(__int64 a1)
{
  double v1; // d8
  double v2; // d9
  double v3; // d10
  void *v4; // x19
  id WeakRetained; // [xsp+8h] [xbp-38h]

  v1 = *(double *)(a1 + 40);
  v2 = *(double *)(a1 + 48);
  v3 = *(double *)(a1 + 56);
  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  v4 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(WeakRetained, "beadView"));
  objc_msgSend(v4, "setFrame:", v1, v2, v3, v3);
  objc_release(v4);
  objc_release(WeakRetained);
}


// sub_9C80 @ 0x9C80
void __fastcall sub_9C80(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "resetInactivityTimer");
  objc_release(WeakRetained);
}


// sub_9F1C @ 0x9F1C
void __fastcall __noreturn sub_9F1C(_Unwind_Exception *a1)
{
  __int64 v1; // x21
  __int64 v2; // x22
  __int64 v3; // x29

  objc_destroyWeak((id *)(v2 + 32));
  objc_destroyWeak((id *)(v1 + 32));
  objc_destroyWeak((id *)(v3 - 88));
  _Unwind_Resume(a1);
}


// sub_9F40 @ 0x9F40
void __fastcall sub_9F40(__int64 a1)
{
  double v2; // d8
  id WeakRetained; // x20
  void *v4; // x21
  double v5; // d8
  double v6; // d9
  double v7; // d10
  double v8; // d11
  id v9; // x20
  void *v10; // x21
  double v11; // d8
  void *v12; // x19
  id v13; // [xsp+8h] [xbp-58h]

  if ( *(_BYTE *)(a1 + 72) )
    v2 = 1.0;
  else
    v2 = 0.0;
  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  v4 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(WeakRetained, "dimmingMaskView"));
  objc_msgSend(v4, "setAlpha:", v2);
  objc_release(v4);
  objc_release(WeakRetained);
  v5 = *(double *)(a1 + 40);
  v6 = *(double *)(a1 + 48);
  v7 = *(double *)(a1 + 56);
  v8 = *(double *)(a1 + 64);
  v9 = objc_loadWeakRetained((id *)(a1 + 32));
  v10 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v9, "drawerView"));
  objc_msgSend(v10, "setFrame:", v5, v6, v7, v8);
  objc_release(v10);
  objc_release(v9);
  if ( *(_BYTE *)(a1 + 72) )
    v11 = 0.0;
  else
    v11 = 1.0;
  v13 = objc_loadWeakRetained((id *)(a1 + 32));
  v12 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v13, "beadView"));
  objc_msgSend(v12, "setAlpha:", v11);
  objc_release(v12);
  objc_release(v13);
}


// sub_A030 @ 0xA030
void __fastcall sub_A030(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-18h]

  if ( (*(_BYTE *)(a1 + 40) & 1) == 0 )
  {
    WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
    objc_msgSend(WeakRetained, "resetInactivityTimer");
    objc_release(WeakRetained);
  }
}


// sub_A2CC @ 0xA2CC
void __fastcall __noreturn sub_A2CC(
        _Unwind_Exception *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        id location)
{
  __int64 v15; // x22

  objc_destroyWeak((id *)(v15 + 32));
  objc_destroyWeak(&location);
  _Unwind_Resume(a1);
}


// sub_A2E8 @ 0xA2E8
void __fastcall sub_A2E8(__int64 a1)
{
  id v1; // [xsp+8h] [xbp-8h]

  v1 = (id)objc_claimAutoreleasedReturnValue(objc_msgSend(*(id *)(a1 + 32), "beadView"));
  objc_msgSend(v1, "setAlpha:", 1.0);
  objc_release(v1);
}


// sub_A31C @ 0xA31C
void __fastcall sub_A31C(__int64 a1, void *a2)
{
  id v3; // x19
  id WeakRetained; // x0
  void *v5; // x21
  id v6; // x22
  unsigned __int8 v7; // w23
  _QWORD v8[4]; // [xsp+8h] [xbp-58h] BYREF
  id v9; // [xsp+28h] [xbp-38h] BYREF

  v3 = objc_retain(a2);
  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  if ( WeakRetained )
  {
    v5 = WeakRetained;
    v6 = objc_loadWeakRetained((id *)(a1 + 32));
    v7 = (unsigned __int8)objc_msgSend(v6, "isDrawerOpen");
    objc_release(v6);
    objc_release(v5);
    if ( (v7 & 1) == 0 )
    {
      v8[0] = _NSConcreteStackBlock;
      v8[1] = 3254779904LL;
      v8[2] = sub_A404;
      v8[3] = &unk_140F0;
      objc_copyWeak(&v9, (id *)(a1 + 32));
      +[UIView animateWithDuration:animations:](&OBJC_CLASS___UIView, "animateWithDuration:animations:", v8, 0.35);
      objc_destroyWeak(&v9);
    }
  }
  objc_release(v3);
}


// sub_A3F0 @ 0xA3F0
void __fastcall __noreturn sub_A3F0(_Unwind_Exception *a1)
{
  __int64 v1; // x22

  objc_destroyWeak((id *)(v1 + 32));
  _Unwind_Resume(a1);
}


// sub_A404 @ 0xA404
void __fastcall sub_A404(__int64 a1)
{
  void *v1; // x19
  id WeakRetained; // [xsp+8h] [xbp-18h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  v1 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(WeakRetained, "beadView"));
  objc_msgSend(v1, "setAlpha:", 0.22);
  objc_release(v1);
  objc_release(WeakRetained);
}


// sub_A5F4 @ 0xA5F4
void __cdecl sub_A5F4(id a1)
{
  LCSingleTaskSwitcher *v1; // x0
  void *v2; // x1

  v1 = objc_alloc_init(&OBJC_CLASS___LCSingleTaskSwitcher);
  v2 = (void *)qword_199C8;
  qword_199C8 = (__int64)v1;
  objc_release(v2);
}


// sub_A71C @ 0xA71C
void __fastcall sub_A71C(__int64 a1)
{
  id v1; // [xsp+8h] [xbp-8h]

  v1 = (id)objc_claimAutoreleasedReturnValue(objc_msgSend(*(id *)(a1 + 32), "sharedManager"));
  objc_msgSend(v1, "performSetup");
  objc_release(v1);
}


// sub_AA54 @ 0xAA54
void __fastcall sub_AA54(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "performSetup");
  objc_release(WeakRetained);
}


// sub_B10C @ 0xB10C
signed __int64 __cdecl sub_B10C(id a1, LCSingleTaskAppInfo *a2, LCSingleTaskAppInfo *a3)
{
  LCSingleTaskAppInfo *v4; // x20
  void *v5; // x19
  void *v6; // x21
  void *v7; // x20

  v4 = objc_retain(a3);
  v5 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskAppInfo name](a2, "name"));
  v6 = (void *)objc_claimAutoreleasedReturnValue(-[LCSingleTaskAppInfo name](v4, "name"));
  objc_release(v4);
  v7 = objc_msgSend(v5, "localizedStandardCompare:", v6);
  objc_release(v6);
  objc_release(v5);
  return (signed __int64)v7;
}


// sub_B6FC @ 0xB6FC
void __fastcall sub_B6FC(__int64 a1)
{
  dispatch_queue_global_t global_queue; // x0
  NSObject *v3; // x20
  _QWORD v4[4]; // [xsp+0h] [xbp-50h] BYREF
  id v5; // [xsp+20h] [xbp-30h]
  id v6; // [xsp+28h] [xbp-28h]
  id v7; // [xsp+30h] [xbp-20h]
  __int64 v8; // [xsp+38h] [xbp-18h]

  global_queue = dispatch_get_global_queue(25, 0);
  v3 = (NSObject *)objc_claimAutoreleasedReturnValue(global_queue);
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_B7B4;
  v4[3] = &unk_14370;
  v8 = *(_QWORD *)(a1 + 56);
  v5 = objc_retain(*(id *)(a1 + 32));
  v6 = objc_retain(*(id *)(a1 + 40));
  v7 = objc_retain(*(id *)(a1 + 48));
  dispatch_async(v3, v4);
  objc_release(v3);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
}


// sub_B7B4 @ 0xB7B4
void __fastcall sub_B7B4(id *a1)
{
  void *v2; // x19
  void *v3; // x20
  __CFString *v4; // x27
  void *v5; // x24
  __CFString *v6; // x23
  void *v7; // x24
  void *v8; // x25
  unsigned int v9; // w26
  __int64 v10; // x26
  __int64 v11; // x23
  __CFString *v12; // x26
  void *v13; // x25
  __CFString *v14; // x19
  void *v15; // x27
  __int64 v16; // x0
  void *v17; // x28
  __CFString *v18; // x8
  __CFString *v19; // x21
  __CFString *v20; // x25
  void *v21; // x21
  void *v22; // x26
  void *v23; // x0
  void *v24; // x28
  id v25; // x0
  void *v26; // x27
  void *v27; // x21
  void *v28; // x26
  void *v29; // x21
  void *v30; // x21
  void *v31; // x21
  void *v32; // x21
  void *v33; // x26
  id v34; // x0
  id v35; // x8
  __CFString *v36; // x21
  id v37; // x22
  void *v38; // [xsp+8h] [xbp-A8h]
  __CFString *v39; // [xsp+8h] [xbp-A8h]
  _QWORD block[4]; // [xsp+10h] [xbp-A0h] BYREF
  id v41; // [xsp+30h] [xbp-80h]
  id v42; // [xsp+38h] [xbp-78h]
  id v43; // [xsp+40h] [xbp-70h]
  __CFString *v44; // [xsp+48h] [xbp-68h]
  id v45; // [xsp+50h] [xbp-60h]
  id v46; // [xsp+58h] [xbp-58h]

  v2 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(a1[7], "realHostDocumentsDirectory"));
  v3 = (void *)objc_claimAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  if ( !objc_msgSend(v2, "length") )
  {
    v4 = &stru_144B0;
    if ( objc_msgSend(&stru_144B0, "length") )
      goto LABEL_3;
LABEL_5:
    v6 = &stru_144B0;
    goto LABEL_6;
  }
  v4 = (__CFString *)objc_claimAutoreleasedReturnValue(objc_msgSend(v2, "stringByAppendingPathComponent:", CFSTR("Applications")));
  if ( !-[__CFString length](v4, "length") )
    goto LABEL_5;
LABEL_3:
  v5 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(a1[4], "folderName"));
  v6 = (__CFString *)objc_claimAutoreleasedReturnValue(-[__CFString stringByAppendingPathComponent:](v4, "stringByAppendingPathComponent:", v5));
  objc_release(v5);
LABEL_6:
  v7 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(a1[4], "folderName"));
  if ( -[__CFString length](v6, "length") )
  {
    if ( ((unsigned int)objc_msgSend(v3, "fileExistsAtPath:", v6) & 1) == 0 )
    {
      v8 = (void *)objc_claimAutoreleasedReturnValue(-[__CFString stringByAppendingString:](v6, "stringByAppendingString:", CFSTR(".app")));
      v9 = (unsigned int)objc_msgSend(v3, "fileExistsAtPath:", v8);
      objc_release(v8);
      if ( v9 )
      {
        v10 = objc_claimAutoreleasedReturnValue(-[__CFString stringByAppendingString:](v6, "stringByAppendingString:", CFSTR(".app")));
        objc_release(v6);
        v11 = objc_claimAutoreleasedReturnValue(objc_msgSend(v7, "stringByAppendingString:", CFSTR(".app")));
        objc_release(v7);
        v7 = (void *)v11;
        v6 = (__CFString *)v10;
      }
    }
  }
  v12 = (__CFString *)objc_claimAutoreleasedReturnValue(objc_msgSend(a1[4], "dataUUID"));
  if ( !-[__CFString length](v12, "length") && -[__CFString length](v6, "length") )
  {
    v13 = (void *)objc_claimAutoreleasedReturnValue(
                    -[__CFString stringByAppendingPathComponent:](
                      v6,
                      "stringByAppendingPathComponent:",
                      CFSTR("LCAppInfo.plist")));
    v38 = v2;
    v14 = v4;
    v15 = (void *)objc_claimAutoreleasedReturnValue(
                    +[NSDictionary dictionaryWithContentsOfFile:](
                      &OBJC_CLASS___NSDictionary,
                      "dictionaryWithContentsOfFile:",
                      v13));
    v16 = objc_claimAutoreleasedReturnValue(objc_msgSend(v15, "objectForKeyedSubscript:", CFSTR("LCDataUUID")));
    v17 = (void *)v16;
    if ( v16 )
      v18 = (__CFString *)v16;
    else
      v18 = &stru_144B0;
    v19 = objc_retain(v18);
    objc_release(v12);
    objc_release(v17);
    objc_release(v15);
    v4 = v14;
    v2 = v38;
    objc_release(v13);
    v12 = v19;
  }
  if ( -[__CFString length](v12, "length") )
  {
    v20 = v12;
  }
  else
  {
    v21 = (void *)objc_claimAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
    v20 = (__CFString *)objc_claimAutoreleasedReturnValue(objc_msgSend(v21, "UUIDString"));
    objc_release(v12);
    objc_release(v21);
    if ( -[__CFString length](v6, "length") )
    {
      v39 = v4;
      v22 = (void *)objc_claimAutoreleasedReturnValue(
                      -[__CFString stringByAppendingPathComponent:](
                        v6,
                        "stringByAppendingPathComponent:",
                        CFSTR("LCAppInfo.plist")));
      v23 = (void *)objc_claimAutoreleasedReturnValue(
                      +[NSMutableDictionary dictionaryWithContentsOfFile:](
                        &OBJC_CLASS___NSMutableDictionary,
                        "dictionaryWithContentsOfFile:",
                        v22));
      v24 = v23;
      if ( v23 )
        v25 = objc_retain(v23);
      else
        v25 = (id)objc_claimAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
      v26 = v25;
      objc_release(v24);
      objc_msgSend(v26, "setObject:forKeyedSubscript:", v20, CFSTR("LCDataUUID"));
      objc_msgSend(v26, "writeToFile:atomically:", v22, 1);
      objc_release(v26);
      objc_release(v22);
      v4 = v39;
    }
  }
  if ( objc_msgSend(v2, "length") )
  {
    v27 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v2, "stringByAppendingPathComponent:", CFSTR("Data/Application")));
    v28 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v27, "stringByAppendingPathComponent:", v20));
    objc_release(v27);
    objc_msgSend(v3, "createDirectoryAtPath:withIntermediateDirectories:attributes:error:", v28, 1, 0, 0);
    v29 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v28, "stringByAppendingPathComponent:", CFSTR("Documents")));
    objc_msgSend(v3, "createDirectoryAtPath:withIntermediateDirectories:attributes:error:", v29, 1, 0, 0);
    objc_release(v29);
    v30 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v28, "stringByAppendingPathComponent:", CFSTR("Library/Preferences")));
    objc_msgSend(v3, "createDirectoryAtPath:withIntermediateDirectories:attributes:error:", v30, 1, 0, 0);
    objc_release(v30);
    v31 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v28, "stringByAppendingPathComponent:", CFSTR("tmp")));
    objc_msgSend(v3, "createDirectoryAtPath:withIntermediateDirectories:attributes:error:", v31, 1, 0, 0);
    objc_release(v31);
    objc_release(v28);
  }
  v32 = (void *)objc_claimAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  v33 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v32, "UUIDString"));
  objc_release(v32);
  objc_msgSend(
    a1[7],
    "syncLaunchSelectionToHost:dataUUID:requestID:isJIT:",
    v7,
    v20,
    v33,
    objc_msgSend(a1[4], "isJITEnabled"));
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_BC94;
  block[3] = &unk_14340;
  v41 = objc_retain(a1[5]);
  v42 = objc_retain(a1[4]);
  v34 = objc_retain(a1[6]);
  v35 = a1[7];
  v45 = v34;
  v46 = v35;
  v43 = v7;
  v44 = v20;
  v36 = objc_retain(v20);
  v37 = objc_retain(v7);
  dispatch_async((dispatch_queue_t)&_dispatch_main_q, block);
  objc_release(v44);
  objc_release(v43);
  objc_release(v45);
  objc_release(v42);
  objc_release(v41);
  objc_release(v36);
  objc_release(v37);
  objc_release(v33);
  objc_release(v6);
  objc_release(v4);
  objc_release(v3);
  objc_release(v2);
}


// sub_BC94 @ 0xBC94
void __fastcall sub_BC94(__int64 a1)
{
  void *v2; // x21
  void *v3; // x22
  void *v4; // x20
  __int64 v5; // x0
  dispatch_time_t v6; // x20
  _QWORD block[4]; // [xsp+8h] [xbp-58h] BYREF
  id v8; // [xsp+28h] [xbp-38h]
  id v9; // [xsp+30h] [xbp-30h]
  __int64 v10; // [xsp+38h] [xbp-28h]

  v2 = *(void **)(a1 + 32);
  v3 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(*(id *)(a1 + 40), "name"));
  v4 = (void *)objc_claimAutoreleasedReturnValue(
                 +[NSString stringWithFormat:](
                   &OBJC_CLASS___NSString,
                   "stringWithFormat:",
                   CFSTR("正在无缝拉起《%@》..."),
                   v3));
  objc_msgSend(v2, "updateStatus:", v4);
  objc_release(v4);
  objc_release(v3);
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(v5 + 16))(v5, 1);
  v6 = dispatch_time(0, 120000000);
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_BDA0;
  block[3] = &unk_14310;
  v10 = *(_QWORD *)(a1 + 72);
  v8 = objc_retain(*(id *)(a1 + 48));
  v9 = objc_retain(*(id *)(a1 + 56));
  dispatch_after(v6, (dispatch_queue_t)&_dispatch_main_q, block);
  objc_release(v9);
  objc_release(v8);
}


// sub_BDA0 @ 0xBDA0
void *__fastcall sub_BDA0(__int64 a1)
{
  return objc_msgSend(*(id *)(a1 + 48), "dispatchSwitchToApp:dataUUID:", *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
}


// sub_BDB0 @ 0xBDB0
void __fastcall sub_BDB0(__int64 a1, __int64 a2)
{
  id v4; // x0
  id v5; // x0
  id v6; // x0
  id v7; // x0

  v4 = objc_retain(*(id *)(a2 + 32));
  v5 = objc_retain(*(id *)(a2 + 40));
  v6 = objc_retain(*(id *)(a2 + 48));
  v7 = objc_retain(*(id *)(a2 + 56));
  _Block_object_assign((void *)(a1 + 64), *(const void **)(a2 + 64), 7);
}


// sub_BDFC @ 0xBDFC
void __fastcall sub_BDFC(id *a1)
{
  objc_release(a1[8]);
  objc_release(a1[7]);
  objc_release(a1[6]);
  objc_release(a1[5]);
  objc_release(a1[4]);
}


// sub_BE3C @ 0xBE3C
void __fastcall sub_BE3C(__int64 a1, __int64 a2)
{
  id v4; // x0
  id v5; // x0

  v4 = objc_retain(*(id *)(a2 + 32));
  v5 = objc_retain(*(id *)(a2 + 40));
  _Block_object_assign((void *)(a1 + 48), *(const void **)(a2 + 48), 7);
}


// sub_BE78 @ 0xBE78
void __fastcall sub_BE78(id *a1)
{
  objc_release(a1[6]);
  objc_release(a1[5]);
  objc_release(a1[4]);
}


// sub_BFF8 @ 0xBFF8
void __fastcall sub_BFF8(__int64 a1)
{
  dispatch_queue_global_t global_queue; // x0
  NSObject *v3; // x20
  _QWORD block[4]; // [xsp+8h] [xbp-48h] BYREF
  id v5; // [xsp+28h] [xbp-28h]
  id v6; // [xsp+30h] [xbp-20h]
  __int64 v7; // [xsp+38h] [xbp-18h]

  global_queue = dispatch_get_global_queue(25, 0);
  v3 = (NSObject *)objc_claimAutoreleasedReturnValue(global_queue);
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_C09C;
  block[3] = &unk_143A0;
  v7 = *(_QWORD *)(a1 + 48);
  v5 = objc_retain(*(id *)(a1 + 32));
  v6 = objc_retain(*(id *)(a1 + 40));
  dispatch_async(v3, block);
  objc_release(v3);
  objc_release(v6);
  objc_release(v5);
}


// sub_C09C @ 0xC09C
void __fastcall sub_C09C(id *a1)
{
  id v2; // x0
  id v3; // x8
  _QWORD block[4]; // [xsp+8h] [xbp-48h] BYREF
  id v5; // [xsp+28h] [xbp-28h]
  id v6; // [xsp+30h] [xbp-20h]
  id v7; // [xsp+38h] [xbp-18h]

  objc_msgSend(a1[6], "clearLaunchSelectionFromHost");
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_C130;
  block[3] = &unk_143A0;
  v5 = objc_retain(a1[4]);
  v2 = objc_retain(a1[5]);
  v3 = a1[6];
  v6 = v2;
  v7 = v3;
  dispatch_async((dispatch_queue_t)&_dispatch_main_q, block);
  objc_release(v6);
  objc_release(v5);
}


// sub_C130 @ 0xC130
void __fastcall sub_C130(__int64 a1)
{
  __int64 v2; // x0
  dispatch_time_t v3; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-38h] BYREF

  objc_msgSend(*(id *)(a1 + 32), "updateStatus:", CFSTR("即将进入宿主主界面..."));
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(v2 + 16))(v2, 1);
  v3 = dispatch_time(0, 120000000);
  block[0] = _NSConcreteStackBlock;
  block[1] = 3221225472LL;
  block[2] = sub_C1CC;
  block[3] = &unk_142B0;
  block[4] = *(_QWORD *)(a1 + 48);
  dispatch_after(v3, (dispatch_queue_t)&_dispatch_main_q, block);
}


// sub_C1CC @ 0xC1CC
void *__fastcall sub_C1CC(__int64 a1)
{
  return objc_msgSend(*(id *)(a1 + 32), "dispatchReturnHome");
}


// sub_C1D4 @ 0xC1D4
void __fastcall sub_C1D4(__int64 a1, __int64 a2)
{
  id v4; // x0

  v4 = objc_retain(*(id *)(a2 + 32));
  _Block_object_assign((void *)(a1 + 40), *(const void **)(a2 + 40), 7);
}


// sub_D50C @ 0xD50C
void __fastcall sub_D50C(__int64 a1)
{
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF

  block[0] = _NSConcreteStackBlock;
  block[1] = 3221225472LL;
  block[2] = sub_D584;
  block[3] = &unk_142B0;
  block[4] = *(_QWORD *)(a1 + 32);
  if ( qword_199B8 != -1 )
    dispatch_once(&qword_199B8, block);
}


// sub_D584 @ 0xD584
void __fastcall sub_D584(__int64 a1)
{
  pid_t v1; // w1
  char *v2; // x2
  int v3; // w3
  void *v4; // x19
  void *v5; // x20
  signed __int64 v6; // x0
  pid_t v7; // w0
  id v8; // [xsp+8h] [xbp-18h]

  v8 = (id)objc_claimAutoreleasedReturnValue(objc_msgSend(*(id *)(a1 + 32), "realHostDocumentsDirectory"));
  if ( objc_msgSend(v8, "length") )
  {
    v4 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v8, "stringByAppendingPathComponent:", CFSTR("container_launch_in_progress.flag")));
    v5 = (void *)objc_claimAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    objc_msgSend(v5, "removeItemAtPath:error:", v4, 0);
    objc_release(v5);
    objc_release(v4);
  }
  v6 = mac_syscall(SYS_ptrace, 31, v1, v2, v3);
  v7 = getpid();
  kill(v7, 9);
  objc_release(v8);
}


// sub_D618 @ 0xD618
__int64 __fastcall sub_D618(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}


// sub_D624 @ 0xD624
void __fastcall sub_D624(__int64 a1)
{
  dispatch_time_t v2; // x20
  _QWORD block[4]; // [xsp+8h] [xbp-38h] BYREF
  id v4; // [xsp+28h] [xbp-18h]

  v2 = dispatch_time(0, 150000000);
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_D6B0;
  block[3] = &unk_143D0;
  v4 = objc_retain(*(id *)(a1 + 32));
  dispatch_after(v2, (dispatch_queue_t)&_dispatch_main_q, block);
  objc_release(v4);
}


// sub_D6B0 @ 0xD6B0
__int64 __fastcall sub_D6B0(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}


// sub_D6BC @ 0xD6BC
__int64 __fastcall sub_D6BC(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}


// sub_D9AC @ 0xD9AC
void __fastcall sub_D9AC(__int64 a1)
{
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF

  block[0] = _NSConcreteStackBlock;
  block[1] = 3221225472LL;
  block[2] = sub_DA24;
  block[3] = &unk_142B0;
  block[4] = *(_QWORD *)(a1 + 32);
  if ( qword_199C0 != -1 )
    dispatch_once(&qword_199C0, block);
}


// sub_DA24 @ 0xDA24
void __fastcall sub_DA24(__int64 a1)
{
  pid_t v1; // w1
  char *v2; // x2
  int v3; // w3
  void *v4; // x19
  void *v5; // x20
  signed __int64 v6; // x0
  pid_t v7; // w0
  id v8; // [xsp+8h] [xbp-18h]

  v8 = (id)objc_claimAutoreleasedReturnValue(objc_msgSend(*(id *)(a1 + 32), "realHostDocumentsDirectory"));
  if ( objc_msgSend(v8, "length") )
  {
    v4 = (void *)objc_claimAutoreleasedReturnValue(objc_msgSend(v8, "stringByAppendingPathComponent:", CFSTR("container_launch_in_progress.flag")));
    v5 = (void *)objc_claimAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    objc_msgSend(v5, "removeItemAtPath:error:", v4, 0);
    objc_release(v5);
    objc_release(v4);
  }
  v6 = mac_syscall(SYS_ptrace, 31, v1, v2, v3);
  v7 = getpid();
  kill(v7, 9);
  objc_release(v8);
}


// sub_DAB8 @ 0xDAB8
__int64 __fastcall sub_DAB8(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}


// sub_DAC4 @ 0xDAC4
__int64 __fastcall sub_DAC4(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}


// sub_E3D8 @ 0xE3D8
void sub_E3D8()
{
  void *v0; // x19
  void *v1; // x20
  void *v2; // x22
  id v3; // x0
  void *v4; // x22
  id v5; // x0
  void *v6; // x22
  id v7; // x0

  v0 = objc_autoreleasePoolPush();
  v1 = (void *)objc_claimAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  v2 = (void *)objc_claimAutoreleasedReturnValue(+[NSOperationQueue mainQueue](&OBJC_CLASS___NSOperationQueue, "mainQueue"));
  v3 = objc_unsafeClaimAutoreleasedReturnValue(
         objc_msgSend(
           v1,
           "addObserverForName:object:queue:usingBlock:",
           UIApplicationDidFinishLaunchingNotification,
           0,
           v2,
           &stru_14450));
  objc_release(v2);
  v4 = (void *)objc_claimAutoreleasedReturnValue(+[NSOperationQueue mainQueue](&OBJC_CLASS___NSOperationQueue, "mainQueue"));
  v5 = objc_unsafeClaimAutoreleasedReturnValue(
         objc_msgSend(
           v1,
           "addObserverForName:object:queue:usingBlock:",
           UISceneWillConnectNotification,
           0,
           v4,
           &stru_14470));
  objc_release(v4);
  v6 = (void *)objc_claimAutoreleasedReturnValue(+[NSOperationQueue mainQueue](&OBJC_CLASS___NSOperationQueue, "mainQueue"));
  v7 = objc_unsafeClaimAutoreleasedReturnValue(
         objc_msgSend(
           v1,
           "addObserverForName:object:queue:usingBlock:",
           UISceneDidActivateNotification,
           0,
           v6,
           &stru_14490));
  objc_release(v6);
  objc_release(v1);
  objc_autoreleasePoolPop(v0);
}


// sub_E4F4 @ 0xE4F4
void __cdecl sub_E4F4(id a1, NSNotification *a2)
{
  +[LCSingleTaskSwitcher setupIfNeeded](&OBJC_CLASS___LCSingleTaskSwitcher, "setupIfNeeded");
}


// sub_E500 @ 0xE500
void __cdecl sub_E500(id a1, NSNotification *a2)
{
  +[LCSingleTaskSwitcher setupIfNeeded](&OBJC_CLASS___LCSingleTaskSwitcher, "setupIfNeeded");
}


// sub_E50C @ 0xE50C
void __cdecl sub_E50C(id a1, NSNotification *a2)
{
  +[LCSingleTaskSwitcher setupIfNeeded](&OBJC_CLASS___LCSingleTaskSwitcher, "setupIfNeeded");
}


// sub_E518 @ 0xE518
void sub_E518()
{
  dispatch_once(&qword_199D0, &stru_14290);
}


// _CGAffineTransformMakeScale @ 0xE52C
// attributes: thunk
CGAffineTransform *__cdecl CGAffineTransformMakeScale(CGAffineTransform *__return_ptr retstr, CGFloat sx, CGFloat sy)
{
  return _CGAffineTransformMakeScale(retstr, sx, sy);
}


// _CGRectContainsPoint @ 0xE538
// attributes: thunk
bool __cdecl CGRectContainsPoint(CGRect rect, CGPoint point)
{
  return _CGRectContainsPoint(rect, point);
}


// _CGRectInset @ 0xE544
// attributes: thunk
CGRect __cdecl CGRectInset(CGRect rect, CGFloat dx, CGFloat dy)
{
  return _CGRectInset(rect, dx, dy);
}


// _NSClassFromString @ 0xE550
// attributes: thunk
Class __cdecl NSClassFromString(NSString *aClassName)
{
  return _NSClassFromString(aClassName);
}


// _NSLog @ 0xE55C
// attributes: thunk
void NSLog(NSString *format, ...)
{
  _NSLog(format);
}


// _NSSearchPathForDirectoriesInDomains @ 0xE568
// attributes: thunk
NSArray *__cdecl NSSearchPathForDirectoriesInDomains(
        NSSearchPathDirectory directory,
        NSSearchPathDomainMask domainMask,
        BOOL expandTilde)
{
  return _NSSearchPathForDirectoriesInDomains(directory, domainMask, expandTilde);
}


// _NSSelectorFromString @ 0xE574
// attributes: thunk
SEL __cdecl NSSelectorFromString(NSString *aSelectorName)
{
  return _NSSelectorFromString(aSelectorName);
}


// __Block_object_assign @ 0xE580
// attributes: thunk
void __cdecl _Block_object_assign(void *a1, const void *a2, const int a3)
{
  __Block_object_assign(a1, a2, a3);
}


// __Unwind_Resume @ 0xE58C
// attributes: thunk
void __cdecl __noreturn _Unwind_Resume(_Unwind_Exception *exception_object)
{
  __Unwind_Resume(exception_object);
}


// ___stack_chk_fail @ 0xE598
// attributes: thunk
void __noreturn __stack_chk_fail()
{
  ___stack_chk_fail();
}


// _dispatch_after @ 0xE5A4
// attributes: thunk
void __cdecl dispatch_after(dispatch_time_t when, dispatch_queue_t queue, dispatch_block_t block)
{
  _dispatch_after(when, queue, block);
}


// _dispatch_async @ 0xE5B0
// attributes: thunk
void __cdecl dispatch_async(dispatch_queue_t queue, dispatch_block_t block)
{
  _dispatch_async(queue, block);
}


// _dispatch_get_global_queue @ 0xE5BC
// attributes: thunk
dispatch_queue_global_t __cdecl dispatch_get_global_queue(intptr_t identifier, uintptr_t flags)
{
  return _dispatch_get_global_queue(identifier, flags);
}


// _dispatch_once @ 0xE5C8
// attributes: thunk
void __cdecl dispatch_once(dispatch_once_t *predicate, dispatch_block_t block)
{
  _dispatch_once(predicate, block);
}


// _dispatch_time @ 0xE5D4
// attributes: thunk
dispatch_time_t __cdecl dispatch_time(dispatch_time_t when, int64_t delta)
{
  return _dispatch_time(when, delta);
}


// _getenv @ 0xE5E0
// attributes: thunk
char *__cdecl getenv(const char *a1)
{
  return _getenv(a1);
}


// _getpid @ 0xE5EC
// attributes: thunk
pid_t getpid(void)
{
  return _getpid();
}


// _kill @ 0xE5F8
// attributes: thunk
int __cdecl kill(pid_t a1, int a2)
{
  return _kill(a1, a2);
}


// _objc_alloc @ 0xE604
// attributes: thunk
id __cdecl objc_alloc(Class a1)
{
  return _objc_alloc(a1);
}


// _objc_alloc_init @ 0xE610
// attributes: thunk
__int64 objc_alloc_init()
{
  return _objc_alloc_init();
}


// _objc_autoreleasePoolPop @ 0xE61C
// attributes: thunk
void __cdecl objc_autoreleasePoolPop(void *context)
{
  _objc_autoreleasePoolPop(context);
}


// _objc_autoreleasePoolPush @ 0xE628
// attributes: thunk
void *objc_autoreleasePoolPush(void)
{
  return _objc_autoreleasePoolPush();
}


// _objc_autoreleaseReturnValue @ 0xE634
// attributes: thunk
id __cdecl objc_autoreleaseReturnValue(id a1)
{
  return _objc_autoreleaseReturnValue(a1);
}


// _objc_claimAutoreleasedReturnValue @ 0xE640
// attributes: thunk
__int64 __fastcall objc_claimAutoreleasedReturnValue()
{
  return _objc_claimAutoreleasedReturnValue();
}


// _objc_copyWeak @ 0xE64C
// attributes: thunk
void __cdecl objc_copyWeak(id *to, id *from)
{
  _objc_copyWeak(to, from);
}


// _objc_destroyWeak @ 0xE658
// attributes: thunk
void __cdecl objc_destroyWeak(id *location)
{
  _objc_destroyWeak(location);
}


// _objc_enumerationMutation @ 0xE664
// attributes: thunk
void __cdecl objc_enumerationMutation(id obj)
{
  _objc_enumerationMutation(obj);
}


// _objc_initWeak @ 0xE670
// attributes: thunk
id __cdecl objc_initWeak(id *location, id val)
{
  return _objc_initWeak(location, val);
}


// _objc_loadWeakRetained @ 0xE67C
// attributes: thunk
id __cdecl objc_loadWeakRetained(id *location)
{
  return _objc_loadWeakRetained(location);
}


// _objc_lookUpClass @ 0xE688
// attributes: thunk
Class __cdecl objc_lookUpClass(const char *name)
{
  return _objc_lookUpClass(name);
}


// _objc_msgSendSuper2 @ 0xE694
// attributes: thunk
id objc_msgSendSuper2(objc_super *a1, SEL a2, ...)
{
  return _objc_msgSendSuper2(a1, a2);
}


// _objc_opt_class @ 0xE6A0
// attributes: thunk
__int64 __fastcall objc_opt_class()
{
  return _objc_opt_class();
}


// _objc_opt_isKindOfClass @ 0xE6AC
// attributes: thunk
__int64 __fastcall objc_opt_isKindOfClass()
{
  return _objc_opt_isKindOfClass();
}


// _objc_opt_respondsToSelector @ 0xE6B8
// attributes: thunk
__int64 __fastcall objc_opt_respondsToSelector()
{
  return _objc_opt_respondsToSelector();
}


// _objc_release @ 0xE6C4
// attributes: thunk
void __cdecl objc_release(id a1)
{
  _objc_release(a1);
}


// _objc_release_x1 @ 0xE6D0
// attributes: thunk
__int64 objc_release_x1()
{
  return _objc_release_x1();
}


// _objc_release_x19 @ 0xE6DC
// attributes: thunk
__int64 objc_release_x19()
{
  return _objc_release_x19();
}


// _objc_release_x20 @ 0xE6E8
// attributes: thunk
__int64 objc_release_x20()
{
  return _objc_release_x20();
}


// _objc_release_x21 @ 0xE6F4
// attributes: thunk
__int64 objc_release_x21()
{
  return _objc_release_x21();
}


// _objc_release_x22 @ 0xE700
// attributes: thunk
__int64 objc_release_x22()
{
  return _objc_release_x22();
}


// _objc_release_x23 @ 0xE70C
// attributes: thunk
__int64 objc_release_x23()
{
  return _objc_release_x23();
}


// _objc_release_x24 @ 0xE718
// attributes: thunk
__int64 objc_release_x24()
{
  return _objc_release_x24();
}


// _objc_release_x25 @ 0xE724
// attributes: thunk
__int64 objc_release_x25()
{
  return _objc_release_x25();
}


// _objc_release_x26 @ 0xE730
// attributes: thunk
__int64 objc_release_x26()
{
  return _objc_release_x26();
}


// _objc_release_x27 @ 0xE73C
// attributes: thunk
__int64 objc_release_x27()
{
  return _objc_release_x27();
}


// _objc_release_x28 @ 0xE748
// attributes: thunk
__int64 objc_release_x28()
{
  return _objc_release_x28();
}


// _objc_release_x8 @ 0xE754
// attributes: thunk
__int64 objc_release_x8()
{
  return _objc_release_x8();
}


// _objc_retain @ 0xE760
// attributes: thunk
id __cdecl objc_retain(id a1)
{
  return _objc_retain(a1);
}


// _objc_retainAutorelease @ 0xE76C
// attributes: thunk
id __cdecl objc_retainAutorelease(id a1)
{
  return _objc_retainAutorelease(a1);
}


// _objc_retainAutoreleaseReturnValue @ 0xE778
// attributes: thunk
id __cdecl objc_retainAutoreleaseReturnValue(id a1)
{
  return _objc_retainAutoreleaseReturnValue(a1);
}


// _objc_retainAutoreleasedReturnValue @ 0xE784
// attributes: thunk
id __cdecl objc_retainAutoreleasedReturnValue(id a1)
{
  return _objc_retainAutoreleasedReturnValue(a1);
}


// _objc_retainBlock @ 0xE790
// attributes: thunk
id __cdecl objc_retainBlock(id a1)
{
  return _objc_retainBlock(a1);
}


// _objc_retain_x1 @ 0xE79C
// attributes: thunk
__int64 objc_retain_x1()
{
  return _objc_retain_x1();
}


// _objc_retain_x19 @ 0xE7A8
// attributes: thunk
__int64 objc_retain_x19()
{
  return _objc_retain_x19();
}


// _objc_retain_x2 @ 0xE7B4
// attributes: thunk
__int64 objc_retain_x2()
{
  return _objc_retain_x2();
}


// _objc_retain_x20 @ 0xE7C0
// attributes: thunk
__int64 objc_retain_x20()
{
  return _objc_retain_x20();
}


// _objc_retain_x21 @ 0xE7CC
// attributes: thunk
__int64 objc_retain_x21()
{
  return _objc_retain_x21();
}


// _objc_retain_x22 @ 0xE7D8
// attributes: thunk
__int64 objc_retain_x22()
{
  return _objc_retain_x22();
}


// _objc_retain_x23 @ 0xE7E4
// attributes: thunk
__int64 objc_retain_x23()
{
  return _objc_retain_x23();
}


// _objc_retain_x24 @ 0xE7F0
// attributes: thunk
__int64 objc_retain_x24()
{
  return _objc_retain_x24();
}


// _objc_retain_x25 @ 0xE7FC
// attributes: thunk
__int64 objc_retain_x25()
{
  return _objc_retain_x25();
}


// _objc_retain_x27 @ 0xE808
// attributes: thunk
__int64 objc_retain_x27()
{
  return _objc_retain_x27();
}


// _objc_retain_x28 @ 0xE814
// attributes: thunk
__int64 objc_retain_x28()
{
  return _objc_retain_x28();
}


// _objc_retain_x3 @ 0xE820
// attributes: thunk
__int64 objc_retain_x3()
{
  return _objc_retain_x3();
}


// _objc_retain_x8 @ 0xE82C
// attributes: thunk
__int64 objc_retain_x8()
{
  return _objc_retain_x8();
}


// _objc_setProperty_nonatomic_copy @ 0xE838
// attributes: thunk
void __cdecl objc_setProperty_nonatomic_copy(id self, SEL _cmd, id newValue, ptrdiff_t offset)
{
  _objc_setProperty_nonatomic_copy(self, _cmd, newValue, offset);
}


// _objc_storeStrong @ 0xE844
// attributes: thunk
void __cdecl objc_storeStrong(id *location, id obj)
{
  _objc_storeStrong(location, obj);
}


// _objc_storeWeak @ 0xE850
// attributes: thunk
id __cdecl objc_storeWeak(id *location, id obj)
{
  return _objc_storeWeak(location, obj);
}


// _objc_unsafeClaimAutoreleasedReturnValue @ 0xE85C
// attributes: thunk
id __cdecl objc_unsafeClaimAutoreleasedReturnValue(id a1)
{
  return _objc_unsafeClaimAutoreleasedReturnValue(a1);
}


// _stat @ 0xE868
// attributes: thunk
int __cdecl stat(const char *a1, stat *a2)
{
  return _stat(a1, a2);
}


// _objc_msgSend$CGColor @ 0xE880
id objc_msgSend_CGColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "CGColor");
}


// _objc_msgSend$URLQueryAllowedCharacterSet @ 0xE8A0
id objc_msgSend_URLQueryAllowedCharacterSet(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "URLQueryAllowedCharacterSet");
}


// _objc_msgSend$URLWithString: @ 0xE8C0
id objc_msgSend_URLWithString_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "URLWithString:");
}


// _objc_msgSend$UUID @ 0xE8E0
id objc_msgSend_UUID(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "UUID");
}


// _objc_msgSend$UUIDString @ 0xE900
id objc_msgSend_UUIDString(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "UUIDString");
}


// _objc_msgSend$absoluteString @ 0xE920
id objc_msgSend_absoluteString(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "absoluteString");
}


// _objc_msgSend$actionWithHandler: @ 0xE940
id objc_msgSend_actionWithHandler_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "actionWithHandler:");
}


// _objc_msgSend$activateConstraints: @ 0xE960
id objc_msgSend_activateConstraints_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "activateConstraints:");
}


// _objc_msgSend$activationState @ 0xE980
id objc_msgSend_activationState(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "activationState");
}


// _objc_msgSend$addAction:forControlEvents: @ 0xE9A0
id objc_msgSend_addAction_forControlEvents_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addAction:forControlEvents:");
}


// _objc_msgSend$addArrangedSubview: @ 0xE9C0
id objc_msgSend_addArrangedSubview_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addArrangedSubview:");
}


// _objc_msgSend$addGestureRecognizer: @ 0xE9E0
id objc_msgSend_addGestureRecognizer_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addGestureRecognizer:");
}


// _objc_msgSend$addObject: @ 0xEA00
id objc_msgSend_addObject_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addObject:");
}


// _objc_msgSend$addObserverForName:object:queue:usingBlock: @ 0xEA20
id objc_msgSend_addObserverForName_object_queue_usingBlock_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addObserverForName:object:queue:usingBlock:");
}


// _objc_msgSend$addSubview: @ 0xEA40
id objc_msgSend_addSubview_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addSubview:");
}


// _objc_msgSend$addTarget:action:forControlEvents: @ 0xEA60
id objc_msgSend_addTarget_action_forControlEvents_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addTarget:action:forControlEvents:");
}


// _objc_msgSend$alpha @ 0xEA80
id objc_msgSend_alpha(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "alpha");
}


// _objc_msgSend$animateAlongsideTransition:completion: @ 0xEAA0
id objc_msgSend_animateAlongsideTransition_completion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "animateAlongsideTransition:completion:");
}


// _objc_msgSend$animateWithDuration:animations: @ 0xEAC0
id objc_msgSend_animateWithDuration_animations_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "animateWithDuration:animations:");
}


// _objc_msgSend$animateWithDuration:delay:options:animations:completion: @ 0xEAE0
id objc_msgSend_animateWithDuration_delay_options_animations_completion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "animateWithDuration:delay:options:animations:completion:");
}


// _objc_msgSend$animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion: @ 0xEB00
id objc_msgSend_animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_(
        void *a1,
        const char *a2,
        ...)
{
  return objc_msgSend(
           a1,
           "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:");
}


// _objc_msgSend$arrangedSubviews @ 0xEB20
id objc_msgSend_arrangedSubviews(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "arrangedSubviews");
}


// _objc_msgSend$array @ 0xEB40
id objc_msgSend_array(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "array");
}


// _objc_msgSend$arrayWithArray: @ 0xEB60
id objc_msgSend_arrayWithArray_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "arrayWithArray:");
}


// _objc_msgSend$arrayWithObjects:count: @ 0xEB80
id objc_msgSend_arrayWithObjects_count_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "arrayWithObjects:count:");
}


// _objc_msgSend$beadView @ 0xEBA0
id objc_msgSend_beadView(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "beadView");
}


// _objc_msgSend$blackColor @ 0xEBC0
id objc_msgSend_blackColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "blackColor");
}


// _objc_msgSend$boolForKey: @ 0xEBE0
id objc_msgSend_boolForKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "boolForKey:");
}


// _objc_msgSend$boolValue @ 0xEC00
id objc_msgSend_boolValue(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "boolValue");
}


// _objc_msgSend$bottomAnchor @ 0xEC20
id objc_msgSend_bottomAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "bottomAnchor");
}


// _objc_msgSend$bounds @ 0xEC40
id objc_msgSend_bounds(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "bounds");
}


// _objc_msgSend$bundleIdentifier @ 0xEC60
id objc_msgSend_bundleIdentifier(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "bundleIdentifier");
}


// _objc_msgSend$bundlePath @ 0xEC80
id objc_msgSend_bundlePath(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "bundlePath");
}


// _objc_msgSend$buttonWithType: @ 0xECA0
id objc_msgSend_buttonWithType_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "buttonWithType:");
}


// _objc_msgSend$center @ 0xECC0
id objc_msgSend_center(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "center");
}


// _objc_msgSend$centerXAnchor @ 0xECE0
id objc_msgSend_centerXAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "centerXAnchor");
}


// _objc_msgSend$centerYAnchor @ 0xED00
id objc_msgSend_centerYAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "centerYAnchor");
}


// _objc_msgSend$clearColor @ 0xED20
id objc_msgSend_clearColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "clearColor");
}


// _objc_msgSend$clearLaunchSelectionFromHost @ 0xED40
id objc_msgSend_clearLaunchSelectionFromHost(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "clearLaunchSelectionFromHost");
}


// _objc_msgSend$colorWithAlphaComponent: @ 0xED60
id objc_msgSend_colorWithAlphaComponent_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "colorWithAlphaComponent:");
}


// _objc_msgSend$colorWithWhite:alpha: @ 0xED80
id objc_msgSend_colorWithWhite_alpha_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "colorWithWhite:alpha:");
}


// _objc_msgSend$configurationWithPointSize:weight: @ 0xEDA0
id objc_msgSend_configurationWithPointSize_weight_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "configurationWithPointSize:weight:");
}


// _objc_msgSend$configureWithAppName:icon:status: @ 0xEDC0
id objc_msgSend_configureWithAppName_icon_status_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "configureWithAppName:icon:status:");
}


// _objc_msgSend$connectedScenes @ 0xEDE0
id objc_msgSend_connectedScenes(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "connectedScenes");
}


// _objc_msgSend$constraintEqualToAnchor: @ 0xEE00
id objc_msgSend_constraintEqualToAnchor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "constraintEqualToAnchor:");
}


// _objc_msgSend$constraintEqualToAnchor:constant: @ 0xEE20
id objc_msgSend_constraintEqualToAnchor_constant_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "constraintEqualToAnchor:constant:");
}


// _objc_msgSend$constraintEqualToConstant: @ 0xEE40
id objc_msgSend_constraintEqualToConstant_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "constraintEqualToConstant:");
}


// _objc_msgSend$constraintGreaterThanOrEqualToConstant: @ 0xEE60
id objc_msgSend_constraintGreaterThanOrEqualToConstant_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "constraintGreaterThanOrEqualToConstant:");
}


// _objc_msgSend$constraintLessThanOrEqualToAnchor:constant: @ 0xEE80
id objc_msgSend_constraintLessThanOrEqualToAnchor_constant_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "constraintLessThanOrEqualToAnchor:constant:");
}


// _objc_msgSend$containsObject: @ 0xEEA0
id objc_msgSend_containsObject_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "containsObject:");
}


// _objc_msgSend$contentView @ 0xEEC0
id objc_msgSend_contentView(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "contentView");
}


// _objc_msgSend$contentsOfDirectoryAtPath:error: @ 0xEEE0
id objc_msgSend_contentsOfDirectoryAtPath_error_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "contentsOfDirectoryAtPath:error:");
}


// _objc_msgSend$convertPoint:fromView: @ 0xEF00
id objc_msgSend_convertPoint_fromView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "convertPoint:fromView:");
}


// _objc_msgSend$copy @ 0xEF20
id objc_msgSend_copy(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "copy");
}


// _objc_msgSend$count @ 0xEF40
id objc_msgSend_count(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "count");
}


// _objc_msgSend$countByEnumeratingWithState:objects:count: @ 0xEF60
id objc_msgSend_countByEnumeratingWithState_objects_count_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "countByEnumeratingWithState:objects:count:");
}


// _objc_msgSend$createAppRowWithApp:isRunning: @ 0xEF80
id objc_msgSend_createAppRowWithApp_isRunning_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "createAppRowWithApp:isRunning:");
}


// _objc_msgSend$createDirectoryAtPath:withIntermediateDirectories:attributes:error: @ 0xEFA0
id objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "createDirectoryAtPath:withIntermediateDirectories:attributes:error:");
}


// _objc_msgSend$currentGuestFolderName @ 0xEFC0
id objc_msgSend_currentGuestFolderName(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "currentGuestFolderName");
}


// _objc_msgSend$dataUUID @ 0xEFE0
id objc_msgSend_dataUUID(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dataUUID");
}


// _objc_msgSend$date @ 0xF000
id objc_msgSend_date(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "date");
}


// _objc_msgSend$defaultCenter @ 0xF020
id objc_msgSend_defaultCenter(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "defaultCenter");
}


// _objc_msgSend$defaultManager @ 0xF040
id objc_msgSend_defaultManager(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "defaultManager");
}


// _objc_msgSend$dictionary @ 0xF060
id objc_msgSend_dictionary(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dictionary");
}


// _objc_msgSend$dictionaryWithContentsOfFile: @ 0xF080
id objc_msgSend_dictionaryWithContentsOfFile_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dictionaryWithContentsOfFile:");
}


// _objc_msgSend$dictionaryWithObjects:forKeys:count: @ 0xF0A0
id objc_msgSend_dictionaryWithObjects_forKeys_count_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dictionaryWithObjects:forKeys:count:");
}


// _objc_msgSend$dimmingMaskView @ 0xF0C0
id objc_msgSend_dimmingMaskView(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dimmingMaskView");
}


// _objc_msgSend$dispatchReturnHome @ 0xF0E0
id objc_msgSend_dispatchReturnHome(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dispatchReturnHome");
}


// _objc_msgSend$dispatchSwitchToApp:dataUUID: @ 0xF100
id objc_msgSend_dispatchSwitchToApp_dataUUID_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dispatchSwitchToApp:dataUUID:");
}


// _objc_msgSend$doubleForKey: @ 0xF120
id objc_msgSend_doubleForKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "doubleForKey:");
}


// _objc_msgSend$drawerView @ 0xF140
id objc_msgSend_drawerView(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "drawerView");
}


// _objc_msgSend$effectWithStyle: @ 0xF160
id objc_msgSend_effectWithStyle_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "effectWithStyle:");
}


// _objc_msgSend$extractAppIconFromAppPath:plist: @ 0xF1A0
id objc_msgSend_extractAppIconFromAppPath_plist_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "extractAppIconFromAppPath:plist:");
}


// _objc_msgSend$fallbackReturnHomeWithCompletion: @ 0xF1C0
id objc_msgSend_fallbackReturnHomeWithCompletion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "fallbackReturnHomeWithCompletion:");
}


// _objc_msgSend$fallbackSwitchToFolder:dataUUID:isJIT:completion: @ 0xF1E0
id objc_msgSend_fallbackSwitchToFolder_dataUUID_isJIT_completion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "fallbackSwitchToFolder:dataUUID:isJIT:completion:");
}


// _objc_msgSend$fileExistsAtPath: @ 0xF200
id objc_msgSend_fileExistsAtPath_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "fileExistsAtPath:");
}


// _objc_msgSend$fileExistsAtPath:isDirectory: @ 0xF220
id objc_msgSend_fileExistsAtPath_isDirectory_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "fileExistsAtPath:isDirectory:");
}


// _objc_msgSend$fileSystemRepresentation @ 0xF240
id objc_msgSend_fileSystemRepresentation(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "fileSystemRepresentation");
}


// _objc_msgSend$firstObject @ 0xF260
id objc_msgSend_firstObject(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "firstObject");
}


// _objc_msgSend$folderName @ 0xF280
id objc_msgSend_folderName(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "folderName");
}


// _objc_msgSend$frame @ 0xF2A0
id objc_msgSend_frame(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "frame");
}


// _objc_msgSend$guestAppInfo @ 0xF2C0
id objc_msgSend_guestAppInfo(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "guestAppInfo");
}


// _objc_msgSend$handleAppSelected: @ 0xF2E0
id objc_msgSend_handleAppSelected_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "handleAppSelected:");
}


// _objc_msgSend$handleBeadPanEnded: @ 0xF300
id objc_msgSend_handleBeadPanEnded_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "handleBeadPanEnded:");
}


// _objc_msgSend$hasSuffix: @ 0xF320
id objc_msgSend_hasSuffix_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "hasSuffix:");
}


// _objc_msgSend$heightAnchor @ 0xF340
id objc_msgSend_heightAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "heightAnchor");
}


// _objc_msgSend$hitTest:withEvent: @ 0xF360
id objc_msgSend_hitTest_withEvent_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "hitTest:withEvent:");
}


// _objc_msgSend$hostBundleIdentifier @ 0xF380
id objc_msgSend_hostBundleIdentifier(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "hostBundleIdentifier");
}


// _objc_msgSend$icon @ 0xF3A0
id objc_msgSend_icon(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "icon");
}


// _objc_msgSend$imageWithContentsOfFile: @ 0xF3C0
id objc_msgSend_imageWithContentsOfFile_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "imageWithContentsOfFile:");
}


// _objc_msgSend$impactOccurred @ 0xF3E0
id objc_msgSend_impactOccurred(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "impactOccurred");
}


// _objc_msgSend$initWithActivityIndicatorStyle: @ 0xF400
id objc_msgSend_initWithActivityIndicatorStyle_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithActivityIndicatorStyle:");
}


// _objc_msgSend$initWithEffect: @ 0xF420
id objc_msgSend_initWithEffect_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithEffect:");
}


// _objc_msgSend$initWithFrame: @ 0xF440
id objc_msgSend_initWithFrame_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithFrame:");
}


// _objc_msgSend$initWithImage: @ 0xF460
id objc_msgSend_initWithImage_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithImage:");
}


// _objc_msgSend$initWithName:folderName:bundleId:version:dataUUID:appPath:icon:isJITEnabled: @ 0xF480
id objc_msgSend_initWithName_folderName_bundleId_version_dataUUID_appPath_icon_isJITEnabled_(
        void *a1,
        const char *a2,
        ...)
{
  return objc_msgSend(a1, "initWithName:folderName:bundleId:version:dataUUID:appPath:icon:isJITEnabled:");
}


// _objc_msgSend$initWithStyle: @ 0xF4A0
id objc_msgSend_initWithStyle_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithStyle:");
}


// _objc_msgSend$initWithSuiteName: @ 0xF4C0
id objc_msgSend_initWithSuiteName_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithSuiteName:");
}


// _objc_msgSend$initWithTarget:action: @ 0xF4E0
id objc_msgSend_initWithTarget_action_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithTarget:action:");
}


// _objc_msgSend$initWithWindowScene: @ 0xF500
id objc_msgSend_initWithWindowScene_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithWindowScene:");
}


// _objc_msgSend$invalidate @ 0xF520
id objc_msgSend_invalidate(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "invalidate");
}


// _objc_msgSend$isContainerGuestRunning @ 0xF540
id objc_msgSend_isContainerGuestRunning(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "isContainerGuestRunning");
}


// _objc_msgSend$isDrawerOpen @ 0xF560
id objc_msgSend_isDrawerOpen(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "isDrawerOpen");
}


// _objc_msgSend$isEqualToString: @ 0xF580
id objc_msgSend_isEqualToString_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "isEqualToString:");
}


// _objc_msgSend$isJITEnabled @ 0xF5A0
id objc_msgSend_isJITEnabled(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "isJITEnabled");
}


// _objc_msgSend$isSetup @ 0xF5C0
id objc_msgSend_isSetup(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "isSetup");
}


// _objc_msgSend$lastObject @ 0xF5E0
id objc_msgSend_lastObject(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "lastObject");
}


// _objc_msgSend$lastPathComponent @ 0xF600
id objc_msgSend_lastPathComponent(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "lastPathComponent");
}


// _objc_msgSend$layer @ 0xF620
id objc_msgSend_layer(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "layer");
}


// _objc_msgSend$lcMainBundle @ 0xF640
id objc_msgSend_lcMainBundle(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "lcMainBundle");
}


// _objc_msgSend$leadingAnchor @ 0xF660
id objc_msgSend_leadingAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "leadingAnchor");
}


// _objc_msgSend$length @ 0xF680
id objc_msgSend_length(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "length");
}


// _objc_msgSend$loadSavedBeadPosition @ 0xF6A0
id objc_msgSend_loadSavedBeadPosition(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "loadSavedBeadPosition");
}


// _objc_msgSend$localizedStandardCompare: @ 0xF6C0
id objc_msgSend_localizedStandardCompare_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "localizedStandardCompare:");
}


// _objc_msgSend$mainBundle @ 0xF6E0
id objc_msgSend_mainBundle(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "mainBundle");
}


// _objc_msgSend$mainQueue @ 0xF700
id objc_msgSend_mainQueue(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "mainQueue");
}


// _objc_msgSend$mainScreen @ 0xF720
id objc_msgSend_mainScreen(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "mainScreen");
}


// _objc_msgSend$methodForSelector: @ 0xF740
id objc_msgSend_methodForSelector_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "methodForSelector:");
}


// _objc_msgSend$name @ 0xF760
id objc_msgSend_name(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "name");
}


// _objc_msgSend$numberWithBool: @ 0xF780
id objc_msgSend_numberWithBool_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "numberWithBool:");
}


// _objc_msgSend$numberWithDouble: @ 0xF7A0
id objc_msgSend_numberWithDouble_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "numberWithDouble:");
}


// _objc_msgSend$numberWithInt: @ 0xF7C0
id objc_msgSend_numberWithInt_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "numberWithInt:");
}


// _objc_msgSend$objectForKey: @ 0xF7E0
id objc_msgSend_objectForKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "objectForKey:");
}


// _objc_msgSend$objectForKeyedSubscript: @ 0xF800
id objc_msgSend_objectForKeyedSubscript_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "objectForKeyedSubscript:");
}


// _objc_msgSend$onClose @ 0xF820
id objc_msgSend_onClose(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onClose");
}


// _objc_msgSend$onPanEnded @ 0xF840
id objc_msgSend_onPanEnded(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onPanEnded");
}


// _objc_msgSend$onPanMoved @ 0xF860
id objc_msgSend_onPanMoved(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onPanMoved");
}


// _objc_msgSend$onReturnHome @ 0xF880
id objc_msgSend_onReturnHome(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onReturnHome");
}


// _objc_msgSend$onSelectApp @ 0xF8A0
id objc_msgSend_onSelectApp(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onSelectApp");
}


// _objc_msgSend$onTap @ 0xF8C0
id objc_msgSend_onTap(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onTap");
}


// _objc_msgSend$onUserInteraction @ 0xF8E0
id objc_msgSend_onUserInteraction(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onUserInteraction");
}


// _objc_msgSend$openURL:options:completionHandler: @ 0xF900
id objc_msgSend_openURL_options_completionHandler_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "openURL:options:completionHandler:");
}


// _objc_msgSend$overlayController @ 0xF920
id objc_msgSend_overlayController(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "overlayController");
}


// _objc_msgSend$overlayWindow @ 0xF940
id objc_msgSend_overlayWindow(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "overlayWindow");
}


// _objc_msgSend$performSelector: @ 0xF960
id objc_msgSend_performSelector_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "performSelector:");
}


// _objc_msgSend$performSelector:withObject: @ 0xF980
id objc_msgSend_performSelector_withObject_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "performSelector:withObject:");
}


// _objc_msgSend$performSetup @ 0xF9A0
id objc_msgSend_performSetup(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "performSetup");
}


// _objc_msgSend$presentTransitionAndSwitchToApp:completion: @ 0xF9E0
id objc_msgSend_presentTransitionAndSwitchToApp_completion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "presentTransitionAndSwitchToApp:completion:");
}


// _objc_msgSend$rangeOfString: @ 0xFA00
id objc_msgSend_rangeOfString_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "rangeOfString:");
}


// _objc_msgSend$realHostDocumentsDirectory @ 0xFA20
id objc_msgSend_realHostDocumentsDirectory(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "realHostDocumentsDirectory");
}


// _objc_msgSend$refreshAppList @ 0xFA40
id objc_msgSend_refreshAppList(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "refreshAppList");
}


// _objc_msgSend$reloadWithApps:runningFolder: @ 0xFA60
id objc_msgSend_reloadWithApps_runningFolder_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "reloadWithApps:runningFolder:");
}


// _objc_msgSend$removeArrangedSubview: @ 0xFA80
id objc_msgSend_removeArrangedSubview_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "removeArrangedSubview:");
}


// _objc_msgSend$removeFromSuperview @ 0xFAA0
id objc_msgSend_removeFromSuperview(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "removeFromSuperview");
}


// _objc_msgSend$removeItemAtPath:error: @ 0xFAC0
id objc_msgSend_removeItemAtPath_error_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "removeItemAtPath:error:");
}


// _objc_msgSend$removeObjectForKey: @ 0xFAE0
id objc_msgSend_removeObjectForKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "removeObjectForKey:");
}


// _objc_msgSend$resetInactivityTimer @ 0xFB00
id objc_msgSend_resetInactivityTimer(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "resetInactivityTimer");
}


// _objc_msgSend$resolveHitTestAtPoint:inWindow:withEvent: @ 0xFB20
id objc_msgSend_resolveHitTestAtPoint_inWindow_withEvent_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "resolveHitTestAtPoint:inWindow:withEvent:");
}


// _objc_msgSend$safeAreaInsets @ 0xFB40
id objc_msgSend_safeAreaInsets(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "safeAreaInsets");
}


// _objc_msgSend$safeAreaLayoutGuide @ 0xFB60
id objc_msgSend_safeAreaLayoutGuide(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "safeAreaLayoutGuide");
}


// _objc_msgSend$saveBeadPosition @ 0xFB80
id objc_msgSend_saveBeadPosition(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "saveBeadPosition");
}


// _objc_msgSend$scanInstalledApps @ 0xFBA0
id objc_msgSend_scanInstalledApps(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "scanInstalledApps");
}


// _objc_msgSend$scheduledTimerWithTimeInterval:repeats:block: @ 0xFBC0
id objc_msgSend_scheduledTimerWithTimeInterval_repeats_block_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "scheduledTimerWithTimeInterval:repeats:block:");
}


// _objc_msgSend$setAccessibilityIdentifier: @ 0xFBE0
id objc_msgSend_setAccessibilityIdentifier_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setAccessibilityIdentifier:");
}


// _objc_msgSend$setAlignment: @ 0xFC00
id objc_msgSend_setAlignment_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setAlignment:");
}


// _objc_msgSend$setAlpha: @ 0xFC20
id objc_msgSend_setAlpha_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setAlpha:");
}


// _objc_msgSend$setAutoresizingMask: @ 0xFC40
id objc_msgSend_setAutoresizingMask_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setAutoresizingMask:");
}


// _objc_msgSend$setAxis: @ 0xFC60
id objc_msgSend_setAxis_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setAxis:");
}


// _objc_msgSend$setBackgroundColor: @ 0xFC80
id objc_msgSend_setBackgroundColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setBackgroundColor:");
}


// _objc_msgSend$setBeadView: @ 0xFCA0
id objc_msgSend_setBeadView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setBeadView:");
}


// _objc_msgSend$setBool:forKey: @ 0xFCC0
id objc_msgSend_setBool_forKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setBool:forKey:");
}


// _objc_msgSend$setBorderColor: @ 0xFCE0
id objc_msgSend_setBorderColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setBorderColor:");
}


// _objc_msgSend$setBorderWidth: @ 0xFD00
id objc_msgSend_setBorderWidth_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setBorderWidth:");
}


// _objc_msgSend$setCenter: @ 0xFD20
id objc_msgSend_setCenter_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setCenter:");
}


// _objc_msgSend$setClipsToBounds: @ 0xFD40
id objc_msgSend_setClipsToBounds_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setClipsToBounds:");
}


// _objc_msgSend$setColor: @ 0xFD60
id objc_msgSend_setColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setColor:");
}


// _objc_msgSend$setContentMode: @ 0xFD80
id objc_msgSend_setContentMode_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setContentMode:");
}


// _objc_msgSend$setCornerCurve: @ 0xFDA0
id objc_msgSend_setCornerCurve_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setCornerCurve:");
}


// _objc_msgSend$setCornerRadius: @ 0xFDC0
id objc_msgSend_setCornerRadius_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setCornerRadius:");
}


// _objc_msgSend$setDimmingMaskView: @ 0xFDE0
id objc_msgSend_setDimmingMaskView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setDimmingMaskView:");
}


// _objc_msgSend$setDistribution: @ 0xFE00
id objc_msgSend_setDistribution_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setDistribution:");
}


// _objc_msgSend$setDouble:forKey: @ 0xFE20
id objc_msgSend_setDouble_forKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setDouble:forKey:");
}


// _objc_msgSend$setDrawerOpen:animated: @ 0xFE40
id objc_msgSend_setDrawerOpen_animated_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setDrawerOpen:animated:");
}


// _objc_msgSend$setDrawerView: @ 0xFE60
id objc_msgSend_setDrawerView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setDrawerView:");
}


// _objc_msgSend$setFont: @ 0xFE80
id objc_msgSend_setFont_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setFont:");
}


// _objc_msgSend$setFrame: @ 0xFEA0
id objc_msgSend_setFrame_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setFrame:");
}


// _objc_msgSend$setHidden: @ 0xFEC0
id objc_msgSend_setHidden_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setHidden:");
}


// _objc_msgSend$setHidesWhenStopped: @ 0xFEE0
id objc_msgSend_setHidesWhenStopped_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setHidesWhenStopped:");
}


// _objc_msgSend$setImage: @ 0xFF00
id objc_msgSend_setImage_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setImage:");
}


// _objc_msgSend$setImage:forState: @ 0xFF20
id objc_msgSend_setImage_forState_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setImage:forState:");
}


// _objc_msgSend$setIsSetup: @ 0xFF40
id objc_msgSend_setIsSetup_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setIsSetup:");
}


// _objc_msgSend$setNumberOfLines: @ 0xFF60
id objc_msgSend_setNumberOfLines_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setNumberOfLines:");
}


// _objc_msgSend$setObject:forKey: @ 0xFF80
id objc_msgSend_setObject_forKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setObject:forKey:");
}


// _objc_msgSend$setObject:forKeyedSubscript: @ 0xFFA0
id objc_msgSend_setObject_forKeyedSubscript_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setObject:forKeyedSubscript:");
}


// _objc_msgSend$setOnClose: @ 0xFFC0
id objc_msgSend_setOnClose_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnClose:");
}


// _objc_msgSend$setOnPanEnded: @ 0xFFE0
id objc_msgSend_setOnPanEnded_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnPanEnded:");
}


// _objc_msgSend$setOnPanMoved: @ 0x10000
id objc_msgSend_setOnPanMoved_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnPanMoved:");
}


// _objc_msgSend$setOnReturnHome: @ 0x10020
id objc_msgSend_setOnReturnHome_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnReturnHome:");
}


// _objc_msgSend$setOnSelectApp: @ 0x10040
id objc_msgSend_setOnSelectApp_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnSelectApp:");
}


// _objc_msgSend$setOnTap: @ 0x10060
id objc_msgSend_setOnTap_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnTap:");
}


// _objc_msgSend$setOnUserInteraction: @ 0x10080
id objc_msgSend_setOnUserInteraction_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnUserInteraction:");
}


// _objc_msgSend$setOverlayController: @ 0x100A0
id objc_msgSend_setOverlayController_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOverlayController:");
}


// _objc_msgSend$setOverlayWindow: @ 0x100C0
id objc_msgSend_setOverlayWindow_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOverlayWindow:");
}


// _objc_msgSend$setRootViewController: @ 0x100E0
id objc_msgSend_setRootViewController_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setRootViewController:");
}


// _objc_msgSend$setShadowColor: @ 0x10100
id objc_msgSend_setShadowColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setShadowColor:");
}


// _objc_msgSend$setShadowOffset: @ 0x10120
id objc_msgSend_setShadowOffset_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setShadowOffset:");
}


// _objc_msgSend$setShadowOpacity: @ 0x10140
id objc_msgSend_setShadowOpacity_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setShadowOpacity:");
}


// _objc_msgSend$setShadowRadius: @ 0x10160
id objc_msgSend_setShadowRadius_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setShadowRadius:");
}


// _objc_msgSend$setShowsVerticalScrollIndicator: @ 0x10180
id objc_msgSend_setShowsVerticalScrollIndicator_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setShowsVerticalScrollIndicator:");
}


// _objc_msgSend$setSpacing: @ 0x101A0
id objc_msgSend_setSpacing_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setSpacing:");
}


// _objc_msgSend$setText: @ 0x101C0
id objc_msgSend_setText_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setText:");
}


// _objc_msgSend$setTextAlignment: @ 0x101E0
id objc_msgSend_setTextAlignment_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTextAlignment:");
}


// _objc_msgSend$setTextColor: @ 0x10200
id objc_msgSend_setTextColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTextColor:");
}


// _objc_msgSend$setTintColor: @ 0x10220
id objc_msgSend_setTintColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTintColor:");
}


// _objc_msgSend$setTransform: @ 0x10240
id objc_msgSend_setTransform_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTransform:");
}


// _objc_msgSend$setTransitionOverlayView: @ 0x10260
id objc_msgSend_setTransitionOverlayView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTransitionOverlayView:");
}


// _objc_msgSend$setTranslatesAutoresizingMaskIntoConstraints: @ 0x10280
id objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTranslatesAutoresizingMaskIntoConstraints:");
}


// _objc_msgSend$setUserInteractionEnabled: @ 0x102A0
id objc_msgSend_setUserInteractionEnabled_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setUserInteractionEnabled:");
}


// _objc_msgSend$setWindowLevel: @ 0x102C0
id objc_msgSend_setWindowLevel_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setWindowLevel:");
}


// _objc_msgSend$setWindowScene: @ 0x102E0
id objc_msgSend_setWindowScene_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setWindowScene:");
}


// _objc_msgSend$setupComponents @ 0x10300
id objc_msgSend_setupComponents(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setupComponents");
}


// _objc_msgSend$setupIfNeeded @ 0x10320
id objc_msgSend_setupIfNeeded(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setupIfNeeded");
}


// _objc_msgSend$setupReturnHomeCard @ 0x10340
id objc_msgSend_setupReturnHomeCard(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setupReturnHomeCard");
}


// _objc_msgSend$setupUI @ 0x10360
id objc_msgSend_setupUI(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setupUI");
}


// _objc_msgSend$sharedApplication @ 0x10380
id objc_msgSend_sharedApplication(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "sharedApplication");
}


// _objc_msgSend$sharedManager @ 0x103A0
id objc_msgSend_sharedManager(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "sharedManager");
}


// _objc_msgSend$showWithCompletion: @ 0x103C0
id objc_msgSend_showWithCompletion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "showWithCompletion:");
}


// _objc_msgSend$sortUsingComparator: @ 0x103E0
id objc_msgSend_sortUsingComparator_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "sortUsingComparator:");
}


// _objc_msgSend$standardUserDefaults @ 0x10400
id objc_msgSend_standardUserDefaults(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "standardUserDefaults");
}


// _objc_msgSend$startAnimating @ 0x10420
id objc_msgSend_startAnimating(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "startAnimating");
}


// _objc_msgSend$state @ 0x10440
id objc_msgSend_state(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "state");
}


// _objc_msgSend$stringByAddingPercentEncodingWithAllowedCharacters: @ 0x10460
id objc_msgSend_stringByAddingPercentEncodingWithAllowedCharacters_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringByAddingPercentEncodingWithAllowedCharacters:");
}


// _objc_msgSend$stringByAppendingPathComponent: @ 0x10480
id objc_msgSend_stringByAppendingPathComponent_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringByAppendingPathComponent:");
}


// _objc_msgSend$stringByAppendingString: @ 0x104A0
id objc_msgSend_stringByAppendingString_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringByAppendingString:");
}


// _objc_msgSend$stringByReplacingOccurrencesOfString:withString: @ 0x104C0
id objc_msgSend_stringByReplacingOccurrencesOfString_withString_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringByReplacingOccurrencesOfString:withString:");
}


// _objc_msgSend$stringForKey: @ 0x104E0
id objc_msgSend_stringForKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringForKey:");
}


// _objc_msgSend$stringWithFormat: @ 0x10500
id objc_msgSend_stringWithFormat_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringWithFormat:");
}


// _objc_msgSend$stringWithUTF8String: @ 0x10520
id objc_msgSend_stringWithUTF8String_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringWithUTF8String:");
}


// _objc_msgSend$substringToIndex: @ 0x10540
id objc_msgSend_substringToIndex_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "substringToIndex:");
}


// _objc_msgSend$superview @ 0x10560
id objc_msgSend_superview(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "superview");
}


// _objc_msgSend$syncLaunchSelectionToHost:dataUUID:requestID:isJIT: @ 0x10580
id objc_msgSend_syncLaunchSelectionToHost_dataUUID_requestID_isJIT_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "syncLaunchSelectionToHost:dataUUID:requestID:isJIT:");
}


// _objc_msgSend$synchronize @ 0x105A0
id objc_msgSend_synchronize(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "synchronize");
}


// _objc_msgSend$systemCyanColor @ 0x105C0
id objc_msgSend_systemCyanColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "systemCyanColor");
}


// _objc_msgSend$systemFontOfSize:weight: @ 0x105E0
id objc_msgSend_systemFontOfSize_weight_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "systemFontOfSize:weight:");
}


// _objc_msgSend$systemGreenColor @ 0x10600
id objc_msgSend_systemGreenColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "systemGreenColor");
}


// _objc_msgSend$systemImageNamed: @ 0x10620
id objc_msgSend_systemImageNamed_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "systemImageNamed:");
}


// _objc_msgSend$systemImageNamed:withConfiguration: @ 0x10640
id objc_msgSend_systemImageNamed_withConfiguration_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "systemImageNamed:withConfiguration:");
}


// _objc_msgSend$timeIntervalSince1970 @ 0x10660
id objc_msgSend_timeIntervalSince1970(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "timeIntervalSince1970");
}


// _objc_msgSend$topAnchor @ 0x10680
id objc_msgSend_topAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "topAnchor");
}


// _objc_msgSend$trailingAnchor @ 0x106A0
id objc_msgSend_trailingAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "trailingAnchor");
}


// _objc_msgSend$transitionOverlayView @ 0x106C0
id objc_msgSend_transitionOverlayView(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "transitionOverlayView");
}


// _objc_msgSend$transitionWithView:duration:options:animations:completion: @ 0x106E0
id objc_msgSend_transitionWithView_duration_options_animations_completion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "transitionWithView:duration:options:animations:completion:");
}


// _objc_msgSend$translationInView: @ 0x10700
id objc_msgSend_translationInView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "translationInView:");
}


// _objc_msgSend$updateLayoutForCanvasSize: @ 0x10720
id objc_msgSend_updateLayoutForCanvasSize_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "updateLayoutForCanvasSize:");
}


// _objc_msgSend$updateStatus: @ 0x10740
id objc_msgSend_updateStatus_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "updateStatus:");
}


// _objc_msgSend$version @ 0x10760
id objc_msgSend_version(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "version");
}


// _objc_msgSend$view @ 0x10780
id objc_msgSend_view(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "view");
}


// _objc_msgSend$whiteColor @ 0x107A0
id objc_msgSend_whiteColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "whiteColor");
}


// _objc_msgSend$widthAnchor @ 0x107C0
id objc_msgSend_widthAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "widthAnchor");
}


// _objc_msgSend$windowScene @ 0x107E0
id objc_msgSend_windowScene(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "windowScene");
}


// _objc_msgSend$writeToFile:atomically: @ 0x10800
id objc_msgSend_writeToFile_atomically_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "writeToFile:atomically:");
}


