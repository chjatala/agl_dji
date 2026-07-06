"""For testing, not all settings have args

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
        DeclareLaunchArgument("ekf_name", default_value="",
                              description="Name of the EKF")

    ekf_name_value = LaunchConfiguration("ekf_name")

    uwb_arg = {"config_file": "beaconlist_vitro_0422.yaml",
               "drone_name": LaunchConfiguration("drone_name"), }

    uwb_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            FindPackageShare('usbpublisher_pkg'), 'launch', 'uwb.launch.py'])),
        launch_arguments=uwb_arg.items(),
        )

    sf_arg = {"sf_cfg": "sf_config_example.yaml",
              "uwb_cfg": "decawave_lab8.yaml",
              "ekf_name": ekf_name_value,
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
        uwb_launch,
        sf_launch,
    ])
