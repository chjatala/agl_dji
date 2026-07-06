# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_msgs:msg/Waypoints.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Waypoints(type):
    """Metaclass of message 'Waypoints'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('drone_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drone_msgs.msg.Waypoints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__waypoints
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__waypoints
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__waypoints
            cls._TYPE_SUPPORT = module.type_support_msg__msg__waypoints
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__waypoints

            from drone_msgs.msg import Waypoint
            if Waypoint.__class__._TYPE_SUPPORT is None:
                Waypoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Waypoints(metaclass=Metaclass_Waypoints):
    """Message class 'Waypoints'."""

    __slots__ = [
        '_current_wp',
        '_previous_wp',
        '_last_wp_reached',
    ]

    _fields_and_field_types = {
        'current_wp': 'drone_msgs/Waypoint',
        'previous_wp': 'drone_msgs/Waypoint',
        'last_wp_reached': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['drone_msgs', 'msg'], 'Waypoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['drone_msgs', 'msg'], 'Waypoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from drone_msgs.msg import Waypoint
        self.current_wp = kwargs.get('current_wp', Waypoint())
        from drone_msgs.msg import Waypoint
        self.previous_wp = kwargs.get('previous_wp', Waypoint())
        self.last_wp_reached = kwargs.get('last_wp_reached', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.current_wp != other.current_wp:
            return False
        if self.previous_wp != other.previous_wp:
            return False
        if self.last_wp_reached != other.last_wp_reached:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_wp(self):
        """Message field 'current_wp'."""
        return self._current_wp

    @current_wp.setter
    def current_wp(self, value):
        if __debug__:
            from drone_msgs.msg import Waypoint
            assert \
                isinstance(value, Waypoint), \
                "The 'current_wp' field must be a sub message of type 'Waypoint'"
        self._current_wp = value

    @builtins.property
    def previous_wp(self):
        """Message field 'previous_wp'."""
        return self._previous_wp

    @previous_wp.setter
    def previous_wp(self, value):
        if __debug__:
            from drone_msgs.msg import Waypoint
            assert \
                isinstance(value, Waypoint), \
                "The 'previous_wp' field must be a sub message of type 'Waypoint'"
        self._previous_wp = value

    @builtins.property
    def last_wp_reached(self):
        """Message field 'last_wp_reached'."""
        return self._last_wp_reached

    @last_wp_reached.setter
    def last_wp_reached(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'last_wp_reached' field must be of type 'bool'"
        self._last_wp_reached = value
