#!/bin/bash
# Configure this Pi as a USB RNDIS gadget, which is what PSDK needs for liveview.
#
# WHY THIS EXISTS
#
# Liveview's H.264 does not travel over the PSDK UART. It rides a high-speed USB channel,
# and on the Mavic 3E that channel is an RNDIS virtual network card (DJI's PSDK HAL doc,
# "USB Device" section: for M3E/M3T, "RNDIS virtual network card/USB to Ethernet card ->
# Push Liveview, Subscribe FPV/main camera stream").
#
# The same doc states the required USB roles: "M3E/M3T: SDK device side is USB Device, the
# drone side is USB Host". So the Pi has to present itself as a USB device (a gadget), and
# the aircraft is the host. That is the opposite of how this Pi is wired today - everything
# currently sits on the USB-A ports with the Pi as host (see the README note below).
#
# Without that channel, measured against the live aircraft on 14 Sep 2026:
#   - network_handler_enabled false -> DjiLiveview_Init returns 0xE0 (NONSUPPORT)
#   - network_handler_enabled true  -> DjiCore_Init returns 0xE1 (TIMEOUT), losing the
#     flight link entirely, because PSDK asks the aircraft to bring up a high-speed channel
#     to a payload USB network adapter that does not exist.
#
# Two hypotheses were tested and DISPROVED before concluding it is the wiring, so don't
# spend time on them again:
#   - the VID/PID reported by NetworkGetDeviceInfo (swept 2CA3:F003, 0955:7020, 0B95:1790
#     and 1D6B:0104 against the live aircraft - all identical 0xE1)
#   - handler registration order (reordered to match DJI's reference sample exactly,
#     UART -> Network -> Socket - no change)
#
# VID/PID BELOW
#
# DJI pins these for E-Port V2, and the Pi can only be one of the three at a time:
#   BULK  -> 2CA3:F001      VCOM -> 2CA3:F002      RNDIS -> 2CA3:F003
# We want RNDIS, hence F003.
#
# WHAT THIS SCRIPT DOES NOT DO
#
# It does not reboot, and it does not edit boot configuration unless you pass --fix-boot.
# It also cannot do anything about the cabling, which is a physical step - see --check.

set -u

GADGET_DIR=/sys/kernel/config/usb_gadget/agilica
VID=0x2ca3
PID=0xF003          # RNDIS. See the note above before changing.
SERIAL="agilica-psdk"
MANUF="Agilica"
PRODUCT="PSDK Payload"

CONFIG_TXT=/boot/firmware/config.txt
CMDLINE_TXT=/boot/firmware/cmdline.txt

usage() {
    cat <<USAGE
Usage: $0 [--check | --fix-boot | --up | --down]

  --check     Report whether this Pi can act as a USB gadget, and what is missing.
              Read-only; safe to run any time, including in flight.
  --fix-boot  Apply the boot-config changes needed for peripheral mode, then stop.
              REQUIRES A REBOOT afterwards, which this script will not do for you.
  --up        Create and bind the RNDIS gadget (needs peripheral mode already active).
  --down      Tear the gadget down.
USAGE
}

check() {
    local ok=0

    echo "== USB device controller =="
    if [[ -d /sys/class/udc ]] && [[ -n "$(ls -A /sys/class/udc 2>/dev/null)" ]]; then
        for u in /sys/class/udc/*; do
            echo "  found: $(basename "$u")  state: $(cat "$u/state" 2>/dev/null)"
        done
    else
        echo "  MISSING - no UDC. dwc2 is not in peripheral/OTG mode."
        ok=1
    fi

    echo "== boot configuration =="
    if grep -qE '^\s*dtoverlay=dwc2,dr_mode=host' "$CONFIG_TXT" 2>/dev/null; then
        echo "  PROBLEM: $CONFIG_TXT forces host mode (dtoverlay=dwc2,dr_mode=host)."
        echo "           Peripheral mode needs dr_mode=otg or dr_mode=peripheral."
        ok=1
    else
        echo "  OK: no dr_mode=host override in $CONFIG_TXT"
    fi
    if grep -q 'modules-load=dwc2' "$CMDLINE_TXT" 2>/dev/null; then
        echo "  OK: modules-load=dwc2 present in $CMDLINE_TXT"
    else
        echo "  MISSING: modules-load=dwc2 in $CMDLINE_TXT"
        ok=1
    fi

    echo "== kernel modules =="
    if [[ -d /sys/kernel/config/usb_gadget ]]; then
        echo "  OK: libcomposite loaded (usb_gadget configfs present)"
    elif modinfo libcomposite &>/dev/null; then
        echo "  AVAILABLE but not loaded: run 'sudo modprobe libcomposite'"
    else
        echo "  MISSING: libcomposite not available in this kernel"
        ok=1
    fi

    echo "== cabling =="
    echo "  The aircraft must be connected to the Pi's USB-C port (the dwc2 bus), with"
    echo "  the Pi as the USB device. Current USB topology:"
    lsusb -t 2>/dev/null | sed 's/^/    /'
    if lsusb -t 2>/dev/null | grep -q 'dwc2'; then
        if lsusb -t 2>/dev/null | grep -A2 'dwc2' | grep -qE 'Dev [0-9]+, If'; then
            echo "  Something is enumerated on the dwc2 bus."
        else
            echo "  NOTE: nothing is enumerated on the dwc2 (USB-C) bus. If the aircraft's"
            echo "        E-Port USB is on a USB-A port instead, the Pi is acting as USB"
            echo "        HOST, which is the wrong role for M3E liveview."
        fi
    fi

    echo
    [[ $ok -eq 0 ]] && echo "RESULT: gadget mode looks reachable." \
                    || echo "RESULT: not ready - see the items marked MISSING/PROBLEM above."
    return $ok
}

fix_boot() {
    [[ $EUID -eq 0 ]] || { echo "--fix-boot needs root." >&2; exit 1; }

    # Keep a copy: a bad config.txt on a headless Pi means pulling the SD card.
    local stamp; stamp=$(date +%Y%m%d-%H%M%S)
    cp -a "$CONFIG_TXT" "${CONFIG_TXT}.bak-${stamp}"
    cp -a "$CMDLINE_TXT" "${CMDLINE_TXT}.bak-${stamp}"
    echo "Backed up config.txt and cmdline.txt with suffix .bak-${stamp}"

    # Comment out rather than delete, so it is obvious what changed and why.
    if grep -qE '^\s*dtoverlay=dwc2,dr_mode=host' "$CONFIG_TXT"; then
        sed -i 's|^\s*dtoverlay=dwc2,dr_mode=host|# disabled for PSDK liveview (needs peripheral mode): &|' "$CONFIG_TXT"
        echo "Commented out the dr_mode=host override."
    fi
    if ! grep -qE '^\s*dtoverlay=dwc2$' "$CONFIG_TXT"; then
        printf '\n# PSDK liveview: dwc2 in OTG mode so the Pi can be a USB device\ndtoverlay=dwc2\n' >> "$CONFIG_TXT"
        echo "Added dtoverlay=dwc2."
    fi
    if ! grep -q 'modules-load=dwc2' "$CMDLINE_TXT"; then
        # cmdline.txt must stay a single line.
        sed -i 's/rootwait/& modules-load=dwc2/' "$CMDLINE_TXT"
        echo "Added modules-load=dwc2 to cmdline.txt."
    fi
    grep -q '^libcomposite$' /etc/modules 2>/dev/null || echo libcomposite >> /etc/modules

    echo
    echo "Boot configuration updated. REBOOT REQUIRED. Not rebooting for you - this Pi"
    echo "may be flying. Reboot when safe, then re-run '$0 --check'."
}

up() {
    [[ $EUID -eq 0 ]] || { echo "--up needs root." >&2; exit 1; }
    modprobe libcomposite 2>/dev/null

    local udc; udc=$(ls /sys/class/udc 2>/dev/null | head -1)
    [[ -n "$udc" ]] || { echo "No UDC available - run '$0 --check' first." >&2; exit 1; }

    [[ -d "$GADGET_DIR" ]] && { echo "Gadget already exists; run --down first."; exit 0; }

    mkdir -p "$GADGET_DIR" && cd "$GADGET_DIR" || exit 1
    echo "$VID" > idVendor
    echo "$PID" > idProduct
    echo 0x0100 > bcdDevice
    echo 0x0200 > bcdUSB
    # Composite device class, as DJI's own gadget script sets.
    echo 0xEF > bDeviceClass
    echo 0x02 > bDeviceSubClass
    echo 0x01 > bDeviceProtocol

    mkdir -p strings/0x409
    echo "$SERIAL"  > strings/0x409/serialnumber
    echo "$MANUF"   > strings/0x409/manufacturer
    echo "$PRODUCT" > strings/0x409/product

    mkdir -p configs/c.1
    echo 0x80 > configs/c.1/bmAttributes
    echo 250  > configs/c.1/MaxPower

    mkdir -p functions/rndis.usb0
    ln -sf functions/rndis.usb0 configs/c.1/

    # Makes Windows bind its built-in RNDIS driver without an .inf. Harmless elsewhere,
    # and DJI's reference script sets it, so keep it for parity.
    echo 1       > os_desc/use
    echo 0xcd    > os_desc/b_vendor_code
    echo MSFT100 > os_desc/qw_sign
    echo RNDIS   > functions/rndis.usb0/os_desc/interface.rndis/compatible_id
    echo 5162001 > functions/rndis.usb0/os_desc/interface.rndis/sub_compatible_id
    ln -sf configs/c.1 os_desc

    echo "$udc" > UDC || { echo "Failed to bind UDC $udc" >&2; exit 1; }
    echo "Gadget bound to $udc as ${VID}:${PID} (RNDIS)."
    echo "PSDK brings the resulting interface up itself via HalNetwork_Init - do not"
    echo "assign it an address by hand."
}

down() {
    [[ $EUID -eq 0 ]] || { echo "--down needs root." >&2; exit 1; }
    [[ -d "$GADGET_DIR" ]] || { echo "No gadget to remove."; exit 0; }
    echo "" > "$GADGET_DIR/UDC" 2>/dev/null
    rm -f "$GADGET_DIR/configs/c.1/rndis.usb0" "$GADGET_DIR/os_desc/c.1"
    rmdir "$GADGET_DIR/configs/c.1/strings/0x409" 2>/dev/null
    rmdir "$GADGET_DIR/configs/c.1" 2>/dev/null
    rmdir "$GADGET_DIR/functions/rndis.usb0" 2>/dev/null
    rmdir "$GADGET_DIR/strings/0x409" 2>/dev/null
    rmdir "$GADGET_DIR" 2>/dev/null
    echo "Gadget removed."
}

case "${1:---check}" in
    --check)    check ;;
    --fix-boot) fix_boot ;;
    --up)       up ;;
    --down)     down ;;
    *)          usage; exit 1 ;;
esac
