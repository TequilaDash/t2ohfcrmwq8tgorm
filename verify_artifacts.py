#!/usr/bin/env python3
"""CI 构建校验：验证反编译产物完整性并生成构建报告。"""
import hashlib
import json
import os
import sys

ROOT = os.path.dirname(os.path.abspath(__file__))
EXPECTED_SHA256 = "47bbd44d2dfacb3be316a5dc5fa571034a134ea8987068968e6de1308590d6d7"
EXPECTED_FUNCS = 508
EXPECTED_CLASSES = [
    "LCSingleTaskAppInfo", "LCSingleTaskBeadView", "LCSingleTaskDrawerView",
    "LCSingleTaskHandoffView", "LCSingleTaskOverlayController",
    "LCSingleTaskOverlayWindow", "LCSingleTaskSwitcher",
]

errors = []
checks = []

def check(name, ok, detail=""):
    checks.append((name, bool(ok), detail))
    if not ok:
        errors.append("%s: %s" % (name, detail))

def path(*parts):
    return os.path.join(ROOT, *parts)

# 1. 样本哈希
sample = path("sample", "LCSingleTaskSwitcher.dylib")
if os.path.exists(sample):
    h = hashlib.sha256(open(sample, "rb").read()).hexdigest()
    check("sample SHA256", h == EXPECTED_SHA256, h)
else:
    check("sample exists", False, "missing")

# 2. 元数据
meta_path = path("src", "decompile_meta.json")
meta = {}
if os.path.exists(meta_path):
    meta = json.load(open(meta_path, encoding="utf-8"))
    check("decompiled count", meta.get("decompiled") == EXPECTED_FUNCS,
          "got %s" % meta.get("decompiled"))
    check("failed count", meta.get("failed") == 0, "got %s" % meta.get("failed"))
else:
    check("meta exists", False, "missing")

# 3. 每类伪代码文件
for cls in EXPECTED_CLASSES:
    p = path("src", "classes", cls + ".c")
    check("class " + cls, os.path.exists(p) and os.path.getsize(p) > 100,
          "%d bytes" % (os.path.getsize(p) if os.path.exists(p) else 0))

# 4. 全量伪代码行数
allc = path("src", "all_pseudocode.c")
if os.path.exists(allc):
    lines = sum(1 for _ in open(allc, encoding="utf-8"))
    check("all_pseudocode.c lines", lines >= 9000, "%d lines" % lines)
else:
    check("all_pseudocode.c", False, "missing")

# 5. 可读源码
for f in ["LCSingleTaskSwitcher_readable.m", "UIComponents_readable.m"]:
    p = path("src", "objc_recovered", f)
    check("readable " + f, os.path.exists(p) and os.path.getsize(p) > 1000)

# 6. 图片
for f in ["architecture_and_dispatch.png", "code_artifacts_distribution.png"]:
    p = path("images", f)
    ok = os.path.exists(p) and open(p, "rb").read(8) == b"\x89PNG\r\n\x1a\n"
    check("image " + f, ok)

# 7. 无 md 泄漏（脱敏规则）
md_files = []
for root, dirs, files in os.walk(ROOT):
    dirs[:] = [d for d in dirs if d != ".git"]
    md_files += [os.path.relpath(os.path.join(root, f), ROOT)
                 for f in files if f.lower().endswith(".md") and f != "build-report.md"]
check("no markdown in repo", len(md_files) == 0, ", ".join(md_files))


# 8. 可编译源码与产物
for f in ['LCSingleTaskSwitcher.h','LCSingleTaskSwitcher.m','LCSingleTaskAppInfo.m',
          'LCSingleTaskBeadView.m','LCSingleTaskDrawerView.m','LCSingleTaskHandoffView.m',
          'LCSingleTaskOverlayWindow.m','LCSingleTaskOverlayController.m','Makefile']:
    pp = path('rebuild', f)
    check('rebuild source ' + f, os.path.exists(pp) and os.path.getsize(pp) > 50)
built = path('rebuild', 'LCSingleTaskSwitcher.dylib')
if os.path.exists(built):
    magic = open(built, 'rb').read(4)
    check('built dylib Mach-O ARM64', magic == bytes.fromhex('cffaedfe'), magic.hex())
    check('built dylib size', os.path.getsize(built) > 100000, '%d bytes' % os.path.getsize(built))
else:
    check('built dylib', False, 'missing')

# 输出报告
report = ["# Build Verification Report", "",
          "Status: %s" % ("PASS" if not errors else "FAIL"),
          "Checks: %d passed / %d total" % (len(checks) - len(errors), len(checks)), ""]
report.append("| Check | Result | Detail |")
report.append("|---|---|---|")
for name, ok, detail in checks:
    report.append("| %s | %s | %s |" % (name, "PASS" if ok else "FAIL", detail.replace("|", "/")))

out = path("build-report.md")
with open(out, "w", encoding="utf-8") as f:
    f.write("\n".join(report) + "\n")

for name, ok, detail in checks:
    print("%-42s %s  %s" % (name, "OK" if ok else "FAIL", detail))

print("\n%d/%d checks passed" % (len(checks) - len(errors), len(checks)))
sys.exit(1 if errors else 0)
