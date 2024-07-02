# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:msg/CasualtyReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CasualtyReport(type):
    """Metaclass of message 'CasualtyReport'."""

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
                'cdcl_umd_msgs.msg.CasualtyReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__casualty_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__casualty_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__casualty_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__casualty_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__casualty_report

            from cdcl_umd_msgs.msg import CategoricalField
            if CategoricalField.__class__._TYPE_SUPPORT is None:
                CategoricalField.__class__.__import_type_support__()

            from cdcl_umd_msgs.msg import NumericalField
            if NumericalField.__class__._TYPE_SUPPORT is None:
                NumericalField.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CasualtyReport(metaclass=Metaclass_CasualtyReport):
    """Message class 'CasualtyReport'."""

    __slots__ = [
        '_casualty_id',
        '_severe_hemorrhage',
        '_respiratory_distress',
        '_heart_rate',
        '_respiratory_rate',
        '_trauma_head',
        '_trauma_torso',
        '_trauma_upper_extremity',
        '_trauma_lower_extremity',
        '_alertness_ocular',
        '_alertness_motor',
        '_alertness_verbal',
    ]

    _fields_and_field_types = {
        'casualty_id': 'int64',
        'severe_hemorrhage': 'cdcl_umd_msgs/CategoricalField',
        'respiratory_distress': 'cdcl_umd_msgs/CategoricalField',
        'heart_rate': 'cdcl_umd_msgs/NumericalField',
        'respiratory_rate': 'cdcl_umd_msgs/NumericalField',
        'trauma_head': 'cdcl_umd_msgs/CategoricalField',
        'trauma_torso': 'cdcl_umd_msgs/CategoricalField',
        'trauma_upper_extremity': 'cdcl_umd_msgs/CategoricalField',
        'trauma_lower_extremity': 'cdcl_umd_msgs/CategoricalField',
        'alertness_ocular': 'cdcl_umd_msgs/CategoricalField',
        'alertness_motor': 'cdcl_umd_msgs/CategoricalField',
        'alertness_verbal': 'cdcl_umd_msgs/CategoricalField',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'CategoricalField'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'CategoricalField'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'NumericalField'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'NumericalField'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'CategoricalField'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'CategoricalField'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'CategoricalField'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'CategoricalField'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'CategoricalField'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'CategoricalField'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'CategoricalField'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.casualty_id = kwargs.get('casualty_id', int())
        from cdcl_umd_msgs.msg import CategoricalField
        self.severe_hemorrhage = kwargs.get('severe_hemorrhage', CategoricalField())
        from cdcl_umd_msgs.msg import CategoricalField
        self.respiratory_distress = kwargs.get('respiratory_distress', CategoricalField())
        from cdcl_umd_msgs.msg import NumericalField
        self.heart_rate = kwargs.get('heart_rate', NumericalField())
        from cdcl_umd_msgs.msg import NumericalField
        self.respiratory_rate = kwargs.get('respiratory_rate', NumericalField())
        from cdcl_umd_msgs.msg import CategoricalField
        self.trauma_head = kwargs.get('trauma_head', CategoricalField())
        from cdcl_umd_msgs.msg import CategoricalField
        self.trauma_torso = kwargs.get('trauma_torso', CategoricalField())
        from cdcl_umd_msgs.msg import CategoricalField
        self.trauma_upper_extremity = kwargs.get('trauma_upper_extremity', CategoricalField())
        from cdcl_umd_msgs.msg import CategoricalField
        self.trauma_lower_extremity = kwargs.get('trauma_lower_extremity', CategoricalField())
        from cdcl_umd_msgs.msg import CategoricalField
        self.alertness_ocular = kwargs.get('alertness_ocular', CategoricalField())
        from cdcl_umd_msgs.msg import CategoricalField
        self.alertness_motor = kwargs.get('alertness_motor', CategoricalField())
        from cdcl_umd_msgs.msg import CategoricalField
        self.alertness_verbal = kwargs.get('alertness_verbal', CategoricalField())

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
        if self.casualty_id != other.casualty_id:
            return False
        if self.severe_hemorrhage != other.severe_hemorrhage:
            return False
        if self.respiratory_distress != other.respiratory_distress:
            return False
        if self.heart_rate != other.heart_rate:
            return False
        if self.respiratory_rate != other.respiratory_rate:
            return False
        if self.trauma_head != other.trauma_head:
            return False
        if self.trauma_torso != other.trauma_torso:
            return False
        if self.trauma_upper_extremity != other.trauma_upper_extremity:
            return False
        if self.trauma_lower_extremity != other.trauma_lower_extremity:
            return False
        if self.alertness_ocular != other.alertness_ocular:
            return False
        if self.alertness_motor != other.alertness_motor:
            return False
        if self.alertness_verbal != other.alertness_verbal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def casualty_id(self):
        """Message field 'casualty_id'."""
        return self._casualty_id

    @casualty_id.setter
    def casualty_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'casualty_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'casualty_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._casualty_id = value

    @builtins.property
    def severe_hemorrhage(self):
        """Message field 'severe_hemorrhage'."""
        return self._severe_hemorrhage

    @severe_hemorrhage.setter
    def severe_hemorrhage(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import CategoricalField
            assert \
                isinstance(value, CategoricalField), \
                "The 'severe_hemorrhage' field must be a sub message of type 'CategoricalField'"
        self._severe_hemorrhage = value

    @builtins.property
    def respiratory_distress(self):
        """Message field 'respiratory_distress'."""
        return self._respiratory_distress

    @respiratory_distress.setter
    def respiratory_distress(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import CategoricalField
            assert \
                isinstance(value, CategoricalField), \
                "The 'respiratory_distress' field must be a sub message of type 'CategoricalField'"
        self._respiratory_distress = value

    @builtins.property
    def heart_rate(self):
        """Message field 'heart_rate'."""
        return self._heart_rate

    @heart_rate.setter
    def heart_rate(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import NumericalField
            assert \
                isinstance(value, NumericalField), \
                "The 'heart_rate' field must be a sub message of type 'NumericalField'"
        self._heart_rate = value

    @builtins.property
    def respiratory_rate(self):
        """Message field 'respiratory_rate'."""
        return self._respiratory_rate

    @respiratory_rate.setter
    def respiratory_rate(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import NumericalField
            assert \
                isinstance(value, NumericalField), \
                "The 'respiratory_rate' field must be a sub message of type 'NumericalField'"
        self._respiratory_rate = value

    @builtins.property
    def trauma_head(self):
        """Message field 'trauma_head'."""
        return self._trauma_head

    @trauma_head.setter
    def trauma_head(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import CategoricalField
            assert \
                isinstance(value, CategoricalField), \
                "The 'trauma_head' field must be a sub message of type 'CategoricalField'"
        self._trauma_head = value

    @builtins.property
    def trauma_torso(self):
        """Message field 'trauma_torso'."""
        return self._trauma_torso

    @trauma_torso.setter
    def trauma_torso(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import CategoricalField
            assert \
                isinstance(value, CategoricalField), \
                "The 'trauma_torso' field must be a sub message of type 'CategoricalField'"
        self._trauma_torso = value

    @builtins.property
    def trauma_upper_extremity(self):
        """Message field 'trauma_upper_extremity'."""
        return self._trauma_upper_extremity

    @trauma_upper_extremity.setter
    def trauma_upper_extremity(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import CategoricalField
            assert \
                isinstance(value, CategoricalField), \
                "The 'trauma_upper_extremity' field must be a sub message of type 'CategoricalField'"
        self._trauma_upper_extremity = value

    @builtins.property
    def trauma_lower_extremity(self):
        """Message field 'trauma_lower_extremity'."""
        return self._trauma_lower_extremity

    @trauma_lower_extremity.setter
    def trauma_lower_extremity(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import CategoricalField
            assert \
                isinstance(value, CategoricalField), \
                "The 'trauma_lower_extremity' field must be a sub message of type 'CategoricalField'"
        self._trauma_lower_extremity = value

    @builtins.property
    def alertness_ocular(self):
        """Message field 'alertness_ocular'."""
        return self._alertness_ocular

    @alertness_ocular.setter
    def alertness_ocular(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import CategoricalField
            assert \
                isinstance(value, CategoricalField), \
                "The 'alertness_ocular' field must be a sub message of type 'CategoricalField'"
        self._alertness_ocular = value

    @builtins.property
    def alertness_motor(self):
        """Message field 'alertness_motor'."""
        return self._alertness_motor

    @alertness_motor.setter
    def alertness_motor(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import CategoricalField
            assert \
                isinstance(value, CategoricalField), \
                "The 'alertness_motor' field must be a sub message of type 'CategoricalField'"
        self._alertness_motor = value

    @builtins.property
    def alertness_verbal(self):
        """Message field 'alertness_verbal'."""
        return self._alertness_verbal

    @alertness_verbal.setter
    def alertness_verbal(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import CategoricalField
            assert \
                isinstance(value, CategoricalField), \
                "The 'alertness_verbal' field must be a sub message of type 'CategoricalField'"
        self._alertness_verbal = value
