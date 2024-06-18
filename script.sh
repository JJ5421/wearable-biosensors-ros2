#!/bin/bash
source /opt/ros/humble/setup.bash
source /home/jj/wearable-biosensors-ros2/install/setup.bash
export ROS_DOMAIN_ID=0
ros2 launch manager collector.launch.py
