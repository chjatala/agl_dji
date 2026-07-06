# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_msgs:action/ApproachObj.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApproachObj_Goal(type):
    """Metaclass of message 'ApproachObj_Goal'."""

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
                'drone_msgs.action.ApproachObj_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__approach_obj__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__approach_obj__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__approach_obj__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__approach_obj__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__approach_obj__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'APPROACH_TYPE__DEFAULT': 'TOWARDS',
        }

    @property
    def APPROACH_TYPE__DEFAULT(cls):
        """Return default value for message field 'approach_type'."""
        return 'TOWARDS'


class ApproachObj_Goal(metaclass=Metaclass_ApproachObj_Goal):
    """Message class 'ApproachObj_Goal'."""

    __slots__ = [
        '_max_vel',
        '_max_yaw_rate',
        '_distance',
        '_distance_tolerance',
        '_object_pos_x',
        '_object_pos_y',
        '_object_pos_z',
        '_approach_type',
        '_id',
    ]

    _fields_and_field_types = {
        'max_vel': 'double',
        'max_yaw_rate': 'double',
        'distance': 'double',
        'distance_tolerance': 'double',
        'object_pos_x': 'double',
        'object_pos_y': 'double',
        'object_pos_z': 'double',
        'approach_type': 'string',
        'id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.max_vel = kwargs.get('max_vel', float())
        self.max_yaw_rate = kwargs.get('max_yaw_rate', float())
        self.distance = kwargs.get('distance', float())
        self.distance_tolerance = kwargs.get('distance_tolerance', float())
        self.object_pos_x = kwargs.get('object_pos_x', float())
        self.object_pos_y = kwargs.get('object_pos_y', float())
        self.object_pos_z = kwargs.get('object_pos_z', float())
        self.approach_type = kwargs.get(
            'approach_type', ApproachObj_Goal.APPROACH_TYPE__DEFAULT)
        self.id = kwargs.get('id', str())

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
        if self.max_vel != other.max_vel:
            return False
        if self.max_yaw_rate != other.max_yaw_rate:
            return False
        if self.distance != other.distance:
            return False
        if self.distance_tolerance != other.distance_tolerance:
            return False
        if self.object_pos_x != other.object_pos_x:
            return False
        if self.object_pos_y != other.object_pos_y:
            return False
        if self.object_pos_z != other.object_pos_z:
            return False
        if self.approach_type != other.approach_type:
            return False
        if self.id != other.id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def max_vel(self):
        """Message field 'max_vel'."""
        return self._max_vel

    @max_vel.setter
    def max_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_vel = value

    @builtins.property
    def max_yaw_rate(self):
        """Message field 'max_yaw_rate'."""
        return self._max_yaw_rate

    @max_yaw_rate.setter
    def max_yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_yaw_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_yaw_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_yaw_rate = value

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
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance = value

    @builtins.property
    def distance_tolerance(self):
        """Message field 'distance_tolerance'."""
        return self._distance_tolerance

    @distance_tolerance.setter
    def distance_tolerance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_tolerance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance_tolerance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance_tolerance = value

    @builtins.property
    def object_pos_x(self):
        """Message field 'object_pos_x'."""
        return self._object_pos_x

    @object_pos_x.setter
    def object_pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_pos_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'object_pos_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._object_pos_x = value

    @builtins.property
    def object_pos_y(self):
        """Message field 'object_pos_y'."""
        return self._object_pos_y

    @object_pos_y.setter
    def object_pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_pos_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'object_pos_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._object_pos_y = value

    @builtins.property
    def object_pos_z(self):
        """Message field 'object_pos_z'."""
        return self._object_pos_z

    @object_pos_z.setter
    def object_pos_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_pos_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'object_pos_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._object_pos_z = value

    @builtins.property
    def approach_type(self):
        """Message field 'approach_type'."""
        return self._approach_type

    @approach_type.setter
    def approach_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'approach_type' field must be of type 'str'"
        self._approach_type = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ApproachObj_Result(type):
    """Metaclass of message 'ApproachObj_Result'."""

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
                'drone_msgs.action.ApproachObj_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__approach_obj__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__approach_obj__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__approach_obj__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__approach_obj__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__approach_obj__result

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApproachObj_Result(metaclass=Metaclass_ApproachObj_Result):
    """Message class 'ApproachObj_Result'."""

    __slots__ = [
        '_id',
        '_status',
        '_init_pos',
        '_init_yaw',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'status': 'string',
        'init_pos': 'geometry_msgs/Point',
        'init_yaw': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.status = kwargs.get('status', str())
        from geometry_msgs.msg import Point
        self.init_pos = kwargs.get('init_pos', Point())
        self.init_yaw = kwargs.get('init_yaw', float())

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
        if self.id != other.id:
            return False
        if self.status != other.status:
            return False
        if self.init_pos != other.init_pos:
            return False
        if self.init_yaw != other.init_yaw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

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

    @builtins.property
    def init_pos(self):
        """Message field 'init_pos'."""
        return self._init_pos

    @init_pos.setter
    def init_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'init_pos' field must be a sub message of type 'Point'"
        self._init_pos = value

    @builtins.property
    def init_yaw(self):
        """Message field 'init_yaw'."""
        return self._init_yaw

    @init_yaw.setter
    def init_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'init_yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'init_yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._init_yaw = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ApproachObj_Feedback(type):
    """Metaclass of message 'ApproachObj_Feedback'."""

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
                'drone_msgs.action.ApproachObj_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__approach_obj__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__approach_obj__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__approach_obj__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__approach_obj__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__approach_obj__feedback

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApproachObj_Feedback(metaclass=Metaclass_ApproachObj_Feedback):
    """Message class 'ApproachObj_Feedback'."""

    __slots__ = [
        '_id',
        '_dist_to_go',
        '_target_pos',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'dist_to_go': 'float',
        'target_pos': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.dist_to_go = kwargs.get('dist_to_go', float())
        from geometry_msgs.msg import Point
        self.target_pos = kwargs.get('target_pos', Point())

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
        if self.id != other.id:
            return False
        if self.dist_to_go != other.dist_to_go:
            return False
        if self.target_pos != other.target_pos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

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
    def target_pos(self):
        """Message field 'target_pos'."""
        return self._target_pos

    @target_pos.setter
    def target_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'target_pos' field must be a sub message of type 'Point'"
        self._target_pos = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ApproachObj_SendGoal_Request(type):
    """Metaclass of message 'ApproachObj_SendGoal_Request'."""

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
                'drone_msgs.action.ApproachObj_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__approach_obj__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__approach_obj__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__approach_obj__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__approach_obj__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__approach_obj__send_goal__request

            from drone_msgs.action import ApproachObj
            if ApproachObj.Goal.__class__._TYPE_SUPPORT is None:
                ApproachObj.Goal.__class__.__import_type_support__()

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


class ApproachObj_SendGoal_Request(metaclass=Metaclass_ApproachObj_SendGoal_Request):
    """Message class 'ApproachObj_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'drone_msgs/ApproachObj_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['drone_msgs', 'action'], 'ApproachObj_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from drone_msgs.action._approach_obj import ApproachObj_Goal
        self.goal = kwargs.get('goal', ApproachObj_Goal())

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
            from drone_msgs.action._approach_obj import ApproachObj_Goal
            assert \
                isinstance(value, ApproachObj_Goal), \
                "The 'goal' field must be a sub message of type 'ApproachObj_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ApproachObj_SendGoal_Response(type):
    """Metaclass of message 'ApproachObj_SendGoal_Response'."""

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
                'drone_msgs.action.ApproachObj_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__approach_obj__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__approach_obj__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__approach_obj__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__approach_obj__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__approach_obj__send_goal__response

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


class ApproachObj_SendGoal_Response(metaclass=Metaclass_ApproachObj_SendGoal_Response):
    """Message class 'ApproachObj_SendGoal_Response'."""

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


class Metaclass_ApproachObj_SendGoal(type):
    """Metaclass of service 'ApproachObj_SendGoal'."""

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
                'drone_msgs.action.ApproachObj_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__approach_obj__send_goal

            from drone_msgs.action import _approach_obj
            if _approach_obj.Metaclass_ApproachObj_SendGoal_Request._TYPE_SUPPORT is None:
                _approach_obj.Metaclass_ApproachObj_SendGoal_Request.__import_type_support__()
            if _approach_obj.Metaclass_ApproachObj_SendGoal_Response._TYPE_SUPPORT is None:
                _approach_obj.Metaclass_ApproachObj_SendGoal_Response.__import_type_support__()


class ApproachObj_SendGoal(metaclass=Metaclass_ApproachObj_SendGoal):
    from drone_msgs.action._approach_obj import ApproachObj_SendGoal_Request as Request
    from drone_msgs.action._approach_obj import ApproachObj_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ApproachObj_GetResult_Request(type):
    """Metaclass of message 'ApproachObj_GetResult_Request'."""

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
                'drone_msgs.action.ApproachObj_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__approach_obj__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__approach_obj__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__approach_obj__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__approach_obj__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__approach_obj__get_result__request

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


class ApproachObj_GetResult_Request(metaclass=Metaclass_ApproachObj_GetResult_Request):
    """Message class 'ApproachObj_GetResult_Request'."""

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


class Metaclass_ApproachObj_GetResult_Response(type):
    """Metaclass of message 'ApproachObj_GetResult_Response'."""

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
                'drone_msgs.action.ApproachObj_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__approach_obj__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__approach_obj__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__approach_obj__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__approach_obj__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__approach_obj__get_result__response

            from drone_msgs.action import ApproachObj
            if ApproachObj.Result.__class__._TYPE_SUPPORT is None:
                ApproachObj.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApproachObj_GetResult_Response(metaclass=Metaclass_ApproachObj_GetResult_Response):
    """Message class 'ApproachObj_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'drone_msgs/ApproachObj_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['drone_msgs', 'action'], 'ApproachObj_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from drone_msgs.action._approach_obj import ApproachObj_Result
        self.result = kwargs.get('result', ApproachObj_Result())

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
            from drone_msgs.action._approach_obj import ApproachObj_Result
            assert \
                isinstance(value, ApproachObj_Result), \
                "The 'result' field must be a sub message of type 'ApproachObj_Result'"
        self._result = value


class Metaclass_ApproachObj_GetResult(type):
    """Metaclass of service 'ApproachObj_GetResult'."""

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
                'drone_msgs.action.ApproachObj_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__approach_obj__get_result

            from drone_msgs.action import _approach_obj
            if _approach_obj.Metaclass_ApproachObj_GetResult_Request._TYPE_SUPPORT is None:
                _approach_obj.Metaclass_ApproachObj_GetResult_Request.__import_type_support__()
            if _approach_obj.Metaclass_ApproachObj_GetResult_Response._TYPE_SUPPORT is None:
                _approach_obj.Metaclass_ApproachObj_GetResult_Response.__import_type_support__()


class ApproachObj_GetResult(metaclass=Metaclass_ApproachObj_GetResult):
    from drone_msgs.action._approach_obj import ApproachObj_GetResult_Request as Request
    from drone_msgs.action._approach_obj import ApproachObj_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ApproachObj_FeedbackMessage(type):
    """Metaclass of message 'ApproachObj_FeedbackMessage'."""

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
                'drone_msgs.action.ApproachObj_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__approach_obj__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__approach_obj__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__approach_obj__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__approach_obj__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__approach_obj__feedback_message

            from drone_msgs.action import ApproachObj
            if ApproachObj.Feedback.__class__._TYPE_SUPPORT is None:
                ApproachObj.Feedback.__class__.__import_type_support__()

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


class ApproachObj_FeedbackMessage(metaclass=Metaclass_ApproachObj_FeedbackMessage):
    """Message class 'ApproachObj_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'drone_msgs/ApproachObj_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['drone_msgs', 'action'], 'ApproachObj_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from drone_msgs.action._approach_obj import ApproachObj_Feedback
        self.feedback = kwargs.get('feedback', ApproachObj_Feedback())

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
            from drone_msgs.action._approach_obj import ApproachObj_Feedback
            assert \
                isinstance(value, ApproachObj_Feedback), \
                "The 'feedback' field must be a sub message of type 'ApproachObj_Feedback'"
        self._feedback = value


class Metaclass_ApproachObj(type):
    """Metaclass of action 'ApproachObj'."""

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
                'drone_msgs.action.ApproachObj')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__approach_obj

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from drone_msgs.action import _approach_obj
            if _approach_obj.Metaclass_ApproachObj_SendGoal._TYPE_SUPPORT is None:
                _approach_obj.Metaclass_ApproachObj_SendGoal.__import_type_support__()
            if _approach_obj.Metaclass_ApproachObj_GetResult._TYPE_SUPPORT is None:
                _approach_obj.Metaclass_ApproachObj_GetResult.__import_type_support__()
            if _approach_obj.Metaclass_ApproachObj_FeedbackMessage._TYPE_SUPPORT is None:
                _approach_obj.Metaclass_ApproachObj_FeedbackMessage.__import_type_support__()


class ApproachObj(metaclass=Metaclass_ApproachObj):

    # The goal message defined in the action definition.
    from drone_msgs.action._approach_obj import ApproachObj_Goal as Goal
    # The result message defined in the action definition.
    from drone_msgs.action._approach_obj import ApproachObj_Result as Result
    # The feedback message defined in the action definition.
    from drone_msgs.action._approach_obj import ApproachObj_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from drone_msgs.action._approach_obj import ApproachObj_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from drone_msgs.action._approach_obj import ApproachObj_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from drone_msgs.action._approach_obj import ApproachObj_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
