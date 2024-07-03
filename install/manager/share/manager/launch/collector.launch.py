from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
import os

def generate_launch_description():
    ld = LaunchDescription()

    bnode = Node(
        package='vernier_respiration_belt',
        executable='vernier_respiration_belt_node',
        parameters=[{'Sensor_Enable':True}, 
                    {'Chunk_Enable':False}, 
                    {'Chunk_Length':128},
                    {'Device_Name':"GDX-RB 0K5016Q9"}, 
                    {'Device_Sampling_Rate':100}
                    ],
        respawn=True
    )

    hrnode = Node(
        package='polar_h10',
        executable='polar_h10_node',
        parameters=[{'Sensor_Enable':True}, 
                    {'Chunk_Enable':False}, 
                    {'Chunk_Length':128},
                    {'Device_Mac_Address':'DF:10:D1:9F:9B:DF'}],
        respawn=True
    )

    bag_directory = os.path.expanduser('~/wearable-biosensors-ros2/ros_bags')

    bagprocess = ExecuteProcess(
        cmd=['ros2', 'bag', 'record',
             '/biosensors/vernier_respiration_belt/force', '/biosensors/vernier_respiration_belt/bpm',
             '/biosensors/polar_h10/hr'],
        cwd=bag_directory,
        output='screen'
    )



    ld.add_action(bnode)
    ld.add_action(hrnode)
    ld.add_action(bagprocess)

    return ld

if __name__ == '__main__':
    generate_launch_description()