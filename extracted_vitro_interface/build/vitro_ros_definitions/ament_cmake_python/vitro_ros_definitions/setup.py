from setuptools import find_packages
from setuptools import setup

setup(
    name='vitro_ros_definitions',
    version='0.0.0',
    packages=find_packages(
        include=('vitro_ros_definitions', 'vitro_ros_definitions.*')),
)
