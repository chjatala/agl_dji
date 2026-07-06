"""Start the sensor fusion node for drone.

This launch file will start one node:

.. list-table::
   :header-rows: 1

   * - Node name
     - Executable
     - Note
   * - sf_EKF_NAME
     - sensor_fusion.drone_fusion
     - Sensor fusion node with configurable EKF name.

ROS launch arguments:

.. list-table::
   :header-rows: 1

   * - Name
     - Description
     - Default
   * - drone_name
     - Name of the drone (will be used as namespace)
     - dji
   * - sf_cfg
     - Sensor fusion cfg file name.
     - 
   * - ekf_name
     - Name of the EKF, will be a part of the node name and ROS topics
     - 

Main input ROS topics:

.. list-table::
   :header-rows: 1

   * - Topic name
     - Message Type
     - Note
     - Data Definition
   * - gnc/sf_EKF_NAME/reset
     - std_msgs/Float64
     - (For advanced user) Reset the EKF
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
   * - gnc/sf_EKF_NAME/pose
     - Nav_msgs/Odometry
     - The pose and speed of the drone in the local frame
     - The data is defined in the FRD frame.


.. note::
   More documents for advanced interface will be available in the future.

"""

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import Shutdown

# from launch_ros.substitutions import FindPackageShare

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

    sf_cfg_launch_arg = DeclareLaunchArgument(
        "sf_cfg", description="Sensor fusion cfg file name."
    )

    sf_cfg_value = LaunchConfiguration("sf_cfg")

    ekf_name_launch_arg = DeclareLaunchArgument(
        "ekf_name", default_value="main", description="Name of the EKF"
    )

    ekf_name_value = LaunchConfiguration("ekf_name")

    node_name_launch_arg = DeclareLaunchArgument(
        "node_name", default_value=["sf_", ekf_name_value], description="Name of node"
    )

    node_name_value = LaunchConfiguration("node_name")

    sf_node = Node(
        package="sensor_fusion",
        namespace=LaunchConfiguration("drone_name"),
        executable="drone_fusion",
        name=node_name_value,
        output="screen",
        parameters=[
            {"sf_cfg": sf_cfg_value, "ekf_name": ekf_name_value},
        ],
        # on_exit=Shutdown(),
    )

    return LaunchDescription(
        [
            drone_name_arg,
            sf_cfg_launch_arg,
            ekf_name_launch_arg,
            node_name_launch_arg,
            sf_node,
        ]
    )
