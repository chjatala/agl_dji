# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fm_gen_msgs:msg/DiagnosticStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DiagnosticStatus(type):
    """Metaclass of message 'DiagnosticStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 0,
        'WARN': 3,
        'ERROR': 5,
        'STALE': 7,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fm_gen_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fm_gen_msgs.msg.DiagnosticStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diagnostic_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diagnostic_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diagnostic_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diagnostic_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diagnostic_status

            from fm_gen_msgs.msg import KeyValue
            if KeyValue.__class__._TYPE_SUPPORT is None:
                KeyValue.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'WARN': cls.__constants['WARN'],
            'ERROR': cls.__constants['ERROR'],
            'STALE': cls.__constants['STALE'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_DiagnosticStatus.__constants['OK']

    @property
    def WARN(self):
        """Message constant 'WARN'."""
        return Metaclass_DiagnosticStatus.__constants['WARN']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_DiagnosticStatus.__constants['ERROR']

    @property
    def STALE(self):
        """Message constant 'STALE'."""
        return Metaclass_DiagnosticStatus.__constants['STALE']


class DiagnosticStatus(metaclass=Metaclass_DiagnosticStatus):
    """
    Message class 'DiagnosticStatus'.

    Constants:
      OK
      WARN
      ERROR
      STALE
    """

    __slots__ = [
        '_header',
        '_level',
        '_diagnoiser_name',
        '_message',
        '_component_id',
        '_num_status',
        '_values',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'level': 'int8',
        'diagnoiser_name': 'string',
        'message': 'string',
        'component_id': 'string',
        'num_status': 'uint8',
        'values': 'sequence<fm_gen_msgs/KeyValue>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['fm_gen_msgs', 'msg'], 'KeyValue')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.level = kwargs.get('level', int())
        self.diagnoiser_name = kwargs.get('diagnoiser_name', str())
        self.message = kwargs.get('message', str())
        self.component_id = kwargs.get('component_id', str())
        self.num_status = kwargs.get('num_status', int())
        self.values = kwargs.get('values', [])

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
        if self.level != other.level:
            return False
        if self.diagnoiser_name != other.diagnoiser_name:
            return False
        if self.message != other.message:
            return False
        if self.component_id != other.component_id:
            return False
        if self.num_status != other.num_status:
            return False
        if self.values != other.values:
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
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'level' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'level' field must be an integer in [-128, 127]"
        self._level = value

    @builtins.property
    def diagnoiser_name(self):
        """Message field 'diagnoiser_name'."""
        return self._diagnoiser_name

    @diagnoiser_name.setter
    def diagnoiser_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'diagnoiser_name' field must be of type 'str'"
        self._diagnoiser_name = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def component_id(self):
        """Message field 'component_id'."""
        return self._component_id

    @component_id.setter
    def component_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'component_id' field must be of type 'str'"
        self._component_id = value

    @builtins.property
    def num_status(self):
        """Message field 'num_status'."""
        return self._num_status

    @num_status.setter
    def num_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_status' field must be an unsigned integer in [0, 255]"
        self._num_status = value

    @builtins.property
    def values(self):
        """Message field 'values'."""
        return self._values

    @values.setter
    def values(self, value):
        if __debug__:
            from fm_gen_msgs.msg import KeyValue
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
                 all(isinstance(v, KeyValue) for v in value) and
                 True), \
                "The 'values' field must be a set or sequence and each value of type 'KeyValue'"
        self._values = value
