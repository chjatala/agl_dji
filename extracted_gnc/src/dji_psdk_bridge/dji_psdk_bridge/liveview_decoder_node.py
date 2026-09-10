"""Turn the PSDK liveview H.264 stream into pictures drone_gui and Foxglove can show.

``psdk_bridge`` publishes liveview exactly as the aircraft sends it: chunks of an H.264
elementary stream, as ``sensor_msgs/CompressedImage`` with ``format: "h264"``. Nothing in
the VITRO GUI can display that. ``drone_gui``'s image widget calls
``cv_bridge.compressed_imgmsg_to_cv2``, which is ``cv2.imdecode`` underneath - it knows
JPEG and PNG and returns ``None`` for anything else, so an h264 message does not render
as a broken picture, it raises inside the widget's callback.

So this node sits between the two: subscribe to the h264 chunks, decode them, and
republish JPEG frames on a second topic. Both ``drone_gui`` (which lists every
``sensor_msgs/msg/CompressedImage`` topic in its selector) and Foxglove's Image panel
then work with no changes on their side.

Why a separate node rather than a few more lines in psdk_bridge:

* psdk_bridge holds joystick control authority. A decoder that wedges, leaks or gets
  OOM-killed must not take the flight link with it.
* Decoding is the expensive part and the aircraft link is not. Keeping them apart means
  this can run on the laptop instead of the Pi later, with no code change.

  That move is a CPU trade, not a bandwidth one - and not in the direction you would
  guess. At the shipped settings the JPEG output is *smaller* than the H.264 it came
  from: 5 fps at 960 px measures ~1.1 Mbps against the stream's ~4 Mbps, because the
  frame rate is cut 6x. Decoding on the Pi therefore reduces what crosses the WiFi.
  Push output_fps and output_width back up toward the source and that inverts, since
  JPEG codes each frame on its own with no motion compensation.
* It stays off unless you ask for it (the "liveview" compose profile).

Decoding is done by an ``ffmpeg`` subprocess rather than PyAV or OpenCV: the runtime
image already has to grow to gain any decoder at all, and ffmpeg is the smallest thing
that decodes, rescales, rate-limits and JPEG-encodes in one process. It also means this
file needs no numpy and no cv2.

Cost, on a Pi 4, matters. Software-decoding 1080p30 is not free, and this shares four
cores with a 40 Hz EKF once drone_gnc moves onto the Pi. Two knobs, in order of how much
they save:

* ``decode_keyframes_only`` - decode only IDR frames and skip everything between them.
  Costs almost nothing and still gives a picture every second or two, which is enough to
  see where the camera is pointing. Start here if CPU is tight.
* ``hwaccel: v4l2m2m`` - the VideoCore hardware decoder. Needs /dev/video10 passed into
  the container. Faster, but the driver is less forgiving of a stream that lost bytes.

``output_fps`` and ``output_width`` bound what goes on the wire but NOT what is decoded:
ffmpeg's ``fps`` filter drops frames after the decoder has already done the work.
"""

import threading
import time
from collections import deque

import rclpy
from rclpy.node import Node
from rclpy.qos import HistoryPolicy, QoSProfile, ReliabilityPolicy

from sensor_msgs.msg import CompressedImage
from std_srvs.srv import Trigger

#: JPEG start-of-image and end-of-image markers. ffmpeg's mjpeg muxer writes complete
#: JPEGs back to back with nothing framing them, so the marker pair is the only frame
#: boundary available. A bare 0xFFD9 cannot occur inside entropy-coded data - encoders
#: byte-stuff a 0x00 after any 0xFF there - so scanning for it is safe.
JPEG_SOI = b'\xff\xd8\xff'
JPEG_EOI = b'\xff\xd9'


class LiveviewDecoder(Node):

    def __init__(self):
        super().__init__('liveview_decoder')

        # Relative by default, so the node picks up the /dji namespace the compose stack
        # runs it in and matches psdk_bridge's own default (LEGACY_TOPICS['camera_h264']).
        # Prefix with "/" to place either name at the root instead.
        self.declare_parameter('input_topic', 'camera_h264')
        # "<base>/compressed" is the image_transport convention. Foxglove's Image panel
        # keys off that suffix, and drone_gui lists the topic by type regardless.
        self.declare_parameter('output_topic', 'camera/image/compressed')
        self.declare_parameter('frame_id', 'camera')

        # Output shaping. 5 Hz at 960 px wide is a situational-awareness view, not a
        # video feed, and that is the point: it shares WiFi with the control loop.
        self.declare_parameter('output_fps', 5.0)
        self.declare_parameter('output_width', 960)
        # ffmpeg's mjpeg quality scale, 2 (best) to 31 (worst) - NOT 0-100.
        self.declare_parameter('jpeg_quality', 6)

        # CPU controls - see the module docstring.
        self.declare_parameter('decode_keyframes_only', False)
        self.declare_parameter('hwaccel', '')  # '' or 'v4l2m2m'

        self.declare_parameter('ffmpeg_path', 'ffmpeg')
        # Ceiling on undecoded input held in memory. The aircraft keeps sending whether
        # or not ffmpeg keeps up; without a bound, a stalled decoder becomes an OOM on a
        # machine with no swap. Overflow drops the OLDEST chunks: new bytes are the ones
        # worth keeping, and the resulting corruption is repaired by the next keyframe.
        self.declare_parameter('max_buffered_bytes', 4 * 1024 * 1024)

        # A decoder that joins a stream mid-GOP has nothing to show until the next IDR.
        # psdk_bridge exposes a service that asks the aircraft for one; use it rather
        # than waiting out the encoder's own keyframe interval.
        self.declare_parameter('keyframe_service', 'liveview_keyframe')
        self.declare_parameter('keyframe_request_interval', 3.0)

        self.declare_parameter('restart_delay', 2.0)
        self.declare_parameter('stats_interval', 10.0)

        # psdk_bridge publishes reliably. A best-effort subscriber is still compatible
        # with that and skips retransmission, trading a corrupt frame for lower latency
        # on a lossy link. Off by default: reliable keeps the stream decodable, and a
        # dropped chunk costs a whole GOP.
        self.declare_parameter('input_best_effort', False)

        self.input_topic = self.get_parameter('input_topic').value
        self.output_topic = self.get_parameter('output_topic').value
        self.frame_id = self.get_parameter('frame_id').value
        self.output_fps = float(self.get_parameter('output_fps').value)
        self.output_width = int(self.get_parameter('output_width').value)
        self.jpeg_quality = int(self.get_parameter('jpeg_quality').value)
        self.keyframes_only = bool(self.get_parameter('decode_keyframes_only').value)
        self.hwaccel = str(self.get_parameter('hwaccel').value or '')
        self.ffmpeg_path = str(self.get_parameter('ffmpeg_path').value)
        self.max_buffered_bytes = int(self.get_parameter('max_buffered_bytes').value)
        self.keyframe_service = self.get_parameter('keyframe_service').value
        self.keyframe_interval = float(self.get_parameter('keyframe_request_interval').value)
        self.restart_delay = float(self.get_parameter('restart_delay').value)
        self.stats_interval = float(self.get_parameter('stats_interval').value)

        self._proc = None
        self._proc_lock = threading.Lock()
        self._threads = []
        self._stopping = threading.Event()
        self._next_start = 0.0

        # Bounded input queue, guarded by its own condition so the ROS callback never
        # blocks on a pipe write. deque + explicit byte count rather than queue.Queue:
        # the bound that matters is bytes, not messages, and chunks vary by 100x.
        self._queue = deque()
        self._queued_bytes = 0
        self._queue_cv = threading.Condition()

        self._bytes_in = 0
        self._bytes_dropped = 0
        self._frames_out = 0
        self._last_stats = time.monotonic()
        self._last_frame_time = None
        self._last_keyframe_request = 0.0
        self._starved_warned = False

        qos = QoSProfile(
            depth=100,
            history=HistoryPolicy.KEEP_LAST,
            reliability=(ReliabilityPolicy.BEST_EFFORT
                         if bool(self.get_parameter('input_best_effort').value)
                         else ReliabilityPolicy.RELIABLE),
        )
        self.pub = self.create_publisher(CompressedImage, self.output_topic, 10)
        self.sub = self.create_subscription(
            CompressedImage, self.input_topic, self._on_chunk, qos)

        self._keyframe_client = self.create_client(Trigger, self.keyframe_service)

        self.create_timer(1.0, self._supervise)

        self.get_logger().info(
            f'liveview_decoder: {self.input_topic} (h264) -> {self.output_topic} (jpeg); '
            f'{"keyframe rate" if self.keyframes_only else f"{self.output_fps} fps"}, '
            f'width {self.output_width or "source"}, '
            f'q{self.jpeg_quality}, '
            f'{"keyframes only" if self.keyframes_only else "all frames"}, '
            f'hwaccel {self.hwaccel or "none"}')

    # -- ffmpeg lifecycle -------------------------------------------------------

    def _ffmpeg_argv(self):
        argv = [self.ffmpeg_path, '-hide_banner', '-nostdin', '-loglevel', 'warning']

        # Input side. The defaults are tuned for files: ffmpeg would buffer seconds of
        # stream before emitting anything, which on a live camera reads as "it doesn't
        # work". These four flags are what make it start promptly and stay current.
        if self.keyframes_only:
            argv += ['-skip_frame', 'nokey']
        if self.hwaccel:
            argv += ['-c:v', f'h264_{self.hwaccel}']
        argv += [
            '-analyzeduration', '1000000',   # 1 s, vs the 5 s default
            '-probesize', '500000',
            '-flags', 'low_delay',
            '-fflags', 'nobuffer',
            '-f', 'h264', '-i', 'pipe:0',
            '-an',
        ]

        # fps first, then scale: rescaling frames that are about to be thrown away is
        # the single easiest way to waste a core here.
        filters = []
        # The fps filter does not only drop - it DUPLICATES to reach the target rate when
        # the input is slower. Harmless normally (30 in, 5 out), but in keyframes-only
        # mode the input is one picture per GOP, so fps=5 would republish each keyframe
        # five times: five times the bandwidth for no extra information, in the very mode
        # chosen to save resources. There, let each keyframe out as it arrives instead.
        if self.output_fps > 0 and not self.keyframes_only:
            filters.append(f'fps={self.output_fps}')
        if self.output_width > 0:
            # -2 keeps the aspect ratio and rounds to an even height, which the JPEG
            # encoder needs for chroma subsampling.
            filters.append(f'scale={self.output_width}:-2')
        if filters:
            argv += ['-vf', ','.join(filters)]

        if self.keyframes_only:
            # Dropping the fps filter is not enough on its own: ffmpeg's default output
            # mode is constant frame rate, so it pads the one-picture-per-GOP input back
            # up to the stream's own 30 fps by repeating it. Measured 29.6 fps out of a
            # keyframes-only decode before this was added. Passthrough emits each decoded
            # frame exactly once. Spelled -vsync rather than -fps_mode because the Humble
            # image ships ffmpeg 4.4, which predates -fps_mode; -vsync still works (with
            # a deprecation warning) on the ffmpeg 7 in the Jazzy image.
            argv += ['-vsync', '0']

        argv += [
            '-q:v', str(self.jpeg_quality),
            '-f', 'mjpeg',
            # Without this ffmpeg holds finished frames in its output buffer and they
            # arrive in bursts.
            '-flush_packets', '1',
            'pipe:1',
        ]
        return argv

    def _start_ffmpeg(self):
        import subprocess

        argv = self._ffmpeg_argv()
        try:
            proc = subprocess.Popen(
                argv,
                stdin=subprocess.PIPE,
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                bufsize=0,
            )
        except FileNotFoundError:
            # The one failure worth being loud and specific about: the image was built
            # without ffmpeg, and nothing else in this node will ever work.
            self.get_logger().error(
                f'{self.ffmpeg_path} not found. The liveview decoder needs ffmpeg in the '
                f'image - see docker/Dockerfile.vitro-arm64. Not retrying.')
            self._next_start = float('inf')
            return
        except OSError as exc:
            self.get_logger().error(f'could not start ffmpeg: {exc}')
            self._next_start = time.monotonic() + self.restart_delay
            return

        with self._proc_lock:
            self._proc = proc
        self._stopping.clear()
        self._threads = [
            threading.Thread(target=self._writer, args=(proc,), daemon=True),
            threading.Thread(target=self._reader, args=(proc,), daemon=True),
            threading.Thread(target=self._drain_stderr, args=(proc,), daemon=True),
        ]
        for t in self._threads:
            t.start()

        self.get_logger().info(f'ffmpeg started (pid {proc.pid}): {" ".join(argv)}')
        # We are certainly mid-GOP, so ask for an IDR straight away.
        self._request_keyframe('decoder started')

    def _stop_ffmpeg(self):
        with self._proc_lock:
            proc, self._proc = self._proc, None
        if proc is None:
            return
        self._stopping.set()
        with self._queue_cv:
            self._queue_cv.notify_all()
        for stream in (proc.stdin, proc.stdout, proc.stderr):
            try:
                if stream:
                    stream.close()
            except OSError:
                pass
        try:
            proc.terminate()
            proc.wait(timeout=2.0)
        except Exception:
            try:
                proc.kill()
            except Exception:
                pass

    def _supervise(self):
        """Start ffmpeg, restart it if it dies, and nag for a keyframe if nothing decodes."""
        with self._proc_lock:
            proc = self._proc
        now = time.monotonic()

        if proc is None:
            if now >= self._next_start:
                self._start_ffmpeg()
            return

        if proc.poll() is not None:
            self.get_logger().warning(
                f'ffmpeg exited with code {proc.returncode}; restarting in '
                f'{self.restart_delay:.0f}s')
            self._stop_ffmpeg()
            self._next_start = now + self.restart_delay
            # Whatever is queued predates the restart and starts mid-GOP.
            with self._queue_cv:
                self._queue.clear()
                self._queued_bytes = 0
            return

        # Bytes going in but no pictures coming out means we joined mid-GOP, or a drop
        # cost us the last one. Both are fixed by an IDR, so keep asking.
        if self._bytes_in > 0 and self.keyframe_interval > 0:
            stale = (self._last_frame_time is None
                     or now - self._last_frame_time > self.keyframe_interval)
            if stale and now - self._last_keyframe_request > self.keyframe_interval:
                self._request_keyframe('no decoded frames')

        if self.stats_interval > 0 and now - self._last_stats >= self.stats_interval:
            elapsed = now - self._last_stats
            self.get_logger().info(
                f'liveview: {self._bytes_in / 1024.0 / elapsed:.0f} KiB/s in, '
                f'{self._frames_out / elapsed:.1f} fps out'
                + (f', {self._bytes_dropped / 1024.0:.0f} KiB dropped'
                   if self._bytes_dropped else ''))
            self._bytes_in = 0
            self._frames_out = 0
            self._bytes_dropped = 0
            self._last_stats = now

    def _request_keyframe(self, why):
        self._last_keyframe_request = time.monotonic()
        if not self._keyframe_client.service_is_ready():
            return
        self.get_logger().info(f'requesting an IDR frame ({why})')
        self._keyframe_client.call_async(Trigger.Request())

    # -- data path --------------------------------------------------------------

    def _on_chunk(self, msg):
        # `data` is an array.array('B') from rclpy; tobytes() is one copy, and indexing
        # it per byte would not be.
        chunk = msg.data.tobytes() if hasattr(msg.data, 'tobytes') else bytes(msg.data)
        if not chunk:
            return
        with self._queue_cv:
            self._queue.append(chunk)
            self._queued_bytes += len(chunk)
            dropped = 0
            while self._queued_bytes > self.max_buffered_bytes and len(self._queue) > 1:
                dropped += len(self._queue.popleft())
            if dropped:
                self._queued_bytes -= dropped
                self._bytes_dropped += dropped
            self._queue_cv.notify()
        self._bytes_in += len(chunk)
        if dropped:
            # Throttled: if we are overflowing, we are overflowing every message.
            self.get_logger().warning(
                f'decoder behind: dropped {dropped} B of undecoded stream '
                f'(buffer cap {self.max_buffered_bytes} B). Lower output_fps, set '
                f'decode_keyframes_only, or enable hwaccel.',
                throttle_duration_sec=10.0)

    def _writer(self, proc):
        while not self._stopping.is_set():
            with self._queue_cv:
                while not self._queue and not self._stopping.is_set():
                    self._queue_cv.wait(0.5)
                if self._stopping.is_set():
                    return
                chunk = self._queue.popleft()
                self._queued_bytes -= len(chunk)
            view = memoryview(chunk)
            while view and not self._stopping.is_set():
                try:
                    written = proc.stdin.write(view)
                except (BrokenPipeError, ValueError, OSError):
                    return  # ffmpeg died; _supervise notices and restarts
                if not written:
                    return
                view = view[written:]

    def _reader(self, proc):
        buf = bytearray()
        while not self._stopping.is_set():
            try:
                data = proc.stdout.read(65536)
            except (ValueError, OSError):
                return
            if not data:
                return  # EOF: ffmpeg exited
            buf += data
            for frame in self._split_jpegs(buf):
                self._publish(frame)

    def _drain_stderr(self, proc):
        """Forward ffmpeg's diagnostics to the ROS log.

        Not optional housekeeping: a pipe nobody reads fills at 64 KB and then every
        write to it blocks, so an ffmpeg that starts complaining - which is exactly what
        a corrupt stream makes it do - would wedge with the decode stalled and no
        indication why. Draining it is what keeps that from happening; getting the
        messages into the log is the bonus.
        """
        while not self._stopping.is_set():
            try:
                line = proc.stderr.readline()
            except (ValueError, OSError):
                return
            if not line:
                return
            text = line.decode('utf-8', 'replace').strip()
            if not text:
                continue
            # Decoding a live stream that lost bytes produces a steady trickle of these
            # until the next keyframe. They are expected, not faults, so they go in at
            # debug and throttled - at warning they would bury everything else.
            self.get_logger().debug(f'ffmpeg: {text}', throttle_duration_sec=5.0)

    @staticmethod
    def _split_jpegs(buf):
        """Pull complete JPEGs out of `buf`, consuming them. Partial tail is left behind."""
        frames = []
        while True:
            start = buf.find(JPEG_SOI)
            if start < 0:
                # Nothing usable, but a marker may straddle this read and the next.
                del buf[:max(0, len(buf) - (len(JPEG_SOI) - 1))]
                break
            end = buf.find(JPEG_EOI, start + len(JPEG_SOI))
            if end < 0:
                del buf[:start]  # discard anything before the frame in progress
                break
            frames.append(bytes(buf[start:end + len(JPEG_EOI)]))
            del buf[:end + len(JPEG_EOI)]
        return frames

    def _publish(self, jpeg):
        msg = CompressedImage()
        # Stamped on decode, not on capture: the aircraft gives us no capture time, and
        # the pipeline adds latency. Good enough to display, not to fuse against.
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self.frame_id
        msg.format = 'jpeg'
        msg.data = jpeg
        self.pub.publish(msg)
        self._frames_out += 1
        self._last_frame_time = time.monotonic()

    def destroy_node(self):
        self._stop_ffmpeg()
        return super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = LiveviewDecoder()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
