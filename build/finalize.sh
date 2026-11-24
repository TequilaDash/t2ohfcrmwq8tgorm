#!/bin/bash
cd /opt/lcswitcher
SRC=.theos/obj/debug/arm64/LCSingleTaskSwitcher.dylib
OUT="/mnt/c/Users/xcrad/WorkBuddy AI/2026-11-24-23-10-49/reverse_work/output"
cp -f "$SRC" "$OUT/LCSingleTaskSwitcher.dylib"
echo "=== final dylib ==="
ls -la "$OUT/LCSingleTaskSwitcher.dylib"
echo "=== objc classes in rebuilt dylib ==="
strings "$OUT/LCSingleTaskSwitcher.dylib" | grep -E '^LCSingleTask' | sort -u
echo "=== objc methods (sample) ==="
strings "$OUT/LCSingleTaskSwitcher.dylib" | grep -E 'setupIfNeeded|dispatchSwitchToApp|realHostDocumentsDirectory|handlePan:|setupComponents' | sort -u
echo "=== compare class counts ==="
echo -n "original: "; strings "/mnt/c/Users/xcrad/WorkBuddy AI/2026-11-24-23-10-49/reverse_work/LCSingleTaskSwitcher/sample/LCSingleTaskSwitcher.dylib" | grep -c '^LCSingleTask'
echo -n "rebuilt:  "; strings "$OUT/LCSingleTaskSwitcher.dylib" | grep -c '^LCSingleTask'
echo "=== ldid sign ==="
/opt/theos/toolchain/linux/iphone/bin/ldid -S "$OUT/LCSingleTaskSwitcher.dylib" && echo "signed OK"
