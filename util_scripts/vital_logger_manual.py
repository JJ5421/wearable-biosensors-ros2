import os
import time
import csv
import keyboard
import threading

# Define the file path
file_path = '/home/cdcl/wearable-biosensors-ros2/VitalLogs/manual_button_press.txt'

# Truncate the file to wipe its contents when script starts
with open(file_path, 'w', newline=''):
    pass  # This opens and immediately closes the file, truncating it

# Function to get current time in Unix time format (seconds.nanoseconds)
def get_unix_time():
    current_time = time.time()
    seconds = int(current_time)
    microseconds = int((current_time - seconds) * 1e6)  # Get microseconds part
    return f"{seconds}.{microseconds:06d}"

# Function to log time and press count directly to file
def log_button_press(press_count):
    timestamp = get_unix_time()
    
    # Construct the log entry
    log_entry = [timestamp, press_count]
    
    # Write the log entry to the file
    with open(file_path, 'a', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(log_entry)
    
    print(f"Logged: Time - {timestamp}, Press Count - {press_count}")

# Initialize press count and last press time
press_count = 0
last_press_time = 0

# Register the event listener for 'j' key press
def key_press_handler(event):
    global press_count, last_press_time
    if event.event_type == keyboard.KEY_DOWN:
        current_time = time.monotonic()
        if current_time - last_press_time > 0.2:  # Debounce threshold of 0.3 seconds
            press_count += 1
            log_button_press(press_count)
        last_press_time = current_time

keyboard.on_press_key('j', key_press_handler)

# Keep the script running
try:
    keyboard.wait()
except KeyboardInterrupt:
    pass
finally:
    keyboard.unhook_all()
