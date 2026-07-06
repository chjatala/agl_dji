# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wifi_msgs:msg/RangeRTT.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RangeRTT(type):
    """Metaclass of message 'RangeRTT'."""

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
                'wifi_msgs.msg.RangeRTT')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__range_rtt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__range_rtt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__range_rtt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__range_rtt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__range_rtt

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from wifi_msgs.msg import DiagnosticsRTT
            if DiagnosticsRTT.__class__._TYPE_SUPPORT is None:
                DiagnosticsRTT.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RangeRTT(metaclass=Metaclass_RangeRTT):
    """Message class 'RangeRTT'."""

    __slots__ = [
        '_stamp',
        '_ap_mac',
        '_valid_ap_position',
        '_ap_position',
        '_valid_range',
        '_distance',
        '_diagnostics',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'ap_mac': 'string',
        'valid_ap_position': 'boolean',
        'ap_position': 'geometry_msgs/Point',
        'valid_range': 'boolean',
        'distance': 'float',
        'diagnostics': 'wifi_msgs/DiagnosticsRTT',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['wifi_msgs', 'msg'], 'DiagnosticsRTT'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.ap_mac = kwargs.get('ap_mac', str())
        self.valid_ap_position = kwargs.get('valid_ap_position', bool())
        from geometry_msgs.msg import Point
        self.ap_position = kwargs.get('ap_position', Point())
        self.valid_range = kwargs.get('valid_range', bool())
        self.distance = kwargs.get('distance', float())
        from wifi_msgs.msg import DiagnosticsRTT
        self.diagnostics = kwargs.get('diagnostics', DiagnosticsRTT())

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
        if self.stamp != other.stamp:
            return False
        if self.ap_mac != other.ap_mac:
            return False
        if self.valid_ap_position != other.valid_ap_position:
            return False
        if self.ap_position != other.ap_position:
            return False
        if self.valid_range != other.valid_range:
            return False
        if self.distance != other.distance:
            return False
        if self.diagnostics != other.diagnostics:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def ap_mac(self):
        """Message field 'ap_mac'."""
        return self._ap_mac

    @ap_mac.setter
    def ap_mac(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ap_mac' field must be of type 'str'"
        self._ap_mac = value

    @builtins.property
    def valid_ap_position(self):
        """Message field 'valid_ap_position'."""
        return self._valid_ap_position

    @valid_ap_position.setter
    def valid_ap_position(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_ap_position' field must be of type 'bool'"
        self._valid_ap_position = value

    @builtins.property
    def ap_position(self):
        """Message field 'ap_position'."""
        return self._ap_position

    @ap_position.setter
    def ap_position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'ap_position' field must be a sub message of type 'Point'"
        self._ap_position = value

    @builtins.property
    def valid_range(self):
        """Message field 'valid_range'."""
        return self._valid_range

    @valid_range.setter
    def valid_range(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_range' field must be of type 'bool'"
        self._valid_range = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance = value

    @builtins.property
    def diagnostics(self):
        """Message field 'diagnostics'."""
        return self._diagnostics

    @diagnostics.setter
    def diagnostics(self, value):
        if __debug__:
            from wifi_msgs.msg import DiagnosticsRTT
            assert \
                isinstance(value, DiagnosticsRTT), \
                "The 'diagnostics' field must be a sub message of type 'DiagnosticsRTT'"
        self._diagnostics = value
