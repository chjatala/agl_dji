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

# ROS distro selection. Defaults to jazzy: Flanders Make's arm64 image carrying `sundae`
# (drone_gnc_prod:5.0.0dev-jazzy) is in place and verified on this Pi, so Jazzy is now the
# normal path. Set ros_distro=humble for the rollback, which also forces vitro_location=laptop
# because the Humble image has no `sundae`.
#
# This also closes a live footgun: neither this script nor compose exports VITRO_IMAGE, and
# compose's own default is `vitro_arm64:jazzy`. So a bare ./scripts/start_demo.sh silently
# started whatever stale Jazzy image happened to be on disk. Now the distro picks the image.
#
# ROSBAG_EXCLUDE_FLAG exists because Humble spells the exclude flag -x while Jazzy spells it
# --exclude-regex. Hardcoding either one silently breaks recording on the other distro, and
# you would only find out when you went looking for a bag that was never written.
ros_distro="${ros_distro:-jazzy}"
case "$ros_distro" in
    humble)
        : "${VITRO_IMAGE:=vitro_arm64:humble}"
        ROSBAG_EXCLUDE_FLAG="-x"
        ;;
    jazzy)
        : "${VITRO_IMAGE:=vitro_arm64:jazzy}"
        ROSBAG_EXCLUDE_FLAG="--exclude-regex"
        ;;
    *)
        echo "ERROR: ros_distro must be 'humble' or 'jazzy' (got '${ros_distro}')" >&2
        exit 1
        ;;
esac
export VITRO_IMAGE ROSBAG_EXCLUDE_FLAG
export VITRO_GNC_IMAGE="${VITRO_GNC_IMAGE:-ghcr.io/flanders-make-vzw/vitro/drone_gnc_prod:5.0.0dev-jazzy}"
export VITRO_GUI_IMAGE="${VITRO_GUI_IMAGE:-}"
echo "ROS distro: ${ros_distro} (VITRO_IMAGE=${VITRO_IMAGE})"

# Refuse to start with too little disk. Filling the SD card mid-flight takes the recorder
# down and can take the whole system with it; this has already happened once.
_free_gb=$(df -BG --output=avail / | tail -1 | tr -dc '0-9')
if (( _free_gb < ${MIN_FREE_GB:-5} )); then
    echo "ERROR: only ${_free_gb}GB free on / - need ${MIN_FREE_GB:-5}GB. Free space first." >&2
    exit 1
fi

# use_psdk_msdk=1 (default) -> use DJI MSDK (vitro_interface)
# use_psdk_msdk=0           -> use DJI PSDK (psdk_bridge)
use_psdk_msdk="0"
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

# use_liveview=0 (default) -> no camera stream at all.
# use_liveview=1           -> enable the PSDK liveview channel: recycle the USB gadget and
#                             let psdk_bridge publish /dji/camera_h264.
#
# WHERE that stream is decoded is a separate decision - see liveview_decode_location below.
# The two used to be one flag, which conflated them: the gadget recycle is required for the
# aircraft's high-speed channel no matter who decodes, so turning the local decoder off must
# not also turn the channel off.
use_liveview="${use_liveview:-0}"
if [[ "$use_liveview" == "1" ]]; then
    if [[ "$link_profile" != "psdk" ]]; then
        echo "ERROR: use_liveview=1 needs the PSDK link (use_psdk_msdk=0) - the h264 stream" >&2
        echo "       it decodes comes from psdk_bridge, which the MSDK path does not run." >&2
        exit 1
    fi
    # Warn rather than abort: the decoder idles harmlessly with no input, and the
    # parameter can legitimately be overridden from elsewhere. But a silent black panel
    # in the GUI is exactly the kind of thing that eats an afternoon.
    _lv_param="${_this_dir}/../cfg/psdk_bridge_params.yaml"
    if [[ -r "$_lv_param" ]] && grep -qE '^[[:space:]]*liveview_enabled:[[:space:]]*false' "$_lv_param"; then
        echo "WARNING: liveview_enabled is false in cfg/psdk_bridge_params.yaml, so psdk_bridge"
        echo "         publishes no video and liveview_decode will have nothing to decode."
    fi
    # The aircraft binds the RNDIS gadget once per USB enumeration and will not negotiate
    # a second PSDK session over an already-bound link, so psdk_bridge must meet a freshly
    # created gadget or DjiCore_Init fails with 0xE1. Recycling here costs two seconds and
    # removes the single most confusing failure mode in this setup: telemetry dead, and a
    # log that looks identical to a miswired cable.
    _gadget_sh="${_this_dir}/setup_usb_gadget.sh"
    if [[ -x "$_gadget_sh" ]]; then
        if sudo -n true 2>/dev/null; then
            echo "Recycling the USB gadget so the aircraft re-enumerates it..."
            sudo -n "$_gadget_sh" --recycle || {
                echo "ERROR: could not recycle the USB gadget - liveview will not connect." >&2
                exit 1
            }
        else
            echo "WARNING: no passwordless sudo, so the USB gadget was not recycled."
            echo "         If psdk_bridge fails with 0xE1, run:"
            echo "           sudo ${_gadget_sh} --recycle"
        fi
    fi
    # liveview_decode_location=laptop (default) -> decode off-board. The Pi publishes only
    #                                              /dji/camera_h264; the laptop subscribes,
    #                                              decodes and displays.
    # liveview_decode_location=pi               -> run liveview_decode here as well.
    #
    # Defaults to laptop because the Pi 4 cannot keep up, measured 16 Sep 2026: the decoder
    # pinned ~86% of a core at EVERY output width tried (1024/960/640) and still discarded
    # 400-900 KiB per stats cycle. Flat CPU across widths is the tell - it is saturated by
    # the input rate, not by scaling or JPEG encoding. The aircraft streams ~880 KiB/s
    # (~7 Mbps), about double what this pipeline was tuned for, because psdk_bridge's
    # SetEncodingStrategy(4000 kbps) is rejected with 0xE0 and it runs at its own default.
    #
    # It cannot be offloaded on the Pi either: hwaccel v4l2m2m yields frame=0 out, twice
    # measured, because the M3E sends H.264 High profile Level 5.1 with B-frames, beyond
    # what the VideoCore block accepts. So the only way to stop it competing with the
    # 40 Hz EKF is to move it, which is why liveview_decode is its own service.
    #
    # Forwarding the undecoded stream is also CHEAPER on the wire, not merely neutral:
    # measured 374 KB/s of raw H.264 against 766 KB/s of JPEG at 1024px/15fps, because
    # H.264 is inter-frame compressed and JPEG codes every frame from scratch. The gap only
    # widens at the full 1440px/30fps this now runs at. See the measurements and the
    # correction of an earlier claim in docker/Dockerfile.liveview-decoder.
    liveview_decode_location="${liveview_decode_location:-laptop}"
    case "$liveview_decode_location" in
        pi)
            echo "Liveview decoding on the Pi - /dji/camera/image/compressed will carry JPEG frames."
            echo "  NOTE: expect dropped frames; cfg/liveview_decoder_params.yaml is tuned for"
            echo "        laptop-side decode. For Pi-side use output_width 640, output_fps 10."
            profiles+=("liveview")
            ;;
        laptop)
            echo "Liveview channel on, decoding on the laptop - this Pi publishes /dji/camera_h264 only."
            echo "  Run liveview_decode there against the same ROS_DOMAIN_ID (${ROS_DOMAIN_ID})."
            ;;
        *)
            echo "ERROR: liveview_decode_location must be 'pi' or 'laptop' (got '${liveview_decode_location}')" >&2
            exit 1
            ;;
    esac
else
    # This used to only print the message below: psdk_bridge reads liveview_enabled from
    # cfg/psdk_bridge_params.yaml, which says true, so the aircraft video kept streaming
    # and use_liveview=0 saved nothing on the Pi. The -p override is what makes it true.
    # Passed only when disabling, so the params file stays authoritative otherwise.
    #
    # network_handler_enabled goes off with it, and this is not optional. The handler only
    # serves liveview's E-Port high-speed channel, and it needs the USB gadget recycle that
    # this script performs in the use_liveview=1 branch only. Leaving it on here made
    # DjiCore_Init fail with 0xE1 and took the WHOLE flight link down - no telemetry, no
    # control, linker_task spinning at 97% of a core (measured 2026-09-23). With it off,
    # psdk_bridge falls back to the UART-only core link, the configuration that flew
    # before liveview existed.
    PSDK_BRIDGE_EXTRA_ARGS="-p liveview_enabled:=false -p network_handler_enabled:=false"
    echo "Skipping liveview entirely (use_liveview=0) - psdk_bridge publishes no video."
fi
export PSDK_BRIDGE_EXTRA_ARGS="${PSDK_BRIDGE_EXTRA_ARGS:-}"

# Where the VITRO framework (sensor_fusion + drone_control + mission) runs.
#
# vitro_location=pi (default)  -> the whole stack runs here: drone_gnc (sensor_fusion +
#                                 drone_control + mission) alongside the PSDK bridge and the
#                                 UWB parser. Only drone_gui runs on the laptop, and it is
#                                 never started from this script - it has no `gui` profile.
# vitro_location=laptop        -> the old split: VITRO on a laptop over the network, this Pi
#                                 serving only the PSDK bridge and UWB parser. Kept as the
#                                 rollback path.
vitro_location="${vitro_location:-pi}"
case "$vitro_location" in
    laptop)
        echo "VITRO expected on the laptop (ROS_DOMAIN_ID=${ROS_DOMAIN_ID}) - drone_gnc stays down here."
        if [[ -n "${ROS_STATIC_PEERS}" ]]; then
            echo "  unicast discovery peer: ${ROS_STATIC_PEERS}"
        fi
        ;;
    pi)
        # Guard 1: VITRO_GNC_IMAGE is defaulted above to Flanders Make's bundle, so this
        # normally passes. It still fires if someone explicitly blanks it, because drone_gnc
        # would then fall back to ${VITRO_IMAGE} - our own build, which has no `sundae` - and
        # would start, die on ModuleNotFoundError, and look like it launched fine. Compose
        # cannot express this itself: a required-variable (:?) form is evaluated for every
        # service regardless of the active profile, which would break the laptop path too.
        if [[ -z "${VITRO_GNC_IMAGE}" ]]; then
            echo "ERROR: vitro_location=pi needs VITRO_GNC_IMAGE set to Flanders Make's" >&2
            echo "       arm64 image containing sundae. Without it drone_gnc starts and" >&2
            echo "       dies on ModuleNotFoundError: No module named 'sundae'." >&2
            exit 1
        fi
        # Guard 2: their bundle is Jazzy. A Jazzy drone_gnc cannot talk to a Humble
        # psdk_bridge even on this same machine - ROS 2 has no cross-distro communication.
        if [[ "$ros_distro" != "jazzy" ]]; then
            echo "ERROR: vitro_location=pi requires ros_distro=jazzy (got '${ros_distro}')." >&2
            echo "       ROS 2 cannot bridge distros, so a Jazzy drone_gnc and a Humble" >&2
            echo "       psdk_bridge would not see each other." >&2
            exit 1
        fi
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

# detach=1 starts the stack in the background and returns. Foreground stays the default
# for anyone running this on the Pi's own console, but over ssh it is expensive: measured
# 2026-09-23 on a Pi already at 100% CPU, `docker compose up` multiplexing every
# container's output took ~20% of a core and sshd another ~11% encrypting it to the
# laptop. Read logs on demand instead:  docker logs -f --tail 50 <container>
detach="${detach:-0}"
if [[ "$detach" == "1" ]]; then
    if docker compose up -d; then
        echo "Stack started detached. Logs: docker logs -f --tail 50 <container>   Stop: ./scripts/stop_demo.sh"
    else
        echo "ERROR: docker compose up -d failed (see above) - the stack may be only partly up." >&2
        echo "       Check: docker ps -a   A name conflict usually means another compose is running." >&2
        exit 1
    fi
else
    docker compose up
fi
