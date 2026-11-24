//
//  LCSingleTaskAppInfo.m
//  LCSingleTaskSwitcher — Hex-Rays 反编译伪代码（按方法组织）
//  App 信息模型：扫描到的每个客态 App 的元数据
//
#import "LCSingleTaskAppInfo.h"

/*
 * 注意：以下是 IDA Hex-Rays 输出的 C 伪代码，不是可直接编译的 Objective-C 源码。
 * 它精确反映 ARM64 机器码语义（objc_msgSend / retain-release / block 结构均被显式展开）。
 * 每个方法前标注原始虚拟地址，便于对照反汇编复核。
 */

// LCSingleTaskSwitcher - decompiled pseudo code
// class: LCSingleTaskAppInfo | functions: 18

// ===== -[LCSingleTaskAppInfo initWithName:folderName:bundleId:version:dataUUID:appPath:icon:isJITEnabled:] @ 0x4000 (size=452) =====
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


// ===== -[LCSingleTaskAppInfo name] @ 0x41C4 (size=8) =====
NSString *__cdecl -[LCSingleTaskAppInfo name](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_name;
}


// ===== -[LCSingleTaskAppInfo setName:] @ 0x41CC (size=8) =====
void __cdecl -[LCSingleTaskAppInfo setName:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 16);
}


// ===== -[LCSingleTaskAppInfo folderName] @ 0x41D4 (size=8) =====
NSString *__cdecl -[LCSingleTaskAppInfo folderName](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_folderName;
}


// ===== -[LCSingleTaskAppInfo setFolderName:] @ 0x41DC (size=8) =====
void __cdecl -[LCSingleTaskAppInfo setFolderName:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 24);
}


// ===== -[LCSingleTaskAppInfo bundleId] @ 0x41E4 (size=8) =====
NSString *__cdecl -[LCSingleTaskAppInfo bundleId](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_bundleId;
}


// ===== -[LCSingleTaskAppInfo setBundleId:] @ 0x41EC (size=8) =====
void __cdecl -[LCSingleTaskAppInfo setBundleId:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 32);
}


// ===== -[LCSingleTaskAppInfo version] @ 0x41F4 (size=8) =====
NSString *__cdecl -[LCSingleTaskAppInfo version](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_version;
}


// ===== -[LCSingleTaskAppInfo setVersion:] @ 0x41FC (size=8) =====
void __cdecl -[LCSingleTaskAppInfo setVersion:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 40);
}


// ===== -[LCSingleTaskAppInfo dataUUID] @ 0x4204 (size=8) =====
NSString *__cdecl -[LCSingleTaskAppInfo dataUUID](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_dataUUID;
}


// ===== -[LCSingleTaskAppInfo setDataUUID:] @ 0x420C (size=8) =====
void __cdecl -[LCSingleTaskAppInfo setDataUUID:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 48);
}


// ===== -[LCSingleTaskAppInfo appPath] @ 0x4214 (size=8) =====
NSString *__cdecl -[LCSingleTaskAppInfo appPath](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_appPath;
}


// ===== -[LCSingleTaskAppInfo setAppPath:] @ 0x421C (size=8) =====
void __cdecl -[LCSingleTaskAppInfo setAppPath:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_setProperty_nonatomic_copy(self, a2, a3, 56);
}


// ===== -[LCSingleTaskAppInfo icon] @ 0x4224 (size=8) =====
UIImage *__cdecl -[LCSingleTaskAppInfo icon](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_icon;
}


// ===== -[LCSingleTaskAppInfo setIcon:] @ 0x422C (size=12) =====
void __cdecl -[LCSingleTaskAppInfo setIcon:](LCSingleTaskAppInfo *self, SEL a2, id a3)
{
  objc_storeStrong((id *)&self->_icon, a3);
}


// ===== -[LCSingleTaskAppInfo isJITEnabled] @ 0x4238 (size=8) =====
bool __cdecl -[LCSingleTaskAppInfo isJITEnabled](LCSingleTaskAppInfo *self, SEL a2)
{
  return self->_isJITEnabled;
}


// ===== -[LCSingleTaskAppInfo setIsJITEnabled:] @ 0x4240 (size=8) =====
void __cdecl -[LCSingleTaskAppInfo setIsJITEnabled:](LCSingleTaskAppInfo *self, SEL a2, bool a3)
{
  self->_isJITEnabled = a3;
}


// ===== -[LCSingleTaskAppInfo .cxx_destruct] @ 0x4248 (size=108) =====
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



