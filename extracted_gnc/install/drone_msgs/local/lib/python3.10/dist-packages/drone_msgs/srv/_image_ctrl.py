# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drone_msgs:srv/ImageCtrl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImageCtrl_Request(type):
    """Metaclass of message 'ImageCtrl_Request'."""

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
                'drone_msgs.srv.ImageCtrl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__image_ctrl__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__image_ctrl__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__image_ctrl__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__image_ctrl__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__image_ctrl__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ENABLE__DEFAULT': False,
            'NEXT_PICTURE_DISTANCE__DEFAULT': 0.0,
            'OVERLAP__DEFAULT': 0.0,
            'FOV__DEFAULT': 0.0,
            'PICTURE_PLANE_DISTANCE__DEFAULT': 0.0,
        }

    @property
    def ENABLE__DEFAULT(cls):
        """Return default value for message field 'enable'."""
        return False

    @property
    def NEXT_PICTURE_DISTANCE__DEFAULT(cls):
        """Return default value for message field 'next_picture_distance'."""
        return 0.0

    @property
    def OVERLAP__DEFAULT(cls):
        """Return default value for message field 'overlap'."""
        return 0.0

    @property
    def FOV__DEFAULT(cls):
        """Return default value for message field 'fov'."""
        return 0.0

    @property
    def PICTURE_PLANE_DISTANCE__DEFAULT(cls):
        """Return default value for message field 'picture_plane_distance'."""
        return 0.0


class ImageCtrl_Request(metaclass=Metaclass_ImageCtrl_Request):
    """Message class 'ImageCtrl_Request'."""

    __slots__ = [
        '_enable',
        '_mode',
        '_next_picture_distance',
        '_overlap',
        '_fov',
        '_picture_plane_distance',
    ]

    _fields_and_field_types = {
        'enable': 'boolean',
        'mode': 'string',
        'next_picture_distance': 'float',
        'overlap': 'float',
        'fov': 'float',
        'picture_plane_distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.enable = kwargs.get(
            'enable', ImageCtrl_Request.ENABLE__DEFAULT)
        self.mode = kwargs.get('mode', str())
        self.next_picture_distance = kwargs.get(
            'next_picture_distance', ImageCtrl_Request.NEXT_PICTURE_DISTANCE__DEFAULT)
        self.overlap = kwargs.get(
            'overlap', ImageCtrl_Request.OVERLAP__DEFAULT)
        self.fov = kwargs.get(
            'fov', ImageCtrl_Request.FOV__DEFAULT)
        self.picture_plane_distance = kwargs.get(
            'picture_plane_distance', ImageCtrl_Request.PICTURE_PLANE_DISTANCE__DEFAULT)

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
        if self.enable != other.enable:
            return False
        if self.mode != other.mode:
            return False
        if self.next_picture_distance != other.next_picture_distance:
            return False
        if self.overlap != other.overlap:
            return False
        if self.fov != other.fov:
            return False
        if self.picture_plane_distance != other.picture_plane_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enable(self):
        """Message field 'enable'."""
        return self._enable

    @enable.setter
    def enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable' field must be of type 'bool'"
        self._enable = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @builtins.property
    def next_picture_distance(self):
        """Message field 'next_picture_distance'."""
        return self._next_picture_distance

    @next_picture_distance.setter
    def next_picture_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'next_picture_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'next_picture_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._next_picture_distance = value

    @builtins.property
    def overlap(self):
        """Message field 'overlap'."""
        return self._overlap

    @overlap.setter
    def overlap(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'overlap' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'overlap' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._overlap = value

    @builtins.property
    def fov(self):
        """Message field 'fov'."""
        return self._fov

    @fov.setter
    def fov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fov = value

    @builtins.property
    def picture_plane_distance(self):
        """Message field 'picture_plane_distance'."""
        return self._picture_plane_distance

    @picture_plane_distance.setter
    def picture_plane_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'picture_plane_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'picture_plane_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._picture_plane_distance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ImageCtrl_Response(type):
    """Metaclass of message 'ImageCtrl_Response'."""

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
                'drone_msgs.srv.ImageCtrl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__image_ctrl__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__image_ctrl__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__image_ctrl__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__image_ctrl__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__image_ctrl__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImageCtrl_Response(metaclass=Metaclass_ImageCtrl_Response):
    """Message class 'ImageCtrl_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_ImageCtrl(type):
    """Metaclass of service 'ImageCtrl'."""

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
                'drone_msgs.srv.ImageCtrl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__image_ctrl

            from drone_msgs.srv import _image_ctrl
            if _image_ctrl.Metaclass_ImageCtrl_Request._TYPE_SUPPORT is None:
                _image_ctrl.Metaclass_ImageCtrl_Request.__import_type_support__()
            if _image_ctrl.Metaclass_ImageCtrl_Response._TYPE_SUPPORT is None:
                _image_ctrl.Metaclass_ImageCtrl_Response.__import_type_support__()


class ImageCtrl(metaclass=Metaclass_ImageCtrl):
    from drone_msgs.srv._image_ctrl import ImageCtrl_Request as Request
    from drone_msgs.srv._image_ctrl import ImageCtrl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
