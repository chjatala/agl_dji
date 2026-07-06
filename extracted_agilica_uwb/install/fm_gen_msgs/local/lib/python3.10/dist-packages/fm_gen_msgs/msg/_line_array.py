# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fm_gen_msgs:msg/LineArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LineArray(type):
    """Metaclass of message 'LineArray'."""

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
            module = import_type_support('fm_gen_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fm_gen_msgs.msg.LineArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__line_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__line_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__line_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__line_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__line_array

            from fm_gen_msgs.msg import Line
            if Line.__class__._TYPE_SUPPORT is None:
                Line.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LineArray(metaclass=Metaclass_LineArray):
    """Message class 'LineArray'."""

    __slots__ = [
        '_header',
        '_num_detection',
        '_camera_id',
        '_time_captured',
        '_lines',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'num_detection': 'uint8',
        'camera_id': 'string',
        'time_captured': 'double',
        'lines': 'sequence<fm_gen_msgs/Line>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['fm_gen_msgs', 'msg'], 'Line')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.num_detection = kwargs.get('num_detection', int())
        self.camera_id = kwargs.get('camera_id', str())
        self.time_captured = kwargs.get('time_captured', float())
        self.lines = kwargs.get('lines', [])

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
        if self.header != other.header:
            return False
        if self.num_detection != other.num_detection:
            return False
        if self.camera_id != other.camera_id:
            return False
        if self.time_captured != other.time_captured:
            return False
        if self.lines != other.lines:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def num_detection(self):
        """Message field 'num_detection'."""
        return self._num_detection

    @num_detection.setter
    def num_detection(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_detection' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_detection' field must be an unsigned integer in [0, 255]"
        self._num_detection = value

    @builtins.property
    def camera_id(self):
        """Message field 'camera_id'."""
        return self._camera_id

    @camera_id.setter
    def camera_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera_id' field must be of type 'str'"
        self._camera_id = value

    @builtins.property
    def time_captured(self):
        """Message field 'time_captured'."""
        return self._time_captured

    @time_captured.setter
    def time_captured(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_captured' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_captured' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_captured = value

    @builtins.property
    def lines(self):
        """Message field 'lines'."""
        return self._lines

    @lines.setter
    def lines(self, value):
        if __debug__:
            from fm_gen_msgs.msg import Line
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Line) for v in value) and
                 True), \
                "The 'lines' field must be a set or sequence and each value of type 'Line'"
        self._lines = value
