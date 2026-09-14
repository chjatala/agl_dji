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
  this can run on the laptop instead of the Pi - which, on this rig, is where it should
  run. See docker/Dockerfile.liveview-decoder.

  Forwarding the undecoded stream is CHEAPER on the wire, not dearer. Measured against
  the live aircraft: raw H.264 on /dji/camera_h264 is 374 KB/s, while the JPEG it decodes
  to is 766 KB/s at only 1024px/15fps. H.264 is inter-frame compressed; JPEG codes every
  frame from scratch. (This file twice claimed the reverse. The first claim was wrong
  outright; the second was measured at 5 fps / 960 px, where the JPEG side really is
  smaller - but that stops being true the moment you ask for a usable frame rate.)

  It is also the difference between a clean picture and a broken one. The Pi cannot
  decode 1440x1080p30 and re-encode it while running psdk_bridge: it discarded ~1 MB/s of
  input to keep latency bounded, and every discarded byte corrupts H.264 until the next
  keyframe. Decoding on the laptop drops nothing, and the JPEG never crosses the network
  at all because drone_gui is on that same machine - so full 30 fps at native resolution
  costs nothing extra.

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
from rcl_interfaces.msg import ParameterDescriptor
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

        # Output shaping - see cfg/liveview_decoder_params.yaml for measured cost/bandwidth.
        #
        # output_fps is declared with dynamic typing because it is a float that people
        # naturally write as an integer. rclpy enforces the declared type strictly, so a
        # hand-edited "output_fps: 15" in the YAML would otherwise raise
        # InvalidParameterTypeException at startup and leave the node crash-looping -
        # a puzzling failure for what looks like a perfectly reasonable edit.
        self.declare_parameter(
            'output_fps', 15.0,
            ParameterDescriptor(dynamic_typing=True))
        self.declare_parameter('output_width', 1280)
        # ffmpeg's mjpeg quality scale, 2 (best) to 31 (worst) - NOT 0-100.
        self.declare_parameter('jpeg_quality', 4)

        # CPU controls - see the module docstring.
        self.declare_parameter('decode_keyframes_only', False)
        self.declare_parameter('hwaccel', '')  # '' or 'v4l2m2m'

        self.declare_parameter('ffmpeg_path', 'ffmpeg')
        # Ceiling on undecoded input held in memory. This bounds MEMORY, but far more
        # importantly it bounds LATENCY, which is what you actually notice: every byte
        # sitting here is delay between the world moving and the picture showing it. At
        # ~370 KiB/s the old 4 MiB ceiling permitted over ten seconds of lag, and it was
        # invisible because the buffer only logs when it overflows - it can sit
        # permanently near-full and say nothing. 256 KiB is well under a second.
        #
        # For a live view, dropping beats buffering: a stale picture is worse than a
        # brief glitch. Overflow discards the OLDEST bytes and asks the aircraft for a
        # keyframe, so the tearing that causes is repaired within a GOP instead of
        # persisting.
        self.declare_parameter('max_buffered_bytes', 256 * 1024)

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
        # Keep the probe TINY. These are ceilings on how much stream ffmpeg will buffer
        # before it decides it knows the format, and they are paid as latency on every
        # frame, not just the first. Measured on a real captured stream: raising them to
        # 500 KB / 1 s (which an earlier version of this file did, speculatively, to guard
        # against joining mid-GOP) added ~1.3 s to first frame AND ~1.9 s of steady-state
        # lag, and produced fewer frames - 124 against 176 over the same input. The
        # mid-GOP case is already handled properly by asking the aircraft for an IDR (see
        # _request_keyframe), which is the right tool; buffering more input is not.
        argv += [
            '-analyzeduration', '0',
            '-probesize', '32768',
            '-flags', 'low_delay',
            '-fflags', 'nobuffer',
            '-max_delay', '0',
            '-avioflags', 'direct',
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
            rate = self._bytes_in / elapsed if elapsed > 0 else 0.0
            # Queue depth is the latency that matters and was previously invisible: the
            # buffer only reports drops when it OVERFLOWS, so it can sit permanently near
            # full - seconds of delay - while logging nothing at all. Report it as time,
            # since bytes mean nothing without the rate.
            with self._queue_cv:
                queued = self._queued_bytes
            backlog = queued / rate if rate > 0 else 0.0
            self.get_logger().info(
                f'liveview: {rate / 1024.0:.0f} KiB/s in, '
                f'{self._frames_out / elapsed:.1f} fps out, '
                f'queue {queued / 1024.0:.0f} KiB (~{backlog:.1f}s behind)'
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
            # Dropping mid-stream leaves the decoder mid-GOP, so the picture stays torn
            # until the next IDR. Ask for one rather than waiting out the aircraft's own
            # keyframe interval - that is the difference between a momentary glitch and
            # seconds of garbage. Rate-limited inside _request_keyframe.
            if time.monotonic() - self._last_keyframe_request > self.keyframe_interval:
                self._request_keyframe('dropped input to bound latency')
            # Throttled: if we are overflowing, we are overflowing every message.
            self.get_logger().warning(
                f'decoder behind: dropped {dropped} B to keep latency bounded '
                f'(cap {self.max_buffered_bytes} B). Lower output_fps or output_width.',
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
