#!/bin/bash

xhost +local:root

if [[ -e /dev/ttyACM0 ]]
then
    echo ""
else
    echo "UWB is not found, please plug in the UWB"
fi

while [[ ! (-e /dev/ttyACM0) ]]
do
    sleep 5
    echo "Waiting for UWB ..."
done

echo "UWB is found, starting drone application ..."

# use_psdk_msdk=1 (default) -> use DJI MSDK (vitro_interface)
# use_psdk_msdk=0           -> use DJI PSDK (psdk_bridge)
use_psdk_msdk="0"
if [[ "$use_psdk_msdk" == "1" ]]; then
    echo "Using DJI MSDK (vitro_interface)"
    export COMPOSE_PROFILES=msdk
else
    echo "Using DJI PSDK (psdk_bridge)"
    export COMPOSE_PROFILES=psdk
fi

docker compose down --remove-orphans

docker compose up
