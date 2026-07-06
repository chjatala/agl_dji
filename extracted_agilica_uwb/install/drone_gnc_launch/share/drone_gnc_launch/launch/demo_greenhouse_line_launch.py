from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

from launch.actions import IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    ctrl_arg = {
        "run_main_sf": "false",
        "run_pl": "false",
        "waypoint_file": "waypoint_example.csv",
        "lf_sf_cfg": "dji/sf_config_spdcmd_gh.yaml",
        "run_waypoint": "false",
    }

    ctrl_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
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
        ]
    )

    return LaunchDescription(
        [
            ctrl_launch,
        ]
    )
