#!/bin/bash

FILE_DIR=$(realpath $(dirname $0))

if [[ $1 == "save" ]]
then
    cd $FILE_DIR

    echo "Saving docker img to files ..."

    docker save ghcr.io/flanders-make-vzw/vitro/drone_gnc_prod:v1.4.0 > gnc.img

    docker save ghcr.io/flanders-make-vzw/vitro/vitro_interface:v3.3.0 > dji.img

    docker save eclipse-mosquitto:2.0.18 > mqtt.img

    echo "Docker img saved to files."
fi


if [[ $1 == "install" ]]
then
    cd $FILE_DIR
    echo "Loading docker images ..."

    #docker load --input gnc.img
    #docker load --input mqtt.img
    #docker load --input dji.img
    #
    echo "Creating desktop file"

    desktop-file-edit \
        --set-icon=$FILE_DIR/icon.png \
        --set-key=Exec \
        --set-value=$FILE_DIR/start_demo.sh \
        --set-key=Path \
        --set-value=$FILE_DIR \
        ./Drone.desktop

    cp Drone.desktop ~/Desktop/
    chmod +x ~/Desktop/Drone.desktop
fi

