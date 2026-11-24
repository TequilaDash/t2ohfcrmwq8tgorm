//
//  LCSingleTaskDrawerView.m
//  LCSingleTaskSwitcher — Hex-Rays 反编译伪代码（按方法组织）
//  抽屉面板：App 列表、运行中标记、返回宿主卡片
//
#import "LCSingleTaskDrawerView.h"

/*
 * 注意：以下是 IDA Hex-Rays 输出的 C 伪代码，不是可直接编译的 Objective-C 源码。
 * 它精确反映 ARM64 机器码语义（objc_msgSend / retain-release / block 结构均被显式展开）。
 * 每个方法前标注原始虚拟地址，便于对照反汇编复核。
 */

// LCSingleTaskSwitcher - decompiled pseudo code
// class: LCSingleTaskDrawerView | functions: 16

// ===== -[LCSingleTaskDrawerView initWithFrame:] @ 0x5C68 (size=76) =====
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


// ===== -[LCSingleTaskDrawerView setupUI] @ 0x5CB4 (size=4116) =====
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


// ===== -[LCSingleTaskDrawerView setupReturnHomeCard] @ 0x6CC8 (size=1956) =====
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


// ===== -[LCSingleTaskDrawerView handleClose] @ 0x746C (size=152) =====
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


// ===== -[LCSingleTaskDrawerView handleReturnHome] @ 0x7504 (size=152) =====
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


// ===== -[LCSingleTaskDrawerView reloadWithApps:runningFolder:] @ 0x759C (size=640) =====
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


// ===== -[LCSingleTaskDrawerView createAppRowWithApp:isRunning:] @ 0x781C (size=3212) =====
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


// ===== -[LCSingleTaskDrawerView onSelectApp] @ 0x8600 (size=16) =====
id __cdecl -[LCSingleTaskDrawerView onSelectApp](LCSingleTaskDrawerView *self, SEL a2)
{
  return self->_onSelectApp;
}


// ===== -[LCSingleTaskDrawerView setOnSelectApp:] @ 0x8610 (size=12) =====
void __cdecl -[LCSingleTaskDrawerView setOnSelectApp:](LCSingleTaskDrawerView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 80);
}


// ===== -[LCSingleTaskDrawerView onReturnHome] @ 0x861C (size=16) =====
id __cdecl -[LCSingleTaskDrawerView onReturnHome](LCSingleTaskDrawerView *self, SEL a2)
{
  return self->_onReturnHome;
}


// ===== -[LCSingleTaskDrawerView setOnReturnHome:] @ 0x862C (size=12) =====
void __cdecl -[LCSingleTaskDrawerView setOnReturnHome:](LCSingleTaskDrawerView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 88);
}


// ===== -[LCSingleTaskDrawerView onClose] @ 0x8638 (size=16) =====
id __cdecl -[LCSingleTaskDrawerView onClose](LCSingleTaskDrawerView *self, SEL a2)
{
  return self->_onClose;
}


// ===== -[LCSingleTaskDrawerView setOnClose:] @ 0x8648 (size=12) =====
void __cdecl -[LCSingleTaskDrawerView setOnClose:](LCSingleTaskDrawerView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 96);
}


// ===== -[LCSingleTaskDrawerView onUserInteraction] @ 0x8654 (size=16) =====
id __cdecl -[LCSingleTaskDrawerView onUserInteraction](LCSingleTaskDrawerView *self, SEL a2)
{
  return self->_onUserInteraction;
}


// ===== -[LCSingleTaskDrawerView setOnUserInteraction:] @ 0x8664 (size=12) =====
void __cdecl -[LCSingleTaskDrawerView setOnUserInteraction:](LCSingleTaskDrawerView *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 104);
}


// ===== -[LCSingleTaskDrawerView .cxx_destruct] @ 0x8670 (size=284) =====
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



