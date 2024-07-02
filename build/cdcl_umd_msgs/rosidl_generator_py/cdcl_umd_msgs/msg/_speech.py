# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:msg/Speech.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'raw_audio'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Speech(type):
    """Metaclass of message 'Speech'."""

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
            module = import_type_support('cdcl_umd_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cdcl_umd_msgs.msg.Speech')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__speech
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__speech
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__speech
            cls._TYPE_SUPPORT = module.type_support_msg__msg__speech
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__speech

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Speech(metaclass=Metaclass_Speech):
    """Message class 'Speech'."""

    __slots__ = [
        '_header',
        '_raw_audio',
        '_transcript',
        '_doa',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'raw_audio': 'sequence<int16>',
        'transcript': 'string',
        'doa': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.raw_audio = array.array('h', kwargs.get('raw_audio', []))
        self.transcript = kwargs.get('transcript', str())
        from geometry_msgs.msg import Pose
        self.doa = kwargs.get('doa', Pose())

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
        if self.raw_audio != other.raw_audio:
            return False
        if self.transcript != other.transcript:
            return False
        if self.doa != other.doa:
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
    def raw_audio(self):
        """Message field 'raw_audio'."""
        return self._raw_audio

    @raw_audio.setter
    def raw_audio(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'raw_audio' array.array() must have the type code of 'h'"
            self._raw_audio = value
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
                "The 'raw_audio' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._raw_audio = array.array('h', value)

    @builtins.property
    def transcript(self):
        """Message field 'transcript'."""
        return self._transcript

    @transcript.setter
    def transcript(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'transcript' field must be of type 'str'"
        self._transcript = value

    @builtins.property
    def doa(self):
        """Message field 'doa'."""
        return self._doa

    @doa.setter
    def doa(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'doa' field must be a sub message of type 'Pose'"
        self._doa = value
