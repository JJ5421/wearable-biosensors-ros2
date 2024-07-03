#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter

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

        # Create log files if they do not exist
        self.create_log_file(self.respiration_log_path)
        self.create_log_file(self.heartrate_log_path)

        # Open log files for writing
        self.file_handle_resp = open(self.respiration_log_path, 'a')
        self.file_handle_hr = open(self.heartrate_log_path, 'a')
    
    def create_log_file(self, file_path):
        try:
            os.open(file_path, os.O_CREAT | os.O_EXCL | os.O_WRONLY)
        except FileExistsError:
                pass

    def listener_callback_resp(self, vital_stamped):
        data = vital_stamped.data
        ts = f"{vital_stamped.stamp.sec}.{vital_stamped.stamp.nanosec}"

        self.file_handle_resp.write(f"{data},{ts}\n")

    def listener_callback_hr(self, vital_stamped):
        data = vital_stamped.data
        ts = f"{vital_stamped.stamp.sec}.{vital_stamped.stamp.nanosec}"

        self.file_handle_hr.write(f"{data},{ts}\n")

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


