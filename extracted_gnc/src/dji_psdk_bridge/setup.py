from setuptools import setup

package_name = 'dji_psdk_bridge'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='You',
    maintainer_email='you@example.com',
    description='PSDK bridge scaffold',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'psdk_bridge = dji_psdk_bridge.psdk_bridge_node:main',
            # Decodes the liveview H.264 stream to JPEG so drone_gui and Foxglove can
            # display it. Separate executable on purpose - it must be able to die
            # without taking the flight bridge with it, and to run on another machine.
            'liveview_decoder = dji_psdk_bridge.liveview_decoder_node:main',
        ],
    },
)
