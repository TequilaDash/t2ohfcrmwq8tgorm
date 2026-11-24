#!/bin/bash
set -o pipefail
SRC="/mnt/c/Users/xcrad/WorkBuddy AI/2026-11-24-23-10-49/reverse_work/rebuild"
PROJ=/opt/lcswitcher
for f in "$SRC"/*.m "$SRC"/*.h "$SRC"/Makefile; do
  cp -f "$f" "$PROJ/" 2>/dev/null
done
cd "$PROJ" || exit 1
export THEOS=/opt/theos
echo "=== files ==="; ls *.m *.h Makefile
echo "=== BUILD ==="
make 2>&1
echo "BUILD_EXIT=$?"
echo "=== OUTPUT ==="
find . -maxdepth 3 -name '*.dylib' -o -name '*.deb' 2>/dev/null
