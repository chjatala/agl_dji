"""Launch waypoint navigation related nodes. This module run the sensor fusion for
localization and the waypoint control nodes. Once the waypoint control is started, the
program will check the current drone pose and calculate the velocity command needed to
follow the waypoint.

The mission_ctrl node is developed for simple waypoint navigation. It provides a quick
and easy way to navigate the drone to a series of waypoints. This node will send the
VelYawCmd to the drone pilot module.

The new task manager (BT) has been developed for more complex missions. It uses the
moveto_server server to move the drone to a specific position and then execute the task.

.. note::
   The mission_ctrl node and the task manager node cannot be used at the same time.

This launch file will start the following ROS nodes:

.. list-table::
   :header-rows: 1

   * - Node name
     - Executable
     - Note
   * - aruco_detector_main
     - sensor_fusion.aruco_detector
     - To detect Aruco markers for the sensor fusion node
   * - mission_ctrl
     - drone_control.mission_ctrl
     - To generate waypoint command and action command according to the waypoint file
   * - wp_to_vel_ctrl
     - drone_control.wp_to_vel_control
     - Convert waypoint command to velocity command
   * - sf_main
     - sensor_fusion.drone_fusion
     - This node is launched through *drone_fusion_v2_launch.py* in sensor_fusion
       package The *ekf_name* is set to *main*
   * - moveto_server
     - drone_control.moveto_server
     - An action server to move the drone to an absolute position in the local frame
   * - move_server
     - drone_control.move_server
     - An action server to move the drone to a relative (to its current postion) 
       position in the local frame

ROS launch arguments:

.. list-table::
   :header-rows: 1

   * - Name
     - Description
     - Default
   * - drone_name
     - Name of the drone (will be used as namespace)
     - dji
   * - run_mission
     - Start mission control node. Set to false while using the task manager.
     - true
   * - sf_cfg
     - Sensor fusion cfg file
     - dev/sf_config_spdcmd_marker.yaml
   * - aruco_dict
     - Aruco dictionary name
     - DICT_6X6_100
   * - aruco_border_bits
     - Aruco marker border bits
     - 1
   * - waypoint_file
     - waypoint file name
     - dev/waypoint_dev.csv
   * - pose_topic
     - The topic name for drone pose data if not using the default SF
     - gnc/sf_main/pose
   * - auto_land
     - Automatically land the drone after the last waypoint.
     - false
   * - ctrl_param
     - Ctrl parameters file name
     - ctrl_param_default.yaml

Main input ROS topics:

.. list-table::
   :header-rows: 1

   * - Topic name
     - Message Type
     - Note
     - Data Definition
   * - camera/image
     - sensor_msgs/Image
     - Used for Aruco detection. Will be switch to CompressedImage in future release.
     -
   * - gnc/enable/mission_ctrl
     - std_msgs/Bool
     - Start or stop mission ctrl publish waypoint command. The node will by default
       publish waypoint command after initialization.
     - msg.data = True -> start publishing
   * - gnc/load_wp_file
     - std_msgs/String
     - Load a new waypoint file. The old waypoint mission will be discard.
     - msg.data = the file name string for the new waypoint mission
   * - gnc/waypoints_inject
     - drone_msgs/Waypoints
     - Inject an new waypoint into the mission. The drone will pause the mission loaded
       from waypoint file, go to this injected waypoint and then go back to the location
       where the mission is paused to continue.
     - See the message definition file for more details
   * - gnc/sf_main/reset
     - std_msgs/Float64
     - (For advanced user) Reset the EKF used for the waypoint control
     - msg.data = time stamp of the reset event. If < 0.0, the time stamp when the
       message is received will be used.

Besides the topic mentioned above, the sensor fusion node also requires some sensor data
topics. Those topics are defined by the sensor fusion configuration, and will change
from case to case. Please refer to the sensor fusion configuration files and the
documentation of sensor fusion node for more details.

Main output ROS topics:

.. list-table::
   :header-rows: 1

   * - Topic name
     - Message Type
     - Note
     - Data Definition
   * - gnc/desired_vel_yaw
     - drone_msgs/msg/VelYawCmd
     - The 3D velocity and yaw angle command in FRD frame
     - - msg.velocity.x/y/z: x-/y-/z-speed (m/s)
       - msg.yaw: yaw angle (rad)
   * - cmd/drone/action
     - std_msgs/String
     - Some action command sent to the drone interface, such as take off and landing.
     - msg.data = command string to send. Please refer to the documentation of drone
       interface module for more details.


"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import LaunchConfigurationEquals
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

    sf_cfg_arg = DeclareLaunchArgument(
        "sf_cfg",
        default_value="dev/sf_config_spdcmd_marker.yaml",
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

    run_mission_ctrl_arg = DeclareLaunchArgument(
        "run_mission", default_value="true", description="Start mission control node"
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
        condition=LaunchConfigurationEquals("run_mission", "true"),
    )

    wp_to_vel_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="wp_to_vel_control",
        name="wp_to_vel_ctrl",
        output="screen",
        parameters=[param_dict],
    )

    moveto_action_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="moveto_server",
        name="moveto_server",
        output="screen",
    )

    move_action_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="move_server",
        name="move_server",
        output="screen",
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
            run_mission_ctrl_arg,
            sf_launch,
            detector_node,
            mission_ctrl_node,
            wp_to_vel_ctrl_node,
            moveto_action_node,
            move_action_node,
        ]
    )
