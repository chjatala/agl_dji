#!/bin/bash

xhost +local:root

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

# use_uwb=0 (default) -> skip agilica_uwb entirely, no wait, not started.
# use_uwb=1           -> wait for the UWB unit (/dev/ttyACM0), then start it too.
# UWB is a separate integration step from the drone link - only wait for it
# when it's actually been asked for, not on every run.
use_uwb="${use_uwb:-0}"
if [[ "$use_uwb" == "1" ]]; then
    if [[ ! -e /dev/ttyACM0 ]]; then
        echo "UWB is not found, please plug in the UWB"
    fi

    while [[ ! (-e /dev/ttyACM0) ]]
    do
        sleep 5
        echo "Waiting for UWB ..."
    done

    echo "UWB is found."
    export COMPOSE_PROFILES="${link_profile},uwb"
else
    echo "Skipping UWB (use_uwb=0) - agilica_uwb will not start."
    export COMPOSE_PROFILES="${link_profile}"
fi

docker compose down --remove-orphans

docker compose up
