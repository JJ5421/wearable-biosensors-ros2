#!/bin/bash
source /opt/ros/humble/setup.bash
source /home/cdcl/wearable-biosensors-ros2/install/setup.bash
export ROS_DOMAIN_ID=0

sudo pigpiod &
sleep 2
python3 /home/cdcl/wearable-biosensors-ros2/util_scripts/bag_manager.py & 

ros2 launch manager collector.launch.py &