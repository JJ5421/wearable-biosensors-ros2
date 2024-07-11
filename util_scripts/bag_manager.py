#!/usr/bin/env python3

import subprocess
import time
import os
import threading
import signal
import pigpio

bag_directory = os.path.expanduser('/home/cdcl/wearable-biosensors-ros2/ros_bags/')

# Setup pigpio
pi = pigpio.pi()

# LED pins
led_yellow = 4
led_green = 9
led_red = 5

pi.set_mode(led_yellow, pigpio.OUTPUT)
pi.set_mode(led_green, pigpio.OUTPUT)
pi.set_mode(led_red, pigpio.OUTPUT)

# Button pins
button_power = 27
button_bag = 10

pi.set_mode(button_power, pigpio.INPUT)
pi.set_pull_up_down(button_power, pigpio.PUD_DOWN)
pi.set_mode(button_bag, pigpio.INPUT)
pi.set_pull_up_down(button_bag, pigpio.PUD_DOWN)

# State variables
recording = False
power_on = True

# Timers and hold duration
hold_duration = 3  # seconds
button_power_timer = None
button_bag_timer = None

# Store Processes
proc = None

# Function to control LEDs
def set_led(led, state):
    pi.write(led, state)

def execute_command(command):
    full_command = f"source /opt/ros/humble/setup.bash && source /home/jj/wearable-biosensors-ros2/install/setup.bash && {command}"
    subprocess.Popen(full_command, shell=True, executable="/bin/bash", cwd=bag_directory)    

# Function to execute a command
def execute_command(command):
    full_command = f"source /opt/ros/humble/setup.bash && source /home/jj/wearable-biosensors-ros2/install/setup.bash && {command}"
    subprocess.Popen(full_command, shell=True, executable="/bin/bash", cwd=bag_directory)

# Function to execute a command
def execute_command_r(command):
    full_command = f"source /opt/ros/humble/setup.bash && source /home/jj/wearable-biosensors-ros2/install/setup.bash && {command}"
    proc = subprocess.Popen(full_command, stdout=subprocess.PIPE, shell=True, preexec_fn=os.setsid, executable="/bin/bash", cwd=bag_directory)
    return proc

# Callback functions for button hold
def button_10_hold():
    global recording
    global proc
    if not recording:
        recording = True
        set_led(led_green, 1)
        set_led(led_red, 0)
        proc = execute_command_r("ros2 bag record /biosensors/vernier_respiration_belt/force /biosensors/vernier_respiration_belt/bpm /biosensors/polar_h10/hr")
        print("Running ROS Bag\n")
    else:
        recording = False
        set_led(led_green, 0)
        set_led(led_red, 1)
        os.killpg(os.getpgid(proc.pid), signal.SIGINT)
        proc = None
        print("Ending ROS Bag\n")

def button_3_hold():
    global power_on
    if power_on:
        power_on = False
        set_led(led_yellow, 0)
        set_led(led_green, 0)
        set_led(led_red, 0)
        pi.stop()
        execute_command("sudo shutdown -h now")
        print("Shutdown")

# Event detection callbacks
def button_bag_pressed(gpio, level, tick):
    global button_bag_timer
    if level == 1:
        button_bag_timer = threading.Timer(hold_duration, button_10_hold)
        button_bag_timer.start()
    else:
        if button_bag_timer is not None:
            button_bag_timer.cancel()

def button_power_pressed(gpio, level, tick):
    global button_power_timer
    if level == 1:
        button_power_timer = threading.Timer(hold_duration, button_3_hold)
        button_power_timer.start()
    else:
        if button_power_timer is not None:
            button_power_timer.cancel()

# Add event detection
pi.callback(button_bag, pigpio.EITHER_EDGE, button_bag_pressed)
pi.callback(button_power, pigpio.EITHER_EDGE, button_power_pressed)

set_led(led_yellow, 1)
set_led(led_green, 0)
set_led(led_red, 1)

try:
    while True:
        time.sleep(1)
except KeyboardInterrupt:
    set_led(led_yellow, 0)
    set_led(led_green, 0)
    set_led(led_red, 0)
    pi.stop()

set_led(led_yellow, 0)
set_led(led_green, 0)
set_led(led_red, 0)
pi.stop()
