import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter

from std_msgs.msg import Int32, Float32, Float32MultiArray, MultiArrayDimension, MultiArrayLayout, Header
from cdcl_umd_msgs.msg import Vitals


class VitalLogger(Node):

    def __init__(self):
        super().__init__('vital_logger')
        self.subscription_resp = self.create_subscription(Vitals,'biosensors/vernier_respiration_belt/bpm', self.listener_callback_resp, 10)
        self.subscription_hr = self.create_subscription(Vitals,'biosensors/polar_h10/hr', self.listener_callback_hr, 10)

        # Two log files
        self.file_handle_resp = open('~/wearable-biosensors-ros2/VitalLogs/respiration.txt', 'w')
        self.file_handle_hr = open('~/wearable-biosensors-ros2/VitalLogs/heartrate.txt', 'w')

    def listener_callback_resp(self, vital_stamped):
        data = vital_stamped.data
        ts = f"{vital_stamped.sec}.{vital_stamped.nanosec}"

        self.file_handle_resp.write(f"{data},{ts}\n")

    def listener_callback_hr(self, vital_stamped):
        data = vital_stamped.data
        ts = f"{vital_stamped.sec}.{vital_stamped.nanosec}"

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


