#!/bin/bash

# "--priviledged" required to access usb and bluetooth devices
# "-v /dev/bus/usb:/dev/bus/usb" required to access usb
# "--net=host" required to make docker network equiv to host network
# "--cap-add=NET_ADMIN" allows us to use `tc`
# "-it" makes container interactive
#    -v /home/yashas/biosensors_ws:/home/cdcl/cdcl_ws \
docker run --restart=always \
    --privileged \
    -e BIO_NUM='1' \
    -e ROS_DOMAIN_ID="6" \
    -e POLAR_MAC='E9:B6:B2:24:CC:61' \
    -e VERNIER_SERIAL='GDX-RB 0K5016Q9' \
    -e DBUS_SESSION_BUS_ADDRESS="/var/run/dbus/system_bus_socket" \
    -v /home/cdcl/wearable-biosensors-ros2:/home/cdcl/wearable-biosensors-ros2 \
    -v /dev/bus/usb:/dev/bus/usb \
    -v /var/run/dbus/system_bus_socket:/var/run/dbus/system_bus_socket \
    -v /dev/mem:/dev/mem \
    -v /dev/gpiochip0:/dev/gpiochip0 \
    --device=/dev/hidraw1 \
    --device=/dev/mem \
    --device /dev/gpiochip0:/dev/gpiochip0 \
    --net=host \
    --cap-add=NET_ADMIN \
    -it \
    --name biosensors \
    cdcl:humble-jammy-biosensors
