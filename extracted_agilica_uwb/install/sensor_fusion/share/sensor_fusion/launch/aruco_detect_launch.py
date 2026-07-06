"""Start the aruco detector node for drone.

This launch file will start one node:

.. list-table::
   :header-rows: 1

   * - Node name
     - Executable
     - Note
   * -
     -
     -

ROS launch arguments:

.. list-table::
   :header-rows: 1

   * - Name
     - Description
     - Default
   * - drone_name
     - Name of the drone (will be used as namespace)
     - dji
   * -
     -
     -
   * -
     -
     -

Main input ROS topics:

.. list-table::
   :header-rows: 1

   * - Topic name
     - Message Type
     - Note
     - Data Definition
   * -
     -
     -
     -

Main output ROS topics:

.. list-table::
   :header-rows: 1

   * - Topic name
     - Message Type
     - Note
     - Data Definition
   * -
     -
     -
     -

"""

from launch import LaunchDescription
from launch_ros.actions import Node


from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

# from launch.substitutions import TextSubstitution, PythonExpression
# from launch.launch_context import LaunchContext
# from launch.conditions import LaunchConfigurationEquals


def generate_launch_description():

    drone_name_arg = DeclareLaunchArgument(
        "drone_name",
        default_value="dji",
        description="Name of the drone (will be used as namespace)",
    )

    aruco_dict_launch_arg = DeclareLaunchArgument(
        "aruco_dict", default_value="DICT_6X6_100", description="Aruco dictionary name"
    )

    aruco_border_bits_launch_arg = DeclareLaunchArgument(
        "aruco_border_bits", default_value="1", description="Aruco marker border bits"
    )

    use_sim_time_launch_arg = DeclareLaunchArgument(
        "use_sim_time", default_value="false", description="Use simulation time"
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
                "use_sim_time": LaunchConfiguration("use_sim_time"),
            }
        ],
    )

    return LaunchDescription(
        [
            drone_name_arg,
            aruco_dict_launch_arg,
            aruco_border_bits_launch_arg,
            use_sim_time_launch_arg,
            detector_node,
        ]
    )
