# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosbag2_storage_mcap_testdata:srv/BasicSrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BasicSrv_Request(type):
    """Metaclass of message 'BasicSrv_Request'."""

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
            module = import_type_support('rosbag2_storage_mcap_testdata')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosbag2_storage_mcap_testdata.srv.BasicSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__basic_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__basic_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__basic_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__basic_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__basic_srv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BasicSrv_Request(metaclass=Metaclass_BasicSrv_Request):
    """Message class 'BasicSrv_Request'."""

    __slots__ = [
        '_req',
    ]

    _fields_and_field_types = {
        'req': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.req = kwargs.get('req', str())

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
        if self.req != other.req:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def req(self):
        """Message field 'req'."""
        return self._req

    @req.setter
    def req(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'req' field must be of type 'str'"
        self._req = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BasicSrv_Response(type):
    """Metaclass of message 'BasicSrv_Response'."""

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
            module = import_type_support('rosbag2_storage_mcap_testdata')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosbag2_storage_mcap_testdata.srv.BasicSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__basic_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__basic_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__basic_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__basic_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__basic_srv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BasicSrv_Response(metaclass=Metaclass_BasicSrv_Response):
    """Message class 'BasicSrv_Response'."""

    __slots__ = [
        '_resp',
    ]

    _fields_and_field_types = {
        'resp': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.resp = kwargs.get('resp', str())

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
        if self.resp != other.resp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def resp(self):
        """Message field 'resp'."""
        return self._resp

    @resp.setter
    def resp(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'resp' field must be of type 'str'"
        self._resp = value


class Metaclass_BasicSrv(type):
    """Metaclass of service 'BasicSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rosbag2_storage_mcap_testdata')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosbag2_storage_mcap_testdata.srv.BasicSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__basic_srv

            from rosbag2_storage_mcap_testdata.srv import _basic_srv
            if _basic_srv.Metaclass_BasicSrv_Request._TYPE_SUPPORT is None:
                _basic_srv.Metaclass_BasicSrv_Request.__import_type_support__()
            if _basic_srv.Metaclass_BasicSrv_Response._TYPE_SUPPORT is None:
                _basic_srv.Metaclass_BasicSrv_Response.__import_type_support__()


class BasicSrv(metaclass=Metaclass_BasicSrv):
    from rosbag2_storage_mcap_testdata.srv._basic_srv import BasicSrv_Request as Request
    from rosbag2_storage_mcap_testdata.srv._basic_srv import BasicSrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')