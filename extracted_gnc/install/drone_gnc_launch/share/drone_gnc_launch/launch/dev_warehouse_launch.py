"""Launch nodes for lab8 warehouse demo

"""

from launch import LaunchDescription
from launch.actions import GroupAction, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

AUTODOC = True


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
                    "sf_cfg": "demo_warehouse_lab8/sf_config_spdcmd_marker.yaml",
                    "run_mission": "false",
                    # "aruco_dict": "DICT_7X7_1000",
                    # "aruco_border_bits": "2",
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
                launch_arguments={}.items(),
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
                    "sf_cfg": "demo_warehouse_lab8/sf_config_pl.yaml"
                }.items(),
            )
        ]
    )

    takeoff_node = Node(
        package="drone_control",
        namespace="dji",
        executable="takeoff_server",
        name="takeoff_server",
        output="screen",
    )

    land_node = Node(
        package="drone_control",
        namespace="dji",
        executable="land_server",
        name="land_server",
        output="screen",
    )

    return LaunchDescription(
        [
            pilot_launch,
            wp_launch,
            pl_launch,
            takeoff_node,
            land_node,
        ]
    )
