// LCSingleTaskSwitcher - decompiled pseudo code
// class: _global_blocks_and_stubs | functions: 392

// ===== sub_4AE0 @ 0x4AE0 (size=96) =====
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


// ===== sub_4B40 @ 0x4B40 (size=8) =====
id __fastcall sub_4B40(__int64 a1, __int64 a2)
{
  return objc_retain(*(id *)(a2 + 32));
}


// ===== sub_4B48 @ 0x4B48 (size=8) =====
void __fastcall sub_4B48(__int64 a1)
{
  objc_release(*(id *)(a1 + 32));
}


// ===== sub_4B50 @ 0x4B50 (size=60) =====
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


// ===== sub_59DC @ 0x59DC (size=8) =====
void *__fastcall sub_59DC(__int64 a1)
{
  return objc_msgSend(*(id *)(a1 + 32), "setText:", *(_QWORD *)(a1 + 40));
}


// ===== sub_59E4 @ 0x59E4 (size=40) =====
id __fastcall sub_59E4(__int64 a1, __int64 a2)
{
  id v3; // x0

  v3 = objc_retain(*(id *)(a2 + 32));
  return objc_retain(*(id *)(a2 + 40));
}


// ===== sub_5A0C @ 0x5A0C (size=40) =====
void __fastcall sub_5A0C(__int64 a1)
{
  objc_release(*(id *)(a1 + 40));
  objc_release(*(id *)(a1 + 32));
}


// ===== sub_5B4C @ 0x5B4C (size=84) =====
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


// ===== sub_5BA0 @ 0x5BA0 (size=20) =====
__int64 __fastcall sub_5BA0(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 32);
  if ( result )
    return (*(__int64 (**)(void))(result + 16))();
  return result;
}


// ===== sub_5BB4 @ 0x5BB4 (size=16) =====
void __fastcall sub_5BB4(__int64 a1, __int64 a2)
{
  _Block_object_assign((void *)(a1 + 32), *(const void **)(a2 + 32), 7);
}


// ===== sub_84A8 @ 0x84A8 (size=32) =====
void __fastcall __noreturn sub_84A8(_Unwind_Exception *a1)
{
  __int64 v1; // x21
  __int64 v2; // x29

  objc_destroyWeak((id *)(v1 + 40));
  objc_destroyWeak((id *)(v2 - 232));
  _Unwind_Resume(a1);
}


// ===== j___Unwind_Resume @ 0x84C8 (size=4) =====
// attributes: thunk
void __cdecl __noreturn j___Unwind_Resume(_Unwind_Exception *exception_object)
{
  _Unwind_Resume(exception_object);
}


// ===== sub_84CC @ 0x84CC (size=220) =====
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


// ===== sub_85A8 @ 0x85A8 (size=48) =====
void __fastcall sub_85A8(__int64 a1, __int64 a2)
{
  id v4; // x0

  v4 = objc_retain(*(id *)(a2 + 32));
  objc_copyWeak((id *)(a1 + 40), (id *)(a2 + 40));
}


// ===== sub_85D8 @ 0x85D8 (size=40) =====
void __fastcall sub_85D8(__int64 a1)
{
  objc_destroyWeak((id *)(a1 + 40));
  objc_release(*(id *)(a1 + 32));
}


// ===== sub_8AD4 @ 0x8AD4 (size=28) =====
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


// ===== sub_8AF0 @ 0x8AF0 (size=60) =====
void __fastcall sub_8AF0(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-18h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "updateLayoutForCanvasSize:", *(double *)(a1 + 40), *(double *)(a1 + 48));
  objc_release(WeakRetained);
}


// ===== sub_8B2C @ 0x8B2C (size=12) =====
void __fastcall sub_8B2C(__int64 a1, __int64 a2)
{
  objc_copyWeak((id *)(a1 + 32), (id *)(a2 + 32));
}


// ===== sub_8B38 @ 0x8B38 (size=8) =====
void __fastcall sub_8B38(__int64 a1)
{
  objc_destroyWeak((id *)(a1 + 32));
}


// ===== sub_941C @ 0x941C (size=212) =====
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


// ===== sub_94F0 @ 0x94F0 (size=52) =====
void __fastcall sub_94F0(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "setDrawerOpen:animated:", 0, 1);
  objc_release(WeakRetained);
}


// ===== sub_9524 @ 0x9524 (size=64) =====
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


// ===== sub_9564 @ 0x9564 (size=72) =====
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


// ===== sub_95AC @ 0x95AC (size=44) =====
void __fastcall sub_95AC(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "resetInactivityTimer");
  objc_release(WeakRetained);
}


// ===== sub_95D8 @ 0x95D8 (size=116) =====
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


// ===== sub_964C @ 0x964C (size=44) =====
void __fastcall sub_964C(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "resetInactivityTimer");
  objc_release(WeakRetained);
}


// ===== sub_9678 @ 0x9678 (size=68) =====
void __fastcall sub_9678(__int64 a1, double a2, double a3)
{
  id WeakRetained; // [xsp+8h] [xbp-18h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "handleBeadPanEnded:", a2, a3);
  objc_release(WeakRetained);
}


// ===== sub_96BC @ 0x96BC (size=44) =====
void __fastcall sub_96BC(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "resetInactivityTimer");
  objc_release(WeakRetained);
}


// ===== sub_9BF0 @ 0x9BF0 (size=36) =====
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


// ===== sub_9C14 @ 0x9C14 (size=108) =====
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


// ===== sub_9C80 @ 0x9C80 (size=44) =====
void __fastcall sub_9C80(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "resetInactivityTimer");
  objc_release(WeakRetained);
}


// ===== sub_9F1C @ 0x9F1C (size=36) =====
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


// ===== sub_9F40 @ 0x9F40 (size=240) =====
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


// ===== sub_A030 @ 0xA030 (size=56) =====
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


// ===== sub_A2CC @ 0xA2CC (size=28) =====
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


// ===== sub_A2E8 @ 0xA2E8 (size=52) =====
void __fastcall sub_A2E8(__int64 a1)
{
  id v1; // [xsp+8h] [xbp-8h]

  v1 = (id)objc_claimAutoreleasedReturnValue(objc_msgSend(*(id *)(a1 + 32), "beadView"));
  objc_msgSend(v1, "setAlpha:", 1.0);
  objc_release(v1);
}


// ===== sub_A31C @ 0xA31C (size=212) =====
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


// ===== sub_A3F0 @ 0xA3F0 (size=20) =====
void __fastcall __noreturn sub_A3F0(_Unwind_Exception *a1)
{
  __int64 v1; // x22

  objc_destroyWeak((id *)(v1 + 32));
  _Unwind_Resume(a1);
}


// ===== sub_A404 @ 0xA404 (size=76) =====
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


// ===== sub_A5F4 @ 0xA5F4 (size=40) =====
void __cdecl sub_A5F4(id a1)
{
  LCSingleTaskSwitcher *v1; // x0
  void *v2; // x1

  v1 = objc_alloc_init(&OBJC_CLASS___LCSingleTaskSwitcher);
  v2 = (void *)qword_199C8;
  qword_199C8 = (__int64)v1;
  objc_release(v2);
}


// ===== sub_A71C @ 0xA71C (size=48) =====
void __fastcall sub_A71C(__int64 a1)
{
  id v1; // [xsp+8h] [xbp-8h]

  v1 = (id)objc_claimAutoreleasedReturnValue(objc_msgSend(*(id *)(a1 + 32), "sharedManager"));
  objc_msgSend(v1, "performSetup");
  objc_release(v1);
}


// ===== sub_AA54 @ 0xAA54 (size=44) =====
void __fastcall sub_AA54(__int64 a1)
{
  id WeakRetained; // [xsp+8h] [xbp-8h]

  WeakRetained = objc_loadWeakRetained((id *)(a1 + 32));
  objc_msgSend(WeakRetained, "performSetup");
  objc_release(WeakRetained);
}


// ===== sub_B10C @ 0xB10C (size=108) =====
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


// ===== sub_B6FC @ 0xB6FC (size=184) =====
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


// ===== sub_B7B4 @ 0xB7B4 (size=1248) =====
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


// ===== sub_BC94 @ 0xBC94 (size=268) =====
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


// ===== sub_BDA0 @ 0xBDA0 (size=16) =====
void *__fastcall sub_BDA0(__int64 a1)
{
  return objc_msgSend(*(id *)(a1 + 48), "dispatchSwitchToApp:dataUUID:", *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
}


// ===== sub_BDB0 @ 0xBDB0 (size=76) =====
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


// ===== sub_BDFC @ 0xBDFC (size=64) =====
void __fastcall sub_BDFC(id *a1)
{
  objc_release(a1[8]);
  objc_release(a1[7]);
  objc_release(a1[6]);
  objc_release(a1[5]);
  objc_release(a1[4]);
}


// ===== sub_BE3C @ 0xBE3C (size=60) =====
void __fastcall sub_BE3C(__int64 a1, __int64 a2)
{
  id v4; // x0
  id v5; // x0

  v4 = objc_retain(*(id *)(a2 + 32));
  v5 = objc_retain(*(id *)(a2 + 40));
  _Block_object_assign((void *)(a1 + 48), *(const void **)(a2 + 48), 7);
}


// ===== sub_BE78 @ 0xBE78 (size=48) =====
void __fastcall sub_BE78(id *a1)
{
  objc_release(a1[6]);
  objc_release(a1[5]);
  objc_release(a1[4]);
}


// ===== sub_BFF8 @ 0xBFF8 (size=164) =====
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


// ===== sub_C09C @ 0xC09C (size=148) =====
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


// ===== sub_C130 @ 0xC130 (size=156) =====
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


// ===== sub_C1CC @ 0xC1CC (size=8) =====
void *__fastcall sub_C1CC(__int64 a1)
{
  return objc_msgSend(*(id *)(a1 + 32), "dispatchReturnHome");
}


// ===== sub_C1D4 @ 0xC1D4 (size=52) =====
void __fastcall sub_C1D4(__int64 a1, __int64 a2)
{
  id v4; // x0

  v4 = objc_retain(*(id *)(a2 + 32));
  _Block_object_assign((void *)(a1 + 40), *(const void **)(a2 + 40), 7);
}


// ===== sub_D50C @ 0xD50C (size=120) =====
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


// ===== sub_D584 @ 0xD584 (size=148) =====
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


// ===== sub_D618 @ 0xD618 (size=12) =====
__int64 __fastcall sub_D618(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}


// ===== sub_D624 @ 0xD624 (size=140) =====
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


// ===== sub_D6B0 @ 0xD6B0 (size=12) =====
__int64 __fastcall sub_D6B0(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}


// ===== sub_D6BC @ 0xD6BC (size=12) =====
__int64 __fastcall sub_D6BC(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}


// ===== sub_D9AC @ 0xD9AC (size=120) =====
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


// ===== sub_DA24 @ 0xDA24 (size=148) =====
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


// ===== sub_DAB8 @ 0xDAB8 (size=12) =====
__int64 __fastcall sub_DAB8(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}


// ===== sub_DAC4 @ 0xDAC4 (size=12) =====
__int64 __fastcall sub_DAC4(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}


// ===== sub_E3D8 @ 0xE3D8 (size=284) =====
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


// ===== sub_E4F4 @ 0xE4F4 (size=12) =====
void __cdecl sub_E4F4(id a1, NSNotification *a2)
{
  +[LCSingleTaskSwitcher setupIfNeeded](&OBJC_CLASS___LCSingleTaskSwitcher, "setupIfNeeded");
}


// ===== sub_E500 @ 0xE500 (size=12) =====
void __cdecl sub_E500(id a1, NSNotification *a2)
{
  +[LCSingleTaskSwitcher setupIfNeeded](&OBJC_CLASS___LCSingleTaskSwitcher, "setupIfNeeded");
}


// ===== sub_E50C @ 0xE50C (size=12) =====
void __cdecl sub_E50C(id a1, NSNotification *a2)
{
  +[LCSingleTaskSwitcher setupIfNeeded](&OBJC_CLASS___LCSingleTaskSwitcher, "setupIfNeeded");
}


// ===== sub_E518 @ 0xE518 (size=20) =====
void sub_E518()
{
  dispatch_once(&qword_199D0, &stru_14290);
}


// ===== _CGAffineTransformMakeScale @ 0xE52C (size=12) =====
// attributes: thunk
CGAffineTransform *__cdecl CGAffineTransformMakeScale(CGAffineTransform *__return_ptr retstr, CGFloat sx, CGFloat sy)
{
  return _CGAffineTransformMakeScale(retstr, sx, sy);
}


// ===== _CGRectContainsPoint @ 0xE538 (size=12) =====
// attributes: thunk
bool __cdecl CGRectContainsPoint(CGRect rect, CGPoint point)
{
  return _CGRectContainsPoint(rect, point);
}


// ===== _CGRectInset @ 0xE544 (size=12) =====
// attributes: thunk
CGRect __cdecl CGRectInset(CGRect rect, CGFloat dx, CGFloat dy)
{
  return _CGRectInset(rect, dx, dy);
}


// ===== _NSClassFromString @ 0xE550 (size=12) =====
// attributes: thunk
Class __cdecl NSClassFromString(NSString *aClassName)
{
  return _NSClassFromString(aClassName);
}


// ===== _NSLog @ 0xE55C (size=12) =====
// attributes: thunk
void NSLog(NSString *format, ...)
{
  _NSLog(format);
}


// ===== _NSSearchPathForDirectoriesInDomains @ 0xE568 (size=12) =====
// attributes: thunk
NSArray *__cdecl NSSearchPathForDirectoriesInDomains(
        NSSearchPathDirectory directory,
        NSSearchPathDomainMask domainMask,
        BOOL expandTilde)
{
  return _NSSearchPathForDirectoriesInDomains(directory, domainMask, expandTilde);
}


// ===== _NSSelectorFromString @ 0xE574 (size=12) =====
// attributes: thunk
SEL __cdecl NSSelectorFromString(NSString *aSelectorName)
{
  return _NSSelectorFromString(aSelectorName);
}


// ===== __Block_object_assign @ 0xE580 (size=12) =====
// attributes: thunk
void __cdecl _Block_object_assign(void *a1, const void *a2, const int a3)
{
  __Block_object_assign(a1, a2, a3);
}


// ===== __Unwind_Resume @ 0xE58C (size=12) =====
// attributes: thunk
void __cdecl __noreturn _Unwind_Resume(_Unwind_Exception *exception_object)
{
  __Unwind_Resume(exception_object);
}


// ===== ___stack_chk_fail @ 0xE598 (size=12) =====
// attributes: thunk
void __noreturn __stack_chk_fail()
{
  ___stack_chk_fail();
}


// ===== _dispatch_after @ 0xE5A4 (size=12) =====
// attributes: thunk
void __cdecl dispatch_after(dispatch_time_t when, dispatch_queue_t queue, dispatch_block_t block)
{
  _dispatch_after(when, queue, block);
}


// ===== _dispatch_async @ 0xE5B0 (size=12) =====
// attributes: thunk
void __cdecl dispatch_async(dispatch_queue_t queue, dispatch_block_t block)
{
  _dispatch_async(queue, block);
}


// ===== _dispatch_get_global_queue @ 0xE5BC (size=12) =====
// attributes: thunk
dispatch_queue_global_t __cdecl dispatch_get_global_queue(intptr_t identifier, uintptr_t flags)
{
  return _dispatch_get_global_queue(identifier, flags);
}


// ===== _dispatch_once @ 0xE5C8 (size=12) =====
// attributes: thunk
void __cdecl dispatch_once(dispatch_once_t *predicate, dispatch_block_t block)
{
  _dispatch_once(predicate, block);
}


// ===== _dispatch_time @ 0xE5D4 (size=12) =====
// attributes: thunk
dispatch_time_t __cdecl dispatch_time(dispatch_time_t when, int64_t delta)
{
  return _dispatch_time(when, delta);
}


// ===== _getenv @ 0xE5E0 (size=12) =====
// attributes: thunk
char *__cdecl getenv(const char *a1)
{
  return _getenv(a1);
}


// ===== _getpid @ 0xE5EC (size=12) =====
// attributes: thunk
pid_t getpid(void)
{
  return _getpid();
}


// ===== _kill @ 0xE5F8 (size=12) =====
// attributes: thunk
int __cdecl kill(pid_t a1, int a2)
{
  return _kill(a1, a2);
}


// ===== _objc_alloc @ 0xE604 (size=12) =====
// attributes: thunk
id __cdecl objc_alloc(Class a1)
{
  return _objc_alloc(a1);
}


// ===== _objc_alloc_init @ 0xE610 (size=12) =====
// attributes: thunk
__int64 objc_alloc_init()
{
  return _objc_alloc_init();
}


// ===== _objc_autoreleasePoolPop @ 0xE61C (size=12) =====
// attributes: thunk
void __cdecl objc_autoreleasePoolPop(void *context)
{
  _objc_autoreleasePoolPop(context);
}


// ===== _objc_autoreleasePoolPush @ 0xE628 (size=12) =====
// attributes: thunk
void *objc_autoreleasePoolPush(void)
{
  return _objc_autoreleasePoolPush();
}


// ===== _objc_autoreleaseReturnValue @ 0xE634 (size=12) =====
// attributes: thunk
id __cdecl objc_autoreleaseReturnValue(id a1)
{
  return _objc_autoreleaseReturnValue(a1);
}


// ===== _objc_claimAutoreleasedReturnValue @ 0xE640 (size=12) =====
// attributes: thunk
__int64 __fastcall objc_claimAutoreleasedReturnValue()
{
  return _objc_claimAutoreleasedReturnValue();
}


// ===== _objc_copyWeak @ 0xE64C (size=12) =====
// attributes: thunk
void __cdecl objc_copyWeak(id *to, id *from)
{
  _objc_copyWeak(to, from);
}


// ===== _objc_destroyWeak @ 0xE658 (size=12) =====
// attributes: thunk
void __cdecl objc_destroyWeak(id *location)
{
  _objc_destroyWeak(location);
}


// ===== _objc_enumerationMutation @ 0xE664 (size=12) =====
// attributes: thunk
void __cdecl objc_enumerationMutation(id obj)
{
  _objc_enumerationMutation(obj);
}


// ===== _objc_initWeak @ 0xE670 (size=12) =====
// attributes: thunk
id __cdecl objc_initWeak(id *location, id val)
{
  return _objc_initWeak(location, val);
}


// ===== _objc_loadWeakRetained @ 0xE67C (size=12) =====
// attributes: thunk
id __cdecl objc_loadWeakRetained(id *location)
{
  return _objc_loadWeakRetained(location);
}


// ===== _objc_lookUpClass @ 0xE688 (size=12) =====
// attributes: thunk
Class __cdecl objc_lookUpClass(const char *name)
{
  return _objc_lookUpClass(name);
}


// ===== _objc_msgSendSuper2 @ 0xE694 (size=12) =====
// attributes: thunk
id objc_msgSendSuper2(objc_super *a1, SEL a2, ...)
{
  return _objc_msgSendSuper2(a1, a2);
}


// ===== _objc_opt_class @ 0xE6A0 (size=12) =====
// attributes: thunk
__int64 __fastcall objc_opt_class()
{
  return _objc_opt_class();
}


// ===== _objc_opt_isKindOfClass @ 0xE6AC (size=12) =====
// attributes: thunk
__int64 __fastcall objc_opt_isKindOfClass()
{
  return _objc_opt_isKindOfClass();
}


// ===== _objc_opt_respondsToSelector @ 0xE6B8 (size=12) =====
// attributes: thunk
__int64 __fastcall objc_opt_respondsToSelector()
{
  return _objc_opt_respondsToSelector();
}


// ===== _objc_release @ 0xE6C4 (size=12) =====
// attributes: thunk
void __cdecl objc_release(id a1)
{
  _objc_release(a1);
}


// ===== _objc_release_x1 @ 0xE6D0 (size=12) =====
// attributes: thunk
__int64 objc_release_x1()
{
  return _objc_release_x1();
}


// ===== _objc_release_x19 @ 0xE6DC (size=12) =====
// attributes: thunk
__int64 objc_release_x19()
{
  return _objc_release_x19();
}


// ===== _objc_release_x20 @ 0xE6E8 (size=12) =====
// attributes: thunk
__int64 objc_release_x20()
{
  return _objc_release_x20();
}


// ===== _objc_release_x21 @ 0xE6F4 (size=12) =====
// attributes: thunk
__int64 objc_release_x21()
{
  return _objc_release_x21();
}


// ===== _objc_release_x22 @ 0xE700 (size=12) =====
// attributes: thunk
__int64 objc_release_x22()
{
  return _objc_release_x22();
}


// ===== _objc_release_x23 @ 0xE70C (size=12) =====
// attributes: thunk
__int64 objc_release_x23()
{
  return _objc_release_x23();
}


// ===== _objc_release_x24 @ 0xE718 (size=12) =====
// attributes: thunk
__int64 objc_release_x24()
{
  return _objc_release_x24();
}


// ===== _objc_release_x25 @ 0xE724 (size=12) =====
// attributes: thunk
__int64 objc_release_x25()
{
  return _objc_release_x25();
}


// ===== _objc_release_x26 @ 0xE730 (size=12) =====
// attributes: thunk
__int64 objc_release_x26()
{
  return _objc_release_x26();
}


// ===== _objc_release_x27 @ 0xE73C (size=12) =====
// attributes: thunk
__int64 objc_release_x27()
{
  return _objc_release_x27();
}


// ===== _objc_release_x28 @ 0xE748 (size=12) =====
// attributes: thunk
__int64 objc_release_x28()
{
  return _objc_release_x28();
}


// ===== _objc_release_x8 @ 0xE754 (size=12) =====
// attributes: thunk
__int64 objc_release_x8()
{
  return _objc_release_x8();
}


// ===== _objc_retain @ 0xE760 (size=12) =====
// attributes: thunk
id __cdecl objc_retain(id a1)
{
  return _objc_retain(a1);
}


// ===== _objc_retainAutorelease @ 0xE76C (size=12) =====
// attributes: thunk
id __cdecl objc_retainAutorelease(id a1)
{
  return _objc_retainAutorelease(a1);
}


// ===== _objc_retainAutoreleaseReturnValue @ 0xE778 (size=12) =====
// attributes: thunk
id __cdecl objc_retainAutoreleaseReturnValue(id a1)
{
  return _objc_retainAutoreleaseReturnValue(a1);
}


// ===== _objc_retainAutoreleasedReturnValue @ 0xE784 (size=12) =====
// attributes: thunk
id __cdecl objc_retainAutoreleasedReturnValue(id a1)
{
  return _objc_retainAutoreleasedReturnValue(a1);
}


// ===== _objc_retainBlock @ 0xE790 (size=12) =====
// attributes: thunk
id __cdecl objc_retainBlock(id a1)
{
  return _objc_retainBlock(a1);
}


// ===== _objc_retain_x1 @ 0xE79C (size=12) =====
// attributes: thunk
__int64 objc_retain_x1()
{
  return _objc_retain_x1();
}


// ===== _objc_retain_x19 @ 0xE7A8 (size=12) =====
// attributes: thunk
__int64 objc_retain_x19()
{
  return _objc_retain_x19();
}


// ===== _objc_retain_x2 @ 0xE7B4 (size=12) =====
// attributes: thunk
__int64 objc_retain_x2()
{
  return _objc_retain_x2();
}


// ===== _objc_retain_x20 @ 0xE7C0 (size=12) =====
// attributes: thunk
__int64 objc_retain_x20()
{
  return _objc_retain_x20();
}


// ===== _objc_retain_x21 @ 0xE7CC (size=12) =====
// attributes: thunk
__int64 objc_retain_x21()
{
  return _objc_retain_x21();
}


// ===== _objc_retain_x22 @ 0xE7D8 (size=12) =====
// attributes: thunk
__int64 objc_retain_x22()
{
  return _objc_retain_x22();
}


// ===== _objc_retain_x23 @ 0xE7E4 (size=12) =====
// attributes: thunk
__int64 objc_retain_x23()
{
  return _objc_retain_x23();
}


// ===== _objc_retain_x24 @ 0xE7F0 (size=12) =====
// attributes: thunk
__int64 objc_retain_x24()
{
  return _objc_retain_x24();
}


// ===== _objc_retain_x25 @ 0xE7FC (size=12) =====
// attributes: thunk
__int64 objc_retain_x25()
{
  return _objc_retain_x25();
}


// ===== _objc_retain_x27 @ 0xE808 (size=12) =====
// attributes: thunk
__int64 objc_retain_x27()
{
  return _objc_retain_x27();
}


// ===== _objc_retain_x28 @ 0xE814 (size=12) =====
// attributes: thunk
__int64 objc_retain_x28()
{
  return _objc_retain_x28();
}


// ===== _objc_retain_x3 @ 0xE820 (size=12) =====
// attributes: thunk
__int64 objc_retain_x3()
{
  return _objc_retain_x3();
}


// ===== _objc_retain_x8 @ 0xE82C (size=12) =====
// attributes: thunk
__int64 objc_retain_x8()
{
  return _objc_retain_x8();
}


// ===== _objc_setProperty_nonatomic_copy @ 0xE838 (size=12) =====
// attributes: thunk
void __cdecl objc_setProperty_nonatomic_copy(id self, SEL _cmd, id newValue, ptrdiff_t offset)
{
  _objc_setProperty_nonatomic_copy(self, _cmd, newValue, offset);
}


// ===== _objc_storeStrong @ 0xE844 (size=12) =====
// attributes: thunk
void __cdecl objc_storeStrong(id *location, id obj)
{
  _objc_storeStrong(location, obj);
}


// ===== _objc_storeWeak @ 0xE850 (size=12) =====
// attributes: thunk
id __cdecl objc_storeWeak(id *location, id obj)
{
  return _objc_storeWeak(location, obj);
}


// ===== _objc_unsafeClaimAutoreleasedReturnValue @ 0xE85C (size=12) =====
// attributes: thunk
id __cdecl objc_unsafeClaimAutoreleasedReturnValue(id a1)
{
  return _objc_unsafeClaimAutoreleasedReturnValue(a1);
}


// ===== _stat @ 0xE868 (size=12) =====
// attributes: thunk
int __cdecl stat(const char *a1, stat *a2)
{
  return _stat(a1, a2);
}


// ===== _objc_msgSend$CGColor @ 0xE880 (size=20) =====
id objc_msgSend_CGColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "CGColor");
}


// ===== _objc_msgSend$URLQueryAllowedCharacterSet @ 0xE8A0 (size=20) =====
id objc_msgSend_URLQueryAllowedCharacterSet(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "URLQueryAllowedCharacterSet");
}


// ===== _objc_msgSend$URLWithString: @ 0xE8C0 (size=20) =====
id objc_msgSend_URLWithString_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "URLWithString:");
}


// ===== _objc_msgSend$UUID @ 0xE8E0 (size=20) =====
id objc_msgSend_UUID(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "UUID");
}


// ===== _objc_msgSend$UUIDString @ 0xE900 (size=20) =====
id objc_msgSend_UUIDString(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "UUIDString");
}


// ===== _objc_msgSend$absoluteString @ 0xE920 (size=20) =====
id objc_msgSend_absoluteString(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "absoluteString");
}


// ===== _objc_msgSend$actionWithHandler: @ 0xE940 (size=20) =====
id objc_msgSend_actionWithHandler_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "actionWithHandler:");
}


// ===== _objc_msgSend$activateConstraints: @ 0xE960 (size=20) =====
id objc_msgSend_activateConstraints_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "activateConstraints:");
}


// ===== _objc_msgSend$activationState @ 0xE980 (size=20) =====
id objc_msgSend_activationState(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "activationState");
}


// ===== _objc_msgSend$addAction:forControlEvents: @ 0xE9A0 (size=20) =====
id objc_msgSend_addAction_forControlEvents_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addAction:forControlEvents:");
}


// ===== _objc_msgSend$addArrangedSubview: @ 0xE9C0 (size=20) =====
id objc_msgSend_addArrangedSubview_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addArrangedSubview:");
}


// ===== _objc_msgSend$addGestureRecognizer: @ 0xE9E0 (size=20) =====
id objc_msgSend_addGestureRecognizer_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addGestureRecognizer:");
}


// ===== _objc_msgSend$addObject: @ 0xEA00 (size=20) =====
id objc_msgSend_addObject_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addObject:");
}


// ===== _objc_msgSend$addObserverForName:object:queue:usingBlock: @ 0xEA20 (size=20) =====
id objc_msgSend_addObserverForName_object_queue_usingBlock_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addObserverForName:object:queue:usingBlock:");
}


// ===== _objc_msgSend$addSubview: @ 0xEA40 (size=20) =====
id objc_msgSend_addSubview_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addSubview:");
}


// ===== _objc_msgSend$addTarget:action:forControlEvents: @ 0xEA60 (size=20) =====
id objc_msgSend_addTarget_action_forControlEvents_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "addTarget:action:forControlEvents:");
}


// ===== _objc_msgSend$alpha @ 0xEA80 (size=20) =====
id objc_msgSend_alpha(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "alpha");
}


// ===== _objc_msgSend$animateAlongsideTransition:completion: @ 0xEAA0 (size=20) =====
id objc_msgSend_animateAlongsideTransition_completion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "animateAlongsideTransition:completion:");
}


// ===== _objc_msgSend$animateWithDuration:animations: @ 0xEAC0 (size=20) =====
id objc_msgSend_animateWithDuration_animations_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "animateWithDuration:animations:");
}


// ===== _objc_msgSend$animateWithDuration:delay:options:animations:completion: @ 0xEAE0 (size=20) =====
id objc_msgSend_animateWithDuration_delay_options_animations_completion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "animateWithDuration:delay:options:animations:completion:");
}


// ===== _objc_msgSend$animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion: @ 0xEB00 (size=20) =====
id objc_msgSend_animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_(
        void *a1,
        const char *a2,
        ...)
{
  return objc_msgSend(
           a1,
           "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:");
}


// ===== _objc_msgSend$arrangedSubviews @ 0xEB20 (size=20) =====
id objc_msgSend_arrangedSubviews(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "arrangedSubviews");
}


// ===== _objc_msgSend$array @ 0xEB40 (size=20) =====
id objc_msgSend_array(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "array");
}


// ===== _objc_msgSend$arrayWithArray: @ 0xEB60 (size=20) =====
id objc_msgSend_arrayWithArray_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "arrayWithArray:");
}


// ===== _objc_msgSend$arrayWithObjects:count: @ 0xEB80 (size=20) =====
id objc_msgSend_arrayWithObjects_count_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "arrayWithObjects:count:");
}


// ===== _objc_msgSend$beadView @ 0xEBA0 (size=20) =====
id objc_msgSend_beadView(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "beadView");
}


// ===== _objc_msgSend$blackColor @ 0xEBC0 (size=20) =====
id objc_msgSend_blackColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "blackColor");
}


// ===== _objc_msgSend$boolForKey: @ 0xEBE0 (size=20) =====
id objc_msgSend_boolForKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "boolForKey:");
}


// ===== _objc_msgSend$boolValue @ 0xEC00 (size=20) =====
id objc_msgSend_boolValue(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "boolValue");
}


// ===== _objc_msgSend$bottomAnchor @ 0xEC20 (size=20) =====
id objc_msgSend_bottomAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "bottomAnchor");
}


// ===== _objc_msgSend$bounds @ 0xEC40 (size=20) =====
id objc_msgSend_bounds(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "bounds");
}


// ===== _objc_msgSend$bundleIdentifier @ 0xEC60 (size=20) =====
id objc_msgSend_bundleIdentifier(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "bundleIdentifier");
}


// ===== _objc_msgSend$bundlePath @ 0xEC80 (size=20) =====
id objc_msgSend_bundlePath(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "bundlePath");
}


// ===== _objc_msgSend$buttonWithType: @ 0xECA0 (size=20) =====
id objc_msgSend_buttonWithType_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "buttonWithType:");
}


// ===== _objc_msgSend$center @ 0xECC0 (size=20) =====
id objc_msgSend_center(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "center");
}


// ===== _objc_msgSend$centerXAnchor @ 0xECE0 (size=20) =====
id objc_msgSend_centerXAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "centerXAnchor");
}


// ===== _objc_msgSend$centerYAnchor @ 0xED00 (size=20) =====
id objc_msgSend_centerYAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "centerYAnchor");
}


// ===== _objc_msgSend$clearColor @ 0xED20 (size=20) =====
id objc_msgSend_clearColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "clearColor");
}


// ===== _objc_msgSend$clearLaunchSelectionFromHost @ 0xED40 (size=20) =====
id objc_msgSend_clearLaunchSelectionFromHost(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "clearLaunchSelectionFromHost");
}


// ===== _objc_msgSend$colorWithAlphaComponent: @ 0xED60 (size=20) =====
id objc_msgSend_colorWithAlphaComponent_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "colorWithAlphaComponent:");
}


// ===== _objc_msgSend$colorWithWhite:alpha: @ 0xED80 (size=20) =====
id objc_msgSend_colorWithWhite_alpha_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "colorWithWhite:alpha:");
}


// ===== _objc_msgSend$configurationWithPointSize:weight: @ 0xEDA0 (size=20) =====
id objc_msgSend_configurationWithPointSize_weight_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "configurationWithPointSize:weight:");
}


// ===== _objc_msgSend$configureWithAppName:icon:status: @ 0xEDC0 (size=20) =====
id objc_msgSend_configureWithAppName_icon_status_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "configureWithAppName:icon:status:");
}


// ===== _objc_msgSend$connectedScenes @ 0xEDE0 (size=20) =====
id objc_msgSend_connectedScenes(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "connectedScenes");
}


// ===== _objc_msgSend$constraintEqualToAnchor: @ 0xEE00 (size=20) =====
id objc_msgSend_constraintEqualToAnchor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "constraintEqualToAnchor:");
}


// ===== _objc_msgSend$constraintEqualToAnchor:constant: @ 0xEE20 (size=20) =====
id objc_msgSend_constraintEqualToAnchor_constant_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "constraintEqualToAnchor:constant:");
}


// ===== _objc_msgSend$constraintEqualToConstant: @ 0xEE40 (size=20) =====
id objc_msgSend_constraintEqualToConstant_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "constraintEqualToConstant:");
}


// ===== _objc_msgSend$constraintGreaterThanOrEqualToConstant: @ 0xEE60 (size=20) =====
id objc_msgSend_constraintGreaterThanOrEqualToConstant_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "constraintGreaterThanOrEqualToConstant:");
}


// ===== _objc_msgSend$constraintLessThanOrEqualToAnchor:constant: @ 0xEE80 (size=20) =====
id objc_msgSend_constraintLessThanOrEqualToAnchor_constant_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "constraintLessThanOrEqualToAnchor:constant:");
}


// ===== _objc_msgSend$containsObject: @ 0xEEA0 (size=20) =====
id objc_msgSend_containsObject_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "containsObject:");
}


// ===== _objc_msgSend$contentView @ 0xEEC0 (size=20) =====
id objc_msgSend_contentView(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "contentView");
}


// ===== _objc_msgSend$contentsOfDirectoryAtPath:error: @ 0xEEE0 (size=20) =====
id objc_msgSend_contentsOfDirectoryAtPath_error_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "contentsOfDirectoryAtPath:error:");
}


// ===== _objc_msgSend$convertPoint:fromView: @ 0xEF00 (size=20) =====
id objc_msgSend_convertPoint_fromView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "convertPoint:fromView:");
}


// ===== _objc_msgSend$copy @ 0xEF20 (size=20) =====
id objc_msgSend_copy(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "copy");
}


// ===== _objc_msgSend$count @ 0xEF40 (size=20) =====
id objc_msgSend_count(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "count");
}


// ===== _objc_msgSend$countByEnumeratingWithState:objects:count: @ 0xEF60 (size=20) =====
id objc_msgSend_countByEnumeratingWithState_objects_count_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "countByEnumeratingWithState:objects:count:");
}


// ===== _objc_msgSend$createAppRowWithApp:isRunning: @ 0xEF80 (size=20) =====
id objc_msgSend_createAppRowWithApp_isRunning_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "createAppRowWithApp:isRunning:");
}


// ===== _objc_msgSend$createDirectoryAtPath:withIntermediateDirectories:attributes:error: @ 0xEFA0 (size=20) =====
id objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "createDirectoryAtPath:withIntermediateDirectories:attributes:error:");
}


// ===== _objc_msgSend$currentGuestFolderName @ 0xEFC0 (size=20) =====
id objc_msgSend_currentGuestFolderName(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "currentGuestFolderName");
}


// ===== _objc_msgSend$dataUUID @ 0xEFE0 (size=20) =====
id objc_msgSend_dataUUID(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dataUUID");
}


// ===== _objc_msgSend$date @ 0xF000 (size=20) =====
id objc_msgSend_date(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "date");
}


// ===== _objc_msgSend$defaultCenter @ 0xF020 (size=20) =====
id objc_msgSend_defaultCenter(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "defaultCenter");
}


// ===== _objc_msgSend$defaultManager @ 0xF040 (size=20) =====
id objc_msgSend_defaultManager(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "defaultManager");
}


// ===== _objc_msgSend$dictionary @ 0xF060 (size=20) =====
id objc_msgSend_dictionary(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dictionary");
}


// ===== _objc_msgSend$dictionaryWithContentsOfFile: @ 0xF080 (size=20) =====
id objc_msgSend_dictionaryWithContentsOfFile_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dictionaryWithContentsOfFile:");
}


// ===== _objc_msgSend$dictionaryWithObjects:forKeys:count: @ 0xF0A0 (size=20) =====
id objc_msgSend_dictionaryWithObjects_forKeys_count_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dictionaryWithObjects:forKeys:count:");
}


// ===== _objc_msgSend$dimmingMaskView @ 0xF0C0 (size=20) =====
id objc_msgSend_dimmingMaskView(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dimmingMaskView");
}


// ===== _objc_msgSend$dispatchReturnHome @ 0xF0E0 (size=20) =====
id objc_msgSend_dispatchReturnHome(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dispatchReturnHome");
}


// ===== _objc_msgSend$dispatchSwitchToApp:dataUUID: @ 0xF100 (size=20) =====
id objc_msgSend_dispatchSwitchToApp_dataUUID_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "dispatchSwitchToApp:dataUUID:");
}


// ===== _objc_msgSend$doubleForKey: @ 0xF120 (size=20) =====
id objc_msgSend_doubleForKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "doubleForKey:");
}


// ===== _objc_msgSend$drawerView @ 0xF140 (size=20) =====
id objc_msgSend_drawerView(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "drawerView");
}


// ===== _objc_msgSend$effectWithStyle: @ 0xF160 (size=20) =====
id objc_msgSend_effectWithStyle_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "effectWithStyle:");
}


// ===== _objc_msgSend$extractAppIconFromAppPath:plist: @ 0xF1A0 (size=20) =====
id objc_msgSend_extractAppIconFromAppPath_plist_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "extractAppIconFromAppPath:plist:");
}


// ===== _objc_msgSend$fallbackReturnHomeWithCompletion: @ 0xF1C0 (size=20) =====
id objc_msgSend_fallbackReturnHomeWithCompletion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "fallbackReturnHomeWithCompletion:");
}


// ===== _objc_msgSend$fallbackSwitchToFolder:dataUUID:isJIT:completion: @ 0xF1E0 (size=20) =====
id objc_msgSend_fallbackSwitchToFolder_dataUUID_isJIT_completion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "fallbackSwitchToFolder:dataUUID:isJIT:completion:");
}


// ===== _objc_msgSend$fileExistsAtPath: @ 0xF200 (size=20) =====
id objc_msgSend_fileExistsAtPath_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "fileExistsAtPath:");
}


// ===== _objc_msgSend$fileExistsAtPath:isDirectory: @ 0xF220 (size=20) =====
id objc_msgSend_fileExistsAtPath_isDirectory_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "fileExistsAtPath:isDirectory:");
}


// ===== _objc_msgSend$fileSystemRepresentation @ 0xF240 (size=20) =====
id objc_msgSend_fileSystemRepresentation(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "fileSystemRepresentation");
}


// ===== _objc_msgSend$firstObject @ 0xF260 (size=20) =====
id objc_msgSend_firstObject(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "firstObject");
}


// ===== _objc_msgSend$folderName @ 0xF280 (size=20) =====
id objc_msgSend_folderName(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "folderName");
}


// ===== _objc_msgSend$frame @ 0xF2A0 (size=20) =====
id objc_msgSend_frame(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "frame");
}


// ===== _objc_msgSend$guestAppInfo @ 0xF2C0 (size=20) =====
id objc_msgSend_guestAppInfo(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "guestAppInfo");
}


// ===== _objc_msgSend$handleAppSelected: @ 0xF2E0 (size=20) =====
id objc_msgSend_handleAppSelected_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "handleAppSelected:");
}


// ===== _objc_msgSend$handleBeadPanEnded: @ 0xF300 (size=20) =====
id objc_msgSend_handleBeadPanEnded_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "handleBeadPanEnded:");
}


// ===== _objc_msgSend$hasSuffix: @ 0xF320 (size=20) =====
id objc_msgSend_hasSuffix_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "hasSuffix:");
}


// ===== _objc_msgSend$heightAnchor @ 0xF340 (size=20) =====
id objc_msgSend_heightAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "heightAnchor");
}


// ===== _objc_msgSend$hitTest:withEvent: @ 0xF360 (size=20) =====
id objc_msgSend_hitTest_withEvent_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "hitTest:withEvent:");
}


// ===== _objc_msgSend$hostBundleIdentifier @ 0xF380 (size=20) =====
id objc_msgSend_hostBundleIdentifier(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "hostBundleIdentifier");
}


// ===== _objc_msgSend$icon @ 0xF3A0 (size=20) =====
id objc_msgSend_icon(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "icon");
}


// ===== _objc_msgSend$imageWithContentsOfFile: @ 0xF3C0 (size=20) =====
id objc_msgSend_imageWithContentsOfFile_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "imageWithContentsOfFile:");
}


// ===== _objc_msgSend$impactOccurred @ 0xF3E0 (size=20) =====
id objc_msgSend_impactOccurred(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "impactOccurred");
}


// ===== _objc_msgSend$initWithActivityIndicatorStyle: @ 0xF400 (size=20) =====
id objc_msgSend_initWithActivityIndicatorStyle_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithActivityIndicatorStyle:");
}


// ===== _objc_msgSend$initWithEffect: @ 0xF420 (size=20) =====
id objc_msgSend_initWithEffect_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithEffect:");
}


// ===== _objc_msgSend$initWithFrame: @ 0xF440 (size=20) =====
id objc_msgSend_initWithFrame_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithFrame:");
}


// ===== _objc_msgSend$initWithImage: @ 0xF460 (size=20) =====
id objc_msgSend_initWithImage_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithImage:");
}


// ===== _objc_msgSend$initWithName:folderName:bundleId:version:dataUUID:appPath:icon:isJITEnabled: @ 0xF480 (size=20) =====
id objc_msgSend_initWithName_folderName_bundleId_version_dataUUID_appPath_icon_isJITEnabled_(
        void *a1,
        const char *a2,
        ...)
{
  return objc_msgSend(a1, "initWithName:folderName:bundleId:version:dataUUID:appPath:icon:isJITEnabled:");
}


// ===== _objc_msgSend$initWithStyle: @ 0xF4A0 (size=20) =====
id objc_msgSend_initWithStyle_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithStyle:");
}


// ===== _objc_msgSend$initWithSuiteName: @ 0xF4C0 (size=20) =====
id objc_msgSend_initWithSuiteName_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithSuiteName:");
}


// ===== _objc_msgSend$initWithTarget:action: @ 0xF4E0 (size=20) =====
id objc_msgSend_initWithTarget_action_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithTarget:action:");
}


// ===== _objc_msgSend$initWithWindowScene: @ 0xF500 (size=20) =====
id objc_msgSend_initWithWindowScene_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "initWithWindowScene:");
}


// ===== _objc_msgSend$invalidate @ 0xF520 (size=20) =====
id objc_msgSend_invalidate(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "invalidate");
}


// ===== _objc_msgSend$isContainerGuestRunning @ 0xF540 (size=20) =====
id objc_msgSend_isContainerGuestRunning(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "isContainerGuestRunning");
}


// ===== _objc_msgSend$isDrawerOpen @ 0xF560 (size=20) =====
id objc_msgSend_isDrawerOpen(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "isDrawerOpen");
}


// ===== _objc_msgSend$isEqualToString: @ 0xF580 (size=20) =====
id objc_msgSend_isEqualToString_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "isEqualToString:");
}


// ===== _objc_msgSend$isJITEnabled @ 0xF5A0 (size=20) =====
id objc_msgSend_isJITEnabled(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "isJITEnabled");
}


// ===== _objc_msgSend$isSetup @ 0xF5C0 (size=20) =====
id objc_msgSend_isSetup(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "isSetup");
}


// ===== _objc_msgSend$lastObject @ 0xF5E0 (size=20) =====
id objc_msgSend_lastObject(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "lastObject");
}


// ===== _objc_msgSend$lastPathComponent @ 0xF600 (size=20) =====
id objc_msgSend_lastPathComponent(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "lastPathComponent");
}


// ===== _objc_msgSend$layer @ 0xF620 (size=20) =====
id objc_msgSend_layer(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "layer");
}


// ===== _objc_msgSend$lcMainBundle @ 0xF640 (size=20) =====
id objc_msgSend_lcMainBundle(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "lcMainBundle");
}


// ===== _objc_msgSend$leadingAnchor @ 0xF660 (size=20) =====
id objc_msgSend_leadingAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "leadingAnchor");
}


// ===== _objc_msgSend$length @ 0xF680 (size=20) =====
id objc_msgSend_length(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "length");
}


// ===== _objc_msgSend$loadSavedBeadPosition @ 0xF6A0 (size=20) =====
id objc_msgSend_loadSavedBeadPosition(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "loadSavedBeadPosition");
}


// ===== _objc_msgSend$localizedStandardCompare: @ 0xF6C0 (size=20) =====
id objc_msgSend_localizedStandardCompare_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "localizedStandardCompare:");
}


// ===== _objc_msgSend$mainBundle @ 0xF6E0 (size=20) =====
id objc_msgSend_mainBundle(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "mainBundle");
}


// ===== _objc_msgSend$mainQueue @ 0xF700 (size=20) =====
id objc_msgSend_mainQueue(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "mainQueue");
}


// ===== _objc_msgSend$mainScreen @ 0xF720 (size=20) =====
id objc_msgSend_mainScreen(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "mainScreen");
}


// ===== _objc_msgSend$methodForSelector: @ 0xF740 (size=20) =====
id objc_msgSend_methodForSelector_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "methodForSelector:");
}


// ===== _objc_msgSend$name @ 0xF760 (size=20) =====
id objc_msgSend_name(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "name");
}


// ===== _objc_msgSend$numberWithBool: @ 0xF780 (size=20) =====
id objc_msgSend_numberWithBool_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "numberWithBool:");
}


// ===== _objc_msgSend$numberWithDouble: @ 0xF7A0 (size=20) =====
id objc_msgSend_numberWithDouble_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "numberWithDouble:");
}


// ===== _objc_msgSend$numberWithInt: @ 0xF7C0 (size=20) =====
id objc_msgSend_numberWithInt_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "numberWithInt:");
}


// ===== _objc_msgSend$objectForKey: @ 0xF7E0 (size=20) =====
id objc_msgSend_objectForKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "objectForKey:");
}


// ===== _objc_msgSend$objectForKeyedSubscript: @ 0xF800 (size=20) =====
id objc_msgSend_objectForKeyedSubscript_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "objectForKeyedSubscript:");
}


// ===== _objc_msgSend$onClose @ 0xF820 (size=20) =====
id objc_msgSend_onClose(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onClose");
}


// ===== _objc_msgSend$onPanEnded @ 0xF840 (size=20) =====
id objc_msgSend_onPanEnded(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onPanEnded");
}


// ===== _objc_msgSend$onPanMoved @ 0xF860 (size=20) =====
id objc_msgSend_onPanMoved(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onPanMoved");
}


// ===== _objc_msgSend$onReturnHome @ 0xF880 (size=20) =====
id objc_msgSend_onReturnHome(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onReturnHome");
}


// ===== _objc_msgSend$onSelectApp @ 0xF8A0 (size=20) =====
id objc_msgSend_onSelectApp(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onSelectApp");
}


// ===== _objc_msgSend$onTap @ 0xF8C0 (size=20) =====
id objc_msgSend_onTap(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onTap");
}


// ===== _objc_msgSend$onUserInteraction @ 0xF8E0 (size=20) =====
id objc_msgSend_onUserInteraction(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "onUserInteraction");
}


// ===== _objc_msgSend$openURL:options:completionHandler: @ 0xF900 (size=20) =====
id objc_msgSend_openURL_options_completionHandler_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "openURL:options:completionHandler:");
}


// ===== _objc_msgSend$overlayController @ 0xF920 (size=20) =====
id objc_msgSend_overlayController(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "overlayController");
}


// ===== _objc_msgSend$overlayWindow @ 0xF940 (size=20) =====
id objc_msgSend_overlayWindow(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "overlayWindow");
}


// ===== _objc_msgSend$performSelector: @ 0xF960 (size=20) =====
id objc_msgSend_performSelector_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "performSelector:");
}


// ===== _objc_msgSend$performSelector:withObject: @ 0xF980 (size=20) =====
id objc_msgSend_performSelector_withObject_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "performSelector:withObject:");
}


// ===== _objc_msgSend$performSetup @ 0xF9A0 (size=20) =====
id objc_msgSend_performSetup(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "performSetup");
}


// ===== _objc_msgSend$presentTransitionAndSwitchToApp:completion: @ 0xF9E0 (size=20) =====
id objc_msgSend_presentTransitionAndSwitchToApp_completion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "presentTransitionAndSwitchToApp:completion:");
}


// ===== _objc_msgSend$rangeOfString: @ 0xFA00 (size=20) =====
id objc_msgSend_rangeOfString_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "rangeOfString:");
}


// ===== _objc_msgSend$realHostDocumentsDirectory @ 0xFA20 (size=20) =====
id objc_msgSend_realHostDocumentsDirectory(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "realHostDocumentsDirectory");
}


// ===== _objc_msgSend$refreshAppList @ 0xFA40 (size=20) =====
id objc_msgSend_refreshAppList(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "refreshAppList");
}


// ===== _objc_msgSend$reloadWithApps:runningFolder: @ 0xFA60 (size=20) =====
id objc_msgSend_reloadWithApps_runningFolder_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "reloadWithApps:runningFolder:");
}


// ===== _objc_msgSend$removeArrangedSubview: @ 0xFA80 (size=20) =====
id objc_msgSend_removeArrangedSubview_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "removeArrangedSubview:");
}


// ===== _objc_msgSend$removeFromSuperview @ 0xFAA0 (size=20) =====
id objc_msgSend_removeFromSuperview(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "removeFromSuperview");
}


// ===== _objc_msgSend$removeItemAtPath:error: @ 0xFAC0 (size=20) =====
id objc_msgSend_removeItemAtPath_error_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "removeItemAtPath:error:");
}


// ===== _objc_msgSend$removeObjectForKey: @ 0xFAE0 (size=20) =====
id objc_msgSend_removeObjectForKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "removeObjectForKey:");
}


// ===== _objc_msgSend$resetInactivityTimer @ 0xFB00 (size=20) =====
id objc_msgSend_resetInactivityTimer(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "resetInactivityTimer");
}


// ===== _objc_msgSend$resolveHitTestAtPoint:inWindow:withEvent: @ 0xFB20 (size=20) =====
id objc_msgSend_resolveHitTestAtPoint_inWindow_withEvent_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "resolveHitTestAtPoint:inWindow:withEvent:");
}


// ===== _objc_msgSend$safeAreaInsets @ 0xFB40 (size=20) =====
id objc_msgSend_safeAreaInsets(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "safeAreaInsets");
}


// ===== _objc_msgSend$safeAreaLayoutGuide @ 0xFB60 (size=20) =====
id objc_msgSend_safeAreaLayoutGuide(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "safeAreaLayoutGuide");
}


// ===== _objc_msgSend$saveBeadPosition @ 0xFB80 (size=20) =====
id objc_msgSend_saveBeadPosition(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "saveBeadPosition");
}


// ===== _objc_msgSend$scanInstalledApps @ 0xFBA0 (size=20) =====
id objc_msgSend_scanInstalledApps(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "scanInstalledApps");
}


// ===== _objc_msgSend$scheduledTimerWithTimeInterval:repeats:block: @ 0xFBC0 (size=20) =====
id objc_msgSend_scheduledTimerWithTimeInterval_repeats_block_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "scheduledTimerWithTimeInterval:repeats:block:");
}


// ===== _objc_msgSend$setAccessibilityIdentifier: @ 0xFBE0 (size=20) =====
id objc_msgSend_setAccessibilityIdentifier_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setAccessibilityIdentifier:");
}


// ===== _objc_msgSend$setAlignment: @ 0xFC00 (size=20) =====
id objc_msgSend_setAlignment_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setAlignment:");
}


// ===== _objc_msgSend$setAlpha: @ 0xFC20 (size=20) =====
id objc_msgSend_setAlpha_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setAlpha:");
}


// ===== _objc_msgSend$setAutoresizingMask: @ 0xFC40 (size=20) =====
id objc_msgSend_setAutoresizingMask_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setAutoresizingMask:");
}


// ===== _objc_msgSend$setAxis: @ 0xFC60 (size=20) =====
id objc_msgSend_setAxis_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setAxis:");
}


// ===== _objc_msgSend$setBackgroundColor: @ 0xFC80 (size=20) =====
id objc_msgSend_setBackgroundColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setBackgroundColor:");
}


// ===== _objc_msgSend$setBeadView: @ 0xFCA0 (size=20) =====
id objc_msgSend_setBeadView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setBeadView:");
}


// ===== _objc_msgSend$setBool:forKey: @ 0xFCC0 (size=20) =====
id objc_msgSend_setBool_forKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setBool:forKey:");
}


// ===== _objc_msgSend$setBorderColor: @ 0xFCE0 (size=20) =====
id objc_msgSend_setBorderColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setBorderColor:");
}


// ===== _objc_msgSend$setBorderWidth: @ 0xFD00 (size=20) =====
id objc_msgSend_setBorderWidth_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setBorderWidth:");
}


// ===== _objc_msgSend$setCenter: @ 0xFD20 (size=20) =====
id objc_msgSend_setCenter_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setCenter:");
}


// ===== _objc_msgSend$setClipsToBounds: @ 0xFD40 (size=20) =====
id objc_msgSend_setClipsToBounds_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setClipsToBounds:");
}


// ===== _objc_msgSend$setColor: @ 0xFD60 (size=20) =====
id objc_msgSend_setColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setColor:");
}


// ===== _objc_msgSend$setContentMode: @ 0xFD80 (size=20) =====
id objc_msgSend_setContentMode_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setContentMode:");
}


// ===== _objc_msgSend$setCornerCurve: @ 0xFDA0 (size=20) =====
id objc_msgSend_setCornerCurve_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setCornerCurve:");
}


// ===== _objc_msgSend$setCornerRadius: @ 0xFDC0 (size=20) =====
id objc_msgSend_setCornerRadius_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setCornerRadius:");
}


// ===== _objc_msgSend$setDimmingMaskView: @ 0xFDE0 (size=20) =====
id objc_msgSend_setDimmingMaskView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setDimmingMaskView:");
}


// ===== _objc_msgSend$setDistribution: @ 0xFE00 (size=20) =====
id objc_msgSend_setDistribution_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setDistribution:");
}


// ===== _objc_msgSend$setDouble:forKey: @ 0xFE20 (size=20) =====
id objc_msgSend_setDouble_forKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setDouble:forKey:");
}


// ===== _objc_msgSend$setDrawerOpen:animated: @ 0xFE40 (size=20) =====
id objc_msgSend_setDrawerOpen_animated_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setDrawerOpen:animated:");
}


// ===== _objc_msgSend$setDrawerView: @ 0xFE60 (size=20) =====
id objc_msgSend_setDrawerView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setDrawerView:");
}


// ===== _objc_msgSend$setFont: @ 0xFE80 (size=20) =====
id objc_msgSend_setFont_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setFont:");
}


// ===== _objc_msgSend$setFrame: @ 0xFEA0 (size=20) =====
id objc_msgSend_setFrame_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setFrame:");
}


// ===== _objc_msgSend$setHidden: @ 0xFEC0 (size=20) =====
id objc_msgSend_setHidden_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setHidden:");
}


// ===== _objc_msgSend$setHidesWhenStopped: @ 0xFEE0 (size=20) =====
id objc_msgSend_setHidesWhenStopped_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setHidesWhenStopped:");
}


// ===== _objc_msgSend$setImage: @ 0xFF00 (size=20) =====
id objc_msgSend_setImage_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setImage:");
}


// ===== _objc_msgSend$setImage:forState: @ 0xFF20 (size=20) =====
id objc_msgSend_setImage_forState_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setImage:forState:");
}


// ===== _objc_msgSend$setIsSetup: @ 0xFF40 (size=20) =====
id objc_msgSend_setIsSetup_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setIsSetup:");
}


// ===== _objc_msgSend$setNumberOfLines: @ 0xFF60 (size=20) =====
id objc_msgSend_setNumberOfLines_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setNumberOfLines:");
}


// ===== _objc_msgSend$setObject:forKey: @ 0xFF80 (size=20) =====
id objc_msgSend_setObject_forKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setObject:forKey:");
}


// ===== _objc_msgSend$setObject:forKeyedSubscript: @ 0xFFA0 (size=20) =====
id objc_msgSend_setObject_forKeyedSubscript_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setObject:forKeyedSubscript:");
}


// ===== _objc_msgSend$setOnClose: @ 0xFFC0 (size=20) =====
id objc_msgSend_setOnClose_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnClose:");
}


// ===== _objc_msgSend$setOnPanEnded: @ 0xFFE0 (size=20) =====
id objc_msgSend_setOnPanEnded_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnPanEnded:");
}


// ===== _objc_msgSend$setOnPanMoved: @ 0x10000 (size=20) =====
id objc_msgSend_setOnPanMoved_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnPanMoved:");
}


// ===== _objc_msgSend$setOnReturnHome: @ 0x10020 (size=20) =====
id objc_msgSend_setOnReturnHome_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnReturnHome:");
}


// ===== _objc_msgSend$setOnSelectApp: @ 0x10040 (size=20) =====
id objc_msgSend_setOnSelectApp_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnSelectApp:");
}


// ===== _objc_msgSend$setOnTap: @ 0x10060 (size=20) =====
id objc_msgSend_setOnTap_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnTap:");
}


// ===== _objc_msgSend$setOnUserInteraction: @ 0x10080 (size=20) =====
id objc_msgSend_setOnUserInteraction_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOnUserInteraction:");
}


// ===== _objc_msgSend$setOverlayController: @ 0x100A0 (size=20) =====
id objc_msgSend_setOverlayController_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOverlayController:");
}


// ===== _objc_msgSend$setOverlayWindow: @ 0x100C0 (size=20) =====
id objc_msgSend_setOverlayWindow_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setOverlayWindow:");
}


// ===== _objc_msgSend$setRootViewController: @ 0x100E0 (size=20) =====
id objc_msgSend_setRootViewController_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setRootViewController:");
}


// ===== _objc_msgSend$setShadowColor: @ 0x10100 (size=20) =====
id objc_msgSend_setShadowColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setShadowColor:");
}


// ===== _objc_msgSend$setShadowOffset: @ 0x10120 (size=20) =====
id objc_msgSend_setShadowOffset_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setShadowOffset:");
}


// ===== _objc_msgSend$setShadowOpacity: @ 0x10140 (size=20) =====
id objc_msgSend_setShadowOpacity_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setShadowOpacity:");
}


// ===== _objc_msgSend$setShadowRadius: @ 0x10160 (size=20) =====
id objc_msgSend_setShadowRadius_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setShadowRadius:");
}


// ===== _objc_msgSend$setShowsVerticalScrollIndicator: @ 0x10180 (size=20) =====
id objc_msgSend_setShowsVerticalScrollIndicator_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setShowsVerticalScrollIndicator:");
}


// ===== _objc_msgSend$setSpacing: @ 0x101A0 (size=20) =====
id objc_msgSend_setSpacing_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setSpacing:");
}


// ===== _objc_msgSend$setText: @ 0x101C0 (size=20) =====
id objc_msgSend_setText_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setText:");
}


// ===== _objc_msgSend$setTextAlignment: @ 0x101E0 (size=20) =====
id objc_msgSend_setTextAlignment_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTextAlignment:");
}


// ===== _objc_msgSend$setTextColor: @ 0x10200 (size=20) =====
id objc_msgSend_setTextColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTextColor:");
}


// ===== _objc_msgSend$setTintColor: @ 0x10220 (size=20) =====
id objc_msgSend_setTintColor_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTintColor:");
}


// ===== _objc_msgSend$setTransform: @ 0x10240 (size=20) =====
id objc_msgSend_setTransform_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTransform:");
}


// ===== _objc_msgSend$setTransitionOverlayView: @ 0x10260 (size=20) =====
id objc_msgSend_setTransitionOverlayView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTransitionOverlayView:");
}


// ===== _objc_msgSend$setTranslatesAutoresizingMaskIntoConstraints: @ 0x10280 (size=20) =====
id objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setTranslatesAutoresizingMaskIntoConstraints:");
}


// ===== _objc_msgSend$setUserInteractionEnabled: @ 0x102A0 (size=20) =====
id objc_msgSend_setUserInteractionEnabled_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setUserInteractionEnabled:");
}


// ===== _objc_msgSend$setWindowLevel: @ 0x102C0 (size=20) =====
id objc_msgSend_setWindowLevel_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setWindowLevel:");
}


// ===== _objc_msgSend$setWindowScene: @ 0x102E0 (size=20) =====
id objc_msgSend_setWindowScene_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setWindowScene:");
}


// ===== _objc_msgSend$setupComponents @ 0x10300 (size=20) =====
id objc_msgSend_setupComponents(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setupComponents");
}


// ===== _objc_msgSend$setupIfNeeded @ 0x10320 (size=20) =====
id objc_msgSend_setupIfNeeded(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setupIfNeeded");
}


// ===== _objc_msgSend$setupReturnHomeCard @ 0x10340 (size=20) =====
id objc_msgSend_setupReturnHomeCard(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setupReturnHomeCard");
}


// ===== _objc_msgSend$setupUI @ 0x10360 (size=20) =====
id objc_msgSend_setupUI(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "setupUI");
}


// ===== _objc_msgSend$sharedApplication @ 0x10380 (size=20) =====
id objc_msgSend_sharedApplication(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "sharedApplication");
}


// ===== _objc_msgSend$sharedManager @ 0x103A0 (size=20) =====
id objc_msgSend_sharedManager(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "sharedManager");
}


// ===== _objc_msgSend$showWithCompletion: @ 0x103C0 (size=20) =====
id objc_msgSend_showWithCompletion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "showWithCompletion:");
}


// ===== _objc_msgSend$sortUsingComparator: @ 0x103E0 (size=20) =====
id objc_msgSend_sortUsingComparator_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "sortUsingComparator:");
}


// ===== _objc_msgSend$standardUserDefaults @ 0x10400 (size=20) =====
id objc_msgSend_standardUserDefaults(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "standardUserDefaults");
}


// ===== _objc_msgSend$startAnimating @ 0x10420 (size=20) =====
id objc_msgSend_startAnimating(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "startAnimating");
}


// ===== _objc_msgSend$state @ 0x10440 (size=20) =====
id objc_msgSend_state(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "state");
}


// ===== _objc_msgSend$stringByAddingPercentEncodingWithAllowedCharacters: @ 0x10460 (size=20) =====
id objc_msgSend_stringByAddingPercentEncodingWithAllowedCharacters_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringByAddingPercentEncodingWithAllowedCharacters:");
}


// ===== _objc_msgSend$stringByAppendingPathComponent: @ 0x10480 (size=20) =====
id objc_msgSend_stringByAppendingPathComponent_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringByAppendingPathComponent:");
}


// ===== _objc_msgSend$stringByAppendingString: @ 0x104A0 (size=20) =====
id objc_msgSend_stringByAppendingString_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringByAppendingString:");
}


// ===== _objc_msgSend$stringByReplacingOccurrencesOfString:withString: @ 0x104C0 (size=20) =====
id objc_msgSend_stringByReplacingOccurrencesOfString_withString_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringByReplacingOccurrencesOfString:withString:");
}


// ===== _objc_msgSend$stringForKey: @ 0x104E0 (size=20) =====
id objc_msgSend_stringForKey_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringForKey:");
}


// ===== _objc_msgSend$stringWithFormat: @ 0x10500 (size=20) =====
id objc_msgSend_stringWithFormat_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringWithFormat:");
}


// ===== _objc_msgSend$stringWithUTF8String: @ 0x10520 (size=20) =====
id objc_msgSend_stringWithUTF8String_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "stringWithUTF8String:");
}


// ===== _objc_msgSend$substringToIndex: @ 0x10540 (size=20) =====
id objc_msgSend_substringToIndex_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "substringToIndex:");
}


// ===== _objc_msgSend$superview @ 0x10560 (size=20) =====
id objc_msgSend_superview(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "superview");
}


// ===== _objc_msgSend$syncLaunchSelectionToHost:dataUUID:requestID:isJIT: @ 0x10580 (size=20) =====
id objc_msgSend_syncLaunchSelectionToHost_dataUUID_requestID_isJIT_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "syncLaunchSelectionToHost:dataUUID:requestID:isJIT:");
}


// ===== _objc_msgSend$synchronize @ 0x105A0 (size=20) =====
id objc_msgSend_synchronize(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "synchronize");
}


// ===== _objc_msgSend$systemCyanColor @ 0x105C0 (size=20) =====
id objc_msgSend_systemCyanColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "systemCyanColor");
}


// ===== _objc_msgSend$systemFontOfSize:weight: @ 0x105E0 (size=20) =====
id objc_msgSend_systemFontOfSize_weight_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "systemFontOfSize:weight:");
}


// ===== _objc_msgSend$systemGreenColor @ 0x10600 (size=20) =====
id objc_msgSend_systemGreenColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "systemGreenColor");
}


// ===== _objc_msgSend$systemImageNamed: @ 0x10620 (size=20) =====
id objc_msgSend_systemImageNamed_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "systemImageNamed:");
}


// ===== _objc_msgSend$systemImageNamed:withConfiguration: @ 0x10640 (size=20) =====
id objc_msgSend_systemImageNamed_withConfiguration_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "systemImageNamed:withConfiguration:");
}


// ===== _objc_msgSend$timeIntervalSince1970 @ 0x10660 (size=20) =====
id objc_msgSend_timeIntervalSince1970(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "timeIntervalSince1970");
}


// ===== _objc_msgSend$topAnchor @ 0x10680 (size=20) =====
id objc_msgSend_topAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "topAnchor");
}


// ===== _objc_msgSend$trailingAnchor @ 0x106A0 (size=20) =====
id objc_msgSend_trailingAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "trailingAnchor");
}


// ===== _objc_msgSend$transitionOverlayView @ 0x106C0 (size=20) =====
id objc_msgSend_transitionOverlayView(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "transitionOverlayView");
}


// ===== _objc_msgSend$transitionWithView:duration:options:animations:completion: @ 0x106E0 (size=20) =====
id objc_msgSend_transitionWithView_duration_options_animations_completion_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "transitionWithView:duration:options:animations:completion:");
}


// ===== _objc_msgSend$translationInView: @ 0x10700 (size=20) =====
id objc_msgSend_translationInView_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "translationInView:");
}


// ===== _objc_msgSend$updateLayoutForCanvasSize: @ 0x10720 (size=20) =====
id objc_msgSend_updateLayoutForCanvasSize_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "updateLayoutForCanvasSize:");
}


// ===== _objc_msgSend$updateStatus: @ 0x10740 (size=20) =====
id objc_msgSend_updateStatus_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "updateStatus:");
}


// ===== _objc_msgSend$version @ 0x10760 (size=20) =====
id objc_msgSend_version(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "version");
}


// ===== _objc_msgSend$view @ 0x10780 (size=20) =====
id objc_msgSend_view(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "view");
}


// ===== _objc_msgSend$whiteColor @ 0x107A0 (size=20) =====
id objc_msgSend_whiteColor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "whiteColor");
}


// ===== _objc_msgSend$widthAnchor @ 0x107C0 (size=20) =====
id objc_msgSend_widthAnchor(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "widthAnchor");
}


// ===== _objc_msgSend$windowScene @ 0x107E0 (size=20) =====
id objc_msgSend_windowScene(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "windowScene");
}


// ===== _objc_msgSend$writeToFile:atomically: @ 0x10800 (size=20) =====
id objc_msgSend_writeToFile_atomically_(void *a1, const char *a2, ...)
{
  return objc_msgSend(a1, "writeToFile:atomically:");
}


