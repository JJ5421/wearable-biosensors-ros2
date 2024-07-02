# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:srv/SetArenaOperatingMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetArenaOperatingMode_Request(type):
    """Metaclass of message 'SetArenaOperatingMode_Request'."""

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
                'cdcl_umd_msgs.srv.SetArenaOperatingMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_arena_operating_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_arena_operating_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_arena_operating_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_arena_operating_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_arena_operating_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetArenaOperatingMode_Request(metaclass=Metaclass_SetArenaOperatingMode_Request):
    """Message class 'SetArenaOperatingMode_Request'."""

    __slots__ = [
        '_operating_mode',
    ]

    _fields_and_field_types = {
        'operating_mode': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.operating_mode = kwargs.get('operating_mode', str())

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
        if self.operating_mode != other.operating_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def operating_mode(self):
        """Message field 'operating_mode'."""
        return self._operating_mode

    @operating_mode.setter
    def operating_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'operating_mode' field must be of type 'str'"
        self._operating_mode = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetArenaOperatingMode_Response(type):
    """Metaclass of message 'SetArenaOperatingMode_Response'."""

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
                'cdcl_umd_msgs.srv.SetArenaOperatingMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_arena_operating_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_arena_operating_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_arena_operating_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_arena_operating_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_arena_operating_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetArenaOperatingMode_Response(metaclass=Metaclass_SetArenaOperatingMode_Response):
    """Message class 'SetArenaOperatingMode_Response'."""

    __slots__ = [
        '_success',
        '_msg',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'msg': 'string',
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
        self.msg = kwargs.get('msg', str())

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
        if self.msg != other.msg:
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
    def msg(self):
        """Message field 'msg'."""
        return self._msg

    @msg.setter
    def msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'msg' field must be of type 'str'"
        self._msg = value


class Metaclass_SetArenaOperatingMode(type):
    """Metaclass of service 'SetArenaOperatingMode'."""

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
                'cdcl_umd_msgs.srv.SetArenaOperatingMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_arena_operating_mode

            from cdcl_umd_msgs.srv import _set_arena_operating_mode
            if _set_arena_operating_mode.Metaclass_SetArenaOperatingMode_Request._TYPE_SUPPORT is None:
                _set_arena_operating_mode.Metaclass_SetArenaOperatingMode_Request.__import_type_support__()
            if _set_arena_operating_mode.Metaclass_SetArenaOperatingMode_Response._TYPE_SUPPORT is None:
                _set_arena_operating_mode.Metaclass_SetArenaOperatingMode_Response.__import_type_support__()


class SetArenaOperatingMode(metaclass=Metaclass_SetArenaOperatingMode):
    from cdcl_umd_msgs.srv._set_arena_operating_mode import SetArenaOperatingMode_Request as Request
    from cdcl_umd_msgs.srv._set_arena_operating_mode import SetArenaOperatingMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
