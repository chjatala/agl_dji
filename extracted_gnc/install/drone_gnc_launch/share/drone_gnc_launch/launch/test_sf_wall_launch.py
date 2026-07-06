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
                    "sf_cfg": "dev/sf_config_wall.yaml",
                    "waypoint_file": "demo_warehouse_lab5/waypoint_lab5.csv",
                    "aruco_dict": "DICT_7X7_1000",
                    "aruco_border_bits": "2",
                    "run_mission": "false",
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

    # lidar_bridge_node = Node(
    #     package="sensor_fusion",
    #     executable="lidar_bridge",
    #     output="screen",
    #     namespace="dji",
    # )

    return LaunchDescription(
        [
            pilot_launch,
            wp_launch,
            # lidar_bridge_node,
        ]
    )
