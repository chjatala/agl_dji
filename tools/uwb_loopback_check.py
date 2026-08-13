#!/usr/bin/env python3
"""Integration check for nmea_parser in the Jazzy image, without needing UWB anchor lock.

Creates a pty, replays real sentences captured from the Agilica module at 40 Hz into it,
points the node at that pty, and asserts on what lands on /agilica_pose. This exercises the
actual installed package (serial read loop, sentence dispatch, cm->m scaling, Y negation,
publishing) so a hardware fix outage doesn't block verification of the build.
"""
import os
import pty
import subprocess
import sys
import threading
import time

# Captured verbatim from the module earlier today, while it had a valid 4-anchor fix.
# GPRMC time is empty exactly as the real unit sends it, so the node falls back to its
# own clock for the stamp (and logs the "No GPRMC timestamp available" warning once).
CYCLE = [
    "$GPGGA,,5150.65588926,N,00523.58428580,E,1,4,3.26,3.38,M,,,,*2A",
    "$GPRMC,,A,5150.65588926,N,00523.58428580,E,0.9,,,,,A,V*2D",
    "$GPVTG,,,,,0.9,N,,,A*56",
    "$AGLLP,x,6,y,21,z,238,n,4,a,*1A",
]
EXPECT = (0.06, -0.21, 2.38)  # x, -y, z in metres
HZ = 40.0

master, slave = pty.openpty()
port = os.ttyname(slave)
print(f"pty for the node: {port}", flush=True)

stop = threading.Event()


def feeder():
    while not stop.is_set():
        for line in CYCLE:
            try:
                os.write(master, (line + "\r\n").encode())
            except OSError:
                return
        time.sleep(1.0 / HZ)


threading.Thread(target=feeder, daemon=True).start()

node = subprocess.Popen(
    ["ros2", "run", "nmea_parser", "nmea_parser", "--ros-args",
     "-p", f"port:={port}", "-p", "baudrate:=460800"],
    stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True,
)

failures = []
try:
    time.sleep(4)

    echo = subprocess.run(
        ["ros2", "topic", "echo", "/agilica_pose", "--once"],
        capture_output=True, text=True, timeout=25,
    ).stdout
    print("--- /agilica_pose ---")
    print("\n".join("    " + l for l in echo.strip().splitlines()))

    vals = {}
    for key in ("x", "y", "z"):
        for line in echo.splitlines():
            s = line.strip()
            if s.startswith(f"{key}:") and key not in vals:
                vals[key] = float(s.split(":", 1)[1])
                break

    for key, want in zip(("x", "y", "z"), EXPECT):
        got = vals.get(key)
        if got is None or abs(got - want) > 1e-6:
            failures.append(f"{key}: got {got}, want {want}")

    if "agilica_frame" not in echo:
        failures.append("frame_id is not agilica_frame")

    # `ros2 topic hz` runs until interrupted, so cap it externally and parse whatever it
    # printed before being killed (the non-zero exit from `timeout` is expected).
    hz = subprocess.run(
        ["timeout", "8", "ros2", "topic", "hz", "/agilica_pose", "--window", "40"],
        capture_output=True, text=True,
    )
    rate_line = next(
        (l for l in (hz.stdout + hz.stderr).splitlines() if "average rate" in l), ""
    )
    print(f"--- rate ---\n    {rate_line.strip() or 'no rate reported'}")
    if rate_line:
        rate = float(rate_line.split("average rate:")[1].strip())
        if not (30.0 <= rate <= 50.0):
            failures.append(f"rate {rate:.1f} Hz outside 30-50 Hz")
    else:
        failures.append("no rate measured")
finally:
    stop.set()
    node.terminate()
    try:
        node.wait(timeout=5)
    except subprocess.TimeoutExpired:
        node.kill()
    os.close(master)
    os.close(slave)

print()
if failures:
    print("FAILED:")
    for f in failures:
        print("  -", f)
    sys.exit(1)
print("PASS: pose values, frame_id and rate all as expected")
