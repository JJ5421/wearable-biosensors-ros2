# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:msg/CategoricalField.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'posteriors'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CategoricalField(type):
    """Metaclass of message 'CategoricalField'."""

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
                'cdcl_umd_msgs.msg.CategoricalField')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__categorical_field
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__categorical_field
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__categorical_field
            cls._TYPE_SUPPORT = module.type_support_msg__msg__categorical_field
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__categorical_field

            from cdcl_umd_msgs.msg import CasualtyReportField
            if CasualtyReportField.__class__._TYPE_SUPPORT is None:
                CasualtyReportField.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CategoricalField(metaclass=Metaclass_CategoricalField):
    """Message class 'CategoricalField'."""

    __slots__ = [
        '_field',
        '_num_hypotheses',
        '_max_posterior_index',
        '_posteriors',
        '_hypothesis_names',
    ]

    _fields_and_field_types = {
        'field': 'cdcl_umd_msgs/CasualtyReportField',
        'num_hypotheses': 'int64',
        'max_posterior_index': 'int64',
        'posteriors': 'sequence<double>',
        'hypothesis_names': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'CasualtyReportField'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from cdcl_umd_msgs.msg import CasualtyReportField
        self.field = kwargs.get('field', CasualtyReportField())
        self.num_hypotheses = kwargs.get('num_hypotheses', int())
        self.max_posterior_index = kwargs.get('max_posterior_index', int())
        self.posteriors = array.array('d', kwargs.get('posteriors', []))
        self.hypothesis_names = kwargs.get('hypothesis_names', [])

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
        if self.field != other.field:
            return False
        if self.num_hypotheses != other.num_hypotheses:
            return False
        if self.max_posterior_index != other.max_posterior_index:
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
    def field(self):
        """Message field 'field'."""
        return self._field

    @field.setter
    def field(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import CasualtyReportField
            assert \
                isinstance(value, CasualtyReportField), \
                "The 'field' field must be a sub message of type 'CasualtyReportField'"
        self._field = value

    @builtins.property
    def num_hypotheses(self):
        """Message field 'num_hypotheses'."""
        return self._num_hypotheses

    @num_hypotheses.setter
    def num_hypotheses(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_hypotheses' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num_hypotheses' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num_hypotheses = value

    @builtins.property
    def max_posterior_index(self):
        """Message field 'max_posterior_index'."""
        return self._max_posterior_index

    @max_posterior_index.setter
    def max_posterior_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_posterior_index' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'max_posterior_index' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._max_posterior_index = value

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
