import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='amr_v4_qt',
            executable='amr_v4_qt',
            output='log'
        )
    ])
