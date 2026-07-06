# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_msgs:action/Move.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Move_Goal(type):
    """Metaclass of message 'Move_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RELATIVE': 0,
        'ABSOLUTE': 1,
        'LOCAL': 0,
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
                'drone_msgs.action.Move_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__move__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move__goal

            from drone_msgs.msg import Waypoints
            if Waypoints.__class__._TYPE_SUPPORT is None:
                Waypoints.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RELATIVE': cls.__constants['RELATIVE'],
            'ABSOLUTE': cls.__constants['ABSOLUTE'],
            'LOCAL': cls.__constants['LOCAL'],
            'X_REFERENCE_TYPE__DEFAULT': 1,
            'Y_REFERENCE_TYPE__DEFAULT': 1,
            'Z_REFERENCE_TYPE__DEFAULT': 1,
            'YAW_REFERENCE_TYPE__DEFAULT': 1,
            'REF_FRAME__DEFAULT': 0,
        }

    @property
    def RELATIVE(self):
        """Message constant 'RELATIVE'."""
        return Metaclass_Move_Goal.__constants['RELATIVE']

    @property
    def ABSOLUTE(self):
        """Message constant 'ABSOLUTE'."""
        return Metaclass_Move_Goal.__constants['ABSOLUTE']

    @property
    def LOCAL(self):
        """Message constant 'LOCAL'."""
        return Metaclass_Move_Goal.__constants['LOCAL']

    @property
    def X_REFERENCE_TYPE__DEFAULT(cls):
        """Return default value for message field 'x_reference_type'."""
        return 1

    @property
    def Y_REFERENCE_TYPE__DEFAULT(cls):
        """Return default value for message field 'y_reference_type'."""
        return 1

    @property
    def Z_REFERENCE_TYPE__DEFAULT(cls):
        """Return default value for message field 'z_reference_type'."""
        return 1

    @property
    def YAW_REFERENCE_TYPE__DEFAULT(cls):
        """Return default value for message field 'yaw_reference_type'."""
        return 1

    @property
    def REF_FRAME__DEFAULT(cls):
        """Return default value for message field 'ref_frame'."""
        return 0


class Move_Goal(metaclass=Metaclass_Move_Goal):
    """
    Message class 'Move_Goal'.

    Constants:
      RELATIVE
      ABSOLUTE
      LOCAL
    """

    __slots__ = [
        '_waypoints',
        '_x_reference_type',
        '_y_reference_type',
        '_z_reference_type',
        '_yaw_reference_type',
        '_ref_frame',
    ]

    _fields_and_field_types = {
        'waypoints': 'drone_msgs/Waypoints',
        'x_reference_type': 'uint8',
        'y_reference_type': 'uint8',
        'z_reference_type': 'uint8',
        'yaw_reference_type': 'uint8',
        'ref_frame': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['drone_msgs', 'msg'], 'Waypoints'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from drone_msgs.msg import Waypoints
        self.waypoints = kwargs.get('waypoints', Waypoints())
        self.x_reference_type = kwargs.get(
            'x_reference_type', Move_Goal.X_REFERENCE_TYPE__DEFAULT)
        self.y_reference_type = kwargs.get(
            'y_reference_type', Move_Goal.Y_REFERENCE_TYPE__DEFAULT)
        self.z_reference_type = kwargs.get(
            'z_reference_type', Move_Goal.Z_REFERENCE_TYPE__DEFAULT)
        self.yaw_reference_type = kwargs.get(
            'yaw_reference_type', Move_Goal.YAW_REFERENCE_TYPE__DEFAULT)
        self.ref_frame = kwargs.get(
            'ref_frame', Move_Goal.REF_FRAME__DEFAULT)

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
        if self.waypoints != other.waypoints:
            return False
        if self.x_reference_type != other.x_reference_type:
            return False
        if self.y_reference_type != other.y_reference_type:
            return False
        if self.z_reference_type != other.z_reference_type:
            return False
        if self.yaw_reference_type != other.yaw_reference_type:
            return False
        if self.ref_frame != other.ref_frame:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from drone_msgs.msg import Waypoints
            assert \
                isinstance(value, Waypoints), \
                "The 'waypoints' field must be a sub message of type 'Waypoints'"
        self._waypoints = value

    @builtins.property
    def x_reference_type(self):
        """Message field 'x_reference_type'."""
        return self._x_reference_type

    @x_reference_type.setter
    def x_reference_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_reference_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'x_reference_type' field must be an unsigned integer in [0, 255]"
        self._x_reference_type = value

    @builtins.property
    def y_reference_type(self):
        """Message field 'y_reference_type'."""
        return self._y_reference_type

    @y_reference_type.setter
    def y_reference_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_reference_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'y_reference_type' field must be an unsigned integer in [0, 255]"
        self._y_reference_type = value

    @builtins.property
    def z_reference_type(self):
        """Message field 'z_reference_type'."""
        return self._z_reference_type

    @z_reference_type.setter
    def z_reference_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'z_reference_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'z_reference_type' field must be an unsigned integer in [0, 255]"
        self._z_reference_type = value

    @builtins.property
    def yaw_reference_type(self):
        """Message field 'yaw_reference_type'."""
        return self._yaw_reference_type

    @yaw_reference_type.setter
    def yaw_reference_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw_reference_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'yaw_reference_type' field must be an unsigned integer in [0, 255]"
        self._yaw_reference_type = value

    @builtins.property
    def ref_frame(self):
        """Message field 'ref_frame'."""
        return self._ref_frame

    @ref_frame.setter
    def ref_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_frame' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ref_frame' field must be an unsigned integer in [0, 255]"
        self._ref_frame = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Move_Result(type):
    """Metaclass of message 'Move_Result'."""

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
                'drone_msgs.action.Move_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__move__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_Result(metaclass=Metaclass_Move_Result):
    """Message class 'Move_Result'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', str())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Move_Feedback(type):
    """Metaclass of message 'Move_Feedback'."""

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
                'drone_msgs.action.Move_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__move__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_Feedback(metaclass=Metaclass_Move_Feedback):
    """Message class 'Move_Feedback'."""

    __slots__ = [
        '_dist_to_go',
        '_eta',
        '_err_bar',
    ]

    _fields_and_field_types = {
        'dist_to_go': 'float',
        'eta': 'float',
        'err_bar': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dist_to_go = kwargs.get('dist_to_go', float())
        self.eta = kwargs.get('eta', float())
        self.err_bar = kwargs.get('err_bar', float())

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
        if self.dist_to_go != other.dist_to_go:
            return False
        if self.eta != other.eta:
            return False
        if self.err_bar != other.err_bar:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dist_to_go(self):
        """Message field 'dist_to_go'."""
        return self._dist_to_go

    @dist_to_go.setter
    def dist_to_go(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_to_go' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dist_to_go' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dist_to_go = value

    @builtins.property
    def eta(self):
        """Message field 'eta'."""
        return self._eta

    @eta.setter
    def eta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eta = value

    @builtins.property
    def err_bar(self):
        """Message field 'err_bar'."""
        return self._err_bar

    @err_bar.setter
    def err_bar(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'err_bar' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'err_bar' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._err_bar = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Move_SendGoal_Request(type):
    """Metaclass of message 'Move_SendGoal_Request'."""

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
                'drone_msgs.action.Move_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__move__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move__send_goal__request

            from drone_msgs.action import Move
            if Move.Goal.__class__._TYPE_SUPPORT is None:
                Move.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_SendGoal_Request(metaclass=Metaclass_Move_SendGoal_Request):
    """Message class 'Move_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'drone_msgs/Move_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['drone_msgs', 'action'], 'Move_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from drone_msgs.action._move import Move_Goal
        self.goal = kwargs.get('goal', Move_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from drone_msgs.action._move import Move_Goal
            assert \
                isinstance(value, Move_Goal), \
                "The 'goal' field must be a sub message of type 'Move_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Move_SendGoal_Response(type):
    """Metaclass of message 'Move_SendGoal_Response'."""

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
                'drone_msgs.action.Move_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__move__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_SendGoal_Response(metaclass=Metaclass_Move_SendGoal_Response):
    """Message class 'Move_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

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


class Metaclass_Move_SendGoal(type):
    """Metaclass of service 'Move_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('drone_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drone_msgs.action.Move_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__move__send_goal

            from drone_msgs.action import _move
            if _move.Metaclass_Move_SendGoal_Request._TYPE_SUPPORT is None:
                _move.Metaclass_Move_SendGoal_Request.__import_type_support__()
            if _move.Metaclass_Move_SendGoal_Response._TYPE_SUPPORT is None:
                _move.Metaclass_Move_SendGoal_Response.__import_type_support__()


class Move_SendGoal(metaclass=Metaclass_Move_SendGoal):
    from drone_msgs.action._move import Move_SendGoal_Request as Request
    from drone_msgs.action._move import Move_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Move_GetResult_Request(type):
    """Metaclass of message 'Move_GetResult_Request'."""

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
                'drone_msgs.action.Move_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__move__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_GetResult_Request(metaclass=Metaclass_Move_GetResult_Request):
    """Message class 'Move_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Move_GetResult_Response(type):
    """Metaclass of message 'Move_GetResult_Response'."""

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
                'drone_msgs.action.Move_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__move__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move__get_result__response

            from drone_msgs.action import Move
            if Move.Result.__class__._TYPE_SUPPORT is None:
                Move.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_GetResult_Response(metaclass=Metaclass_Move_GetResult_Response):
    """Message class 'Move_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'drone_msgs/Move_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['drone_msgs', 'action'], 'Move_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from drone_msgs.action._move import Move_Result
        self.result = kwargs.get('result', Move_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from drone_msgs.action._move import Move_Result
            assert \
                isinstance(value, Move_Result), \
                "The 'result' field must be a sub message of type 'Move_Result'"
        self._result = value


class Metaclass_Move_GetResult(type):
    """Metaclass of service 'Move_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('drone_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drone_msgs.action.Move_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__move__get_result

            from drone_msgs.action import _move
            if _move.Metaclass_Move_GetResult_Request._TYPE_SUPPORT is None:
                _move.Metaclass_Move_GetResult_Request.__import_type_support__()
            if _move.Metaclass_Move_GetResult_Response._TYPE_SUPPORT is None:
                _move.Metaclass_Move_GetResult_Response.__import_type_support__()


class Move_GetResult(metaclass=Metaclass_Move_GetResult):
    from drone_msgs.action._move import Move_GetResult_Request as Request
    from drone_msgs.action._move import Move_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Move_FeedbackMessage(type):
    """Metaclass of message 'Move_FeedbackMessage'."""

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
                'drone_msgs.action.Move_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__move__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__move__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__move__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__move__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__move__feedback_message

            from drone_msgs.action import Move
            if Move.Feedback.__class__._TYPE_SUPPORT is None:
                Move.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_FeedbackMessage(metaclass=Metaclass_Move_FeedbackMessage):
    """Message class 'Move_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'drone_msgs/Move_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['drone_msgs', 'action'], 'Move_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from drone_msgs.action._move import Move_Feedback
        self.feedback = kwargs.get('feedback', Move_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from drone_msgs.action._move import Move_Feedback
            assert \
                isinstance(value, Move_Feedback), \
                "The 'feedback' field must be a sub message of type 'Move_Feedback'"
        self._feedback = value


class Metaclass_Move(type):
    """Metaclass of action 'Move'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('drone_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drone_msgs.action.Move')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__move

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from drone_msgs.action import _move
            if _move.Metaclass_Move_SendGoal._TYPE_SUPPORT is None:
                _move.Metaclass_Move_SendGoal.__import_type_support__()
            if _move.Metaclass_Move_GetResult._TYPE_SUPPORT is None:
                _move.Metaclass_Move_GetResult.__import_type_support__()
            if _move.Metaclass_Move_FeedbackMessage._TYPE_SUPPORT is None:
                _move.Metaclass_Move_FeedbackMessage.__import_type_support__()


class Move(metaclass=Metaclass_Move):

    # The goal message defined in the action definition.
    from drone_msgs.action._move import Move_Goal as Goal
    # The result message defined in the action definition.
    from drone_msgs.action._move import Move_Result as Result
    # The feedback message defined in the action definition.
    from drone_msgs.action._move import Move_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from drone_msgs.action._move import Move_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from drone_msgs.action._move import Move_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from drone_msgs.action._move import Move_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
