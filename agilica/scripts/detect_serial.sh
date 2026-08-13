#!/bin/bash
# Resolve USB-serial adapters by their stable /dev/serial/by-id names instead of
# ttyUSB* indices.
#
# Both adapters on this rig are FTDI, so the kernel hands out ttyUSB0/ttyUSB1 in
# plug order - whichever was connected first wins. Hardcoding the index means
# the UWB parser can end up talking to the aircraft's payload UART (or the PSDK
# bridge to the UWB module) purely because someone rebooted with the cables in a
# different order.
#
# Matching is on the USB product string rather than the serial number, so
# swapping in an identical spare unit still works:
#
#   TTL232R-3V3  -> FTDI cable on the aircraft's payload port  (PSDK link)
#   FT231X       -> Agilica UWB positioning module             (NMEA @ 460800)
#
# Usage:
#   source scripts/detect_serial.sh
#   dev="$(resolve_serial_by_id FT231X)" || echo "not plugged in"

# Sentinel paths handed to compose when a unit is absent. They are deliberately
# non-existent: the container then fails immediately with a clear "no such file"
# instead of silently opening whatever real port happened to take the index.
UWB_UART_DEV_MISSING="/dev/uwb-not-detected"
PSDK_UART_DEV_MISSING="/dev/aircraft-uart-not-detected"

# resolve_serial_by_id <product-string-fragment>
#   Echoes the resolved /dev/ttyUSBn on success.
#   Returns 1 if nothing matched, 2 if the fragment was ambiguous.
resolve_serial_by_id() {
    local pattern="$1"
    local matches=()

    shopt -s nullglob
    matches=(/dev/serial/by-id/*"${pattern}"*)
    shopt -u nullglob

    if (( ${#matches[@]} == 0 )); then
        return 1
    fi

    if (( ${#matches[@]} > 1 )); then
        echo "detect_serial: '${pattern}' is ambiguous, it matches:" >&2
        printf '  %s\n' "${matches[@]}" >&2
        return 2
    fi

    readlink -f "${matches[0]}"
}
