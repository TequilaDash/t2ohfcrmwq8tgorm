#!/bin/bash
set -e
PROJ=/opt/lcswitcher
rm -rf "$PROJ"
mkdir -p "$PROJ"
cp -r "/mnt/c/Users/xcrad/WorkBuddy AI/2026-11-24-23-10-49/reverse_work/upload_stage/." "$PROJ/"
echo "project staged at $PROJ"
ls "$PROJ"
