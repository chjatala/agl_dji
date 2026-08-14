#!/usr/bin/env python3
"""Measure the Agilica UWB tag's wire rate vs its actual position-update rate.

The question: /agilica_pose was measured at ~40 Hz, but Agilica report the tag updates at
~10 Hz. If each fix is emitted several times, the parser republishes duplicates and a
downstream EKF treats one measurement as several independent ones.

Distinguishing them needs timing, not just value counts - a stationary tag can legitimately
report the same centimetre value twice. So this records per-line arrival times and looks at:
  * wire rate            - how often $AGLLP arrives
  * value-change rate    - how often the coordinates actually change
  * run lengths          - how many identical readings in a row
  * inter-arrival shape  - evenly spaced, or bursts separated by gaps
"""
import collections
import statistics
import sys
import time

import serial

PORT = sys.argv[1] if len(sys.argv) > 1 else "/dev/ttyUSB1"
DURATION = float(sys.argv[2]) if len(sys.argv) > 2 else 20.0

records = []
with serial.Serial(PORT, 460800, timeout=1.0) as sp:
    sp.reset_input_buffer()
    t0 = time.monotonic()
    while time.monotonic() - t0 < DURATION:
        raw = sp.readline()
        t = time.monotonic()
        if raw:
            records.append((t, raw.decode("utf-8", errors="replace").strip()))

if not records:
    sys.exit("no data received")

span = records[-1][0] - records[0][0]
kinds = collections.Counter(r.split(",")[0] for _, r in records if r.startswith("$"))
print(f"captured {len(records)} lines over {span:.1f}s")
print("sentence mix (per second):")
for k, n in sorted(kinds.items()):
    print(f"    {k:<8} {n:5d}   {n / span:6.2f} Hz")

# Fix state, to confirm the anchors are actually locked now.
gga = [r for _, r in records if r.startswith("$GPGGA")]
agl = [(t, r) for t, r in records if r.startswith("$AGLLP")]
qual = collections.Counter(f.split(",")[6] if len(f.split(",")) > 6 else "?" for f in gga)
print(f"\nGPGGA fix quality: {dict(qual)}   (0 = no fix, 1 = fix)")
anchors = collections.Counter(
    r.split(",")[8] if len(r.split(",")) > 8 else "?" for _, r in agl
)
print(f"AGLLP anchor count field: {dict(anchors)}")


def coords(sentence):
    f = sentence.split(",")
    if len(f) > 6 and f[2] and f[4] and f[6]:
        return (f[2], f[4], f[6])
    return None


parsed = [(t, coords(r)) for t, r in agl]
valid = [(t, c) for t, c in parsed if c is not None]
print(f"\nAGLLP: {len(agl)} total, {len(valid)} with coordinates")
if not valid:
    sys.exit("coordinates still empty - anchors not seen by the tag")

wire_hz = len(valid) / span
print(f"  wire rate            {wire_hz:6.2f} Hz")

# How often the value actually changes.
changes = [t for i, (t, c) in enumerate(valid) if i == 0 or c != valid[i - 1][1]]
print(f"  value-change rate    {len(changes) / span:6.2f} Hz "
      f"({len(changes)} changes)")

runs = []
run = 1
for i in range(1, len(valid)):
    if valid[i][1] == valid[i - 1][1]:
        run += 1
    else:
        runs.append(run)
        run = 1
runs.append(run)
print(f"  identical-in-a-row   {dict(sorted(collections.Counter(runs).items()))}")
print(f"                       mean run {statistics.mean(runs):.2f}")

gaps = [b - a for (a, _), (b, _) in zip(valid, valid[1:])]
if gaps:
    gaps_ms = sorted(g * 1000 for g in gaps)
    print(f"\ninter-arrival of AGLLP (ms):")
    print(f"    min {gaps_ms[0]:.1f}  p50 {gaps_ms[len(gaps_ms)//2]:.1f}  "
          f"p90 {gaps_ms[int(len(gaps_ms)*0.9)]:.1f}  max {gaps_ms[-1]:.1f}")
    print(f"    mean {statistics.mean(gaps_ms):.1f}  stdev {statistics.pstdev(gaps_ms):.1f}")
    hist = collections.Counter(int(g // 10) * 10 for g in gaps_ms)
    print("    histogram (10 ms buckets):")
    for bucket in sorted(hist):
        print(f"        {bucket:4d}-{bucket+9:3d} ms  {'#' * min(60, hist[bucket])} {hist[bucket]}")

# Gaps between *changes* - the true update interval.
if len(changes) > 1:
    cg = sorted((b - a) * 1000 for a, b in zip(changes, changes[1:]))
    print(f"\ninter-arrival between value CHANGES (ms):")
    print(f"    min {cg[0]:.1f}  p50 {cg[len(cg)//2]:.1f}  "
          f"p90 {cg[int(len(cg)*0.9)]:.1f}  max {cg[-1]:.1f}")
    print(f"    mean {statistics.mean(cg):.1f}")

print("\nfirst 12 AGLLP with coordinates:")
for t, c in valid[:12]:
    print(f"    +{(t - valid[0][0]) * 1000:7.1f} ms  x={c[0]:>5} y={c[1]:>5} z={c[2]:>5}")
