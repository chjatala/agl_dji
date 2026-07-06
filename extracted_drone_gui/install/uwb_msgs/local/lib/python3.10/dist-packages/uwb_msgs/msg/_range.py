# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uwb_msgs:msg/Range.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Range(type):
    """Metaclass of message 'Range'."""

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
            module = import_type_support('uwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uwb_msgs.msg.Range')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__range
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__range
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__range
            cls._TYPE_SUPPORT = module.type_support_msg__msg__range
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__range

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from uwb_msgs.msg import Diagnostics
            if Diagnostics.__class__._TYPE_SUPPORT is None:
                Diagnostics.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Range(metaclass=Metaclass_Range):
    """Message class 'Range'."""

    __slots__ = [
        '_stamp',
        '_anchorid',
        '_listenerid',
        '_anchor_position',
        '_valid_range',
        '_distance',
        '_diagnostics',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'anchorid': 'string',
        'listenerid': 'string',
        'anchor_position': 'geometry_msgs/Point',
        'valid_range': 'boolean',
        'distance': 'float',
        'diagnostics': 'uwb_msgs/Diagnostics',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['uwb_msgs', 'msg'], 'Diagnostics'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.anchorid = kwargs.get('anchorid', str())
        self.listenerid = kwargs.get('listenerid', str())
        from geometry_msgs.msg import Point
        self.anchor_position = kwargs.get('anchor_position', Point())
        self.valid_range = kwargs.get('valid_range', bool())
        self.distance = kwargs.get('distance', float())
        from uwb_msgs.msg import Diagnostics
        self.diagnostics = kwargs.get('diagnostics', Diagnostics())

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
        if self.anchorid != other.anchorid:
            return False
        if self.listenerid != other.listenerid:
            return False
        if self.anchor_position != other.anchor_position:
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
    def anchorid(self):
        """Message field 'anchorid'."""
        return self._anchorid

    @anchorid.setter
    def anchorid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'anchorid' field must be of type 'str'"
        self._anchorid = value

    @builtins.property
    def listenerid(self):
        """Message field 'listenerid'."""
        return self._listenerid

    @listenerid.setter
    def listenerid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'listenerid' field must be of type 'str'"
        self._listenerid = value

    @builtins.property
    def anchor_position(self):
        """Message field 'anchor_position'."""
        return self._anchor_position

    @anchor_position.setter
    def anchor_position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'anchor_position' field must be a sub message of type 'Point'"
        self._anchor_position = value

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
            from uwb_msgs.msg import Diagnostics
            assert \
                isinstance(value, Diagnostics), \
                "The 'diagnostics' field must be a sub message of type 'Diagnostics'"
        self._diagnostics = value
