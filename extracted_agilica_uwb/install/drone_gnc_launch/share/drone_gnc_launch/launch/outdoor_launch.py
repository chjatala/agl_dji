from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution, LaunchConfiguration

from launch.actions import IncludeLaunchDescription, GroupAction
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    run_mission_ctrl_arg = DeclareLaunchArgument(
        "run_mission_ctrl",
        default_value="false",
        description="Start mission control node",
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
                    "sf_cfg": "dev/sf_config_gps.yaml",
                    "waypoint_file": "dev/waypoint_gps.csv",
                    "run_mission": LaunchConfiguration("run_mission_ctrl"),
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

    check_node = Node(
        package="drone_control",
        namespace="dji",
        executable="ground_obj",
        name="ground_obj",
        output="screen",
        parameters=[],
    )

    return LaunchDescription(
        [run_mission_ctrl_arg, pilot_launch, wp_launch, pl_launch, check_node, takeoff_node]
    )
