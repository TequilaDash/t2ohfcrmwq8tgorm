# -*- coding: utf-8 -*-
"""生成逆向成果可视化图片：模块架构图 + 产物分布图。"""
import os
from PIL import Image, ImageDraw, ImageFont

ROOT = r"C:/Users/xcrad/WorkBuddy AI/2026-11-24-23-10-49/reverse_work/LCSingleTaskSwitcher"
IMG = os.path.join(ROOT, "images")
os.makedirs(IMG, exist_ok=True)

FONT_REG = ["C:/Windows/Fonts/msyh.ttc", "C:/Windows/Fonts/simhei.ttf",
            "C:/Windows/Fonts/NotoSansSC-VF.ttf"]
FONT_BOLD = ["C:/Windows/Fonts/msyhbd.ttc", "C:/Windows/Fonts/simhei.ttf",
             "C:/Windows/Fonts/msyh.ttc"]
def font(size, bold=False):
    for p in (FONT_BOLD if bold else FONT_REG):
        if os.path.exists(p):
            try: return ImageFont.truetype(p, size)
            except Exception: pass
    return ImageFont.load_default()

INK   = "#1f2937"
SUB   = "#6b7280"
BLUE  = "#2563eb"
TEAL  = "#0d9488"
AMBER = "#d97706"
PURP  = "#7c3aed"
BG    = "#f8fafc"
CARD  = "#ffffff"
LINE  = "#cbd5e1"

def rrect(d, box, r=12, fill=CARD, outline=LINE, w=1):
    d.rounded_rectangle(box, radius=r, fill=fill, outline=outline, width=w)

def arrow(d, p1, p2, color=LINE, w=2):
    d.line([p1, p2], fill=color, width=w)
    import math
    a = math.atan2(p2[1]-p1[1], p2[0]-p1[0])
    for off in (2.6, -2.6):
        d.line([p2, (p2[0]-10*math.cos(a+off), p2[1]-10*math.sin(a+off))], fill=color, width=w)

# ============ 图1：模块架构与切换链路 ============
W, H = 1200, 860
im = Image.new("RGB", (W, H), BG)
d = ImageDraw.Draw(im)
d.text((40, 26), "LCSingleTaskSwitcher.dylib  |  反编译架构与切换链路", font=font(30, True), fill=INK)
d.text((42, 68), "ARM64 Mach-O  ·  125,152 bytes  ·  508 函数全部反编译  ·  IDA 9.3 + Hex-Rays", font=font(17), fill=SUB)

# 浮层窗口层
rrect(d, (40, 110, 1160, 300), 14, "#eff6ff", BLUE, 2)
d.text((60, 126), "浮层 UI 层  (UIWindowLevelStatusBar + 90)", font=font(20, True), fill=BLUE)
classes_ui = [
    ("LCSingleTaskOverlayWindow", "hitTest 委托 / 触摸穿透", "StatusBar+90 浮层", 60, 168, 310, 288, TEAL),
    ("LCSingleTaskOverlayController", "总控 · 31 方法", "手势/布局/自动收起", 330, 168, 580, 288, PURP),
    ("LCSingleTaskBeadView", "悬浮微珠 · 15 方法", "点击展开/拖拽吸附", 600, 168, 850, 288, AMBER),
    ("LCSingleTaskDrawerView", "App 抽屉 · 16 方法", "列表/运行标记/返回", 870, 168, 1120, 288, BLUE),
]
for name, desc, desc2, x1, y1, x2, y2, c in classes_ui:
    rrect(d, (x1, y1, x2, y2), 10, CARD, c, 2)
    d.text((x1+12, y1+16), name, font=font(13, True), fill=c)
    d.text((x1+12, y1+46), desc, font=font(13), fill=SUB)
    d.text((x1+12, y1+76), desc2, font=font(12), fill="#94a3b8")

# 管理层
rrect(d, (40, 330, 1160, 500), 14, "#f0fdfa", TEAL, 2)
d.text((60, 346), "核心管理层  LCSingleTaskSwitcher (单例 · 25 方法)", font=font(20, True), fill=TEAL)
steps = [
    ("1 扫描 App", "Applications/*.app\n读 Info.plist + LCAppInfo.plist", 60, 390),
    ("2 路径探测", "GNOIX_REAL_DOCUMENTS →\nLC_HOME_PATH → HOME → 系统API", 330, 390),
    ("3 写启动选择", "lastLaunchDataUUID +\nLaunchRequestID 多 Defaults 同步", 600, 390),
    ("4 调度切换", "LCSharedUtils / openURL /\nLSApplicationWorkspace 三级兜底", 870, 390),
]
for title, body, x, y in steps:
    rrect(d, (x, y, x+250, y+96), 10, CARD, "#99f6e4", 1)
    d.text((x+12, y+10), title, font=font(15, True), fill=TEAL)
    d.line([(x+12, y+34), (x+238, y+34)], fill="#ccfbf1", width=1)
    for i, ln in enumerate(body.split("\n")):
        d.text((x+12, y+42+i*22), ln, font=font(12), fill=INK)

# 通信链路
rrect(d, (40, 530, 1160, 690), 14, "#fef3c7", AMBER, 2)
d.text((60, 546), "URL 调度链  (0xCD10 实读)", font=font(20, True), fill=AMBER)
urlbox = (70, 586, 1130, 636)
rrect(d, urlbox, 8, "#fffbeb", "#fcd34d", 1)
d.text((88, 600), "scheme://livecontainer-launch?bundle-name=<folder>&container-folder-name=<UUID>&folder-name=<folder>",
       font=font(14, True), fill="#92400e")
chain = [
    "LCSharedUtils.lcUrlSchemes 收集候选 scheme（保底 livecontainer / gnoix）",
    "优先 +launchToGuestAppWithURL: → 成功 0.15s 回调",
    "兜底 UIApplication openURL 逐 scheme + LSApplicationWorkspace(__URL__) 打开宿主",
    "最后 +launchToGuestAppWithClassicMode:NO → 0.35s 回调",
]
for i, s in enumerate(chain):
    d.ellipse((80, 650+i*13, 86, 656+i*13), fill=AMBER)
    d.text((98, 644+i*13), s, font=font(12), fill=INK)

# 底部数据
rrect(d, (40, 720, 1160, 830), 14, "#f5f3ff", PURP, 2)
d.text((60, 736), "数据模型与持久化", font=font(20, True), fill=PURP)
data = [
    "LCSingleTaskAppInfo：name / folderName / bundleId / version / dataUUID / appPath / icon / isJITEnabled",
    "默认宿主 Bundle ID：com.kdt.livecontainer   ·   开关键：GnoixContainer_SingleTaskQuickSwitcher",
    "微珠位置：LCSingleTask_BeadPinnedRight / LCSingleTask_BeadCenterYRatio",
]
for i, s in enumerate(data):
    d.text((64, 766+i*21), s, font=font(13), fill=INK)

im.save(os.path.join(IMG, "architecture_and_dispatch.png"))
print("saved architecture_and_dispatch.png")

# ============ 图2：代码产物分布 ============
W2, H2 = 1000, 620
im2 = Image.new("RGB", (W2, H2), BG)
d2 = ImageDraw.Draw(im2)
d2.text((40, 26), "反编译产物分布  |  508 函数 · 7 个业务类 · 392 个 block/stub", font=font(26, True), fill=INK)
d2.text((42, 66), "SHA256 47bbd44d…1308590d6d7  ·  0 反编译失败  ·  耗时 10.3s", font=font(16), fill=SUB)

bars = [
    ("_global blocks/stubs", 392, "#94a3b8"),
    ("LCSingleTaskOverlayController", 31, PURP),
    ("LCSingleTaskSwitcher", 25, TEAL),
    ("LCSingleTaskAppInfo", 18, BLUE),
    ("LCSingleTaskDrawerView", 16, AMBER),
    ("LCSingleTaskBeadView", 15, "#db2777"),
    ("LCSingleTaskHandoffView", 6, "#059669"),
    ("LCSingleTaskOverlayWindow", 5, "#dc2626"),
]
x0, y0, maxw = 300, 130, 620
for i, (name, val, col) in enumerate(bars):
    y = y0 + i*52
    d2.text((44, y+6), name, font=font(15), fill=INK)
    bw = int(val/392*maxw)
    rrect(d2, (x0, y, x0+bw, y+30), 6, col, col, 0)
    d2.text((x0+bw+10, y+6), str(val), font=font(14, True), fill=col)

rrect(d2, (44, 560, 956, 600), 10, "#eff6ff", BLUE, 1)
d2.text((58, 570), "产物：all_pseudocode.c (9,549 行) · 8 个分组文件 · 7 组 .h/.m · 2 份可读重建源码", font=font(14), fill=BLUE)
im2.save(os.path.join(IMG, "code_artifacts_distribution.png"))
print("saved code_artifacts_distribution.png")
