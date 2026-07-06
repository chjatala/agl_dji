"""Launch nodes for lab8 Agilica demo"""

from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource

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
                    "sf_cfg": "demo_agilica/sf_config.yaml",
                    "run_mission": "true",
                    "auto_land": "true",
                    "aruco_dict": "DICT_7X7_1000",
                    "aruco_border_bits": "2",
                    "waypoint_file": "demo_agilica/waypoint.csv",
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
                launch_arguments={
                    "run_gui": "false",
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
            takeoff_node,
            land_node,
        ]
    )
