# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_msgs:msg/Waypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'param'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Waypoint(type):
    """Metaclass of message 'Waypoint'."""

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
                'drone_msgs.msg.Waypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__waypoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__waypoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__waypoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__waypoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__waypoint

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Waypoint(metaclass=Metaclass_Waypoint):
    """Message class 'Waypoint'."""

    __slots__ = [
        '_position',
        '_yaw',
        '_max_vel',
        '_max_yaw_rate',
        '_type',
        '_param',
    ]

    _fields_and_field_types = {
        'position': 'geometry_msgs/Point',
        'yaw': 'double',
        'max_vel': 'double',
        'max_yaw_rate': 'double',
        'type': 'int32',
        'param': 'double[5]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 5),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        self.yaw = kwargs.get('yaw', float())
        self.max_vel = kwargs.get('max_vel', float())
        self.max_yaw_rate = kwargs.get('max_yaw_rate', float())
        self.type = kwargs.get('type', int())
        if 'param' not in kwargs:
            self.param = numpy.zeros(5, dtype=numpy.float64)
        else:
            self.param = kwargs.get('param')

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
        if self.position != other.position:
            return False
        if self.yaw != other.yaw:
            return False
        if self.max_vel != other.max_vel:
            return False
        if self.max_yaw_rate != other.max_yaw_rate:
            return False
        if self.type != other.type:
            return False
        if any(self.param != other.param):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def max_vel(self):
        """Message field 'max_vel'."""
        return self._max_vel

    @max_vel.setter
    def max_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_vel = value

    @builtins.property
    def max_yaw_rate(self):
        """Message field 'max_yaw_rate'."""
        return self._max_yaw_rate

    @max_yaw_rate.setter
    def max_yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_yaw_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_yaw_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_yaw_rate = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @builtins.property
    def param(self):
        """Message field 'param'."""
        return self._param

    @param.setter
    def param(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'param' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 5, \
                "The 'param' numpy.ndarray() must have a size of 5"
            self._param = value
            return
        if __debug__:
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'param' field must be a set or sequence with length 5 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._param = numpy.array(value, dtype=numpy.float64)
