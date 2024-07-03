# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:msg/SpotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpotStatus(type):
    """Metaclass of message 'SpotStatus'."""

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
                'cdcl_umd_msgs.msg.SpotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__spot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__spot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__spot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__spot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__spot_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WORKING_NODES_STRINGS__DEFAULT': ['RESNET18_CLASSIFIERS', 'BACKGROUND_SUBTRACTION', 'SPEECH_ACTIVITY', 'APRILTAG_DETECTIONS', 'TARGET_DETECTION'],
        }

    @property
    def WORKING_NODES_STRINGS__DEFAULT(cls):
        """Return default value for message field 'working_nodes_strings'."""
        return ['RESNET18_CLASSIFIERS', 'BACKGROUND_SUBTRACTION', 'SPEECH_ACTIVITY', 'APRILTAG_DETECTIONS', 'TARGET_DETECTION']


class SpotStatus(metaclass=Metaclass_SpotStatus):
    """Message class 'SpotStatus'."""

    __slots__ = [
        '_state',
        '_working_nodes',
        '_working_nodes_strings',
    ]

    _fields_and_field_types = {
        'state': 'string',
        'working_nodes': 'sequence<boolean>',
        'working_nodes_strings': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', str())
        self.working_nodes = kwargs.get('working_nodes', [])
        self.working_nodes_strings = kwargs.get(
            'working_nodes_strings', SpotStatus.WORKING_NODES_STRINGS__DEFAULT)

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
        if self.state != other.state:
            return False
        if self.working_nodes != other.working_nodes:
            return False
        if self.working_nodes_strings != other.working_nodes_strings:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @builtins.property
    def working_nodes(self):
        """Message field 'working_nodes'."""
        return self._working_nodes

    @working_nodes.setter
    def working_nodes(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'working_nodes' field must be a set or sequence and each value of type 'bool'"
        self._working_nodes = value

    @builtins.property
    def working_nodes_strings(self):
        """Message field 'working_nodes_strings'."""
        return self._working_nodes_strings

    @working_nodes_strings.setter
    def working_nodes_strings(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'working_nodes_strings' field must be a set or sequence and each value of type 'str'"
        self._working_nodes_strings = value
