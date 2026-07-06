# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fm_gen_msgs:msg/TopicStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'error_code'
# Member 'error_value'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TopicStatus(type):
    """Metaclass of message 'TopicStatus'."""

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
                'fm_gen_msgs.msg.TopicStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__topic_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__topic_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__topic_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__topic_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__topic_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TopicStatus(metaclass=Metaclass_TopicStatus):
    """Message class 'TopicStatus'."""

    __slots__ = [
        '_topic_name',
        '_topic_is_ok',
        '_error_message',
        '_error_code',
        '_error_value',
    ]

    _fields_and_field_types = {
        'topic_name': 'string',
        'topic_is_ok': 'boolean',
        'error_message': 'sequence<string>',
        'error_code': 'sequence<uint32>',
        'error_value': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.topic_name = kwargs.get('topic_name', str())
        self.topic_is_ok = kwargs.get('topic_is_ok', bool())
        self.error_message = kwargs.get('error_message', [])
        self.error_code = array.array('I', kwargs.get('error_code', []))
        self.error_value = array.array('d', kwargs.get('error_value', []))

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
        if self.topic_name != other.topic_name:
            return False
        if self.topic_is_ok != other.topic_is_ok:
            return False
        if self.error_message != other.error_message:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_value != other.error_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def topic_name(self):
        """Message field 'topic_name'."""
        return self._topic_name

    @topic_name.setter
    def topic_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'topic_name' field must be of type 'str'"
        self._topic_name = value

    @builtins.property
    def topic_is_ok(self):
        """Message field 'topic_is_ok'."""
        return self._topic_is_ok

    @topic_is_ok.setter
    def topic_is_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'topic_is_ok' field must be of type 'bool'"
        self._topic_is_ok = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'error_message' field must be a set or sequence and each value of type 'str'"
        self._error_message = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'error_code' array.array() must have the type code of 'I'"
            self._error_code = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'error_code' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._error_code = array.array('I', value)

    @builtins.property
    def error_value(self):
        """Message field 'error_value'."""
        return self._error_value

    @error_value.setter
    def error_value(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'error_value' array.array() must have the type code of 'd'"
            self._error_value = value
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
                "The 'error_value' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._error_value = array.array('d', value)
