import os

from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    ekf_name_launch_arg = \
        DeclareLaunchArgument("ekf_name", default_value="",
                              description="Name of the EKF")

    ekf_name_value = LaunchConfiguration("ekf_name")

    # If the node_name arg is defined for this launch file, the default
    # node_name in the drone_fusion_launch doesn't work. WHY???
    # node_name_launch_arg = \
    #     DeclareLaunchArgument("node_name", default_value="sf_aaaaa",
    #                           description="Name of the EKF")
    #
    # node_name_value = LaunchConfiguration("node_name")

    uwb_arg = {"config_file": "beaconlist_vitro_0422.yaml"}

    uwb_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            FindPackageShare('usbpublisher_pkg'), 'launch', 'uwb.launch.py'])),
        launch_arguments=uwb_arg.items(),
        )

    sf_arg = {"sf_cfg": "sf_config_dev.yaml",
              "uwb_cfg": "decawave_lab8.yaml",
              "ekf_name": ekf_name_value,
              }

    sf_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([PathJoinSubstitution([
            FindPackageShare('sensor_fusion'), 'launch',
            'drone_fusion_v2_launch.py'])]),
        launch_arguments=sf_arg.items(),
        )

    ctrl_arg = {"waypoint_file": "waypoint_test.csv",
                "ctrl_param": "ctrl_param_dji.yaml",
                "joystick_ctrl": "false",
                "auto_land": "true"}

    ctrl_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([PathJoinSubstitution([
            FindPackageShare('drone_control'), 'launch',
            'drone_control_dev_launch.py'])]),
        launch_arguments=ctrl_arg.items(),
        )

    return LaunchDescription([
        ekf_name_launch_arg,
        # node_name_launch_arg,
        uwb_launch,
        sf_launch,
        ctrl_launch,
    ])
