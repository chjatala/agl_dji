from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    # Get the path to the package
    package_dir = get_package_share_directory("nmea_parser")

    # Path to the parameters file
    default_params_file = os.path.join(package_dir, "config", "nmea_parser_params.yaml")

    params_file_arg = DeclareLaunchArgument(
        "params_file",
        default_value=default_params_file,
        description="Path to the NMEA parser parameters file",
    )

    return LaunchDescription(
        [
            params_file_arg,
            Node(
                package="nmea_parser",
                executable="nmea_parser",
                name="nmea_parser",
                output="screen",
                parameters=[LaunchConfiguration("params_file")],
            ),
        ]
    )

