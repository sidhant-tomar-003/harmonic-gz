from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node

def generate_launch_description():

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),
        Node(package = "joy",executable = "joy_node",
        # arguments=[ '-device_id', '/dev/input/event26' ], 
        # parameters=[{
        #         'device_id': '/dev/input/event26',  # Joystick device, modify this as needed
        #     }]
            ),
        Node(package='velocity_pub', executable='robot_control.py', output='screen'),
    ])