#!/bin/bash

xhost +local:root

# Serial ports are resolved by USB product string, not by ttyUSB* index - see
# scripts/detect_serial.sh for why.
_this_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
for _cand in "${_this_dir}/detect_serial.sh" "${_this_dir}/scripts/detect_serial.sh"; do
    if [[ -r "$_cand" ]]; then
        source "$_cand"
        break
    fi
done
if ! declare -F resolve_serial_by_id >/dev/null; then
    echo "ERROR: cannot find detect_serial.sh next to $0" >&2
    exit 1
fi

# Aircraft payload UART. An explicit PSDK_UART_DEV (shell or .env) always wins;
# otherwise find the FTDI TTL232R-3V3 cable.
if [[ -z "${PSDK_UART_DEV:-}" ]]; then
    if PSDK_UART_DEV="$(resolve_serial_by_id TTL232R)"; then
        echo "Aircraft UART detected: ${PSDK_UART_DEV}"
    else
        echo "WARNING: aircraft UART (FTDI TTL232R-3V3) not found - the PSDK link will fail to start."
        PSDK_UART_DEV="${PSDK_UART_DEV_MISSING}"
    fi
else
    echo "Aircraft UART pinned by environment: ${PSDK_UART_DEV}"
fi
export PSDK_UART_DEV

# ROS 2 networking. Both ends of a split deployment must share ROS_DOMAIN_ID *and* run the
# same ROS distro - ROS 2 does not support cross-distro communication, so a Jazzy Pi will
# not talk to a Humble laptop image.
#
# Every service uses host networking, so DDS multicast discovery works across the LAN
# as-is. If multicast is blocked on your network, set VITRO_HOST to the laptop's IP and
# discovery falls back to unicast against that peer.
export ROS_DOMAIN_ID="${ROS_DOMAIN_ID:-0}"
export ROS_AUTOMATIC_DISCOVERY_RANGE="${ROS_AUTOMATIC_DISCOVERY_RANGE:-SUBNET}"
export ROS_STATIC_PEERS="${VITRO_HOST:-}"

# use_psdk_msdk=1 (default) -> use DJI MSDK (vitro_interface)
# use_psdk_msdk=0           -> use DJI PSDK (psdk_bridge)
use_psdk_msdk="${use_psdk_msdk:-1}"
if [[ "$use_psdk_msdk" == "1" ]]; then
    echo "Using DJI MSDK (vitro_interface)"
    link_profile="msdk"
else
    echo "Using DJI PSDK (psdk_bridge)"
    link_profile="psdk"
fi

profiles=("$link_profile")

# use_uwb=0 (default) -> skip agilica_uwb entirely, no wait, not started.
# use_uwb=1           -> wait for the UWB unit, then start it too.
# UWB is a separate integration step from the drone link - only wait for it
# when it's actually been asked for, not on every run.
use_uwb="${use_uwb:-0}"
if [[ "$use_uwb" == "1" ]]; then
    UWB_UART_DEV="${UWB_UART_DEV:-}"
    if [[ -n "$UWB_UART_DEV" ]]; then
        echo "UWB pinned by environment: ${UWB_UART_DEV}"
    else
        if ! UWB_UART_DEV="$(resolve_serial_by_id FT231X)"; then
            echo "UWB is not found, please plug in the UWB"
            until UWB_UART_DEV="$(resolve_serial_by_id FT231X)"; do
                sleep 5
                echo "Waiting for UWB ..."
            done
        fi
        echo "UWB is found: ${UWB_UART_DEV}"
    fi
    export UWB_UART_DEV
    profiles+=("uwb")
else
    echo "Skipping UWB (use_uwb=0) - agilica_uwb will not start."
fi

# Where the VITRO framework (sensor_fusion + drone_control + mission) runs.
#
# vitro_location=laptop (default) -> VITRO runs on a laptop over the network; this Pi serves
#                                   only the PSDK bridge and the UWB parser. This is the
#                                   interim arrangement agreed with Flanders Make until the
#                                   arm64 VITRO images (which include the `sundae` package)
#                                   are delivered.
# vitro_location=pi               -> also run drone_gnc here. Requires those arm64 images to
#                                   be baked into the container image first.
vitro_location="${vitro_location:-laptop}"
case "$vitro_location" in
    laptop)
        echo "VITRO expected on the laptop (ROS_DOMAIN_ID=${ROS_DOMAIN_ID}) - drone_gnc stays down here."
        if [[ -n "${ROS_STATIC_PEERS}" ]]; then
            echo "  unicast discovery peer: ${ROS_STATIC_PEERS}"
        fi
        ;;
    pi)
        echo "VITRO running on the Pi - starting drone_gnc locally."
        profiles+=("gnc")
        ;;
    *)
        echo "ERROR: vitro_location must be 'laptop' or 'pi' (got '${vitro_location}')" >&2
        exit 1
        ;;
esac

export COMPOSE_PROFILES="$(IFS=,; echo "${profiles[*]}")"
echo "COMPOSE_PROFILES=${COMPOSE_PROFILES}"

docker compose down --remove-orphans

docker compose up
