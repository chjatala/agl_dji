# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vitro_ros_definitions:srv/SetVideoSettings.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetVideoSettings_Request(type):
    """Metaclass of message 'SetVideoSettings_Request'."""

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
                'vitro_ros_definitions.srv.SetVideoSettings_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_video_settings__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_video_settings__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_video_settings__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_video_settings__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_video_settings__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetVideoSettings_Request(metaclass=Metaclass_SetVideoSettings_Request):
    """Message class 'SetVideoSettings_Request'."""

    __slots__ = [
        '_camera_video_stream_source_type',
        '_multi_spectral_fusion_type',
        '_multi_spectral_display_mode',
    ]

    _fields_and_field_types = {
        'camera_video_stream_source_type': 'string',
        'multi_spectral_fusion_type': 'string',
        'multi_spectral_display_mode': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.camera_video_stream_source_type = kwargs.get('camera_video_stream_source_type', str())
        self.multi_spectral_fusion_type = kwargs.get('multi_spectral_fusion_type', str())
        self.multi_spectral_display_mode = kwargs.get('multi_spectral_display_mode', str())

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
        if self.camera_video_stream_source_type != other.camera_video_stream_source_type:
            return False
        if self.multi_spectral_fusion_type != other.multi_spectral_fusion_type:
            return False
        if self.multi_spectral_display_mode != other.multi_spectral_display_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def camera_video_stream_source_type(self):
        """Message field 'camera_video_stream_source_type'."""
        return self._camera_video_stream_source_type

    @camera_video_stream_source_type.setter
    def camera_video_stream_source_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera_video_stream_source_type' field must be of type 'str'"
        self._camera_video_stream_source_type = value

    @builtins.property
    def multi_spectral_fusion_type(self):
        """Message field 'multi_spectral_fusion_type'."""
        return self._multi_spectral_fusion_type

    @multi_spectral_fusion_type.setter
    def multi_spectral_fusion_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'multi_spectral_fusion_type' field must be of type 'str'"
        self._multi_spectral_fusion_type = value

    @builtins.property
    def multi_spectral_display_mode(self):
        """Message field 'multi_spectral_display_mode'."""
        return self._multi_spectral_display_mode

    @multi_spectral_display_mode.setter
    def multi_spectral_display_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'multi_spectral_display_mode' field must be of type 'str'"
        self._multi_spectral_display_mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetVideoSettings_Response(type):
    """Metaclass of message 'SetVideoSettings_Response'."""

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
                'vitro_ros_definitions.srv.SetVideoSettings_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_video_settings__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_video_settings__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_video_settings__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_video_settings__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_video_settings__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetVideoSettings_Response(metaclass=Metaclass_SetVideoSettings_Response):
    """Message class 'SetVideoSettings_Response'."""

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


class Metaclass_SetVideoSettings(type):
    """Metaclass of service 'SetVideoSettings'."""

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
                'vitro_ros_definitions.srv.SetVideoSettings')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_video_settings

            from vitro_ros_definitions.srv import _set_video_settings
            if _set_video_settings.Metaclass_SetVideoSettings_Request._TYPE_SUPPORT is None:
                _set_video_settings.Metaclass_SetVideoSettings_Request.__import_type_support__()
            if _set_video_settings.Metaclass_SetVideoSettings_Response._TYPE_SUPPORT is None:
                _set_video_settings.Metaclass_SetVideoSettings_Response.__import_type_support__()


class SetVideoSettings(metaclass=Metaclass_SetVideoSettings):
    from vitro_ros_definitions.srv._set_video_settings import SetVideoSettings_Request as Request
    from vitro_ros_definitions.srv._set_video_settings import SetVideoSettings_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
