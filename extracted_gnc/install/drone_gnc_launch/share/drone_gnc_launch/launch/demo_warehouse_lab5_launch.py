from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

from launch.actions import IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

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
                    "sf_cfg": "demo_warehouse_lab5/sf_config_marker.yaml",
                    "waypoint_file": "demo_warehouse_lab5/waypoint_lab5.csv",
                    "aruco_dict": "DICT_7X7_1000",
                    "aruco_border_bits": "2",
                }.items(),
            )
        ]
    )

    pilot_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        PathJoinSubstitution(
                            [
                                FindPackageShare("drone_control"),
                                "launch",
                                "drone_pilot_launch.py",
                            ]
                        )
                    ]
                ),
                launch_arguments={"run_gui": "true"}.items(),
            )
        ]
    )

    pl_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        PathJoinSubstitution(
                            [
                                FindPackageShare("drone_gnc_launch"),
                                "launch",
                                "mod_precision_land_launch.py",
                            ]
                        )
                    ]
                ),
                launch_arguments={
                    "sf_cfg": "demo_warehouse_lab5/sf_config_pl.yaml"
                }.items(),
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
                launch_arguments={
                    "sf_cfg": "demo_warehouse_lab5/sf_config_lf.yaml"
                }.items(),
            )
        ]
    )

    return LaunchDescription(
        [
            pilot_launch,
            wp_launch,
            # pl_launch,
            # lf_launch,
        ]
    )
