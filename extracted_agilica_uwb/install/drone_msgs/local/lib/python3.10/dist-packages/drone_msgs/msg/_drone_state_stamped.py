# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_msgs:msg/DroneStateStamped.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DroneStateStamped(type):
    """Metaclass of message 'DroneStateStamped'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FLIGHT_STATE_INIT': 'init',
        'CTRL_MODE_MANUAL': 'manual',
        'CTRL_MODE_AUTO': 'auto',
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
                'drone_msgs.msg.DroneStateStamped')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__drone_state_stamped
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__drone_state_stamped
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__drone_state_stamped
            cls._TYPE_SUPPORT = module.type_support_msg__msg__drone_state_stamped
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__drone_state_stamped

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FLIGHT_STATE_INIT': cls.__constants['FLIGHT_STATE_INIT'],
            'CTRL_MODE_MANUAL': cls.__constants['CTRL_MODE_MANUAL'],
            'CTRL_MODE_AUTO': cls.__constants['CTRL_MODE_AUTO'],
        }

    @property
    def FLIGHT_STATE_INIT(self):
        """Message constant 'FLIGHT_STATE_INIT'."""
        return Metaclass_DroneStateStamped.__constants['FLIGHT_STATE_INIT']

    @property
    def CTRL_MODE_MANUAL(self):
        """Message constant 'CTRL_MODE_MANUAL'."""
        return Metaclass_DroneStateStamped.__constants['CTRL_MODE_MANUAL']

    @property
    def CTRL_MODE_AUTO(self):
        """Message constant 'CTRL_MODE_AUTO'."""
        return Metaclass_DroneStateStamped.__constants['CTRL_MODE_AUTO']


class DroneStateStamped(metaclass=Metaclass_DroneStateStamped):
    """
    Message class 'DroneStateStamped'.

    Constants:
      FLIGHT_STATE_INIT
      CTRL_MODE_MANUAL
      CTRL_MODE_AUTO
    """

    __slots__ = [
        '_header',
        '_drone_id',
        '_flight_state',
        '_ctrl_mode',
        '_cam_state',
        '_nav_state',
        '_mission_state',
        '_pil_state',
        '_armed',
        '_battery_remain',
        '_battery_voltage',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'drone_id': 'string',
        'flight_state': 'string',
        'ctrl_mode': 'string',
        'cam_state': 'string',
        'nav_state': 'string',
        'mission_state': 'string',
        'pil_state': 'string',
        'armed': 'boolean',
        'battery_remain': 'float',
        'battery_voltage': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.drone_id = kwargs.get('drone_id', str())
        self.flight_state = kwargs.get('flight_state', str())
        self.ctrl_mode = kwargs.get('ctrl_mode', str())
        self.cam_state = kwargs.get('cam_state', str())
        self.nav_state = kwargs.get('nav_state', str())
        self.mission_state = kwargs.get('mission_state', str())
        self.pil_state = kwargs.get('pil_state', str())
        self.armed = kwargs.get('armed', bool())
        self.battery_remain = kwargs.get('battery_remain', float())
        self.battery_voltage = kwargs.get('battery_voltage', float())

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
        if self.drone_id != other.drone_id:
            return False
        if self.flight_state != other.flight_state:
            return False
        if self.ctrl_mode != other.ctrl_mode:
            return False
        if self.cam_state != other.cam_state:
            return False
        if self.nav_state != other.nav_state:
            return False
        if self.mission_state != other.mission_state:
            return False
        if self.pil_state != other.pil_state:
            return False
        if self.armed != other.armed:
            return False
        if self.battery_remain != other.battery_remain:
            return False
        if self.battery_voltage != other.battery_voltage:
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
    def drone_id(self):
        """Message field 'drone_id'."""
        return self._drone_id

    @drone_id.setter
    def drone_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'drone_id' field must be of type 'str'"
        self._drone_id = value

    @builtins.property
    def flight_state(self):
        """Message field 'flight_state'."""
        return self._flight_state

    @flight_state.setter
    def flight_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'flight_state' field must be of type 'str'"
        self._flight_state = value

    @builtins.property
    def ctrl_mode(self):
        """Message field 'ctrl_mode'."""
        return self._ctrl_mode

    @ctrl_mode.setter
    def ctrl_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ctrl_mode' field must be of type 'str'"
        self._ctrl_mode = value

    @builtins.property
    def cam_state(self):
        """Message field 'cam_state'."""
        return self._cam_state

    @cam_state.setter
    def cam_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cam_state' field must be of type 'str'"
        self._cam_state = value

    @builtins.property
    def nav_state(self):
        """Message field 'nav_state'."""
        return self._nav_state

    @nav_state.setter
    def nav_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'nav_state' field must be of type 'str'"
        self._nav_state = value

    @builtins.property
    def mission_state(self):
        """Message field 'mission_state'."""
        return self._mission_state

    @mission_state.setter
    def mission_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mission_state' field must be of type 'str'"
        self._mission_state = value

    @builtins.property
    def pil_state(self):
        """Message field 'pil_state'."""
        return self._pil_state

    @pil_state.setter
    def pil_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pil_state' field must be of type 'str'"
        self._pil_state = value

    @builtins.property
    def armed(self):
        """Message field 'armed'."""
        return self._armed

    @armed.setter
    def armed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'armed' field must be of type 'bool'"
        self._armed = value

    @builtins.property
    def battery_remain(self):
        """Message field 'battery_remain'."""
        return self._battery_remain

    @battery_remain.setter
    def battery_remain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_remain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_remain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_remain = value

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_voltage = value
