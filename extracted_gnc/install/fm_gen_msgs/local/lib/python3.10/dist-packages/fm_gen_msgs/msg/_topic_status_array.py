# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fm_gen_msgs:msg/TopicStatusArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TopicStatusArray(type):
    """Metaclass of message 'TopicStatusArray'."""

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
                'fm_gen_msgs.msg.TopicStatusArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__topic_status_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__topic_status_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__topic_status_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__topic_status_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__topic_status_array

            from fm_gen_msgs.msg import TopicStatus
            if TopicStatus.__class__._TYPE_SUPPORT is None:
                TopicStatus.__class__.__import_type_support__()

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


class TopicStatusArray(metaclass=Metaclass_TopicStatusArray):
    """Message class 'TopicStatusArray'."""

    __slots__ = [
        '_header',
        '_general_status',
        '_status_sum',
        '_topic_array',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'general_status': 'uint32',
        'status_sum': 'uint32',
        'topic_array': 'sequence<fm_gen_msgs/TopicStatus>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['fm_gen_msgs', 'msg'], 'TopicStatus')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.general_status = kwargs.get('general_status', int())
        self.status_sum = kwargs.get('status_sum', int())
        self.topic_array = kwargs.get('topic_array', [])

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
        if self.general_status != other.general_status:
            return False
        if self.status_sum != other.status_sum:
            return False
        if self.topic_array != other.topic_array:
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
    def general_status(self):
        """Message field 'general_status'."""
        return self._general_status

    @general_status.setter
    def general_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'general_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'general_status' field must be an unsigned integer in [0, 4294967295]"
        self._general_status = value

    @builtins.property
    def status_sum(self):
        """Message field 'status_sum'."""
        return self._status_sum

    @status_sum.setter
    def status_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_sum' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'status_sum' field must be an unsigned integer in [0, 4294967295]"
        self._status_sum = value

    @builtins.property
    def topic_array(self):
        """Message field 'topic_array'."""
        return self._topic_array

    @topic_array.setter
    def topic_array(self, value):
        if __debug__:
            from fm_gen_msgs.msg import TopicStatus
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
                 all(isinstance(v, TopicStatus) for v in value) and
                 True), \
                "The 'topic_array' field must be a set or sequence and each value of type 'TopicStatus'"
        self._topic_array = value
