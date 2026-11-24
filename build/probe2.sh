#!/bin/bash
echo "=== clang ==="; which clang clang-14 clang-15 2>/dev/null; clang --version 2>/dev/null | head -2
echo "=== theos toolchain ==="; ls /opt/theos/toolchain 2>/dev/null
echo "=== theos bin ==="; ls /opt/theos/bin | head -20
echo "=== cctools/ld ==="; find /opt -maxdepth 3 -name 'ld64.lld*' -o -name 'cctools*' 2>/dev/null | head -20
echo "=== existing tweak makefiles ==="; find /root /opt -maxdepth 4 -name Makefile -path '*tweak*' 2>/dev/null | head -10
echo "=== apptest dirs ==="; for d in /opt/apptest /opt/ldidtest; do echo "-- $d"; ls "$d" 2>/dev/null | head; done
echo "=== SDK root ==="; ls /opt/theos/sdks/iPhoneOS16.5.sdk | head
echo "=== ld64.lld in toolchain ==="; find /opt/theos/toolchain -iname '*ld*' 2>/dev/null | head -20
