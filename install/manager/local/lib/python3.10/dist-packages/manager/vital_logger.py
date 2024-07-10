#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from std_msgs.msg import Int32, Float32, Float32MultiArray, MultiArrayDimension, MultiArrayLayout, Header
from cdcl_umd_msgs.msg import Vitals

import os

class VitalLogger(Node):

    def __init__(self):
        super().__init__('vital_logger')
        self.subscription_resp = self.create_subscription(Vitals,'biosensors/vernier_respiration_belt/bpm', self.listener_callback_resp, 10)
        self.subscription_hr = self.create_subscription(Vitals,'biosensors/polar_h10/hr', self.listener_callback_hr, 10)

        # Ensure the VitalLogs directory exists
        log_dir = os.path.expanduser('~/wearable-biosensors-ros2/VitalLogs')
        os.makedirs(log_dir, exist_ok=True)
                    
        # Path to log files
        self.respiration_log_path = os.path.join(log_dir, 'respiration.txt')
        self.heartrate_log_path = os.path.join(log_dir, 'heartrate.txt')

        # Create and clear log files if they are not empty, then add headers
        self.clear_and_initialize_log_file(self.respiration_log_path, "Timestamp,BPM\n")
        self.clear_and_initialize_log_file(self.heartrate_log_path, "Timestamp,BPM\n")

        # Open log files for writing
        self.file_handle_resp = open(self.respiration_log_path, 'a')
        self.file_handle_hr = open(self.heartrate_log_path, 'a')
    
    def clear_and_initialize_log_file(self, file_path, header):
        # Clear the file if it exists and is not empty, then add the header
        with open(file_path, 'w') as file:
            file.write(header)

    def listener_callback_resp(self, vital_stamped):
        data = vital_stamped.data
        ts = f"{vital_stamped.stamp.sec}.{vital_stamped.stamp.nanosec}"
        self.file_handle_resp.write(f"{ts},{data}\n")

    def listener_callback_hr(self, vital_stamped):
        data = vital_stamped.data
        ts = f"{vital_stamped.stamp.sec}.{vital_stamped.stamp.nanosec}"
        self.file_handle_hr.write(f"{ts},{data}\n")

def main(args=None):
    rclpy.init(args=args)
    datalogger_node = VitalLogger()
    try:
        rclpy.spin(datalogger_node)
    except KeyboardInterrupt:
        pass
    datalogger_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
