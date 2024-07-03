# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:msg/Target.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'features'
# Member 'feature_descriptors'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Target(type):
    """Metaclass of message 'Target'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOSE': 0,
        'LEFT_EYE': 1,
        'RIGHT_EYE': 2,
        'LEFT_EAR': 3,
        'RIGHT_EAR': 4,
        'LEFT_SHOULDER': 5,
        'RIGHT_SHOULDER': 6,
        'LEFT_ELBOW': 7,
        'RIGHT_ELBOW': 8,
        'LEFT_WRIST': 9,
        'RIGHT_WRIST': 10,
        'LEFT_HIP': 11,
        'RIGHT_HIP': 12,
        'LEFT_KNEE': 13,
        'RIGHT_KNEE': 14,
        'LEFT_ANKLE': 15,
        'RIGHT_ANKLE': 16,
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
                'cdcl_umd_msgs.msg.Target')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__target
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__target
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__target
            cls._TYPE_SUPPORT = module.type_support_msg__msg__target
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__target

            from cdcl_umd_msgs.msg import Point2D
            if Point2D.__class__._TYPE_SUPPORT is None:
                Point2D.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOSE': cls.__constants['NOSE'],
            'LEFT_EYE': cls.__constants['LEFT_EYE'],
            'RIGHT_EYE': cls.__constants['RIGHT_EYE'],
            'LEFT_EAR': cls.__constants['LEFT_EAR'],
            'RIGHT_EAR': cls.__constants['RIGHT_EAR'],
            'LEFT_SHOULDER': cls.__constants['LEFT_SHOULDER'],
            'RIGHT_SHOULDER': cls.__constants['RIGHT_SHOULDER'],
            'LEFT_ELBOW': cls.__constants['LEFT_ELBOW'],
            'RIGHT_ELBOW': cls.__constants['RIGHT_ELBOW'],
            'LEFT_WRIST': cls.__constants['LEFT_WRIST'],
            'RIGHT_WRIST': cls.__constants['RIGHT_WRIST'],
            'LEFT_HIP': cls.__constants['LEFT_HIP'],
            'RIGHT_HIP': cls.__constants['RIGHT_HIP'],
            'LEFT_KNEE': cls.__constants['LEFT_KNEE'],
            'RIGHT_KNEE': cls.__constants['RIGHT_KNEE'],
            'LEFT_ANKLE': cls.__constants['LEFT_ANKLE'],
            'RIGHT_ANKLE': cls.__constants['RIGHT_ANKLE'],
        }

    @property
    def NOSE(self):
        """Message constant 'NOSE'."""
        return Metaclass_Target.__constants['NOSE']

    @property
    def LEFT_EYE(self):
        """Message constant 'LEFT_EYE'."""
        return Metaclass_Target.__constants['LEFT_EYE']

    @property
    def RIGHT_EYE(self):
        """Message constant 'RIGHT_EYE'."""
        return Metaclass_Target.__constants['RIGHT_EYE']

    @property
    def LEFT_EAR(self):
        """Message constant 'LEFT_EAR'."""
        return Metaclass_Target.__constants['LEFT_EAR']

    @property
    def RIGHT_EAR(self):
        """Message constant 'RIGHT_EAR'."""
        return Metaclass_Target.__constants['RIGHT_EAR']

    @property
    def LEFT_SHOULDER(self):
        """Message constant 'LEFT_SHOULDER'."""
        return Metaclass_Target.__constants['LEFT_SHOULDER']

    @property
    def RIGHT_SHOULDER(self):
        """Message constant 'RIGHT_SHOULDER'."""
        return Metaclass_Target.__constants['RIGHT_SHOULDER']

    @property
    def LEFT_ELBOW(self):
        """Message constant 'LEFT_ELBOW'."""
        return Metaclass_Target.__constants['LEFT_ELBOW']

    @property
    def RIGHT_ELBOW(self):
        """Message constant 'RIGHT_ELBOW'."""
        return Metaclass_Target.__constants['RIGHT_ELBOW']

    @property
    def LEFT_WRIST(self):
        """Message constant 'LEFT_WRIST'."""
        return Metaclass_Target.__constants['LEFT_WRIST']

    @property
    def RIGHT_WRIST(self):
        """Message constant 'RIGHT_WRIST'."""
        return Metaclass_Target.__constants['RIGHT_WRIST']

    @property
    def LEFT_HIP(self):
        """Message constant 'LEFT_HIP'."""
        return Metaclass_Target.__constants['LEFT_HIP']

    @property
    def RIGHT_HIP(self):
        """Message constant 'RIGHT_HIP'."""
        return Metaclass_Target.__constants['RIGHT_HIP']

    @property
    def LEFT_KNEE(self):
        """Message constant 'LEFT_KNEE'."""
        return Metaclass_Target.__constants['LEFT_KNEE']

    @property
    def RIGHT_KNEE(self):
        """Message constant 'RIGHT_KNEE'."""
        return Metaclass_Target.__constants['RIGHT_KNEE']

    @property
    def LEFT_ANKLE(self):
        """Message constant 'LEFT_ANKLE'."""
        return Metaclass_Target.__constants['LEFT_ANKLE']

    @property
    def RIGHT_ANKLE(self):
        """Message constant 'RIGHT_ANKLE'."""
        return Metaclass_Target.__constants['RIGHT_ANKLE']


class Target(metaclass=Metaclass_Target):
    """
    Message class 'Target'.

    Constants:
      NOSE
      LEFT_EYE
      RIGHT_EYE
      LEFT_EAR
      RIGHT_EAR
      LEFT_SHOULDER
      RIGHT_SHOULDER
      LEFT_ELBOW
      RIGHT_ELBOW
      LEFT_WRIST
      RIGHT_WRIST
      LEFT_HIP
      RIGHT_HIP
      LEFT_KNEE
      RIGHT_KNEE
      LEFT_ANKLE
      RIGHT_ANKLE
    """

    __slots__ = [
        '_position',
        '_left_lung',
        '_right_lung',
        '_face',
        '_keypoints',
        '_features',
        '_feature_descriptors',
    ]

    _fields_and_field_types = {
        'position': 'geometry_msgs/Vector3',
        'left_lung': 'double',
        'right_lung': 'double',
        'face': 'double',
        'keypoints': 'sequence<cdcl_umd_msgs/Point2D>',
        'features': 'sequence<double>',
        'feature_descriptors': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'msg'], 'Point2D')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Vector3
        self.position = kwargs.get('position', Vector3())
        self.left_lung = kwargs.get('left_lung', float())
        self.right_lung = kwargs.get('right_lung', float())
        self.face = kwargs.get('face', float())
        self.keypoints = kwargs.get('keypoints', [])
        self.features = array.array('d', kwargs.get('features', []))
        self.feature_descriptors = array.array('d', kwargs.get('feature_descriptors', []))

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
        if self.position != other.position:
            return False
        if self.left_lung != other.left_lung:
            return False
        if self.right_lung != other.right_lung:
            return False
        if self.face != other.face:
            return False
        if self.keypoints != other.keypoints:
            return False
        if self.features != other.features:
            return False
        if self.feature_descriptors != other.feature_descriptors:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'position' field must be a sub message of type 'Vector3'"
        self._position = value

    @builtins.property
    def left_lung(self):
        """Message field 'left_lung'."""
        return self._left_lung

    @left_lung.setter
    def left_lung(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_lung' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_lung' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_lung = value

    @builtins.property
    def right_lung(self):
        """Message field 'right_lung'."""
        return self._right_lung

    @right_lung.setter
    def right_lung(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_lung' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_lung' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_lung = value

    @builtins.property
    def face(self):
        """Message field 'face'."""
        return self._face

    @face.setter
    def face(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'face' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'face' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._face = value

    @builtins.property
    def keypoints(self):
        """Message field 'keypoints'."""
        return self._keypoints

    @keypoints.setter
    def keypoints(self, value):
        if __debug__:
            from cdcl_umd_msgs.msg import Point2D
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
                 all(isinstance(v, Point2D) for v in value) and
                 True), \
                "The 'keypoints' field must be a set or sequence and each value of type 'Point2D'"
        self._keypoints = value

    @builtins.property
    def features(self):
        """Message field 'features'."""
        return self._features

    @features.setter
    def features(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'features' array.array() must have the type code of 'd'"
            self._features = value
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
                "The 'features' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._features = array.array('d', value)

    @builtins.property
    def feature_descriptors(self):
        """Message field 'feature_descriptors'."""
        return self._feature_descriptors

    @feature_descriptors.setter
    def feature_descriptors(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'feature_descriptors' array.array() must have the type code of 'd'"
            self._feature_descriptors = value
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
                "The 'feature_descriptors' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._feature_descriptors = array.array('d', value)
