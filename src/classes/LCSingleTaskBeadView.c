// LCSingleTaskSwitcher - decompiled pseudo code
// class: LCSingleTaskBeadView | functions: 15

// ===== -[LCSingleTaskBeadView initWithFrame:] @ 0x42B4 (size=76) =====
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


// ===== -[LCSingleTaskBeadView setupUI] @ 0x4300 (size=1256) =====
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


// ===== -[LCSingleTaskBeadView pointInside:withEvent:] @ 0x47E8 (size=56) =====
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


// ===== -[LCSingleTaskBeadView handleTap] @ 0x4820 (size=152) =====
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


// ===== -[LCSingleTaskBeadView handlePan:] @ 0x48B8 (size=552) =====
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


// ===== -[LCSingleTaskBeadView resetVisualState] @ 0x4B8C (size=80) =====
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


// ===== -[LCSingleTaskBeadView onTap] @ 0x4BDC (size=16) =====
id __cdecl -[LCSingleTaskBeadView onTap](LCSingleTaskBeadView *self, SEL a2)
{
  return self->_onTap;
}


// ===== -[LCSingleTaskBeadView setOnTap:] @ 0x4BEC (size=12) =====
void __cdecl -[LCSingleTaskBeadView setOnTap:](LCSingleTaskBeadView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 48);
}


// ===== -[LCSingleTaskBeadView onPanMoved] @ 0x4BF8 (size=16) =====
id __cdecl -[LCSingleTaskBeadView onPanMoved](LCSingleTaskBeadView *self, SEL a2)
{
  return self->_onPanMoved;
}


// ===== -[LCSingleTaskBeadView setOnPanMoved:] @ 0x4C08 (size=12) =====
void __cdecl -[LCSingleTaskBeadView setOnPanMoved:](LCSingleTaskBeadView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 56);
}


// ===== -[LCSingleTaskBeadView onPanEnded] @ 0x4C14 (size=16) =====
id __cdecl -[LCSingleTaskBeadView onPanEnded](LCSingleTaskBeadView *self, SEL a2)
{
  return self->_onPanEnded;
}


// ===== -[LCSingleTaskBeadView setOnPanEnded:] @ 0x4C24 (size=12) =====
void __cdecl -[LCSingleTaskBeadView setOnPanEnded:](LCSingleTaskBeadView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 64);
}


// ===== -[LCSingleTaskBeadView onUserInteraction] @ 0x4C30 (size=16) =====
id __cdecl -[LCSingleTaskBeadView onUserInteraction](LCSingleTaskBeadView *self, SEL a2)
{
  return self->_onUserInteraction;
}


// ===== -[LCSingleTaskBeadView setOnUserInteraction:] @ 0x4C40 (size=12) =====
void __cdecl -[LCSingleTaskBeadView setOnUserInteraction:](LCSingleTaskBeadView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 72);
}


// ===== -[LCSingleTaskBeadView .cxx_destruct] @ 0x4C4C (size=164) =====
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


