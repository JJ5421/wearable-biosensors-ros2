import os
import time
import csv
import keyboard

# Define the file path
file_path = '~/home/jj/wearable-biosensors-ros2/VitalLogs/manual_button_press.txt'

# Create the directory if it doesn't exist
os.makedirs(os.path.dirname(file_path), exist_ok=True)

# Create or empty the file and add headers
with open(file_path, 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(['Timestamp', 'PressCount'])

# Function to log time and press count
def log_button_press(press_count):
    current_time = time.time()
    current_time_ns = int((current_time - int(current_time)) * 1e9)  # Nanoseconds part
    timestamp = f"{int(current_time)}.{current_time_ns}"
    with open(file_path, 'a', newline='') as file:
        writer = csv.writer(file)
        writer.writerow([timestamp, press_count])
    print(f"Logged: Time - {timestamp}, Press Count - {press_count}")

# Initialize press count
press_count = 0
last_press_time = time.time()  # Track the last press time

# Register the event listener for 'j' key press
def key_press_handler(event):
    global press_count, last_press_time
    if event.event_type == keyboard.KEY_DOWN:
        current_time = time.time()
        if current_time - last_press_time > 0.1:  # Debounce threshold of 0.1 seconds
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
