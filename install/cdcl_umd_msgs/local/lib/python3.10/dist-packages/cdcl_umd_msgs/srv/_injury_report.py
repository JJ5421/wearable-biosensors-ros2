# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:srv/InjuryReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InjuryReport_Request(type):
    """Metaclass of message 'InjuryReport_Request'."""

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
                'cdcl_umd_msgs.srv.InjuryReport_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__injury_report__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__injury_report__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__injury_report__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__injury_report__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__injury_report__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InjuryReport_Request(metaclass=Metaclass_InjuryReport_Request):
    """Message class 'InjuryReport_Request'."""

    __slots__ = [
        '_casualty_id',
        '_system',
        '_type',
        '_value',
        '_time_ago',
    ]

    _fields_and_field_types = {
        'casualty_id': 'int64',
        'system': 'string',
        'type': 'string',
        'value': 'int64',
        'time_ago': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.casualty_id = kwargs.get('casualty_id', int())
        self.system = kwargs.get('system', str())
        self.type = kwargs.get('type', str())
        self.value = kwargs.get('value', int())
        self.time_ago = kwargs.get('time_ago', int())

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
        if self.system != other.system:
            return False
        if self.type != other.type:
            return False
        if self.value != other.value:
            return False
        if self.time_ago != other.time_ago:
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
    def system(self):
        """Message field 'system'."""
        return self._system

    @system.setter
    def system(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'system' field must be of type 'str'"
        self._system = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'value' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._value = value

    @builtins.property
    def time_ago(self):
        """Message field 'time_ago'."""
        return self._time_ago

    @time_ago.setter
    def time_ago(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_ago' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'time_ago' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._time_ago = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_InjuryReport_Response(type):
    """Metaclass of message 'InjuryReport_Response'."""

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
                'cdcl_umd_msgs.srv.InjuryReport_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__injury_report__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__injury_report__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__injury_report__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__injury_report__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__injury_report__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InjuryReport_Response(metaclass=Metaclass_InjuryReport_Response):
    """Message class 'InjuryReport_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

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


class Metaclass_InjuryReport(type):
    """Metaclass of service 'InjuryReport'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cdcl_umd_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cdcl_umd_msgs.srv.InjuryReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__injury_report

            from cdcl_umd_msgs.srv import _injury_report
            if _injury_report.Metaclass_InjuryReport_Request._TYPE_SUPPORT is None:
                _injury_report.Metaclass_InjuryReport_Request.__import_type_support__()
            if _injury_report.Metaclass_InjuryReport_Response._TYPE_SUPPORT is None:
                _injury_report.Metaclass_InjuryReport_Response.__import_type_support__()


class InjuryReport(metaclass=Metaclass_InjuryReport):
    from cdcl_umd_msgs.srv._injury_report import InjuryReport_Request as Request
    from cdcl_umd_msgs.srv._injury_report import InjuryReport_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
