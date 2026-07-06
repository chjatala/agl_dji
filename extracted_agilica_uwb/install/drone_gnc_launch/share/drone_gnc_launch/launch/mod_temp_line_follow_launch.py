"""Launch detector/sf/ctrl nodes for both line follow and gen line follow control


"""

from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.actions import GroupAction
from launch.substitutions import LaunchConfiguration

from launch.conditions import LaunchConfigurationEquals

from launch.actions import IncludeLaunchDescription

from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    drone_name_arg = DeclareLaunchArgument(
        "drone_name",
        default_value="dji",
        description="Name of the drone (will be used as namespace)",
    )

    # --- ground line following ---
    # this is the old version of LF, will be removed soon

    sf_cfg_arg = DeclareLaunchArgument(
        "sf_cfg",
        default_value="dev/sf_config_spdcmd_lf.yaml",
        description="Sensor fusion cfg file",
    )

    sf_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
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
                launch_arguments={
                    "drone_name": LaunchConfiguration("drone_name"),
                    "sf_cfg": LaunchConfiguration("sf_cfg"),
                    "ekf_name": "lf",
                }.items(),
            )
        ]
    )

    line_ctrl_node = GroupAction(
        actions=[
            Node(
                package="drone_control",
                namespace=LaunchConfiguration("drone_name"),
                executable="line_follow",
                name="line_follow",
                output="screen",
                parameters=[{"pose_topic": "gnc/sf_lf/pose"}],
            )
        ]
    )

    # --- detector ---
    detector_cfg_launch_arg = DeclareLaunchArgument(
        "detector_cfg",
        default_value="perception/detection_cfg.yaml",
        description="Line detector cfg file name.",
    )

    run_detector_launch_arg = DeclareLaunchArgument(
        "run_detector", default_value="false", description="True to start line_detector"
    )

    line_detect_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        PathJoinSubstitution(
                            [
                                FindPackageShare("line_detector"),
                                "launch",
                                "line_detector_launch.py",
                            ]
                        )
                    ]
                ),
                launch_arguments={
                    "drone_name": LaunchConfiguration("drone_name"),
                    "detector_cfg": LaunchConfiguration("detector_cfg"),
                }.items(),
                condition=LaunchConfigurationEquals("run_detector", "true"),
            )
        ]
    )

    # --- gen line following --
    # this is the new version should be used
    gen_line_ctrl_node = GroupAction(
        actions=[
            Node(
                package="drone_control",
                namespace=LaunchConfiguration("drone_name"),
                executable="gen_line_follow",
                name="gen_line_follow",
                output="screen",
                parameters=[{"pose_topic": "gnc/sf_gen_lf/pose"}],
            )
        ]
    )

    sf_gen_cfg_arg = DeclareLaunchArgument(
        "sf_gen_cfg",
        default_value="dev/sf_config_spdcmd_lf.yaml",
        description="Sensor fusion cfg file for gen_line_follow",
    )

    sf_gen_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
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
                launch_arguments={
                    "drone_name": LaunchConfiguration("drone_name"),
                    "sf_cfg": LaunchConfiguration("sf_gen_cfg"),
                    "ekf_name": "gen_lf",
                }.items(),
            )
        ]
    )
    return LaunchDescription(
        [
            drone_name_arg,
            sf_cfg_arg,
            detector_cfg_launch_arg,
            run_detector_launch_arg,
            sf_gen_cfg_arg,
            sf_launch,
            line_ctrl_node,
            gen_line_ctrl_node,
            line_detect_launch,
            sf_gen_launch,
        ]
    )
