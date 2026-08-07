#!/bin/bash

xhost +local:root

# The UWB unit enumerates as /dev/ttyACM0. Set skip_uwb_wait=1 to go straight to
# startup without it - needed when bench-testing the PSDK link on its own, since
# the aircraft side does not depend on the UWB.
skip_uwb_wait="${skip_uwb_wait:-0}"

if [[ "$skip_uwb_wait" == "1" ]]; then
    echo "Skipping UWB wait (skip_uwb_wait=1); agilica_uwb will fail if /dev/ttyACM0 is absent."
else
    if [[ ! -e /dev/ttyACM0 ]]; then
        echo "UWB is not found, please plug in the UWB"
    fi

    while [[ ! (-e /dev/ttyACM0) ]]
    do
        sleep 5
        echo "Waiting for UWB ..."
    done

    echo "UWB is found, starting drone application ..."
fi

# use_psdk_msdk=1 (default) -> use DJI MSDK (vitro_interface)
# use_psdk_msdk=0           -> use DJI PSDK (psdk_bridge)
use_psdk_msdk="${use_psdk_msdk:-1}"
if [[ "$use_psdk_msdk" == "1" ]]; then
    echo "Using DJI MSDK (vitro_interface)"
    export COMPOSE_PROFILES=msdk
else
    echo "Using DJI PSDK (psdk_bridge)"
    export COMPOSE_PROFILES=psdk
fi

docker compose down --remove-orphans

docker compose up
