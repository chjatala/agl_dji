"""Frame-convention regression tests for the DJI -> VITRO telemetry conversion.

These guard a sign convention that is easy to get wrong and impossible to spot by eye
downstream: DJI publishes ground velocity in a **NEU** frame (NED with Z flipped) while
the VITRO interface expects **body FRD** speed. Getting either the handedness or the
rotation direction backwards silently corrupts VITRO's EKF rather than failing loudly.

Run inside the image:  colcon test --packages-select dji_psdk_bridge
"""

import math

import pytest

from dji_psdk_bridge.psdk_bridge_node import ground_neu_to_body_frd


def yaw_quat(deg):
    """body-FRD -> ground-NED quaternion for a pure yaw (rotation about Down)."""
    h = math.radians(deg) / 2.0
    return (math.cos(h), 0.0, 0.0, math.sin(h))


IDENTITY = (1.0, 0.0, 0.0, 0.0)


def approx(actual, expected, tol=1e-6):
    assert all(a == pytest.approx(e, abs=tol) for a, e in zip(actual, expected)), (
        f"got {actual}, want {expected}"
    )


class TestLevelFlight:
    """With identity attitude, body FRD axes coincide with ground NED axes."""

    def test_north_is_forward(self):
        approx(ground_neu_to_body_frd(3, 0, 0, *IDENTITY), (3, 0, 0))

    def test_east_is_right(self):
        approx(ground_neu_to_body_frd(0, 3, 0, *IDENTITY), (0, 3, 0))

    def test_climb_becomes_negative_down(self):
        # DJI reports NEU, so a 2 m/s climb arrives as vz=+2 and must become Down=-2.
        approx(ground_neu_to_body_frd(0, 0, 2, *IDENTITY), (0, 0, -2))

    def test_descent_becomes_positive_down(self):
        approx(ground_neu_to_body_frd(0, 0, -2, *IDENTITY), (0, 0, 2))


class TestYawed:
    """The decisive test: yaw the aircraft and translate along a known direction."""

    def test_nose_east_flying_north_is_motion_to_the_left(self):
        # Nose East, moving North => motion is off the aircraft's left wing => right = -3.
        approx(ground_neu_to_body_frd(3, 0, 0, *yaw_quat(90)), (0, -3, 0))

    def test_nose_east_flying_east_is_forward(self):
        approx(ground_neu_to_body_frd(0, 3, 0, *yaw_quat(90)), (3, 0, 0))

    def test_nose_south_flying_north_is_backwards(self):
        approx(ground_neu_to_body_frd(3, 0, 0, *yaw_quat(180)), (-3, 0, 0))


class TestPitched:
    """Nose-down 90 deg: body Forward points at the ground."""

    Q_NOSE_DOWN = (math.cos(math.radians(-45)), 0.0, math.sin(math.radians(-45)), 0.0)

    def test_horizontal_north_reads_as_body_up(self):
        # Top of the fuselage now faces North, so northward motion is Down = -3.
        approx(ground_neu_to_body_frd(3, 0, 0, *self.Q_NOSE_DOWN), (0, 0, -3))

    def test_descent_reads_as_forward(self):
        # Falling (NEU vz = -3) is motion along the nose => forward +3.
        approx(ground_neu_to_body_frd(0, 0, -3, *self.Q_NOSE_DOWN), (3, 0, 0))


def test_rotation_preserves_magnitude():
    """Any unit quaternion must give an orthonormal rotation."""
    import random

    random.seed(1)
    for _ in range(200):
        v = [random.uniform(-9, 9) for _ in range(3)]
        q = [random.uniform(-1, 1) for _ in range(4)]
        n = math.sqrt(sum(c * c for c in q))
        q = [c / n for c in q]
        out = ground_neu_to_body_frd(v[0], v[1], v[2], *q)
        assert math.sqrt(sum(c * c for c in out)) == pytest.approx(
            math.sqrt(sum(c * c for c in v)), abs=1e-6
        )


def test_degenerate_quaternion_yields_zero_not_garbage():
    """Before the first attitude fix the quaternion is all zeros - don't invent a rotation."""
    approx(ground_neu_to_body_frd(3, 4, 5, 0.0, 0.0, 0.0, 0.0), (0, 0, 0))
