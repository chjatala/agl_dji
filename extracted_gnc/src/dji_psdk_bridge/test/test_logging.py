"""Regression test for the logging bug that killed the bridge in flight-adjacent testing.

rclpy caches a logger's severity against the *call site* (file/function/line) and raises
``ValueError: Logger severity cannot be changed between calls`` when the same site is later
used at a different severity. publish_log() originally dispatched every level through a single
``getattr(self.get_logger(), level)(...)`` line, so the first watchdog warning after any
earlier info raised - inside a timer callback, which took the whole node down.

That is the worst possible failure mode for a safety watchdog, hence a test.

Run inside the image:  colcon test --packages-select dji_psdk_bridge
"""

import rclpy
import pytest

from dji_psdk_bridge.psdk_bridge_node import PSDKBridgeNode


@pytest.fixture(scope="module")
def ros():
    rclpy.init()
    yield
    rclpy.shutdown()


@pytest.fixture
def node(ros):
    n = PSDKBridgeNode()
    yield n
    n.destroy_node()


def test_publish_log_survives_severity_changes(node):
    """Every ordering of levels must be loggable without raising."""
    for level in ("info", "warning", "error", "info", "error", "warning"):
        node.publish_log(f"severity churn: {level}", level=level)


def test_publish_log_defaults_to_info(node):
    node.publish_log("no level given")


def test_unknown_level_does_not_raise(node):
    """A typo in a level must not take the node down."""
    node.publish_log("bogus level", level="critical-ish")


def test_watchdog_reports_without_raising(node):
    """Drive the watchdog directly: it must command hover and log a warning, not throw."""
    import time

    node._setpoint_latched = True
    node._last_setpoint_monotonic = time.monotonic() - (node.setpoint_timeout + 1.0)

    node._setpoint_watchdog_tick()

    assert node._setpoint_latched is False, "watchdog should clear the latch"


def test_watchdog_is_idempotent_once_unlatched(node):
    """A second tick with no new setpoint must do nothing at all."""
    node._setpoint_latched = False
    node._setpoint_watchdog_tick()
    assert node._setpoint_latched is False
