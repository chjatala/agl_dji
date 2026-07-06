"""Launch nodes for lab8 warehouse demo

"""

from launch import LaunchDescription
from launch.actions import GroupAction, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
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
                    "sf_cfg": "demo_warehouse_lab5/sf_config_marker.yaml",
                    "waypoint_file": "demo_warehouse_lab8/waypoint_lab8.csv",
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

    approach_obj_action = Node(
        package="drone_control",
        namespace="dji",
        executable="approach_obj_server",
        name="approach_obj_server",
        output="screen",
    )

    align_marker_action = Node(
        package="drone_control",
        namespace="dji",
        executable="align_marker_server",
        name="align_marker_server",
        output="screen",
    )

    return LaunchDescription(
        [wp_launch, pilot_launch, approach_obj_action, align_marker_action]
    )
