import os

from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():
    uwb_arg = {"config_file": "beaconlist_vitro_04D3.yaml"}

    uwb_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution(
                [FindPackageShare("usbpublisher_pkg"), "launch", "uwb.launch.py"]
            )
        ),
        launch_arguments=uwb_arg.items(),
    )

    sf_arg = {
        "sf_cfg": "sf_anafi_lab8_config.yaml",
        "uwb_cfg": "decawave_lab8.yaml",
        "sf_type": "dji",
    }

    sf_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                PathJoinSubstitution(
                    [
                        FindPackageShare("sensor_fusion"),
                        "launch",
                        "drone_fusion_launch.py",
                    ]
                )
            ]
        ),
        launch_arguments=sf_arg.items(),
    )

    ctrl_arg = {
        "drone_name": "anafi",
        "waypoint_file": "waypoint_anafi_test.csv",
        "ctrl_param": "ctrl_param_anafi.yaml",
        "joystick_ctrl": "true",
        "auto_land": "true",
    }

    ctrl_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                PathJoinSubstitution(
                    [
                        FindPackageShare("drone_control"),
                        "launch",
                        "drone_control_launch.py",
                    ]
                )
            ]
        ),
        launch_arguments=ctrl_arg.items(),
    )

    anafi_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                PathJoinSubstitution(
                    [FindPackageShare("anafi_ros_nodes"), "launch", "anafi_launch.py"]
                )
            ]
        ),
    )

    return LaunchDescription(
        [
            uwb_launch,
            sf_launch,
            ctrl_launch,
            anafi_launch,
        ]
    )
