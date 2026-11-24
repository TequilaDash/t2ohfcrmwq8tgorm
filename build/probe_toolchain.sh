#!/bin/bash
echo "=== WSL ==="
. /etc/os-release 2>/dev/null; echo "$PRETTY_NAME"
echo "=== /opt ==="
ls /opt 2>/dev/null
echo "=== theos ==="
if [ -d /opt/theos ]; then
  echo "theos EXISTS"
  ls /opt/theos | head -15
  echo "--- sdks ---"
  ls /opt/theos/sdks 2>/dev/null | head -20
else
  echo "theos MISSING"
fi
echo "=== clang ==="
which clang clang-14 clang-15 clang-16 2>/dev/null
clang --version 2>/dev/null | head -3
echo "=== cctools ==="
ls /opt/cctools/bin 2>/dev/null | head -15
echo "=== git proxy ==="
git config --global --get url.https://gh-proxy.com/https://github.com/.insteadOf 2>/dev/null
echo "=== lld ==="
which ld64.lld ld64.lld-14 lld 2>/dev/null
echo "=== existing reverse projects ==="
ls -d /root/*reverse* /root/*ios* /opt/*reverse* 2>/dev/null | head
