# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_msgs:msg/GenLineFollowCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'param'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenLineFollowCmd(type):
    """Metaclass of message 'GenLineFollowCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POS_CLOSELOOP': 'POS_CLOSELOOP',
        'SPEED_OPENLOOP': 'SPEED_OPENLOOP',
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
                'drone_msgs.msg.GenLineFollowCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gen_line_follow_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gen_line_follow_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gen_line_follow_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gen_line_follow_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gen_line_follow_cmd

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POS_CLOSELOOP': cls.__constants['POS_CLOSELOOP'],
            'SPEED_OPENLOOP': cls.__constants['SPEED_OPENLOOP'],
            'X_TGT__DEFAULT': 0.0,
            'X_TYPE__DEFAULT': 'POS_CLOSELOOP',
            'Y_TGT__DEFAULT': 0.0,
            'Y_TYPE__DEFAULT': 'POS_CLOSELOOP',
            'Z_TGT__DEFAULT': 1.0,
            'Z_TYPE__DEFAULT': 'POS_CLOSELOOP',
            'YAW_TGT__DEFAULT': 0.0,
            'YAW_TYPE__DEFAULT': 'POS_CLOSELOOP',
        }

    @property
    def POS_CLOSELOOP(self):
        """Message constant 'POS_CLOSELOOP'."""
        return Metaclass_GenLineFollowCmd.__constants['POS_CLOSELOOP']

    @property
    def SPEED_OPENLOOP(self):
        """Message constant 'SPEED_OPENLOOP'."""
        return Metaclass_GenLineFollowCmd.__constants['SPEED_OPENLOOP']

    @property
    def X_TGT__DEFAULT(cls):
        """Return default value for message field 'x_tgt'."""
        return 0.0

    @property
    def X_TYPE__DEFAULT(cls):
        """Return default value for message field 'x_type'."""
        return 'POS_CLOSELOOP'

    @property
    def Y_TGT__DEFAULT(cls):
        """Return default value for message field 'y_tgt'."""
        return 0.0

    @property
    def Y_TYPE__DEFAULT(cls):
        """Return default value for message field 'y_type'."""
        return 'POS_CLOSELOOP'

    @property
    def Z_TGT__DEFAULT(cls):
        """Return default value for message field 'z_tgt'."""
        return 1.0

    @property
    def Z_TYPE__DEFAULT(cls):
        """Return default value for message field 'z_type'."""
        return 'POS_CLOSELOOP'

    @property
    def YAW_TGT__DEFAULT(cls):
        """Return default value for message field 'yaw_tgt'."""
        return 0.0

    @property
    def YAW_TYPE__DEFAULT(cls):
        """Return default value for message field 'yaw_type'."""
        return 'POS_CLOSELOOP'


class GenLineFollowCmd(metaclass=Metaclass_GenLineFollowCmd):
    """
    Message class 'GenLineFollowCmd'.

    Constants:
      POS_CLOSELOOP
      SPEED_OPENLOOP
    """

    __slots__ = [
        '_header',
        '_x_tgt',
        '_x_type',
        '_y_tgt',
        '_y_type',
        '_z_tgt',
        '_z_type',
        '_yaw_tgt',
        '_yaw_type',
        '_param',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'x_tgt': 'float',
        'x_type': 'string',
        'y_tgt': 'float',
        'y_type': 'string',
        'z_tgt': 'float',
        'z_type': 'string',
        'yaw_tgt': 'float',
        'yaw_type': 'string',
        'param': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.x_tgt = kwargs.get(
            'x_tgt', GenLineFollowCmd.X_TGT__DEFAULT)
        self.x_type = kwargs.get(
            'x_type', GenLineFollowCmd.X_TYPE__DEFAULT)
        self.y_tgt = kwargs.get(
            'y_tgt', GenLineFollowCmd.Y_TGT__DEFAULT)
        self.y_type = kwargs.get(
            'y_type', GenLineFollowCmd.Y_TYPE__DEFAULT)
        self.z_tgt = kwargs.get(
            'z_tgt', GenLineFollowCmd.Z_TGT__DEFAULT)
        self.z_type = kwargs.get(
            'z_type', GenLineFollowCmd.Z_TYPE__DEFAULT)
        self.yaw_tgt = kwargs.get(
            'yaw_tgt', GenLineFollowCmd.YAW_TGT__DEFAULT)
        self.yaw_type = kwargs.get(
            'yaw_type', GenLineFollowCmd.YAW_TYPE__DEFAULT)
        self.param = array.array('d', kwargs.get('param', []))

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
        if self.x_tgt != other.x_tgt:
            return False
        if self.x_type != other.x_type:
            return False
        if self.y_tgt != other.y_tgt:
            return False
        if self.y_type != other.y_type:
            return False
        if self.z_tgt != other.z_tgt:
            return False
        if self.z_type != other.z_type:
            return False
        if self.yaw_tgt != other.yaw_tgt:
            return False
        if self.yaw_type != other.yaw_type:
            return False
        if self.param != other.param:
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
    def x_tgt(self):
        """Message field 'x_tgt'."""
        return self._x_tgt

    @x_tgt.setter
    def x_tgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_tgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_tgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_tgt = value

    @builtins.property
    def x_type(self):
        """Message field 'x_type'."""
        return self._x_type

    @x_type.setter
    def x_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'x_type' field must be of type 'str'"
        self._x_type = value

    @builtins.property
    def y_tgt(self):
        """Message field 'y_tgt'."""
        return self._y_tgt

    @y_tgt.setter
    def y_tgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_tgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_tgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_tgt = value

    @builtins.property
    def y_type(self):
        """Message field 'y_type'."""
        return self._y_type

    @y_type.setter
    def y_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'y_type' field must be of type 'str'"
        self._y_type = value

    @builtins.property
    def z_tgt(self):
        """Message field 'z_tgt'."""
        return self._z_tgt

    @z_tgt.setter
    def z_tgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_tgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_tgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_tgt = value

    @builtins.property
    def z_type(self):
        """Message field 'z_type'."""
        return self._z_type

    @z_type.setter
    def z_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'z_type' field must be of type 'str'"
        self._z_type = value

    @builtins.property
    def yaw_tgt(self):
        """Message field 'yaw_tgt'."""
        return self._yaw_tgt

    @yaw_tgt.setter
    def yaw_tgt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_tgt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_tgt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_tgt = value

    @builtins.property
    def yaw_type(self):
        """Message field 'yaw_type'."""
        return self._yaw_type

    @yaw_type.setter
    def yaw_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'yaw_type' field must be of type 'str'"
        self._yaw_type = value

    @builtins.property
    def param(self):
        """Message field 'param'."""
        return self._param

    @param.setter
    def param(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'param' array.array() must have the type code of 'd'"
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'param' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._param = array.array('d', value)
