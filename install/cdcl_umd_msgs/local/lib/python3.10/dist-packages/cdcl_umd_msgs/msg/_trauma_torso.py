# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:msg/TraumaTorso.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'posteriors'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TraumaTorso(type):
    """Metaclass of message 'TraumaTorso'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAME': 'trauma_torso',
        'TYPE': 'injury',
        'NUM_HYPOTHESES': 2,
        'MAX_POSTERIOR_INDEX': 0,
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
                'cdcl_umd_msgs.msg.TraumaTorso')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trauma_torso
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trauma_torso
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trauma_torso
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trauma_torso
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trauma_torso

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAME': cls.__constants['NAME'],
            'TYPE': cls.__constants['TYPE'],
            'NUM_HYPOTHESES': cls.__constants['NUM_HYPOTHESES'],
            'MAX_POSTERIOR_INDEX': cls.__constants['MAX_POSTERIOR_INDEX'],
            'POSTERIORS__DEFAULT': array.array('d', (0.5, 0.5, )),
            'HYPOTHESIS_NAMES__DEFAULT': ['wound', 'normal'],
        }

    @property
    def NAME(self):
        """Message constant 'NAME'."""
        return Metaclass_TraumaTorso.__constants['NAME']

    @property
    def TYPE(self):
        """Message constant 'TYPE'."""
        return Metaclass_TraumaTorso.__constants['TYPE']

    @property
    def NUM_HYPOTHESES(self):
        """Message constant 'NUM_HYPOTHESES'."""
        return Metaclass_TraumaTorso.__constants['NUM_HYPOTHESES']

    @property
    def MAX_POSTERIOR_INDEX(self):
        """Message constant 'MAX_POSTERIOR_INDEX'."""
        return Metaclass_TraumaTorso.__constants['MAX_POSTERIOR_INDEX']

    @property
    def POSTERIORS__DEFAULT(cls):
        """Return default value for message field 'posteriors'."""
        return array.array('d', (0.5, 0.5, ))

    @property
    def HYPOTHESIS_NAMES__DEFAULT(cls):
        """Return default value for message field 'hypothesis_names'."""
        return ['wound', 'normal']


class TraumaTorso(metaclass=Metaclass_TraumaTorso):
    """
    Message class 'TraumaTorso'.

    Constants:
      NAME
      TYPE
      NUM_HYPOTHESES
      MAX_POSTERIOR_INDEX
    """

    __slots__ = [
        '_posteriors',
        '_hypothesis_names',
    ]

    _fields_and_field_types = {
        'posteriors': 'sequence<double>',
        'hypothesis_names': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.posteriors = kwargs.get(
            'posteriors', TraumaTorso.POSTERIORS__DEFAULT)
        self.hypothesis_names = kwargs.get(
            'hypothesis_names', TraumaTorso.HYPOTHESIS_NAMES__DEFAULT)

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
        if self.posteriors != other.posteriors:
            return False
        if self.hypothesis_names != other.hypothesis_names:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def posteriors(self):
        """Message field 'posteriors'."""
        return self._posteriors

    @posteriors.setter
    def posteriors(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'posteriors' array.array() must have the type code of 'd'"
            self._posteriors = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'posteriors' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._posteriors = array.array('d', value)

    @builtins.property
    def hypothesis_names(self):
        """Message field 'hypothesis_names'."""
        return self._hypothesis_names

    @hypothesis_names.setter
    def hypothesis_names(self, value):
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
                "The 'hypothesis_names' field must be a set or sequence and each value of type 'str'"
        self._hypothesis_names = value
