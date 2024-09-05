#!/usr/bin/env python3

import subprocess
import time
import os
import threading
from gpiozero import LED, Button

bag_directory = os.path.expanduser('/home/cdcl/wearable-biosensors-ros2/ros_bags/')

# LED pins
led_yellow = LED(25)

# Button pins
button_power_pin = 12

# Initialize Button with pull-down resistor
button_power = Button(button_power_pin, pull_up=False)

# State variables
power_on = True
button_power_timer = None  # Timer variable to keep track of the timer

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
    if button_power.is_pressed:  # Ensure the button is still being held
        if power_on:
            set_led(led_yellow, False)
            execute_command("/home/cdcl/wearable-biosensors-ros2/cdcl-humble-jammy-biosensors/stop.sh")
            time.sleep(15)
            execute_command("sudo shutdown -h now")
            power_on = False
        else:
            set_led(led_yellow, True)
            power_on = True

# Event detection for button press
def button_power_pressed():
    global button_power_timer
    if button_power.is_pressed:
        button_power_timer = threading.Timer(3, button_3_hold)
        button_power_timer.start()

# Event detection for button release
def button_power_released():
    global button_power_timer
    if button_power_timer is not None:
        button_power_timer.cancel()
        button_power_timer = None

# Attach event detection to the button
button_power.when_pressed = button_power_pressed
button_power.when_released = button_power_released

set_led(led_yellow, True)

print("Script is running. Press the button and hold for 3 seconds.")

try:
    while True:
        time.sleep(1)
except KeyboardInterrupt:
    set_led(led_yellow, False)
    print("Script ended.")
