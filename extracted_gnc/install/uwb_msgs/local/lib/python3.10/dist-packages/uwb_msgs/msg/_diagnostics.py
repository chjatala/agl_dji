# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uwb_msgs:msg/Diagnostics.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'cir_magnitude'
# Member 'cir_phase'
# Member 'cir_imag'
# Member 'cir_real'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Diagnostics(type):
    """Metaclass of message 'Diagnostics'."""

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
                'uwb_msgs.msg.Diagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__diagnostics

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Diagnostics(metaclass=Metaclass_Diagnostics):
    """Message class 'Diagnostics'."""

    __slots__ = [
        '_cir_power',
        '_cir_magnitude',
        '_cir_phase',
        '_cir_imag',
        '_cir_real',
        '_preamble_count',
        '_fppl',
        '_rssi',
        '_index_fp',
        '_msgdelay_ms',
    ]

    _fields_and_field_types = {
        'cir_power': 'uint32',
        'cir_magnitude': 'sequence<float>',
        'cir_phase': 'sequence<float>',
        'cir_imag': 'sequence<int16>',
        'cir_real': 'sequence<int16>',
        'preamble_count': 'uint32',
        'fppl': 'float',
        'rssi': 'float',
        'index_fp': 'float',
        'msgdelay_ms': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cir_power = kwargs.get('cir_power', int())
        self.cir_magnitude = array.array('f', kwargs.get('cir_magnitude', []))
        self.cir_phase = array.array('f', kwargs.get('cir_phase', []))
        self.cir_imag = array.array('h', kwargs.get('cir_imag', []))
        self.cir_real = array.array('h', kwargs.get('cir_real', []))
        self.preamble_count = kwargs.get('preamble_count', int())
        self.fppl = kwargs.get('fppl', float())
        self.rssi = kwargs.get('rssi', float())
        self.index_fp = kwargs.get('index_fp', float())
        self.msgdelay_ms = kwargs.get('msgdelay_ms', int())

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
        if self.cir_power != other.cir_power:
            return False
        if self.cir_magnitude != other.cir_magnitude:
            return False
        if self.cir_phase != other.cir_phase:
            return False
        if self.cir_imag != other.cir_imag:
            return False
        if self.cir_real != other.cir_real:
            return False
        if self.preamble_count != other.preamble_count:
            return False
        if self.fppl != other.fppl:
            return False
        if self.rssi != other.rssi:
            return False
        if self.index_fp != other.index_fp:
            return False
        if self.msgdelay_ms != other.msgdelay_ms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cir_power(self):
        """Message field 'cir_power'."""
        return self._cir_power

    @cir_power.setter
    def cir_power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cir_power' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cir_power' field must be an unsigned integer in [0, 4294967295]"
        self._cir_power = value

    @builtins.property
    def cir_magnitude(self):
        """Message field 'cir_magnitude'."""
        return self._cir_magnitude

    @cir_magnitude.setter
    def cir_magnitude(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'cir_magnitude' array.array() must have the type code of 'f'"
            self._cir_magnitude = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'cir_magnitude' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._cir_magnitude = array.array('f', value)

    @builtins.property
    def cir_phase(self):
        """Message field 'cir_phase'."""
        return self._cir_phase

    @cir_phase.setter
    def cir_phase(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'cir_phase' array.array() must have the type code of 'f'"
            self._cir_phase = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'cir_phase' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._cir_phase = array.array('f', value)

    @builtins.property
    def cir_imag(self):
        """Message field 'cir_imag'."""
        return self._cir_imag

    @cir_imag.setter
    def cir_imag(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'cir_imag' array.array() must have the type code of 'h'"
            self._cir_imag = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'cir_imag' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._cir_imag = array.array('h', value)

    @builtins.property
    def cir_real(self):
        """Message field 'cir_real'."""
        return self._cir_real

    @cir_real.setter
    def cir_real(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'cir_real' array.array() must have the type code of 'h'"
            self._cir_real = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'cir_real' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._cir_real = array.array('h', value)

    @builtins.property
    def preamble_count(self):
        """Message field 'preamble_count'."""
        return self._preamble_count

    @preamble_count.setter
    def preamble_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'preamble_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'preamble_count' field must be an unsigned integer in [0, 4294967295]"
        self._preamble_count = value

    @builtins.property
    def fppl(self):
        """Message field 'fppl'."""
        return self._fppl

    @fppl.setter
    def fppl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fppl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fppl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fppl = value

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
    def index_fp(self):
        """Message field 'index_fp'."""
        return self._index_fp

    @index_fp.setter
    def index_fp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'index_fp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'index_fp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._index_fp = value

    @builtins.property
    def msgdelay_ms(self):
        """Message field 'msgdelay_ms'."""
        return self._msgdelay_ms

    @msgdelay_ms.setter
    def msgdelay_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msgdelay_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'msgdelay_ms' field must be an unsigned integer in [0, 4294967295]"
        self._msgdelay_ms = value
