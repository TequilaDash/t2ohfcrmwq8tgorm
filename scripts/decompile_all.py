# -*- coding: utf-8 -*-
"""全量反编译当前 IDA 数据库的所有函数，按 ObjC 类分组导出伪代码。"""
import os, re, json, time
import idautils, ida_funcs, ida_name, ida_hexrays

ROOT = r"C:/Users/xcrad/WorkBuddy AI/2026-11-24-23-10-49/reverse_work/LCSingleTaskSwitcher"
SRC = os.path.join(ROOT, "src")
CLS = os.path.join(SRC, "classes")
os.makedirs(CLS, exist_ok=True)

t0 = time.time()
results = []
fail = []

funcs = sorted(idautils.Functions())
for ea in funcs:
    name = ida_name.get_name(ea)
    try:
        cf = ida_hexrays.decompile(ea)
        if cf is None:
            fail.append((ea, name, "decompile returned None"))
            continue
        code = str(cf)
        size = ida_funcs.get_func(ea).size() if ida_funcs.get_func(ea) else 0
        results.append({"ea": ea, "name": name, "code": code, "size": size})
    except Exception as e:
        fail.append((ea, name, "%s: %s" % (type(e).__name__, e)))

# 分类：ObjC 方法按类名聚合，其余归 _global
groups = {}
for r in results:
    m = re.match(r'^[+-]\[([^\s]+)\s', r["name"])
    cls = m.group(1) if m else "_global_blocks_and_stubs"
    groups.setdefault(cls, []).append(r)

# 每个类一个 .c 伪代码文件
for cls, items in sorted(groups.items()):
    safe = re.sub(r'[^A-Za-z0-9_]', '_', cls)
    path = os.path.join(CLS, "%s.c" % safe)
    with open(path, "w", encoding="utf-8") as f:
        f.write("// LCSingleTaskSwitcher - decompiled pseudo code\n")
        f.write("// class: %s | functions: %d\n\n" % (cls, len(items)))
        for r in items:
            f.write("// ===== %s @ 0x%X (size=%d) =====\n" % (r["name"], r["ea"], r["size"]))
            f.write(r["code"])
            f.write("\n\n")

# 全量单文件（便于 grep）
with open(os.path.join(SRC, "all_pseudocode.c"), "w", encoding="utf-8") as f:
    for cls, items in sorted(groups.items()):
        f.write("\n\n/* ===== CLASS %s ===== */\n" % cls)
        for r in items:
            f.write("// %s @ 0x%X\n%s\n\n" % (r["name"], r["ea"], r["code"]))

# JSON 元数据（含地址映射，供后续交叉引用）
meta = {
    "total_funcs": len(funcs),
    "decompiled": len(results),
    "failed": len(fail),
    "elapsed_sec": round(time.time() - t0, 1),
    "classes": {k: len(v) for k, v in sorted(groups.items())},
    "functions": [{"ea": hex(r["ea"]), "name": r["name"], "size": r["size"]} for r in results],
    "failures": [{"ea": hex(a), "name": n, "reason": why} for a, n, why in fail],
}
with open(os.path.join(SRC, "decompile_meta.json"), "w", encoding="utf-8") as f:
    json.dump(meta, f, ensure_ascii=False, indent=2)

print("TOTAL:", len(funcs), "DECOMPILED:", len(results), "FAILED:", len(fail))
print("CLASSES:", json.dumps(meta["classes"], ensure_ascii=False))
print("ELAPSED:", meta["elapsed_sec"], "s")
for a, n, why in fail[:15]:
    print("FAIL %08X %s : %s" % (a, n, why))
