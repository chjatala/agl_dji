"""For testing the moveto action


"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

AUTODOC = True


def generate_launch_description():

    drone_name_arg = DeclareLaunchArgument(
        "drone_name",
        default_value="dji",
        description="Name of the drone (will be used as namespace)",
    )

    sf_cfg_arg = DeclareLaunchArgument(
        "sf_cfg",
        default_value="dev/sf_config_sim.yaml",
        description="Sensor fusion cfg file",
    )

    sf_launch_arg = {
        "sf_cfg": LaunchConfiguration("sf_cfg"),
        "ekf_name": "main",
    }

    sf_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                PathJoinSubstitution(
                    [
                        FindPackageShare("sensor_fusion"),
                        "launch",
                        "drone_fusion_v2_launch.py",
                    ]
                )
            ]
        ),
        launch_arguments=sf_launch_arg.items(),
    )

    aruco_dict_launch_arg = DeclareLaunchArgument(
        "aruco_dict", default_value="DICT_6X6_100", description="Aruco dictionary name"
    )

    aruco_border_bits_launch_arg = DeclareLaunchArgument(
        "aruco_border_bits", default_value="1", description="Aruco marker border bits"
    )

    detector_node = Node(
        package="sensor_fusion",
        namespace=LaunchConfiguration("drone_name"),
        executable="aruco_detector",
        name="aruco_detector_main",
        output="screen",
        parameters=[
            {
                "dictionary": LaunchConfiguration("aruco_dict"),
                "border_bits": LaunchConfiguration("aruco_border_bits"),
            }
        ],
    )

    waypoint_file_launch_arg = DeclareLaunchArgument(
        "waypoint_file",
        default_value="dev/waypoint_dev.csv",
        description="waypoint file name",
    )

    pose_topic_launch_arg = DeclareLaunchArgument(
        "pose_topic",
        default_value="gnc/sf_main/pose",
        description="The topic name for drone pose data",
    )

    auto_land_launch_arg = DeclareLaunchArgument(
        "auto_land",
        default_value="false",
        description="Automatically land the drone after the last waypoint.",
    )

    ctrl_param_launch_arg = DeclareLaunchArgument(
        "ctrl_param",
        default_value="ctrl_param_default.yaml",
        description="Ctrl parameters file name",
    )

    param_dict = {
        "waypoint_file": LaunchConfiguration("waypoint_file"),
        "ctrl_param": LaunchConfiguration("ctrl_param"),
        "pose_topic": LaunchConfiguration("pose_topic"),
        "auto_land": LaunchConfiguration("auto_land"),
    }

    mission_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="mission_control",
        name="mission_ctrl",
        output="screen",
        parameters=[param_dict],
    )

    moveto_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="moveto_server",
        name="moveto_server",
        output="screen",
    )

    takeoff_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="takeoff_server",
        name="takeoff_server",
        output="screen",
    )

    land_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="land_server",
        name="land_server",
        output="screen",
    )

    wp_to_vel_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="wp_to_vel_control",
        name="wp_to_vel_ctrl",
        output="screen",
        parameters=[param_dict],
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

    return LaunchDescription(
        [
            drone_name_arg,
            sf_cfg_arg,
            waypoint_file_launch_arg,
            pose_topic_launch_arg,
            ctrl_param_launch_arg,
            auto_land_launch_arg,
            aruco_dict_launch_arg,
            aruco_border_bits_launch_arg,
            sf_launch,
            detector_node,
            # mission_ctrl_node,
            moveto_node,
            takeoff_node,
            land_node,
            wp_to_vel_ctrl_node,
            pilot_launch,
        ]
    )
