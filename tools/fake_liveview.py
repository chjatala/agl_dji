#!/usr/bin/env python3
"""Publish a synthetic H.264 stream on the liveview topic, with no aircraft attached.

PSDK liveview is unverified against this Mavic 3E: `DjiLiveview_Init` may or may not
succeed over the E-Port link, and there is no way to find out without the drone powered
up and connected. That would leave the whole decode path - `liveview_decoder`, the
ffmpeg pipeline, the JPEG framing, the drone_gui topic wiring - untestable until the one
moment it needs to work.

This stands in for the aircraft. It generates an H.264 elementary stream with ffmpeg and
publishes it on the same topic and in the same shape psdk_bridge does: chunks of
`sensor_msgs/CompressedImage` with `format: "h264"`, roughly the size and cadence
`PsdkWrapper_LiveviewH264Callback` produces. Everything downstream then behaves exactly
as it will in flight.

What it does NOT test is PSDK liveview itself - whether the aircraft will hand us a
stream at all. That is the one part only a real flight answers.

Run it inside a container that has ffmpeg and the workspace sourced, on the same
ROS_DOMAIN_ID as the decoder:

    docker run --rm --network host -e ROS_DOMAIN_ID=0 \\
        -v "$PWD/tools:/tools:ro" vitro_arm64:humble \\
        python3 /tools/fake_liveview.py --duration 20

Then watch the decoder's output:

    ros2 topic hz /dji/camera/image/compressed
"""

import argparse
import subprocess
import sys
import time

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--topic', default='/dji/camera_h264',
                    help='where psdk_bridge would publish (default: %(default)s)')
    ap.add_argument('--size', default='1280x720',
                    help='frame size of the generated stream (default: %(default)s)')
    ap.add_argument('--fps', type=int, default=30)
    ap.add_argument('--bitrate', default='4000k',
                    help='matches liveview_bitrate_kbps (default: %(default)s)')
    ap.add_argument('--gop', type=int, default=30,
                    help='keyframe interval in frames; the decoder cannot show anything '
                         'until the first IDR, so a short GOP makes testing quicker')
    ap.add_argument('--chunk', type=int, default=4096,
                    help='bytes per ROS message, approximating one PSDK callback')
    ap.add_argument('--duration', type=float, default=0.0,
                    help='seconds to publish, 0 = until interrupted')
    ap.add_argument('--encoder', default='libx264',
                    help='use h264_v4l2m2m to encode on the Pi GPU instead')
    args = ap.parse_args()

    argv = [
        'ffmpeg', '-hide_banner', '-loglevel', 'warning',
        # -re paces generation at real time. Without it ffmpeg produces the whole stream
        # as fast as it can and the test says nothing about keeping up with a live feed.
        '-re',
        '-f', 'lavfi', '-i', f'testsrc2=size={args.size}:rate={args.fps}',
        '-c:v', args.encoder,
    ]
    if args.encoder == 'libx264':
        # zerolatency stops the encoder buffering frames, so bytes appear immediately -
        # the same property the aircraft's encoder has.
        argv += ['-preset', 'ultrafast', '-tune', 'zerolatency']
    argv += [
        '-b:v', args.bitrate,
        '-g', str(args.gop),
        '-f', 'h264', 'pipe:1',
    ]

    try:
        proc = subprocess.Popen(argv, stdout=subprocess.PIPE, bufsize=0)
    except FileNotFoundError:
        print('ffmpeg not found - run this inside an image built with it '
              '(see docker/Dockerfile.vitro-arm64)', file=sys.stderr)
        return 1

    rclpy.init()
    node = Node('fake_liveview')
    pub = node.create_publisher(CompressedImage, args.topic, 10)
    node.get_logger().info(f'publishing synthetic h264 on {args.topic} '
                           f'({args.size}@{args.fps}, {args.bitrate}, gop {args.gop})')

    started = time.monotonic()
    total = 0
    msgs = 0
    try:
        while rclpy.ok():
            data = proc.stdout.read(args.chunk)
            if not data:
                break
            msg = CompressedImage()
            msg.header.stamp = node.get_clock().now().to_msg()
            msg.format = 'h264'
            msg.data = data
            pub.publish(msg)
            total += len(data)
            msgs += 1
            if args.duration and time.monotonic() - started >= args.duration:
                break
    except KeyboardInterrupt:
        pass
    finally:
        elapsed = max(time.monotonic() - started, 1e-6)
        node.get_logger().info(
            f'sent {msgs} chunks, {total / 1024.0:.0f} KiB in {elapsed:.1f}s '
            f'({total * 8 / 1000.0 / elapsed:.0f} kbps)')
        proc.terminate()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()
    return 0


if __name__ == '__main__':
    sys.exit(main())
