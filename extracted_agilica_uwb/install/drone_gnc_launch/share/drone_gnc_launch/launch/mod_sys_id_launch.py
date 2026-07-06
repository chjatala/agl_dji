"""Launch system identification related nodes

In dev, needs to add more nodes here


This launch file will start the following ROS nodes:

.. list-table::
   :header-rows: 1

   * - Node name
     - Executable
     - Note
   * - aruco_detector_main
     - sensor_fusion.aruco_detector
     - To detect Aruco markers for the sensor fusion node

ROS launch arguments:

.. list-table::
   :header-rows: 1

   * - Name
     - Description
     - Default
   * - drone_name
     - Name of the drone (will be used as namespace)
     - dji
   * - aruco_dict
     - Aruco dictionary name
     - DICT_6X6_100
   * - aruco_border_bits
     - Aruco marker border bits
     - 1

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

    aruco_dict_launch_arg = DeclareLaunchArgument(
        "aruco_dict", default_value="DICT_6X6_100", description="Aruco dictionary name"
    )

    aruco_border_bits_launch_arg = DeclareLaunchArgument(
        "aruco_border_bits", default_value="1", description="Aruco marker border bits"
    )

    marker_data_launch_arg = DeclareLaunchArgument(
        "marker_data",
        default_value="lab8/marker_data_pl.yaml",
        description="Aruco marker data file",
    )

    detector_node = Node(
        package="sensor_fusion",
        namespace=LaunchConfiguration("drone_name"),
        executable="aruco_detector",
        name="aruco_detector_sysid",
        output="screen",
        parameters=[
            {
                "dictionary": LaunchConfiguration("aruco_dict"),
                "border_bits": LaunchConfiguration("aruco_border_bits"),
                "pub_pos_flag": True,
                "marker_data": LaunchConfiguration("marker_data"),
                "detection_topic": "aruco_sysid",
            }
        ],
    )

    sys_id_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="sys_id_server",
        name="sys_id_server",
        output="screen",
        parameters=[{}],
    )
    return LaunchDescription(
        [
            drone_name_arg,
            aruco_dict_launch_arg,
            aruco_border_bits_launch_arg,
            marker_data_launch_arg,
            detector_node,
            sys_id_node,
        ]
    )
