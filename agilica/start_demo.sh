#!/bin/bash
# Thin wrapper. The real script lives in scripts/ next to detect_serial.sh.
#
# These two files used to be near-duplicates differing only in the use_psdk_msdk default -
# and this copy defaulted to 1 (MSDK), which cannot run on the Pi at all: vitro_interface is
# native x86_64 with no source. Drone.desktop points here, so the desktop launcher was the
# one path that started the unusable stack.
exec "$(dirname "$(readlink -f "$0")")/scripts/start_demo.sh" "$@"
