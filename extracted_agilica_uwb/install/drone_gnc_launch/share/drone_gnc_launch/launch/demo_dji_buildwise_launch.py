from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    uwb_arg = {"config_file": "beaconlist_buildwise.yaml"}

    uwb_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution(
                [FindPackageShare("usbpublisher_pkg"), "launch", "uwb.launch.py"]
            )
        ),
        launch_arguments=uwb_arg.items(),
    )

    ctrl_arg = {
        "run_main_sf": "true",
        "run_pl": "false",
        "run_lf": "false",
        "waypoint_file": "buildwise/waypoint_buildwise.csv",
        "main_sf_cfg": "buildwise/sf_config_buildwise.yaml",
        "run_waypoint": "true",
    }

    ctrl_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                PathJoinSubstitution(
                    [
                        FindPackageShare("drone_control"),
                        "launch",
                        "drone_control_dev_launch.py",
                    ]
                )
            ]
        ),
        launch_arguments=ctrl_arg.items(),
    )

    return LaunchDescription(
        [
            uwb_launch,
            ctrl_launch,
        ]
    )
