"""Launch detector/sf/ctrl nodes for marker based precision landing (PL)

This module use the ArUco markers placed on the landing spot to achieve the precision
landing. The drone will be controlled to a configurable final position above the landing
spot and then land.

This module provides two ways to control the PL process: a subscription to the
*gnc/pl_cmd* topic and a action server (gnc/action/precision_landing). It's recommended
to use the action server to control the PL process, as it provides a feedback of the
progress and can do some safety checks. The *gnc/pl_cmd* topic is provided for advanced
users.

This launch file will start the following ROS nodes:

+--------------------------+--------------------------+---------------------------+
| Node name                | Executable               | Note                      |
+==========================+==========================+===========================+
| precision_landing_server | drone_control.           | An action server to do PL |
|                          | precision_landing_server |                           |
+--------------------------+--------------------------+---------------------------+
| precision_landing        | drone_control.           | PL controller to generate |
|                          | precision_landing        | control command           |
+--------------------------+--------------------------+---------------------------+
| aruco_detector_pl        | sensor_fusion.           | Aruco detector for PL     |
|                          | aruco_detector           |                           |
+--------------------------+--------------------------+---------------------------+
| sf_pl                    | sensor_fusion.           | Localization node         |
|                          | drone_fusion             |                           |
+--------------------------+--------------------------+---------------------------+

ROS launch arguments:

+-------------------+---------------------------------+-----------------------+
| Name              | Description                     | Default value         |
+===================+=================================+=======================+
| drone_name        | Name of the drone (will         | dji                   |
|                   | be used as namespace)           |                       |
+-------------------+---------------------------------+-----------------------+
| sf_cfg            | Sensor fusion cfg file          | dji/sf_config_pl.yaml |
+-------------------+---------------------------------+-----------------------+
| aruco_dict        | Aruco dictionary name for       | DICT_6X6_100          |
|                   | PL markers                      |                       |
+-------------------+---------------------------------+-----------------------+
| aruco_border_bits | Aruco marker border bits        | 1                     |
+-------------------+---------------------------------+-----------------------+
| auto_land         | Automatically land when         | false                 |
|                   | reach PL target. Only effective |                       |
|                   | for the precision_landing node  |                       |
+-------------------+---------------------------------+-----------------------+


Main input ROS topics:

.. list-table::
   :header-rows: 1

   * - Topic name
     - Message Type
     - Note
     - Data Definition
   * - gnc/pl_cmd
     - std_msgs/Float32MultiArray
     - Command to the PL controller
     - A list of control parameters, **MOST** has 4 or 8 elements:

       - 0: Final pos target x coordinate (m) (default: 0.0)
       - 1: Final pos target y coordinate (m) (default: 0.0)
       - 2: Final pos target z coordinate (m) (default: 0.0)
       - 3: Final pos target yaw angle (rad) (default: 0.7)
       - 4: (optional) PL controller x pos K gain (default: 0.8)
       - 5: (optional) PL controller y pos K gain (default: 0.8)
       - 6: (optional) PL controller z pos K gain (default: 0.7)
       - 7: (optional) PL controller yaw K gain (default: 0.7)

Main output ROS topics:

.. list-table::
   :header-rows: 1

   * - Topic name
     - Message Type
     - Note
     - Data Definition
   * - gnc/pl_ctrl
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
from launch.substitutions import LaunchConfiguration

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    drone_name_arg = DeclareLaunchArgument(
        "drone_name",
        default_value="dji",
        description="Name of the drone (will be used as namespace)",
    )

    sf_cfg_arg = DeclareLaunchArgument(
        "sf_cfg",
        default_value="dji/sf_config_pl.yaml",
        description="Sensor fusion cfg file",
    )

    sf_launch_arg = {
        "sf_cfg": LaunchConfiguration("sf_cfg"),
        "ekf_name": "pl",
    }

    aruco_dict_launch_arg = DeclareLaunchArgument(
        "aruco_dict", default_value="DICT_6X6_100", description="Aruco dictionary name"
    )

    aruco_border_bits_launch_arg = DeclareLaunchArgument(
        "aruco_border_bits", default_value="1", description="Aruco marker border bits"
    )

    auto_land_launch_arg = DeclareLaunchArgument(
        "auto_land",
        default_value="false",
        description="Automatically land when reach PL target",
    )

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

    detector_node = Node(
        package="sensor_fusion",
        namespace=LaunchConfiguration("drone_name"),
        executable="aruco_detector",
        name="aruco_detector_pl",
        output="screen",
        parameters=[
            {
                "dictionary": LaunchConfiguration("aruco_dict"),
                "border_bits": LaunchConfiguration("aruco_border_bits"),
                "pub_img_topic": "camera/aruco_detector_pl",
                "detection_topic": "perception/aruco_detection_pl",
            }
        ],
    )

    land_node = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="precision_landing",
        name="precision_landing",
        output="screen",
        parameters=[
            {
                "pose_topic": "gnc/sf_pl/pose",
                "auto_land": LaunchConfiguration("auto_land"),
            }
        ],
        # on_exit=Shutdown(),
    )

    pl_server = Node(
        package="drone_control",
        namespace=LaunchConfiguration("drone_name"),
        executable="precision_landing_server",
        name="precision_landing_server",
        output="screen",
        parameters=[{"pose_topic": "gnc/sf_pl/pose"}],
    )

    return LaunchDescription(
        [
            drone_name_arg,
            sf_cfg_arg,
            aruco_dict_launch_arg,
            aruco_border_bits_launch_arg,
            auto_land_launch_arg,
            sf_launch,
            detector_node,
            land_node,
            pl_server,
        ]
    )
