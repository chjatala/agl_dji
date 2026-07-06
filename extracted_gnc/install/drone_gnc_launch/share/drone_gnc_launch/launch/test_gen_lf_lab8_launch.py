"""Launch nodes for lab8 warehouse demo

"""

from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

from launch.actions import IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource

AUTODOC = True


def generate_launch_description():

    pilot_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        PathJoinSubstitution(
                            [
                                FindPackageShare("drone_control"),
                                "launch",
                                "drone_pilot_launch.py",
                            ]
                        )
                    ]
                ),
                launch_arguments={"run_gui": "true"}.items(),
            )
        ]
    )

    lf_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        PathJoinSubstitution(
                            [
                                FindPackageShare("drone_gnc_launch"),
                                "launch",
                                "mod_temp_line_follow_launch.py",
                            ]
                        )
                    ]
                ),
                launch_arguments={
                    "sf_cfg": "ugm4_greenhouse_test/sf_config_lf.yaml",
                    "sf_gen_cfg": "ugm4_greenhouse_test/sf_config_twoline.yaml",
                }.items(),
            )
        ]
    )

    return LaunchDescription(
        [
            pilot_launch,
            lf_launch,
        ]
    )
