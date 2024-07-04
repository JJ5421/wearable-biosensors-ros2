import RPi.GPIO as GPIO
import subprocess
import time
import os
import threading
import signal

bag_directory = os.path.expanduser('~/wearable-biosensors-ros2/ros_bags/')

# Setup
GPIO.setmode(GPIO.BCM)

# LED pins
led_yellow = 4
led_green = 9
led_red = 5

GPIO.setup(led_yellow, GPIO.OUT)
GPIO.setup(led_green, GPIO.OUT)
GPIO.setup(led_red, GPIO.OUT)

# Button pins
button_power = 27
button_bag = 10

GPIO.setup(button_power, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
GPIO.setup(button_bag, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)

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
    GPIO.output(led, state)

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
        set_led(led_green, GPIO.HIGH)
        set_led(led_red, GPIO.LOW)
        proc = execute_command_r("ros2 bag record /biosensors/vernier_respiration_belt/force /biosensors/vernier_respiration_belt/bpm /biosensors/polar_h10/hr")
        print("Running ROS Bag\n")
    else:
        recording = False
        set_led(led_green, GPIO.LOW)
        set_led(led_red, GPIO.HIGH)
        os.killpg(os.getpgid(proc.pid), signal.SIGTERM)
        proc = None
        print("Ending ROS Bag\n")

def button_3_hold():
    global power_on
    if power_on:
        power_on = False
        set_led(led_yellow, GPIO.LOW)
        execute_command("sudo shutdown -h now")
        print("Shutdown")

# Event detection callbacks
def button_10_callback(channel):
    global button_bag_timer
    if GPIO.input(button_bag) == GPIO.HIGH:
        button_bag_timer = threading.Timer(hold_duration, button_10_hold)
        button_bag_timer.start()
    else:
        if button_bag_timer is not None:
            button_bag_timer.cancel()

def button_3_callback(channel):
    global button_power_timer
    if GPIO.input(button_power) == GPIO.HIGH:
        button_power_timer = threading.Timer(hold_duration, button_3_hold)
        button_power_timer.start()
    else:
        if button_power_timer is not None:
            button_power_timer.cancel()

# Add event detection
GPIO.add_event_detect(button_power, GPIO.BOTH, callback=button_3_callback, bouncetime=300)
GPIO.add_event_detect(button_bag, GPIO.BOTH, callback=button_10_callback, bouncetime=300)

set_led(led_yellow, GPIO.HIGH)
set_led(led_green, GPIO.LOW)
set_led(led_red, GPIO.HIGH)

try:
    while True:
        pass
except KeyboardInterrupt:
    pass

GPIO.cleanup()