from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

from launch.actions import IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    pilot_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        PathJoinSubstitution(
                            [
                                FindPackageShare("drone_control"),
                                "launch",
                                "drone_pilot_w2r_launch.py",
                            ]
                        )
                    ]
                ),
                launch_arguments={}.items(),
            )
        ]
    )

    lf_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        PathJoinSubstitution(
                            [
                                FindPackageShare("drone_gnc_launch"),
                                "launch",
                                "mod_line_follow_launch.py",
                            ]
                        )
                    ]
                ),
                launch_arguments={"sf_cfg": "dev/sf_config_twoline.yaml"}.items(),
            )
        ]
    )

    wp_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        PathJoinSubstitution(
                            [
                                FindPackageShare("drone_gnc_launch"),
                                "launch",
                                "mod_waypoint_launch.py",
                            ]
                        )
                    ]
                ),
                launch_arguments={
                    "sf_cfg": "dev/sf_config_twoline.yaml",
                    "run_mission": "true",
                }.items(),
            )
        ]
    )

    return LaunchDescription([pilot_launch, lf_launch, wp_launch])
