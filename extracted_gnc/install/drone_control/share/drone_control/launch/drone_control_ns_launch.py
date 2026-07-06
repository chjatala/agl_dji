"""Launch all control nodes.

    At this moment, some node from other packages are also launched,
    might not be the best launch file design.

    Test using new BaseControl and AcePilot
    Test launch with drone_name as ns
    Test adding all ctrl related thing here

"""

from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch.conditions import LaunchConfigurationEquals
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    drone_name_arg = DeclareLaunchArgument(
        "drone_name",
        default_value="dji",
        description="Name of the drone (will be used as namespace)",
    )

    run_waypoint_arg = DeclareLaunchArgument(
        "run_waypoint", default_value="false", description="Start Mission Control node"
    )

    run_waypoint_value = LaunchConfiguration("run_waypoint")

    run_pl_arg = DeclareLaunchArgument(
        "run_pl", default_value="true", description="Launch Precision landing part"
    )

    run_pl_value = LaunchConfiguration("run_pl")

    gui_type_arg = DeclareLaunchArgument(
        "gui_type", default_value="Qt", description="Select GUI type [Py|Qt]"
    )

    pl_sf_cfg_arg = DeclareLaunchArgument(
        "pl_sf_cfg",
        default_value="sf_config_pl.yaml",
        description="Sf cfg file for precision landing",
    )

    pl_sf_cfg_value = LaunchConfiguration("pl_sf_cfg")

    waypoint_file_launch_arg = DeclareLaunchArgument(
        "waypoint_file", default_value="NA", description="waypoint file name"
    )

    pose_topic_launch_arg = DeclareLaunchArgument(
        "pose_topic",
        default_value="sensor_fusion/pose",
        description="The topic name for drone pose data",
    )

    pose_type_launch_arg = DeclareLaunchArgument(
        "pose_type",
        default_value="odom",
        description="Msg type (odom=Odometry or" + "pose=PoseStamped)",
    )

    pose_ref_launch_arg = DeclareLaunchArgument(
        "pose_ref",
        default_value="FRD",
        description="Reference type of the pose data" + "FRD or FLU",
    )

    k_x_loc_launch_arg = DeclareLaunchArgument(
        "k_x_loc", default_value="1.0", description="X scale factor of pose data"
    )

    k_y_loc_launch_arg = DeclareLaunchArgument(
        "k_y_loc", default_value="1.0", description="Y scale factor of pose data"
    )

    k_z_loc_launch_arg = DeclareLaunchArgument(
        "k_z_loc", default_value="1.0", description="Z scale factor of pose data"
    )

    in_test_launch_arg = DeclareLaunchArgument(
        "in_test",
        default_value="true",
        description="In test flight mode " + "(with less safety check)",
    )

    auto_arm_launch_arg = DeclareLaunchArgument(
        "auto_arm", default_value="false", description="Automatically arm the drone"
    )

    auto_land_launch_arg = DeclareLaunchArgument(
        "auto_land",
        default_value="false",
        description="Automatically land the drone " + "after the last waypoint.",
    )

    ctrl_param_launch_arg = DeclareLaunchArgument(
        "ctrl_param",
        default_value="ctrl_param_default.yaml",
        description="Ctrl parameters file name",
    )

    pilot_type_launch_arg = DeclareLaunchArgument(
        "pilot_type",
        default_value="Setpoint",
        description="Drone pilotting type" + "[Setpoint/Joystick]",
    )

    enable_wd_launch_arg = DeclareLaunchArgument(
        "enable_wd", default_value="false", description="Enable topic watchdog"
    )

    waypoint_file_value = LaunchConfiguration("waypoint_file")

    ctrl_param_value = LaunchConfiguration("ctrl_param")

    pilot_type_value = LaunchConfiguration("pilot_type")

    pose_topic_value = LaunchConfiguration("pose_topic")
    pose_type_value = LaunchConfiguration("pose_type")
    pose_ref_value = LaunchConfiguration("pose_ref")

    k_x_loc_value = LaunchConfiguration("k_x_loc")
    k_y_loc_value = LaunchConfiguration("k_y_loc")
    k_z_loc_value = LaunchConfiguration("k_z_loc")

    in_test_value = LaunchConfiguration("in_test")
    auto_arm_value = LaunchConfiguration("auto_arm")
    auto_land_value = LaunchConfiguration("auto_land")
    enable_wd_value = LaunchConfiguration("auto_land")

    param_dict = {
        "waypoint_file": waypoint_file_value,
        "ctrl_param": ctrl_param_value,
        "pilot_type": pilot_type_value,
        "pose_topic": pose_topic_value,
        "pose_type": pose_type_value,
        "pose_ref": pose_ref_value,
        "k_x_loc": k_x_loc_value,
        "k_y_loc": k_y_loc_value,
        "k_z_loc": k_z_loc_value,
        "in_test": in_test_value,
        "auto_arm": auto_arm_value,
        "auto_land": auto_land_value,
        "enable_wd": enable_wd_value,
    }

    mission_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="mission_control",
        name="mission_control",
        output="screen",
        parameters=[param_dict],
        condition=IfCondition(run_waypoint_value),
    )

    wp_to_vel_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="wp_to_vel_control",
        name="wp_to_vel_control",
        output="screen",
        parameters=[param_dict],
    )

    pilot_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="ace_pilot",
        name="ace_pilot",
        output="screen",
        parameters=[param_dict],
    )

    qt_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="qt_gui",
        name="qt_gui",
        output="screen",
        parameters=[param_dict],
        condition=LaunchConfigurationEquals("gui_type", "Qt"),
    )

    gui_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="dev_gui",
        name="dev_gui",
        output="screen",
        parameters=[param_dict],
        condition=LaunchConfigurationEquals("gui_type", "Py"),
    )

    line_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="line_follow",
        name="line_follow",
        output="screen",
        parameters=[param_dict],
    )

    line_detect_node = Node(
        package="line_detector",
        namespace=LaunchConfiguration("drone_name"),
        executable="line_detector",
        name="line_detector",
        output="screen",
        parameters=[param_dict],
    )

    pl_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                PathJoinSubstitution(
                    [
                        FindPackageShare("drone_gnc_launch"),
                        "launch",
                        "precision_land_launch.py",
                    ]
                )
            ]
        ),
        launch_arguments={
            "drone_name": LaunchConfiguration("drone_name"),
            "sf_cfg": pl_sf_cfg_value,
        }.items(),
        condition=IfCondition(run_pl_value),
    )

    return LaunchDescription(
        [
            drone_name_arg,
            run_pl_arg,
            pl_sf_cfg_arg,
            gui_type_arg,
            run_waypoint_arg,
            waypoint_file_launch_arg,
            ctrl_param_launch_arg,
            pilot_type_launch_arg,
            pose_topic_launch_arg,
            pose_type_launch_arg,
            pose_ref_launch_arg,
            k_x_loc_launch_arg,
            k_y_loc_launch_arg,
            k_z_loc_launch_arg,
            in_test_launch_arg,
            auto_arm_launch_arg,
            auto_land_launch_arg,
            enable_wd_launch_arg,
            mission_ctrl_node,
            wp_to_vel_ctrl_node,
            pilot_ctrl_node,
            line_ctrl_node,
            gui_node,
            qt_node,
            line_detect_node,
            pl_launch,
        ]
    )
