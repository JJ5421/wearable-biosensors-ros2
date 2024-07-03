# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:msg/HeartRate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HeartRate(type):
    """Metaclass of message 'HeartRate'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAME': 'hr',
        'TYPE': 'vitals',
        'ESTIMATE': 0.0,
        'COVARIANCE': 0.0,
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
                'cdcl_umd_msgs.msg.HeartRate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__heart_rate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__heart_rate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__heart_rate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__heart_rate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__heart_rate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAME': cls.__constants['NAME'],
            'TYPE': cls.__constants['TYPE'],
            'ESTIMATE': cls.__constants['ESTIMATE'],
            'COVARIANCE': cls.__constants['COVARIANCE'],
        }

    @property
    def NAME(self):
        """Message constant 'NAME'."""
        return Metaclass_HeartRate.__constants['NAME']

    @property
    def TYPE(self):
        """Message constant 'TYPE'."""
        return Metaclass_HeartRate.__constants['TYPE']

    @property
    def ESTIMATE(self):
        """Message constant 'ESTIMATE'."""
        return Metaclass_HeartRate.__constants['ESTIMATE']

    @property
    def COVARIANCE(self):
        """Message constant 'COVARIANCE'."""
        return Metaclass_HeartRate.__constants['COVARIANCE']


class HeartRate(metaclass=Metaclass_HeartRate):
    """
    Message class 'HeartRate'.

    Constants:
      NAME
      TYPE
      ESTIMATE
      COVARIANCE
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)
