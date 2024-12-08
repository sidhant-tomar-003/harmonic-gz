
# from launch import LaunchDescription
# from launch.actions import DeclareLaunchArgument
# from launch_ros.actions import Node

# def generate_launch_description():

#     return LaunchDescription([
#         DeclareLaunchArgument(
#             'use_sim_time',
#             default_value='false',
#             description='Use simulation (Gazebo) clock if true'),
#         Node(package = "joy",executable = "joy_node",
#         # arguments=[ '-device_id', '/dev/input/event26' ], 
#         # parameters=[{
#         #         'device_id': '/dev/input/event26',  # Joystick device, modify this as needed
#         #     }]
#             ),
#         Node(package='velocity_pub', executable='robot_control.py', output='screen'),
#     ])

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration

def generate_launch_description():

    joy_config = './joy_config.yaml'  # Replace with the actual path to your YAML file

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),
        Node(
            package='joy',
            executable='joy_node',
            name='joy_node',
            parameters=[joy_config]  # Load the YAML file here
        ),
        Node(
            package='velocity_pub',
            executable='robot_control.py',
            output='screen'
        ),
    ])