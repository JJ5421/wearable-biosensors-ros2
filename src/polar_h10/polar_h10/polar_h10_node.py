## This ROS2 node for reading polar H10 data from bletooth protocols. This node is made based on this website; https://blog.alikhalil.tech/2014/11/polar-h7-bluetooth-le-heart-rate-sensor-on-ubuntu-14-04/

import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter

from std_msgs.msg import Int32, Float32, Float32MultiArray, MultiArrayDimension, MultiArrayLayout, Header
from cdcl_umd_msgs.msg import Vitals


import time, sys, math
import os
import pexpect # need to isntall pexpect; $pip install pexpect


class ros2_polar_h10(Node):
    def __init__(self):
        super().__init__('polar_h10_node')

        # For the generlized structure of ROS2 Node
        self.declare_parameter('Sensor_Enable', True) # Enable to publish sensor data (true)
        self.Parm_Sensor_Enable = self.get_parameter('Sensor_Enable').value 
        self.declare_parameter('Chunk_Enable', False) # Enable to publish chunk data (true)
        self.Parm_Chunk_Enable = self.get_parameter('Chunk_Enable').value 
        self.declare_parameter('Chunk_Length', 10) # Define the length of the chunk data
        self.Parm_Chunk_Length = self.get_parameter('Chunk_Length').value 

        # For the Polar H10 device.
        p_mac = os.getenv('POLAR_MAC')
        print(p_mac)
        self.declare_parameter('Device_Mac_Address', 'E9:B6:B2:24:CC:61') # Should be replaced into your device ID.
        self.Parm_Device_Mac_Address = self.get_parameter('Device_Mac_Address').value 


        #############################################################
        # Global Variables
        #############################################################
        #example: self.dx_1_read_position_data = 0
        self.sensor_status = 0
        self.polar_h10_state = False

        while not self.polar_h10_state:
            gatt = pexpect.spawn("gatttool -t random -b " + self.Parm_Device_Mac_Address+" --char-write-req --handle=0x0011 --value=0100 --listen --listen" )
            check = gatt.readline()
            check = check.decode("utf-8")
            rclpy.logging.get_logger('test').info("Check: \"{0}\"".format(check))
            if check == "Characteristic value was written successfully\r\n":
                line = gatt.readline()
                line = line.decode("utf-8")
                wonsu=line.split()

                if wonsu[5] == "10":
                    rclpy.logging.get_logger('test').info("Polar connected.")
                    print("[Polar] connecting")
                    self.polar_h10_state = True
                    self.timeout_count = time.time()
            else:
                rclpy.logging.get_logger('test').info("Polar failed.")
                print("[Polar] fail to hack ble")
                pass
        print("[Polar] connected")


        #############################################################
        # Publisher Parts
        #############################################################
        bionum = os.getenv('BIO_NUM')
        if self.Parm_Sensor_Enable:
            self.pub_polar_h10_hr = self.create_publisher(Vitals, 'biosensors' + bionum + '/polar_h10/hr', 10) 
            self.pub_polar_h10_ibi = self.create_publisher(Int32, 'biosensors' + bionum + '/polar_h10/ibi', 10) 
            self.pub_polar_h10_bat = self.create_publisher(Int32, 'biosensors' + bionum + '/polar_h10/dev', 10)  # battery level
            
	    #############################################################
        # ROS main loop
        #############################################################
        
        timeout_time = 5 # seconds
        while rclpy.ok():
            print(time.time() - self.timeout_count)
            
            if (time.time() - self.timeout_count) > timeout_time:
                self.polar_h10_state =  False

            if self.polar_h10_state:
                try:
                    line = gatt.readline()
                    line = line.decode("utf-8")
                    polar_h10_recevied_data=line.split()
                    
                    if polar_h10_recevied_data[5] == "10":
                        self.timeout_count = time.time()
                        hr_data = float(int(polar_h10_recevied_data[6], 16))
                        ibi_data = int(polar_h10_recevied_data[7],16)
                        bat_level_data = int(polar_h10_recevied_data[8], 16)
                        if self.Parm_Sensor_Enable:
                            vitals = Vitals()
                            vitals.stamp = self.get_clock().now().to_msg()
                            vitals.data = hr_data
                            # self.pub_polar_h10_hr.publish(Int32(data=hr_data))
                            self.pub_polar_h10_hr.publish(vitals)
                            self.pub_polar_h10_ibi.publish(Int32(data=ibi_data))
                            self.pub_polar_h10_bat.publish(Int32(data=bat_level_data))
                        else:
                            pass
                except pexpect.TIMEOUT:
                            print("Alternate failure (PEXPECT TIMEOUT)- potential signal death")
                except pexpect.EOF:
                            print("Alternate failure (PEXPECT EOF)- potential signal death")
                
            elif not self.polar_h10_state:
                print("Lost connection, attempting to reconnect...")
                while not self.polar_h10_state:
                    try:
                        gatt = pexpect.spawn("gatttool -t random -b " + self.Parm_Device_Mac_Address+" --char-write-req --handle=0x0011 --value=0100 --listen" )
                        check = gatt.readline()
                        check = check.decode("utf-8")
                        rclpy.logging.get_logger('test').info("Check: \"{0}\"".format(check))
                        if check == "Characteristic value was written successfully\r\n":
                            line = gatt.readline()
                            line = line.decode("utf-8")
                            wonsu=line.split()

                            if wonsu[5] == "10":
                                rclpy.logging.get_logger('test').info("Polar connected.")
                                print("[Polar] connecting")
                                self.polar_h10_state = True
                                self.timeout_count = time.time()
                        else:
                            rclpy.logging.get_logger('test').info("Polar failed.")
                            print("[Polar] fail to hack ble")
                            pass

                    except pexpect.TIMEOUT:
                            print("Alternate failure (PEXPECT TIMEOUT)- potential signal death")
                    except pexpect.EOF:
                            print("Alternate failure (PEXPECT EOF)- potential signal death")
                print("[Polar] connected")

        

def main(args=None):
    rclpy.init(args=args)
    polar_h10_node = ros2_polar_h10()
    try:
        rclpy.spin(polar_h10_node)
    except KeyboardInterrupt:
        print('repeater stopped cleanly')
    except BaseException:
        print('exception in repeater:', file=sys.stderr)
        raise
    finally:        
        polar_h10_node.destroy_node()
        rclpy.shutdown() 


if __name__ == '__main__':
    main()


