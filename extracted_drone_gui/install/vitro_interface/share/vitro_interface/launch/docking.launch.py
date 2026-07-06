from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
import os

def generate_launch_description():

    docking_ns_arg = DeclareLaunchArgument(
        'docking_ns',
        default_value='docking_ns'
    )

    docking_ns = LaunchConfiguration('docking_ns')

    config = os.path.join(
        get_package_share_directory('vitro_interface'),
        'cfg',
        'docking','d80.yaml'
        )
    
    docking_node = Node(
        package="vitro_interface",
        executable="vitro_interface_docking",
        namespace= docking_ns,
        parameters = [config],
    )

    ld = LaunchDescription([docking_ns_arg, docking_node])
    return ld