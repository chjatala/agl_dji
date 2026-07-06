"""Launch file for drone gui"""

from launch import LaunchDescription
from launch_ros.actions import Node

# from launch_ros.substitutions import FindPackageShare

from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

# from launch.substitutions import TextSubstitution, PythonExpression
# from launch.launch_context import LaunchContext
# from launch.conditions import LaunchConfigurationEquals


def generate_launch_description():

    drone_name_arg = DeclareLaunchArgument(  # type: ignore
        "drone_name",
        default_value="dji",
        description="Name of the drone (will be used as namespace)",
    )

    gui_cfg_arg = DeclareLaunchArgument(  # type: ignore
        "gui_cfg_file",
        default_value="NA",
        description="Configration file for QT GUI",
    )

    gui_node = Node(
        package="drone_gui",
        namespace=LaunchConfiguration("drone_name"),
        executable="dev_gui",
        name="drone_gui",
        output="screen",
        parameters=[
            {"cfg_file": LaunchConfiguration("gui_cfg_file")},
        ],
    )

    return LaunchDescription(
        [
            drone_name_arg,
            gui_cfg_arg,
            gui_node,
        ]
    )
