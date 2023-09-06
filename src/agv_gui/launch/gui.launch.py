import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='agv_gui',
            executable='agv_gui',
            name='agv_gui',
            output='screen'
        )
    ])
