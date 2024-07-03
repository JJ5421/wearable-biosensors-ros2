# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:msg/Resnet18ClassifierObservations.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Resnet18ClassifierObservations(type):
    """Metaclass of message 'Resnet18ClassifierObservations'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RESNET18_SEVERE_HEMORRHAGE': 'RESNET18_SEVERE_HEMORRHAGE',
        'RESNET18_TRAUMA_HEAD': 'RESNET18_TRAUMA_HEAD',
        'RESNET18_TRAUMA_TORSO': 'RESNET18_TRAUMA_TORSO',
        'RESNET18_TRAUMA_UPPER_EXTREMITY': 'RESNET18_TRAUMA_UPPER_EXTREMITY',
        'RESNET18_TRAUMA_LOWER_EXTREMITY': 'RESNET18_TRAUMA_LOWER_EXTREMITY',
        'RESNET18_ALERTNESS_OCULAR': 'RESNET18_ALERTNESS_OCULAR',
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
                'cdcl_umd_msgs.msg.Resnet18ClassifierObservations')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__resnet18_classifier_observations
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__resnet18_classifier_observations
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__resnet18_classifier_observations
            cls._TYPE_SUPPORT = module.type_support_msg__msg__resnet18_classifier_observations
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__resnet18_classifier_observations

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from cdcl_umd_msgs.msg import Resnet18ClassifierObservation
            if Resnet18ClassifierObservation.__class__._TYPE_SUPPORT is None:
                Resnet18ClassifierObservation.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RESNET18_SEVERE_HEMORRHAGE': cls.__constants['RESNET18_SEVERE_HEMORRHAGE'],
            'RESNET18_TRAUMA_HEAD': cls.__constants['RESNET18_TRAUMA_HEAD'],
            'RESNET18_TRAUMA_TORSO': cls.__constants['RESNET18_TRAUMA_TORSO'],
            'RESNET18_TRAUMA_UPPER_EXTREMITY': cls.__constants['RESNET18_TRAUMA_UPPER_EXTREMITY'],
            'RESNET18_TRAUMA_LOWER_EXTREMITY': cls.__constants['RESNET18_TRAUMA_LOWER_EXTREMITY'],
            'RESNET18_ALERTNESS_OCULAR': cls.__constants['RESNET18_ALERTNESS_OCULAR'],
        }

    @property
    def RESNET18_SEVERE_HEMORRHAGE(self):
        """Message constant 'RESNET18_SEVERE_HEMORRHAGE'."""
        return Metaclass_Resnet18ClassifierObservations.__constants['RESNET18_SEVERE_HEMORRHAGE']

    @property
    def RESNET18_TRAUMA_HEAD(self):
        """Message constant 'RESNET18_TRAUMA_HEAD'."""
        return Metaclass_Resnet18ClassifierObservations.__constants['RESNET18_TRAUMA_HEAD']

    @property
    def RESNET18_TRAUMA_TORSO(self):
        """Message constant 'RESNET18_TRAUMA_TORSO'."""
        return Metaclass_Resnet18ClassifierObservations.__constants['RESNET18_TRAUMA_TORSO']

    @property
    def RESNET18_TRAUMA_UPPER_EXTREMITY(self):
        """Message constant 'RESNET18_TRAUMA_UPPER_EXTREMITY'."""
        return Metaclass_Resnet18ClassifierObservations.__constants['RESNET18_TRAUMA_UPPER_EXTREMITY']

    @property
    def RESNET18_TRAUMA_LOWER_EXTREMITY(self):
        """Message constant 'RESNET18_TRAUMA_LOWER_EXTREMITY'."""
        return Metaclass_Resnet18ClassifierObservations.__constants['RESNET18_TRAUMA_LOWER_EXTREMITY']

    @property
    def RESNET18_ALERTNESS_OCULAR(self):
        """Message constant 'RESNET18_ALERTNESS_OCULAR'."""
        return Metaclass_Resnet18ClassifierObservations.__constants['RESNET18_ALERTNESS_OCULAR']


class Resnet18ClassifierObservations(metaclass=Metaclass_Resnet18ClassifierObservations):
    """
    Message class 'Resnet18ClassifierObservations'.

    Constants:
      RESNET18_SEVERE_HEMORRHAGE
      RESNET18_TRAUMA_HEAD
      RESNET18_TRAUMA_TORSO
      RESNET18_TRAUMA_UPPER_EXTREMITY
      RESNET18_TRAUMA_LOWER_EXTREMITY
      RESNET18_ALERTNESS_OCULAR
    """

    __slots__ = [
        '_stamp',
        '_classifier_observations',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'classifier_observations': 'sequence<cdcl_umd_msgs/Resnet18ClassifierObservation>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'Resnet18ClassifierObservation')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.classifier_observations = kwargs.get('classifier_observations', [])

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
        if self.stamp != other.stamp:
            return False
        if self.classifier_observations != other.classifier_observations:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def classifier_observations(self):
        """Message field 'classifier_observations'."""
        return self._classifier_observations

    @classifier_observations.setter
    def classifier_observations(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import Resnet18ClassifierObservation
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
                 all(isinstance(v, Resnet18ClassifierObservation) for v in value) and
                 True), \
                "The 'classifier_observations' field must be a set or sequence and each value of type 'Resnet18ClassifierObservation'"
        self._classifier_observations = value
