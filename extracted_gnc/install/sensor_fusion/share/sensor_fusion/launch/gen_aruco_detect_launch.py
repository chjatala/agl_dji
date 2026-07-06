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

    ns_launch_arg = DeclareLaunchArgument(
        "namespace", default_value="", description="Top-level namespace"
    )

    node_name_launch_arg = DeclareLaunchArgument(
        "node_name", default_value="aruco_detector", description="Node name"
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

    img_topic_launch_arg = DeclareLaunchArgument(
        "image_topic", default_value="camera/image", description="Input image topic"
    )

    detection_topic_launch_arg = DeclareLaunchArgument(
        "detection_topic",
        default_value="perception/aruco_detection",
        description="Aruco detection topic",
    )

    detector_node = Node(
        package="sensor_fusion",
        namespace=LaunchConfiguration("namespace"),
        executable="aruco_detector",
        name=LaunchConfiguration("node_name"),
        output="screen",
        parameters=[
            {
                "dictionary": LaunchConfiguration("aruco_dict"),
                "border_bits": LaunchConfiguration("aruco_border_bits"),
                "use_sim_time": LaunchConfiguration("use_sim_time"),
                "image_topic": LaunchConfiguration("image_topic"),
                "detection_topic": LaunchConfiguration("detection_topic"),
            }
        ],
    )

    return LaunchDescription(
        [
            ns_launch_arg,
            node_name_launch_arg,
            aruco_dict_launch_arg,
            aruco_border_bits_launch_arg,
            use_sim_time_launch_arg,
            img_topic_launch_arg,
            detection_topic_launch_arg,
            detector_node,
        ]
    )
