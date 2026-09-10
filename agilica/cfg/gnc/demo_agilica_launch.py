"""Launch nodes for lab8 Agilica demo"""

from launch import LaunchDescription
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution
from launch.substitutions import LaunchConfiguration

from launch.actions import IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource

AUTODOC = True


def generate_launch_description():

    wp_launch = GroupAction(
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    [
                        PathJoinSubstitution(
                            [
                                FindPackageShare("drone_gnc_launch"),
                                "launch",
                                "mod_waypoint_launch.py",
                            ]
                        )
                    ]
                ),
                launch_arguments={
                    "sf_cfg": "demo_agilica/sf_config.yaml",
                    "run_mission": "true",
                    "auto_land": "true",
                    "aruco_dict": "DICT_7X7_1000",
                    "aruco_border_bits": "2",
                    # Default deliberately points at the SMALL indoor box
                    # (+/-2.7 m, 2 m altitude, 0.40 m/s), not the outdoor set.
                    # waypoint_outdoor.csv flies to (-15,-15) at 10 m at 1.0 m/s, which is
                    # not survivable in a netted cage - and it is what loads if a waypoint
                    # file selected in the GUI fails to resolve on this machine, because
                    # mission_ctrl keeps the previously loaded mission on a failed load.
                    #
                    # waypoint_cage.csv (the file actually used for cage flights) still
                    # lives only on the laptop and is in no version control - copy it into
                    # this directory and switch this default to it.
                    "waypoint_file": "demo_agilica/waypoint_indoor.csv",
                }.items(),
            )
        ]
    )

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
                launch_arguments={
                    "run_gui": "false",
                }.items(),
            )
        ]
    )

    # takeoff_server and land_server are deliberately NOT declared here: pilot_launch
    # already starts both via drone_control's drone_pilot_launch.py. Declaring them again
    # produced two /dji/takeoff_server and two /dji/land action servers on the same names,
    # which `ros2 action info /dji/take_off -t` reports as 2 servers. Harmless-looking, but
    # it means a goal can be picked up by either instance.
    #
    # This went unnoticed while drone_gnc ran on the laptop (fixed there in the 28 Aug
    # session); it would have started biting the moment vitro_location=pi.
    return LaunchDescription(
        [
            pilot_launch,
            wp_launch,
        ]
    )
