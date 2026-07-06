# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wifi_msgs:msg/RangeArrayRSSI.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RangeArrayRSSI(type):
    """Metaclass of message 'RangeArrayRSSI'."""

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
            module = import_type_support('wifi_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wifi_msgs.msg.RangeArrayRSSI')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__range_array_rssi
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__range_array_rssi
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__range_array_rssi
            cls._TYPE_SUPPORT = module.type_support_msg__msg__range_array_rssi
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__range_array_rssi

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from wifi_msgs.msg import RangeRSSI
            if RangeRSSI.__class__._TYPE_SUPPORT is None:
                RangeRSSI.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RangeArrayRSSI(metaclass=Metaclass_RangeArrayRSSI):
    """Message class 'RangeArrayRSSI'."""

    __slots__ = [
        '_header',
        '_tag_mac',
        '_tag_position',
        '_ranges',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tag_mac': 'string',
        'tag_position': 'geometry_msgs/Point',
        'ranges': 'sequence<wifi_msgs/RangeRSSI>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['wifi_msgs', 'msg'], 'RangeRSSI')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.tag_mac = kwargs.get('tag_mac', str())
        from geometry_msgs.msg import Point
        self.tag_position = kwargs.get('tag_position', Point())
        self.ranges = kwargs.get('ranges', [])

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
        if self.tag_mac != other.tag_mac:
            return False
        if self.tag_position != other.tag_position:
            return False
        if self.ranges != other.ranges:
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
    def tag_mac(self):
        """Message field 'tag_mac'."""
        return self._tag_mac

    @tag_mac.setter
    def tag_mac(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tag_mac' field must be of type 'str'"
        self._tag_mac = value

    @builtins.property
    def tag_position(self):
        """Message field 'tag_position'."""
        return self._tag_position

    @tag_position.setter
    def tag_position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'tag_position' field must be a sub message of type 'Point'"
        self._tag_position = value

    @builtins.property
    def ranges(self):
        """Message field 'ranges'."""
        return self._ranges

    @ranges.setter
    def ranges(self, value):
        if __debug__:
            from wifi_msgs.msg import RangeRSSI
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
                 all(isinstance(v, RangeRSSI) for v in value) and
                 True), \
                "The 'ranges' field must be a set or sequence and each value of type 'RangeRSSI'"
        self._ranges = value
