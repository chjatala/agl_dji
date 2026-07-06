# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wifi_msgs:msg/DiagnosticsRTT.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DiagnosticsRTT(type):
    """Metaclass of message 'DiagnosticsRTT'."""

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
                'wifi_msgs.msg.DiagnosticsRTT')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diagnostics_rtt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diagnostics_rtt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diagnostics_rtt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diagnostics_rtt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diagnostics_rtt

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DiagnosticsRTT(metaclass=Metaclass_DiagnosticsRTT):
    """Message class 'DiagnosticsRTT'."""

    __slots__ = [
        '_rssi',
        '_rssi_spread',
        '_num_bursts',
        '_burst_duration',
        '_ftms_per_burst',
        '_rtt_avg',
        '_rtt_spread',
        '_rtt_variance',
    ]

    _fields_and_field_types = {
        'rssi': 'float',
        'rssi_spread': 'float',
        'num_bursts': 'float',
        'burst_duration': 'float',
        'ftms_per_burst': 'float',
        'rtt_avg': 'float',
        'rtt_spread': 'float',
        'rtt_variance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rssi = kwargs.get('rssi', float())
        self.rssi_spread = kwargs.get('rssi_spread', float())
        self.num_bursts = kwargs.get('num_bursts', float())
        self.burst_duration = kwargs.get('burst_duration', float())
        self.ftms_per_burst = kwargs.get('ftms_per_burst', float())
        self.rtt_avg = kwargs.get('rtt_avg', float())
        self.rtt_spread = kwargs.get('rtt_spread', float())
        self.rtt_variance = kwargs.get('rtt_variance', float())

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
        if self.rssi != other.rssi:
            return False
        if self.rssi_spread != other.rssi_spread:
            return False
        if self.num_bursts != other.num_bursts:
            return False
        if self.burst_duration != other.burst_duration:
            return False
        if self.ftms_per_burst != other.ftms_per_burst:
            return False
        if self.rtt_avg != other.rtt_avg:
            return False
        if self.rtt_spread != other.rtt_spread:
            return False
        if self.rtt_variance != other.rtt_variance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rssi(self):
        """Message field 'rssi'."""
        return self._rssi

    @rssi.setter
    def rssi(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rssi' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rssi' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rssi = value

    @builtins.property
    def rssi_spread(self):
        """Message field 'rssi_spread'."""
        return self._rssi_spread

    @rssi_spread.setter
    def rssi_spread(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rssi_spread' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rssi_spread' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rssi_spread = value

    @builtins.property
    def num_bursts(self):
        """Message field 'num_bursts'."""
        return self._num_bursts

    @num_bursts.setter
    def num_bursts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'num_bursts' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'num_bursts' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._num_bursts = value

    @builtins.property
    def burst_duration(self):
        """Message field 'burst_duration'."""
        return self._burst_duration

    @burst_duration.setter
    def burst_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'burst_duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'burst_duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._burst_duration = value

    @builtins.property
    def ftms_per_burst(self):
        """Message field 'ftms_per_burst'."""
        return self._ftms_per_burst

    @ftms_per_burst.setter
    def ftms_per_burst(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ftms_per_burst' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ftms_per_burst' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ftms_per_burst = value

    @builtins.property
    def rtt_avg(self):
        """Message field 'rtt_avg'."""
        return self._rtt_avg

    @rtt_avg.setter
    def rtt_avg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rtt_avg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rtt_avg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rtt_avg = value

    @builtins.property
    def rtt_spread(self):
        """Message field 'rtt_spread'."""
        return self._rtt_spread

    @rtt_spread.setter
    def rtt_spread(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rtt_spread' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rtt_spread' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rtt_spread = value

    @builtins.property
    def rtt_variance(self):
        """Message field 'rtt_variance'."""
        return self._rtt_variance

    @rtt_variance.setter
    def rtt_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rtt_variance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rtt_variance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rtt_variance = value
