#!/bin/bash
cd /opt/lcswitcher
echo "=== dylib files ==="
find . -name '*.dylib' -not -path './sample/*' -not -path './ida/*' -exec ls -la {} \;
D=$(find .theos -name 'LCSingleTaskSwitcher.dylib' | head -1)
echo "BUILT=$D"
echo "=== file magic ==="
xxd -l 32 "$D"
echo "=== otool header (mach-o) ==="
/opt/theos/toolchain/linux/iphone/bin/arm64-apple-darwin14-otool -hv "$D" 2>/dev/null || true
echo "=== lipo arch ==="
/opt/theos/toolchain/linux/iphone/bin/lipo -info "$D" 2>/dev/null || true
echo "=== exports ==="
/opt/theos/toolchain/linux/iphone/bin/arm64-apple-darwin14-nm -g "$D" 2>/dev/null | grep -i 'LCSingleTask' | head -20 || true
echo "=== copy to windows share ==="
mkdir -p "/mnt/c/Users/xcrad/WorkBuddy AI/2026-11-24-23-10-49/reverse_work/output"
cp -f "$D" "/mnt/c/Users/xcrad/WorkBuddy AI/2026-11-24-23-10-49/reverse_work/output/LCSingleTaskSwitcher.dylib"
sha256sum "/mnt/c/Users/xcrad/WorkBuddy AI/2026-11-24-23-10-49/reverse_work/output/LCSingleTaskSwitcher.dylib"
