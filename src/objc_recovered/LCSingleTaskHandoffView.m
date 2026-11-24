//
//  LCSingleTaskHandoffView.m
//  LCSingleTaskSwitcher — Hex-Rays 反编译伪代码（按方法组织）
//  转场交接覆盖层：显示切入/退出 App 的过场动画与状态文字
//
#import "LCSingleTaskHandoffView.h"

/*
 * 注意：以下是 IDA Hex-Rays 输出的 C 伪代码，不是可直接编译的 Objective-C 源码。
 * 它精确反映 ARM64 机器码语义（objc_msgSend / retain-release / block 结构均被显式展开）。
 * 每个方法前标注原始虚拟地址，便于对照反汇编复核。
 */

// LCSingleTaskSwitcher - decompiled pseudo code
// class: LCSingleTaskHandoffView | functions: 6

// ===== -[LCSingleTaskHandoffView initWithFrame:] @ 0x4CF0 (size=76) =====
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


// ===== -[LCSingleTaskHandoffView setupUI] @ 0x4D3C (size=2808) =====
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


// ===== -[LCSingleTaskHandoffView configureWithAppName:icon:status:] @ 0x5834 (size=220) =====
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


// ===== -[LCSingleTaskHandoffView updateStatus:] @ 0x5910 (size=204) =====
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


// ===== -[LCSingleTaskHandoffView showWithCompletion:] @ 0x5A34 (size=280) =====
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


// ===== -[LCSingleTaskHandoffView .cxx_destruct] @ 0x5BC4 (size=164) =====
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



