#!/usr/bin/env python3

import subprocess
import time
import os
import threading
import signal
from gpiozero import LED, Button

bag_directory = os.path.expanduser('/home/cdcl/wearable-biosensors-ros2/ros_bags/')

# LED pins
led_green = LED(24)
led_red = LED(23)

# Button pins
button_bag = Button(33, pull_up=False)

# State variables
recording = False

# Timers and hold duration
hold_duration = 3  # seconds
button_bag_timer = None

# Store Processes
proc = None

# Function to execute a command
def execute_command(command):
    full_command = f"sudo -u cdcl bash -c 'source /opt/ros/humble/setup.bash && source /home/cdcl/wearable-biosensors-ros2/install/setup.bash && {command}'"
    subprocess.Popen(full_command, shell=True, executable="/bin/bash", cwd=bag_directory)

# Function to execute a command and return the process
def execute_command_r(command):
    full_command = f"sudo -u cdcl bash -c 'source /opt/ros/humble/setup.bash && source /home/cdcl/wearable-biosensors-ros2/install/setup.bash && {command}'"
    proc = subprocess.Popen(full_command, stdout=subprocess.PIPE, shell=True, preexec_fn=os.setsid, executable="/bin/bash", cwd=bag_directory)
    return proc

# Callback function for button hold
def button_10_hold():
    global recording
    global proc
    if not recording:
        recording = True
        led_green.on()
        led_red.off()
        proc = execute_command_r("ros2 bag record /biosensors/vernier_respiration_belt/force /biosensors/vernier_respiration_belt/bpm /biosensors/polar_h10/hr")
        print("Running ROS Bag\n")
    else:
        recording = False
        led_green.off()
        led_red.on()
        os.killpg(os.getpgid(proc.pid), signal.SIGINT)
        proc = None
        print("Ending ROS Bag\n")

# Event detection callback
def button_bag_pressed():
    global button_bag_timer
    if button_bag.is_pressed:
        button_bag_timer = threading.Timer(hold_duration, button_10_hold)
        button_bag_timer.start()
    else:
        if button_bag_timer is not None:
            button_bag_timer.cancel()

# Add event detection
button_bag.when_pressed = button_bag_pressed

# Initial LED setup
led_green.off()
led_red.on()

try:
    while True:
        time.sleep(1)
except KeyboardInterrupt:
    led_green.off()
    led_red.off()

