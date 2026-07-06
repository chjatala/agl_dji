# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fm_gen_msgs:msg/Line.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'line_1'
# Member 'line_2'
# Member 'line_c'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Line(type):
    """Metaclass of message 'Line'."""

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
                'fm_gen_msgs.msg.Line')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__line

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Line(metaclass=Metaclass_Line):
    """Message class 'Line'."""

    __slots__ = [
        '_line_type',
        '_certainty',
        '_line_1',
        '_line_2',
        '_line_c',
    ]

    _fields_and_field_types = {
        'line_type': 'string',
        'certainty': 'uint8',
        'line_1': 'sequence<float>',
        'line_2': 'sequence<float>',
        'line_c': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.line_type = kwargs.get('line_type', str())
        self.certainty = kwargs.get('certainty', int())
        self.line_1 = array.array('f', kwargs.get('line_1', []))
        self.line_2 = array.array('f', kwargs.get('line_2', []))
        self.line_c = array.array('f', kwargs.get('line_c', []))

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
        if self.line_type != other.line_type:
            return False
        if self.certainty != other.certainty:
            return False
        if self.line_1 != other.line_1:
            return False
        if self.line_2 != other.line_2:
            return False
        if self.line_c != other.line_c:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def line_type(self):
        """Message field 'line_type'."""
        return self._line_type

    @line_type.setter
    def line_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'line_type' field must be of type 'str'"
        self._line_type = value

    @builtins.property
    def certainty(self):
        """Message field 'certainty'."""
        return self._certainty

    @certainty.setter
    def certainty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'certainty' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'certainty' field must be an unsigned integer in [0, 255]"
        self._certainty = value

    @builtins.property
    def line_1(self):
        """Message field 'line_1'."""
        return self._line_1

    @line_1.setter
    def line_1(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'line_1' array.array() must have the type code of 'f'"
            self._line_1 = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'line_1' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._line_1 = array.array('f', value)

    @builtins.property
    def line_2(self):
        """Message field 'line_2'."""
        return self._line_2

    @line_2.setter
    def line_2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'line_2' array.array() must have the type code of 'f'"
            self._line_2 = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'line_2' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._line_2 = array.array('f', value)

    @builtins.property
    def line_c(self):
        """Message field 'line_c'."""
        return self._line_c

    @line_c.setter
    def line_c(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'line_c' array.array() must have the type code of 'f'"
            self._line_c = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'line_c' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._line_c = array.array('f', value)
