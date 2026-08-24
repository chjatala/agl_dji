#!/bin/bash
# Resolve the aircraft's RNDIS USB network interface.
#
# The E-Port presents a DJI RNDIS device (VID:PID 2ca3:001f, "DJI e1e"). The kernel
# registers it as usb0, then udev renames it to enx<MAC>. DJI randomises that MAC on
# every aircraft power-up, so the enx* name is different each boot:
#
#   enx82a27fbcd5ab -> enxca044cbb02cd -> enx2e38f317e967
#   enx562f8c88d9d9 -> enx1e7208884c25   (five distinct names observed)
#
# Pinning the name - in a define, an env var or a config file - is therefore broken by
# the next power cycle. Match on the bound driver instead, which is stable. Same problem
# and same remedy as detect_serial.sh, which resolves the two FTDI adapters by USB
# product string rather than by ttyUSB* index.
#
# Usage:
#   source scripts/detect_network.sh
#   iface="$(resolve_aircraft_netdev)" || echo "aircraft RNDIS link not present"

PSDK_NET_DEV_MISSING="aircraft-rndis-not-detected"

# resolve_aircraft_netdev
#   Echoes the interface name (e.g. enx1e7208884c25) on success.
#   Returns 1 if no rndis_host interface is present, 2 if there is more than one.
resolve_aircraft_netdev() {
    local matches=() n drv

    for n in /sys/class/net/*/; do
        [[ -e "${n}device/driver" ]] || continue
        drv="$(basename "$(readlink -f "${n}device/driver")")"
        [[ "$drv" == "rndis_host" ]] && matches+=("$(basename "$n")")
    done

    if (( ${#matches[@]} == 0 )); then
        return 1
    fi
    if (( ${#matches[@]} > 1 )); then
        echo "detect_network: more than one rndis_host interface:" >&2
        printf '  %s\n' "${matches[@]}" >&2
        return 2
    fi

    echo "${matches[0]}"
}
