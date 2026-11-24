# -*- coding: utf-8 -*-
"""从 IDA 导出的伪代码生成按 ObjC 类组织的 .h/.m 可读源码骨架。"""
import os, re, json

ROOT = r"C:/Users/xcrad/WorkBuddy AI/2026-11-24-23-10-49/reverse_work/LCSingleTaskSwitcher"
SRC = os.path.join(ROOT, "src")
OUT = os.path.join(ROOT, "src", "objc_recovered")
os.makedirs(OUT, exist_ok=True)
meta = json.load(open(os.path.join(SRC, "decompile_meta.json"), encoding="utf-8"))

CLASS_INFO = {
 "LCSingleTaskAppInfo": ("NSObject", "App 信息模型：扫描到的每个客态 App 的元数据", [
   ("NSString *", "name"), ("NSString *", "folderName"), ("NSString *", "bundleId"),
   ("NSString *", "version"), ("NSString *", "dataUUID"), ("NSString *", "appPath"),
   ("UIImage *", "icon"), ("BOOL", "isJITEnabled")]),
 "LCSingleTaskBeadView": ("UIView", "侧边悬浮球视图：点击展开抽屉、拖拽调整位置", [
   ("UIView *", "beadView"), ("UIImageView *", "iconImageView"),
   ("UIView *", "indicatorRingView"), ("CGPoint", "initialPanCenter"),
   ("void (^)(void)", "onTap"), ("void (^)(void)", "onPanMoved"),
   ("void (^)(CGPoint)", "onPanEnded"), ("void (^)(void)", "onUserInteraction")]),
 "LCSingleTaskHandoffView": ("UIView", "转场交接覆盖层：显示切入/退出 App 的过场动画与状态文字", [
   ("UIVisualEffectView *", "blurView"), ("UIView *", "cardView"),
   ("UIImageView *", "iconImageView"), ("UILabel *", "statusLabel"),
   ("UIActivityIndicatorView *", "indicatorView")]),
 "LCSingleTaskDrawerView": ("UIView", "抽屉面板：App 列表、运行中标记、返回宿主卡片", [
   ("UIScrollView *", "scrollView"), ("UIStackView *", "stackView"),
   ("UIView *", "headerView"), ("UIView *", "dimView"),
   ("NSArray<LCSingleTaskAppInfo *> *", "apps"),
   ("void (^)(LCSingleTaskAppInfo *)", "onSelectApp"),
   ("void (^)(void)", "onReturnHome"), ("void (^)(void)", "onClose"),
   ("void (^)(void)", "onUserInteraction")]),
 "LCSingleTaskOverlayWindow": ("UIWindow", "浮层窗口：StatusBar+90 层级，自定义 hitTest 让穿透生效", [
   ("LCSingleTaskOverlayController *", "overlayController")]),
 "LCSingleTaskOverlayController": ("UIViewController", "浮层控制器：组装微珠/抽屉/遮罩/转场，处理手势布局与自动收起", [
   ("LCSingleTaskBeadView *", "beadView"), ("LCSingleTaskDrawerView *", "drawerView"),
   ("UIView *", "dimmingMaskView"), ("LCSingleTaskHandoffView *", "transitionOverlayView"),
   ("BOOL", "drawerOpen"), ("BOOL", "beadPinnedRight"),
   ("CGFloat", "beadCenterYRatio"), ("NSTimer *", "inactivityTimer")]),
 "LCSingleTaskSwitcher": ("NSObject", "单例管理器：安装扫描、宿主通信、URL 调度、微珠挂载", [
   ("LCSingleTaskOverlayWindow *", "overlayWindow"),
   ("LCSingleTaskOverlayController *", "overlayController"), ("BOOL", "isSetup")]),
}

def sig_to_decl(sig):
    """把 '-[Class foo:bar]' 转成 '- (void)foo:(id)bar;' 形式（返回类型由伪代码推断）。"""
    m = re.match(r'^([+-])\[([^\s]+)\s(.+)\]$', sig)
    if not m: return None
    sign, cls, sel = m.groups()
    parts = sel.split(':')
    name = parts[0]
    args = parts[1:]
    if not args:
        return "%s (%s)%s;" % (sign, "void", name)
    params = []
    for i, a in enumerate(args):
        aname = a if a else ("arg%d" % (i+1))
        params.append("%s:(id)%s" % (aname, aname))
    return "%s (void)%s;" % (sign, " ".join(params))

for cls, (supercls, desc, ivars) in CLASS_INFO.items():
    cfile = os.path.join(SRC, "classes", cls + ".c")
    if not os.path.exists(cfile):
        continue
    text = open(cfile, encoding="utf-8").read()
    methods = re.findall(r'^// ===== ([+-]\[' + cls + r' [^\n]+?) @ 0x([0-9A-F]+)', text, re.M)
    # 头文件
    h = ["//", "//  %s.h" % cls, "//  LCSingleTaskSwitcher — 反编译恢复的接口" % (), "//  %s" % desc, "//  来源: IDA 9.3 Hex-Rays, ARM64 Mach-O, SHA256 47bbd44d...1508590d6d7", "//", "#import <UIKit/UIKit.h>", ""]
    h.append("@interface %s : %s" % (cls, supercls))
    h.append("{")
    for typ, nm in ivars:
        h.append("    %s _%s;" % (typ, nm))
    h.append("}")
    h.append("")
    for sig, ea in methods:
        if '.cxx_destruct' in sig: continue
        d = sig_to_decl(sig)
        if d: h.append("// 0x%s  %s" % (ea, d))
    h.append("")
    h.append("@end")
    open(os.path.join(OUT, cls + ".h"), "w", encoding="utf-8").write("\n".join(h) + "\n")
    # 实现文件：原样嵌入伪代码，每个方法加地址注释
    mlines = ["//", "//  %s.m" % cls, "//  LCSingleTaskSwitcher — Hex-Rays 反编译伪代码（按方法组织）", "//  %s" % desc, "//", "#import \"%s.h\"" % cls, ""]
    mlines.append("/*")
    mlines.append(" * 注意：以下是 IDA Hex-Rays 输出的 C 伪代码，不是可直接编译的 Objective-C 源码。")
    mlines.append(" * 它精确反映 ARM64 机器码语义（objc_msgSend / retain-release / block 结构均被显式展开）。")
    mlines.append(" * 每个方法前标注原始虚拟地址，便于对照反汇编复核。")
    mlines.append(" */")
    mlines.append("")
    mlines.append(text)
    open(os.path.join(OUT, cls + ".m"), "w", encoding="utf-8").write("\n".join(mlines) + "\n")

print("generated headers+impl for %d classes" % len(CLASS_INFO))
