"""Launch sensor fusion and control nodes for line follow control. This module run the
sensor fusion with *lf* as the ekf_name for localization and two line follow control
nodes. The *line_follow* node is the ground line following controller, which is used to
keep the drone above a line detected on the ground with a fixed heading (the same as the
line) and configurable speed and altitude. The *gen_line_follow* node is a generic line
following controller, which is used to keep the drone with a configurable relative pose
to a virtual line.

This launch file will start the following ROS nodes:

+-----------------+-------------------------------+-----------------------------------+
| Node name       | Executable                    | Note                              |
+=================+===============================+===================================+
| line_follow     | drone_control.line_follow     | ground line following controller  |
+-----------------+-------------------------------+-----------------------------------+
| gen_line_follow | drone_control.gen_line_follow | generic line following controller |
+-----------------+-------------------------------+-----------------------------------+
| line_detector   | line_detector.line_detector   | To detect the line                |
+-----------------+-------------------------------+-----------------------------------+
| sf_lf           | sensor_fusion.drone_fusion    | This node is launched through     |
|                 |                               | *drone_fusion_v2_launch.py* in    |
|                 |                               | sensor_fusion                     |
+-----------------+-------------------------------+-----------------------------------+


ROS launch arguments:

+--------------+------------------------------+------------------------------------+
| Name         | Description                  | Default                            |
+==============+==============================+====================================+
| drone_name   | Name of the drone (will be   | dji                                |
|              | used as namespace)           |                                    |
+--------------+------------------------------+------------------------------------+
| sf_cfg       | Sensor fusion cfg file       | dev/sf_config_spdcmd_lf.yaml       |
+--------------+------------------------------+------------------------------------+
| detector_cfg | Line detector cfg file name. | perception/detection_cfg.yaml      |
+--------------+------------------------------+------------------------------------+
| run_detector | True to start line_detector  | false (deprecated not set to True) |
+--------------+------------------------------+------------------------------------+



Main input ROS topics:

.. list-table::
   :header-rows: 1

   * - Topic name
     - Message Type
     - Note
     - Data Definition

   * - gnc/line_cmd
     - std_msgs/Float32MultiArray
     - Line follow control command to the line_follow node
     - A list of control parameters:

       - vx: velocity command in x direction (+ for forward, - for backward)
       - alt: altitude command
       - k_gain_y: control gain for y direction
       - k_gain_yaw: control gain for yaw direction
       - use_sf: use sensor fusion or not (for testing only)
       - y_cmd: y position command (+ for left, - for right)

   * - gnc/gen_line_cmd
     - drone_msgs/msg/
       GenLineFollowCmd
     - Line follow control command to the gen_line_follow node
     - - header: header of the message, mainly used for time stamp
       - x/y/z/yaw_type: the type of the control target in different axes, should be
         "POS_CLOSELOOP" or "SPEED_OPENLOOP"
       - x/y/z/yaw_tgt: the control target in different axes (FLU frame):

         - if the type is "POS_CLOSELOOP", the target is the position in FLU frame, and
           a controller will be running to calculate the velocity command
         - if the type is "SPEED_OPENLOOP", the target is the velocity command in FLU,
           and the value will be sent to the drone directly without any controller (an
           open loop control)
       - param: a list of control parameters. Reserved for future use. Not used now.

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
   * - gnc/line_follow_ctrl
     - drone_msgs/msg/
       VelYawCmd
     - The 3D velocity and yaw angle command in FRD frame
     - - msg.velocity.x/y/z: x-/y-/z-speed (m/s)
       - msg.yaw: yaw angle (rad)
   * - gnc/gen_line_follow_ctrl
     - drone_msgs/msg/
       VelYawCmd
     - The 3D velocity and yaw angle command in FRD frame
     - - msg.velocity.x/y/z: x-/y-/z-speed (m/s)
       - msg.yaw: yaw angle (rad)


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

    sf_cfg_arg = DeclareLaunchArgument(
        "sf_cfg",
        default_value="dev/sf_config_spdcmd_lf.yaml",
        description="Sensor fusion cfg file",
    )

    sf_launch_arg = {
        "drone_name": LaunchConfiguration("drone_name"),
        "sf_cfg": LaunchConfiguration("sf_cfg"),
        "ekf_name": "lf",
    }

    detector_cfg_launch_arg = DeclareLaunchArgument(
        "detector_cfg",
        default_value="perception/detection_cfg.yaml",
        description="Line detector cfg file name.",
    )

    run_detector_launch_arg = DeclareLaunchArgument(
        "run_detector", default_value="false", description="True to start line_detector"
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
                launch_arguments=sf_launch_arg.items(),
            )
        ]
    )

    line_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="line_follow",
        name="line_follow",
        output="screen",
        parameters=[{"pose_topic": "gnc/sf_lf/pose"}],
    )

    gen_line_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="gen_line_follow",
        name="gen_line_follow",
        output="screen",
        parameters=[{"pose_topic": "gnc/sf_lf/pose"}],
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

    return LaunchDescription(
        [
            drone_name_arg,
            sf_cfg_arg,
            detector_cfg_launch_arg,
            run_detector_launch_arg,
            sf_launch,
            line_ctrl_node,
            gen_line_ctrl_node,
            line_detect_launch,
        ]
    )
