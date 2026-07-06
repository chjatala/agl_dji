# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vitro_ros_definitions:srv/GetArucoDir.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetArucoDir_Request(type):
    """Metaclass of message 'GetArucoDir_Request'."""

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
            module = import_type_support('vitro_ros_definitions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vitro_ros_definitions.srv.GetArucoDir_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_aruco_dir__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_aruco_dir__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_aruco_dir__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_aruco_dir__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_aruco_dir__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetArucoDir_Request(metaclass=Metaclass_GetArucoDir_Request):
    """Message class 'GetArucoDir_Request'."""

    __slots__ = [
        '_id',
    ]

    _fields_and_field_types = {
        'id': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())

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
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetArucoDir_Response(type):
    """Metaclass of message 'GetArucoDir_Response'."""

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
            module = import_type_support('vitro_ros_definitions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vitro_ros_definitions.srv.GetArucoDir_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_aruco_dir__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_aruco_dir__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_aruco_dir__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_aruco_dir__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_aruco_dir__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetArucoDir_Response(metaclass=Metaclass_GetArucoDir_Response):
    """Message class 'GetArucoDir_Response'."""

    __slots__ = [
        '_direction',
    ]

    _fields_and_field_types = {
        'direction': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.direction = kwargs.get('direction', str())

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
        if self.direction != other.direction:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'direction' field must be of type 'str'"
        self._direction = value


class Metaclass_GetArucoDir(type):
    """Metaclass of service 'GetArucoDir'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vitro_ros_definitions')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vitro_ros_definitions.srv.GetArucoDir')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_aruco_dir

            from vitro_ros_definitions.srv import _get_aruco_dir
            if _get_aruco_dir.Metaclass_GetArucoDir_Request._TYPE_SUPPORT is None:
                _get_aruco_dir.Metaclass_GetArucoDir_Request.__import_type_support__()
            if _get_aruco_dir.Metaclass_GetArucoDir_Response._TYPE_SUPPORT is None:
                _get_aruco_dir.Metaclass_GetArucoDir_Response.__import_type_support__()


class GetArucoDir(metaclass=Metaclass_GetArucoDir):
    from vitro_ros_definitions.srv._get_aruco_dir import GetArucoDir_Request as Request
    from vitro_ros_definitions.srv._get_aruco_dir import GetArucoDir_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
