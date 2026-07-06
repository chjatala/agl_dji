from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch.conditions import LaunchConfigurationEquals

from launch.actions import IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    # Create the launch configuration variables
    sf_cfg_ = LaunchConfiguration("sf_cfg_")
    waypoint_file_ = LaunchConfiguration("waypoint_file_")
    aruco_dict_ = LaunchConfiguration("aruco_dict_")
    aruco_border_bits_ = LaunchConfiguration("aruco_border_bits_")
    drone_name_ = LaunchConfiguration("drone_name_")
    run_mission_ = LaunchConfiguration("run_mission_")
    pose_topic_ = LaunchConfiguration("pose_topic_")
    auto_land_ = LaunchConfiguration("auto_land_")
    ctrl_param_ = LaunchConfiguration("ctrl_param_")

    drone_name_arg = DeclareLaunchArgument(
        "drone_name_",
        default_value="dji",
        description="Name of the drone (will be used as namespace)",
    )

    sf_cfg_arg = DeclareLaunchArgument(
        "sf_cfg_",
        default_value="dev/sf_config_spdcmd_marker.yaml",
        description="Sensor fusion cfg file",
    )

    aruco_dict_arg = DeclareLaunchArgument(
        "aruco_dict_", default_value="DICT_6X6_100", description="Aruco dictionary name"
    )

    aruco_border_bits_arg = DeclareLaunchArgument(
        "aruco_border_bits_", default_value="1", description="Aruco marker border bits"
    )

    sf_cfg_pl_arg = DeclareLaunchArgument(
        "sf_cfg_pl",
        default_value="demo_warehouse_lab8/sf_config_pl.yaml",
        description="Sensor fusion cfg file for precision landing",
    )

    aruco_dict_pl_arg = DeclareLaunchArgument(
        "aruco_dict_pl",
        default_value="DICT_6X6_100",
        description="Aruco dictionary name for precision landing",
    )

    aruco_border_bits_pl_arg = DeclareLaunchArgument(
        "aruco_border_bits_pl",
        default_value="1",
        description="Aruco marker border bits for precision landing",
    )

    sf_cfg_lf_arg = DeclareLaunchArgument(
        "sf_cfg_lf",
        default_value="demo_warehouse_lab8/sf_config_lf.yaml",
        description="Sensor fusion cfg file for line following",
    )

    run_mission_ctrl_arg = DeclareLaunchArgument(
        "run_mission_", default_value="true", description="Start mission control node"
    )

    run_mod_wp_arg = DeclareLaunchArgument(
        "run_mod_wp", default_value="true", description="Start waypoint control module"
    )

    run_mod_pl_arg = DeclareLaunchArgument(
        "run_mod_pl",
        default_value="true",
        description="Start precision landing control module",
    )

    run_mod_lf_arg = DeclareLaunchArgument(
        "run_mod_lf",
        default_value="true",
        description="Start line following control module",
    )

    waypoint_file_arg = DeclareLaunchArgument(
        "waypoint_file_",
        default_value="dev/waypoint_dev.csv",
        description="waypoint file name",
    )

    pose_topic_arg = DeclareLaunchArgument(
        "pose_topic_",
        default_value="gnc/sf_main/pose",
        description="The topic name for drone pose data",
    )

    auto_land_arg = DeclareLaunchArgument(
        "auto_land_",
        default_value="false",
        description="Automatically land the drone after the last waypoint.",
    )

    ctrl_param_arg = DeclareLaunchArgument(
        "ctrl_param_",
        default_value="ctrl_param_default.yaml",
        description="Ctrl parameters file name",
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
                    "sf_cfg": sf_cfg_,
                    "waypoint_file": waypoint_file_,
                    "aruco_dict": aruco_dict_,
                    "aruco_border_bits": aruco_border_bits_,
                    "drone_name": drone_name_,
                    "run_mission": run_mission_,
                    "pose_topic": pose_topic_,
                    "auto_land": auto_land_,
                    "ctrl_param": ctrl_param_,
                }.items(),
                condition=LaunchConfigurationEquals("run_mod_wp", "true"),
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
                    "drone_name": drone_name_,
                    "sf_cfg": LaunchConfiguration("sf_cfg_pl"),
                    "aruco_dict": LaunchConfiguration("aruco_dict_pl"),
                    "aruco_border_bits": LaunchConfiguration("aruco_border_bits_pl"),
                }.items(),
                condition=LaunchConfigurationEquals("run_mod_pl", "true"),
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
                    "drone_name": drone_name_,
                    "sf_cfg": LaunchConfiguration("sf_cfg_lf"),
                }.items(),
                condition=LaunchConfigurationEquals("run_mod_lf", "true"),
            )
        ]
    )

    # Declare the launch options

    ld = LaunchDescription()

    ld.add_action(drone_name_arg)
    ld.add_action(sf_cfg_arg)
    ld.add_action(aruco_dict_arg)
    ld.add_action(aruco_border_bits_arg)
    ld.add_action(run_mission_ctrl_arg)
    ld.add_action(waypoint_file_arg)
    ld.add_action(pose_topic_arg)
    ld.add_action(auto_land_arg)
    ld.add_action(ctrl_param_arg)

    ld.add_action(sf_cfg_pl_arg)
    ld.add_action(aruco_dict_pl_arg)
    ld.add_action(aruco_border_bits_pl_arg)
    ld.add_action(sf_cfg_lf_arg)

    ld.add_action(run_mod_wp_arg)
    ld.add_action(run_mod_pl_arg)
    ld.add_action(run_mod_lf_arg)

    ld.add_action(pilot_launch)
    ld.add_action(wp_launch)

    ld.add_action(pl_launch)
    ld.add_action(lf_launch)

    return ld
