import os

from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    drone_name_arg = \
        DeclareLaunchArgument(
            "drone_name",
            default_value="dji",
            description="Name of the drone (will be used as namespace)")

    ekf_name_launch_arg = \
        DeclareLaunchArgument("ekf_name", default_value="marker",
                              description="Name of the EKF")

    ekf_name_value = LaunchConfiguration("ekf_name")

    # If the node_name arg is defined for this launch file, the default
    # node_name in the drone_fusion_launch doesn't work. WHY???
    # node_name_launch_arg = \
    #     DeclareLaunchArgument("node_name", default_value="sf_aaaaa",
    #                           description="Name of the EKF")
    #
    # node_name_value = LaunchConfiguration("node_name")

    uwb_arg = {"config_file": "beaconlist_vitro_0422.yaml"}

    uwb_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([
            FindPackageShare('usbpublisher_pkg'), 'launch', 'uwb.launch.py'])),
        launch_arguments=uwb_arg.items(),
        )

    sf_arg = {"sf_cfg": "dev/sf_config_marker.yaml",
              "ekf_name": ekf_name_value,
              "drone_name": LaunchConfiguration("drone_name"),
              }

    sf_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([PathJoinSubstitution([
            FindPackageShare('sensor_fusion'), 'launch',
            'drone_fusion_v2_launch.py'])]),
        launch_arguments=sf_arg.items(),
        )

    detector_node = \
        Node(
             package='sensor_fusion',
             namespace=LaunchConfiguration("drone_name"),
             #  namespace='turtlesim1',
             executable='aruco_detector',
             name='aruco_detector',
             # name=TextSubstitution([ekf_name_value]),
             output='screen',
        )

    land_node = \
        Node(
             package='drone_control',
             #  namespace='turtlesim1',
             namespace=LaunchConfiguration("drone_name"),
             executable='precision_landing',
             name='precision_landing',
             # name=TextSubstitution([ekf_name_value]),
             output='screen',
             parameters=[{"pose_topic": "sensor_fusion/marker/pose"}]
        )

    pilot_ctrl_node = \
        Node(
             package='drone_control',
             namespace=LaunchConfiguration("drone_name"),
             executable='ace_pilot',
             name='ace_pilot',
             output='screen',
             parameters=[{"ctrl_param": "ctrl_param_default.yaml"}],
        )

    return LaunchDescription([
        drone_name_arg,
        ekf_name_launch_arg,
        # uwb_launch,
        sf_launch,
        detector_node,
        land_node,
        pilot_ctrl_node,
    ])
