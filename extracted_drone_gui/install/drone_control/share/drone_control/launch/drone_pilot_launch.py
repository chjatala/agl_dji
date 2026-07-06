"""Launch drone piloting nodes

This launch file will start the following ROS nodes:


+-----------+-------------------------------+------------------------------------------+
| Node name | Executable                    | Note                                     |
+===========+===============================+==========================================+
| ace_pilot | drone_control.ace_pilot       | Drone piloting node                      |
+-----------+-------------------------------+------------------------------------------+
| ds4_ctrl  | drone_control.ds4_to_setpoint | Process the game pad input, and generate |
|           |                               | the command to the drone.                |
+-----------+-------------------------------+------------------------------------------+
| dev_gui   | drone_gui.dev_gui             | Qt GUI                                   |
+-----------+-------------------------------+------------------------------------------+
| ctrl_gen  | drone_control.ctrl_generator  | Control generator which can generate     |
|           |                               | different control command.               |
+-----------+-------------------------------+------------------------------------------+
| takeoff   | drone_control.takeoff_server  | Takeoff server which can be used to      |
|           |                               | takeoff the drone.                       |
+-----------+-------------------------------+------------------------------------------+
| land      | drone_control.land_server     | Land server which can be used to land    |
|           |                               | the drone.                               |
+-----------+-------------------------------+------------------------------------------+


ROS launch arguments:

+------------+-------------------------+--------------------------------+
| Name       | Description             | Default value                  |
+============+=========================+================================+
| drone_name | Name of the drone (will | dji                            |
|            | be used as namespace)   |                                |
+------------+-------------------------+--------------------------------+
| run_gui    | Start Qt GUI            | false                          |
+------------+-------------------------+--------------------------------+
| run_ds4    | Start DS4 node          | true                           |
+------------+-------------------------+--------------------------------+
| pilot_type | Drone piloting type     | Setpoint (for DJI and MAVLINK) |
|            |                         | or Joystick (for Anafi)        |
+------------+-------------------------+--------------------------------+

Main input ROS topics:

.. list-table::
   :header-rows: 1

   * - Topic name
     - Message Type
     - Note
     - Data Definition
   * - gnc/set_pilot_mode
     - std_msgs/String
     - Set the piloting mode of the ace_pilot node.
     - msg.data = pilot mode required
   * - /joy
     - sensor_msgs/Joy
     - Game pad input published by the game pad driver node.
     -


Main output ROS topics:

.. list-table::
   :header-rows: 1

   * - Topic name
     - Message Type
     - Note
     - Data Definition
   * - gnc/current_pilot_mode
     - std_msgs/String
     - Current piloting mode of the ace_pilot node.
     - msg.data = current pilot mode
   * - cmd/drone/setpoint
     - mavros_msgs/GlobalPositionTarget
     - The speed and yaw rate command in the body frame to the drone.
     -
   * - cmd/drone/action
     - std_msgs/String
     - The action command to the drone.
     - msg.data = action command


"""

from launch import LaunchDescription

# from launch.actions import Shutdown
from launch_ros.actions import Node

# from launch_ros.substitutions import FindPackageShare

from launch.actions import DeclareLaunchArgument

# from launch.actions import IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.conditions import LaunchConfigurationEquals


def generate_launch_description():

    drone_name_arg = DeclareLaunchArgument(
        "drone_name",
        default_value="dji",
        description="Name of the drone (will be used as namespace)",
    )

    run_gui_arg = DeclareLaunchArgument(
        "run_gui", default_value="false", description="Start Qt GUI"
    )

    run_ds4_arg = DeclareLaunchArgument(
        "run_ds4", default_value="true", description="Start DS4 node"
    )

    pilot_type_launch_arg = DeclareLaunchArgument(
        "pilot_type",
        default_value="Setpoint",
        description="Drone pilotting type" + "[Setpoint/Joystick]",
    )

    gui_cfg_arg = DeclareLaunchArgument(
        "gui_cfg_file",
        default_value="NA",
        description="Configration file for QT GUI",
    )

    dead_zone_launch_arg = DeclareLaunchArgument(
        "dead_zone",
        default_value="0.0",
        description="Dead zone for the speed command, lower values will be set to zero",
    )

    spd_precision_launch_arg = DeclareLaunchArgument(
        "spd_precision",
        default_value="0.0",
        description="Precision for the speed command",
    )

    repeat_spd_cmd_launch_arg = DeclareLaunchArgument(
        "repeat_spd_cmd",
        default_value="true",
        description="Repeat the last speed command even if no changes in the command",
    )

    pilot_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="ace_pilot",
        name="ace_pilot",
        output="screen",
        parameters=[
            {
                "pilot_type": LaunchConfiguration("pilot_type"),
                "ctrl_param": "ctrl_param_default.yaml",
                "dead_zone": LaunchConfiguration("dead_zone"),
                "spd_precision": LaunchConfiguration("spd_precision"),
                "repeat_spd_cmd": LaunchConfiguration("repeat_spd_cmd"),
            }
        ],
    )

    ds4_ctrl_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="ds4_to_setpoint",
        name="ds4_ctrl",
        output="screen",
        condition=LaunchConfigurationEquals("run_ds4", "true"),
        # parameters=[param_dict],
    )

    qt_node = Node(
        package="drone_gui",
        namespace=LaunchConfiguration("drone_name"),
        executable="dev_gui",
        name="dev_gui",
        output="screen",
        condition=LaunchConfigurationEquals("run_gui", "true"),
        parameters=[{"cfg_file": LaunchConfiguration("gui_cfg_file")}],
        # The following line makes the node required
        # on_exit=Shutdown(),
    )

    generator_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="ctrl_generator",
        name="ctrl_generator",
        output="screen",
        # parameters=[param_dict],
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

    return LaunchDescription(
        [
            drone_name_arg,
            run_gui_arg,
            run_ds4_arg,
            gui_cfg_arg,
            pilot_type_launch_arg,
            dead_zone_launch_arg,
            spd_precision_launch_arg,
            repeat_spd_cmd_launch_arg,
            pilot_ctrl_node,
            ds4_ctrl_node,
            qt_node,
            generator_node,
            takeoff_node,
            land_node,
        ]
    )
