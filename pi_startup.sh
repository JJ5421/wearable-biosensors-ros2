#!/bin/bash

sudo pigpiod &
sleep 2

python3 ~/wearable-biosensors-ros2/util_scripts/docker_manager.py