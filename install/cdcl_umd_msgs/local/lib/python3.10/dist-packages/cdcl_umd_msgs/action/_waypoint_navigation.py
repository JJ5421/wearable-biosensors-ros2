# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cdcl_umd_msgs:action/WaypointNavigation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WaypointNavigation_Goal(type):
    """Metaclass of message 'WaypointNavigation_Goal'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__waypoint_navigation__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__waypoint_navigation__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__waypoint_navigation__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__waypoint_navigation__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__waypoint_navigation__goal

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from sensor_msgs.msg import NavSatFix
            if NavSatFix.__class__._TYPE_SUPPORT is None:
                NavSatFix.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointNavigation_Goal(metaclass=Metaclass_WaypointNavigation_Goal):
    """Message class 'WaypointNavigation_Goal'."""

    __slots__ = [
        '_timeout',
        '_waypoint',
        '_waypoint_reached_tolerance',
    ]

    _fields_and_field_types = {
        'timeout': 'builtin_interfaces/Duration',
        'waypoint': 'sensor_msgs/NavSatFix',
        'waypoint_reached_tolerance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'NavSatFix'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Duration
        self.timeout = kwargs.get('timeout', Duration())
        from sensor_msgs.msg import NavSatFix
        self.waypoint = kwargs.get('waypoint', NavSatFix())
        self.waypoint_reached_tolerance = kwargs.get('waypoint_reached_tolerance', float())

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
        if self.timeout != other.timeout:
            return False
        if self.waypoint != other.waypoint:
            return False
        if self.waypoint_reached_tolerance != other.waypoint_reached_tolerance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'timeout' field must be a sub message of type 'Duration'"
        self._timeout = value

    @builtins.property
    def waypoint(self):
        """Message field 'waypoint'."""
        return self._waypoint

    @waypoint.setter
    def waypoint(self, value):
        if __debug__:
            from sensor_msgs.msg import NavSatFix
            assert \
                isinstance(value, NavSatFix), \
                "The 'waypoint' field must be a sub message of type 'NavSatFix'"
        self._waypoint = value

    @builtins.property
    def waypoint_reached_tolerance(self):
        """Message field 'waypoint_reached_tolerance'."""
        return self._waypoint_reached_tolerance

    @waypoint_reached_tolerance.setter
    def waypoint_reached_tolerance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waypoint_reached_tolerance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'waypoint_reached_tolerance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._waypoint_reached_tolerance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_WaypointNavigation_Result(type):
    """Metaclass of message 'WaypointNavigation_Result'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__waypoint_navigation__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__waypoint_navigation__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__waypoint_navigation__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__waypoint_navigation__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__waypoint_navigation__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointNavigation_Result(metaclass=Metaclass_WaypointNavigation_Result):
    """Message class 'WaypointNavigation_Result'."""

    __slots__ = [
        '_meters_to_go',
        '_successful',
        '_message',
    ]

    _fields_and_field_types = {
        'meters_to_go': 'double',
        'successful': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.meters_to_go = kwargs.get('meters_to_go', float())
        self.successful = kwargs.get('successful', bool())
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
        if self.meters_to_go != other.meters_to_go:
            return False
        if self.successful != other.successful:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def meters_to_go(self):
        """Message field 'meters_to_go'."""
        return self._meters_to_go

    @meters_to_go.setter
    def meters_to_go(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'meters_to_go' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'meters_to_go' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._meters_to_go = value

    @builtins.property
    def successful(self):
        """Message field 'successful'."""
        return self._successful

    @successful.setter
    def successful(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'successful' field must be of type 'bool'"
        self._successful = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_WaypointNavigation_Feedback(type):
    """Metaclass of message 'WaypointNavigation_Feedback'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__waypoint_navigation__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__waypoint_navigation__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__waypoint_navigation__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__waypoint_navigation__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__waypoint_navigation__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointNavigation_Feedback(metaclass=Metaclass_WaypointNavigation_Feedback):
    """Message class 'WaypointNavigation_Feedback'."""

    __slots__ = [
        '_meters_to_go',
    ]

    _fields_and_field_types = {
        'meters_to_go': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.meters_to_go = kwargs.get('meters_to_go', float())

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
        if self.meters_to_go != other.meters_to_go:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def meters_to_go(self):
        """Message field 'meters_to_go'."""
        return self._meters_to_go

    @meters_to_go.setter
    def meters_to_go(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'meters_to_go' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'meters_to_go' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._meters_to_go = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WaypointNavigation_SendGoal_Request(type):
    """Metaclass of message 'WaypointNavigation_SendGoal_Request'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__waypoint_navigation__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__waypoint_navigation__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__waypoint_navigation__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__waypoint_navigation__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__waypoint_navigation__send_goal__request

            from cdcl_umd_msgs.action import WaypointNavigation
            if WaypointNavigation.Goal.__class__._TYPE_SUPPORT is None:
                WaypointNavigation.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointNavigation_SendGoal_Request(metaclass=Metaclass_WaypointNavigation_SendGoal_Request):
    """Message class 'WaypointNavigation_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'cdcl_umd_msgs/WaypointNavigation_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'action'], 'WaypointNavigation_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_Goal
        self.goal = kwargs.get('goal', WaypointNavigation_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_Goal
            assert \
                isinstance(value, WaypointNavigation_Goal), \
                "The 'goal' field must be a sub message of type 'WaypointNavigation_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WaypointNavigation_SendGoal_Response(type):
    """Metaclass of message 'WaypointNavigation_SendGoal_Response'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__waypoint_navigation__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__waypoint_navigation__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__waypoint_navigation__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__waypoint_navigation__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__waypoint_navigation__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointNavigation_SendGoal_Response(metaclass=Metaclass_WaypointNavigation_SendGoal_Response):
    """Message class 'WaypointNavigation_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

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


class Metaclass_WaypointNavigation_SendGoal(type):
    """Metaclass of service 'WaypointNavigation_SendGoal'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__waypoint_navigation__send_goal

            from cdcl_umd_msgs.action import _waypoint_navigation
            if _waypoint_navigation.Metaclass_WaypointNavigation_SendGoal_Request._TYPE_SUPPORT is None:
                _waypoint_navigation.Metaclass_WaypointNavigation_SendGoal_Request.__import_type_support__()
            if _waypoint_navigation.Metaclass_WaypointNavigation_SendGoal_Response._TYPE_SUPPORT is None:
                _waypoint_navigation.Metaclass_WaypointNavigation_SendGoal_Response.__import_type_support__()


class WaypointNavigation_SendGoal(metaclass=Metaclass_WaypointNavigation_SendGoal):
    from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_SendGoal_Request as Request
    from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WaypointNavigation_GetResult_Request(type):
    """Metaclass of message 'WaypointNavigation_GetResult_Request'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__waypoint_navigation__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__waypoint_navigation__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__waypoint_navigation__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__waypoint_navigation__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__waypoint_navigation__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointNavigation_GetResult_Request(metaclass=Metaclass_WaypointNavigation_GetResult_Request):
    """Message class 'WaypointNavigation_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WaypointNavigation_GetResult_Response(type):
    """Metaclass of message 'WaypointNavigation_GetResult_Response'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__waypoint_navigation__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__waypoint_navigation__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__waypoint_navigation__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__waypoint_navigation__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__waypoint_navigation__get_result__response

            from cdcl_umd_msgs.action import WaypointNavigation
            if WaypointNavigation.Result.__class__._TYPE_SUPPORT is None:
                WaypointNavigation.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointNavigation_GetResult_Response(metaclass=Metaclass_WaypointNavigation_GetResult_Response):
    """Message class 'WaypointNavigation_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'cdcl_umd_msgs/WaypointNavigation_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'action'], 'WaypointNavigation_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_Result
        self.result = kwargs.get('result', WaypointNavigation_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_Result
            assert \
                isinstance(value, WaypointNavigation_Result), \
                "The 'result' field must be a sub message of type 'WaypointNavigation_Result'"
        self._result = value


class Metaclass_WaypointNavigation_GetResult(type):
    """Metaclass of service 'WaypointNavigation_GetResult'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__waypoint_navigation__get_result

            from cdcl_umd_msgs.action import _waypoint_navigation
            if _waypoint_navigation.Metaclass_WaypointNavigation_GetResult_Request._TYPE_SUPPORT is None:
                _waypoint_navigation.Metaclass_WaypointNavigation_GetResult_Request.__import_type_support__()
            if _waypoint_navigation.Metaclass_WaypointNavigation_GetResult_Response._TYPE_SUPPORT is None:
                _waypoint_navigation.Metaclass_WaypointNavigation_GetResult_Response.__import_type_support__()


class WaypointNavigation_GetResult(metaclass=Metaclass_WaypointNavigation_GetResult):
    from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_GetResult_Request as Request
    from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_WaypointNavigation_FeedbackMessage(type):
    """Metaclass of message 'WaypointNavigation_FeedbackMessage'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__waypoint_navigation__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__waypoint_navigation__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__waypoint_navigation__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__waypoint_navigation__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__waypoint_navigation__feedback_message

            from cdcl_umd_msgs.action import WaypointNavigation
            if WaypointNavigation.Feedback.__class__._TYPE_SUPPORT is None:
                WaypointNavigation.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointNavigation_FeedbackMessage(metaclass=Metaclass_WaypointNavigation_FeedbackMessage):
    """Message class 'WaypointNavigation_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'cdcl_umd_msgs/WaypointNavigation_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cdcl_umd_msgs', 'action'], 'WaypointNavigation_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_Feedback
        self.feedback = kwargs.get('feedback', WaypointNavigation_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_Feedback
            assert \
                isinstance(value, WaypointNavigation_Feedback), \
                "The 'feedback' field must be a sub message of type 'WaypointNavigation_Feedback'"
        self._feedback = value


class Metaclass_WaypointNavigation(type):
    """Metaclass of action 'WaypointNavigation'."""

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
                'cdcl_umd_msgs.action.WaypointNavigation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__waypoint_navigation

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from cdcl_umd_msgs.action import _waypoint_navigation
            if _waypoint_navigation.Metaclass_WaypointNavigation_SendGoal._TYPE_SUPPORT is None:
                _waypoint_navigation.Metaclass_WaypointNavigation_SendGoal.__import_type_support__()
            if _waypoint_navigation.Metaclass_WaypointNavigation_GetResult._TYPE_SUPPORT is None:
                _waypoint_navigation.Metaclass_WaypointNavigation_GetResult.__import_type_support__()
            if _waypoint_navigation.Metaclass_WaypointNavigation_FeedbackMessage._TYPE_SUPPORT is None:
                _waypoint_navigation.Metaclass_WaypointNavigation_FeedbackMessage.__import_type_support__()


class WaypointNavigation(metaclass=Metaclass_WaypointNavigation):

    # The goal message defined in the action definition.
    from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_Goal as Goal
    # The result message defined in the action definition.
    from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_Result as Result
    # The feedback message defined in the action definition.
    from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from cdcl_umd_msgs.action._waypoint_navigation import WaypointNavigation_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
