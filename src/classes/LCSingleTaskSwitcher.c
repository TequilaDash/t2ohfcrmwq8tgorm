// LCSingleTaskSwitcher - decompiled pseudo code
// class: LCSingleTaskSwitcher | functions: 25

// ===== +[LCSingleTaskSwitcher sharedManager] @ 0xA5BC (size=56) =====
id __cdecl +[LCSingleTaskSwitcher sharedManager](id a1, SEL a2)
{
  if ( qword_199D0 != -1 )
    sub_E518(a1, a2);
  return objc_retainAutoreleaseReturnValue((id)qword_199C8);
}


// ===== +[LCSingleTaskSwitcher setupIfNeeded] @ 0xA61C (size=256) =====
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


// ===== -[LCSingleTaskSwitcher performSetup] @ 0xA74C (size=776) =====
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


// ===== -[LCSingleTaskSwitcher ensureWindowAttached] @ 0xAA80 (size=436) =====
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


// ===== +[LCSingleTaskSwitcher scanInstalledApps] @ 0xAC34 (size=1240) =====
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


// ===== +[LCSingleTaskSwitcher extractAppIconFromAppPath:plist:] @ 0xB178 (size=976) =====
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


// ===== +[LCSingleTaskSwitcher presentTransitionAndSwitchToApp:completion:] @ 0xB548 (size=436) =====
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


// ===== +[LCSingleTaskSwitcher presentTransitionAndReturnHomeWithCompletion:] @ 0xBEA8 (size=336) =====
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


// ===== +[LCSingleTaskSwitcher syncLaunchSelectionToHost:dataUUID:requestID:isJIT:] @ 0xC208 (size=1704) =====
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


// ===== +[LCSingleTaskSwitcher clearLaunchSelectionFromHost] @ 0xC8B0 (size=1120) =====
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


// ===== +[LCSingleTaskSwitcher dispatchSwitchToApp:dataUUID:] @ 0xCD10 (size=2044) =====
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


// ===== +[LCSingleTaskSwitcher dispatchReturnHome] @ 0xD6C8 (size=740) =====
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


// ===== +[LCSingleTaskSwitcher fallbackSwitchToFolder:dataUUID:isJIT:completion:] @ 0xDAD0 (size=200) =====
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


// ===== +[LCSingleTaskSwitcher fallbackReturnHomeWithCompletion:] @ 0xDB98 (size=88) =====
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


// ===== +[LCSingleTaskSwitcher realHostDocumentsDirectory] @ 0xDBF0 (size=640) =====
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


// ===== +[LCSingleTaskSwitcher currentGuestFolderName] @ 0xDE70 (size=564) =====
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


// ===== +[LCSingleTaskSwitcher hostBundleIdentifier] @ 0xE0A4 (size=296) =====
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


// ===== +[LCSingleTaskSwitcher isContainerGuestRunning] @ 0xE1CC (size=420) =====
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


// ===== -[LCSingleTaskSwitcher overlayWindow] @ 0xE370 (size=8) =====
LCSingleTaskOverlayWindow *__cdecl -[LCSingleTaskSwitcher overlayWindow](LCSingleTaskSwitcher *self, SEL a2)
{
  return self->_overlayWindow;
}


// ===== -[LCSingleTaskSwitcher setOverlayWindow:] @ 0xE378 (size=12) =====
void __cdecl -[LCSingleTaskSwitcher setOverlayWindow:](LCSingleTaskSwitcher *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_overlayWindow, a3);
}


// ===== -[LCSingleTaskSwitcher overlayController] @ 0xE384 (size=8) =====
LCSingleTaskOverlayController *__cdecl -[LCSingleTaskSwitcher overlayController](LCSingleTaskSwitcher *self, SEL a2)
{
  return self->_overlayController;
}


// ===== -[LCSingleTaskSwitcher setOverlayController:] @ 0xE38C (size=12) =====
void __cdecl -[LCSingleTaskSwitcher setOverlayController:](LCSingleTaskSwitcher *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_overlayController, a3);
}


// ===== -[LCSingleTaskSwitcher isSetup] @ 0xE398 (size=8) =====
bool __cdecl -[LCSingleTaskSwitcher isSetup](LCSingleTaskSwitcher *self, SEL a2)
{
  return self->_isSetup;
}


// ===== -[LCSingleTaskSwitcher setIsSetup:] @ 0xE3A0 (size=8) =====
void __cdecl -[LCSingleTaskSwitcher setIsSetup:](LCSingleTaskSwitcher *self, SEL a2, bool a3)
{
  self->_isSetup = a3;
}


// ===== -[LCSingleTaskSwitcher .cxx_destruct] @ 0xE3A8 (size=48) =====
void __cdecl -[LCSingleTaskSwitcher .cxx_destruct](LCSingleTaskSwitcher *self, SEL a2)
{
  objc_storeStrong((id *)&self->_overlayController, 0);
  objc_storeStrong((id *)&self->_overlayWindow, 0);
}


