#!/bin/bash
source /opt/ros/humble/setup.bash
source /home/cdcl/wearable-biosensors-ros2/install/setup.bash
export ROS_DOMAIN_ID=0

echo 'cdcl' | sudo -SE python3 /home/cdcl/wearable-biosensors-ros2/util_scripts/bag_manager.py & 

ros2 launch manager collector.launch.py &

#exec /home/cdcl/wifi_connect.sh &
