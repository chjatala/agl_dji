from glob import glob
import os

from setuptools import setup

package_name = "nmea_parser"

# Reconstructed as a buildable ament_python package. The original arrived only as an
# *installed* tree (extracted_gnc/install/nmea_parser, laid out under
# lib/python3.10/site-packages), with no setup.py - so it could not be rebuilt for a
# different Python. Everything here is the original content: nmea_parser.py, package.xml,
# the launch file, the params file, and the console_scripts mapping from the original
# egg-info/entry_points.txt. Nothing about the parser itself was changed.
#
# Unlike the other VITRO packages, this one shipped as plain .py source rather than
# Python-3.10 .pyc, which is why it can follow us to Jazzy/Python 3.12 at all.
setup(
    name=package_name,
    version="0.0.1",
    packages=[package_name],
    data_files=[
        (
            os.path.join("share", "ament_index", "resource_index", "packages"),
            [os.path.join("resource", package_name)],
        ),
        (os.path.join("share", package_name), ["package.xml"]),
        (os.path.join("share", package_name, "launch"), glob("launch/*.py")),
        (os.path.join("share", package_name, "config"), glob("config/*.yaml")),
    ],
    install_requires=["setuptools", "pyserial"],
    zip_safe=True,
    maintainer="Package Maintainer",
    maintainer_email="maintainer@example.com",
    description="NMEA parser ROS2 package with pose publisher",
    license="MIT",
    entry_points={
        "console_scripts": [
            "nmea_parser = nmea_parser.nmea_parser:main",
        ],
    },
)
