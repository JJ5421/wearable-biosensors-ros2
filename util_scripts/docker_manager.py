#!/usr/bin/env python3

import subprocess
import time
import os
import threading
from gpiozero import LED, Button

bag_directory = os.path.expanduser('/home/cdcl/wearable-biosensors-ros2/ros_bags/')

# LED pins
led_yellow = LED(25)
# led_green = LED(9)
# led_red = LED(5)

# Button pins
button_power_pin = 32

# Initialize Button with pull-down resistor
button_power = Button(button_power_pin, pull_up=False)

# State variables
power_on = True

# Function to control LEDs
def set_led(led, state):
    if state:
        led.on()
    else:
        led.off()

# Function to execute a command
def execute_command(command):
    full_command = f"{command}"
    subprocess.Popen(full_command, shell=True, executable="/bin/bash", cwd=bag_directory)

# Callback function for button hold
def button_3_hold():
    global power_on
    if power_on:
        set_led(led_yellow, False)
        # set_led(led_green, False)
        # set_led(led_red, False)
        execute_command("/home/cdcl/wearable-biosensors-ros2/cdcl-humble-jammy-biosensors/stop.sh")
        time.sleep(15)
        execute_command("sudo shutdown -h now")
        power_on = False
    else:
        set_led(led_yellow, True)
        # set_led(led_green, False)
        # set_led(led_red, False)
        # execute_command("/home/cdcl/wearable-biosensors-ros2/cdcl-humble-jammy-biosensors/runterm.sh")
        power_on = True

# Event detection for button press
def button_power_pressed():
    if button_power.is_pressed:
        threading.Timer(3, button_3_hold).start()

button_power.when_pressed = button_power_pressed

set_led(led_yellow, True)
# set_led(led_green, False)
# set_led(led_red, True)

print("Script is running. Press the button and hold for 3 seconds.")

try:
    while True:
        time.sleep(1)
except KeyboardInterrupt:
    set_led(led_yellow, False)
    # set_led(led_green, False)
    # set_led(led_red, False)
    print("Script ended.")
