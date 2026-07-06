"""Testing using line detection in sensor_fusion

"""
from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    drone_name_arg = \
        DeclareLaunchArgument(
            "drone_name",
            default_value="dji",
            description="Name of the drone (will be used as namespace)")

    ekf_name_launch_arg = \
        DeclareLaunchArgument("ekf_name", default_value="line",
                              description="Name of the EKF")

    ekf_name_value = LaunchConfiguration("ekf_name")

    sf_arg = {"sf_cfg": "dev/sf_config_line.yaml",
              "ekf_name": ekf_name_value,
              "drone_name": LaunchConfiguration("drone_name"),
              }

    sf_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([PathJoinSubstitution([
            FindPackageShare('sensor_fusion'), 'launch',
            'drone_fusion_v2_launch.py'])]),
        launch_arguments=sf_arg.items(),
        )

    return LaunchDescription([
        drone_name_arg,
        ekf_name_launch_arg,
        sf_launch,
    ])
