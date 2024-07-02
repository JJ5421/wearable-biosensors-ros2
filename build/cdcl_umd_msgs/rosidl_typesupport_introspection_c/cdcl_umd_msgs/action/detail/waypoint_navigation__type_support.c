// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cdcl_umd_msgs:action/WaypointNavigation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"
#include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"


// Include directives for member types
// Member `timeout`
#include "builtin_interfaces/msg/duration.h"
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `waypoint`
#include "sensor_msgs/msg/nav_sat_fix.h"
// Member `waypoint`
#include "sensor_msgs/msg/detail/nav_sat_fix__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__action__WaypointNavigation_Goal__init(message_memory);
}

void cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_fini_function(void * message_memory)
{
  cdcl_umd_msgs__action__WaypointNavigation_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_message_member_array[3] = {
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_Goal, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_Goal, waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoint_reached_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_Goal, waypoint_reached_tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_message_members = {
  "cdcl_umd_msgs__action",  // message namespace
  "WaypointNavigation_Goal",  // message name
  3,  // number of fields
  sizeof(cdcl_umd_msgs__action__WaypointNavigation_Goal),
  cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_message_member_array,  // message members
  cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_Goal)() {
  cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, NavSatFix)();
  if (!cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__action__WaypointNavigation_Goal__rosidl_typesupport_introspection_c__WaypointNavigation_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__action__WaypointNavigation_Result__init(message_memory);
}

void cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_fini_function(void * message_memory)
{
  cdcl_umd_msgs__action__WaypointNavigation_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_message_member_array[3] = {
  {
    "meters_to_go",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_Result, meters_to_go),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "successful",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_Result, successful),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_Result, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_message_members = {
  "cdcl_umd_msgs__action",  // message namespace
  "WaypointNavigation_Result",  // message name
  3,  // number of fields
  sizeof(cdcl_umd_msgs__action__WaypointNavigation_Result),
  cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_message_member_array,  // message members
  cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_Result)() {
  if (!cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__action__WaypointNavigation_Result__rosidl_typesupport_introspection_c__WaypointNavigation_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__action__WaypointNavigation_Feedback__init(message_memory);
}

void cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_fini_function(void * message_memory)
{
  cdcl_umd_msgs__action__WaypointNavigation_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_message_member_array[1] = {
  {
    "meters_to_go",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_Feedback, meters_to_go),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_message_members = {
  "cdcl_umd_msgs__action",  // message namespace
  "WaypointNavigation_Feedback",  // message name
  1,  // number of fields
  sizeof(cdcl_umd_msgs__action__WaypointNavigation_Feedback),
  cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_message_member_array,  // message members
  cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_Feedback)() {
  if (!cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__action__WaypointNavigation_Feedback__rosidl_typesupport_introspection_c__WaypointNavigation_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "cdcl_umd_msgs/action/waypoint_navigation.h"
// Member `goal`
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__init(message_memory);
}

void cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_fini_function(void * message_memory)
{
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_members = {
  "cdcl_umd_msgs__action",  // message namespace
  "WaypointNavigation_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request),
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_member_array,  // message members
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_SendGoal_Request)() {
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_Goal)();
  if (!cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__init(message_memory);
}

void cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_fini_function(void * message_memory)
{
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_message_members = {
  "cdcl_umd_msgs__action",  // message namespace
  "WaypointNavigation_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response),
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_message_member_array,  // message members
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_SendGoal_Response)() {
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_service_members = {
  "cdcl_umd_msgs__action",  // service namespace
  "WaypointNavigation_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_service_type_support_handle = {
  0,
  &cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_SendGoal)() {
  if (!cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_service_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_SendGoal_Response)()->data;
  }

  return &cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__init(message_memory);
}

void cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_fini_function(void * message_memory)
{
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_message_members = {
  "cdcl_umd_msgs__action",  // message namespace
  "WaypointNavigation_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request),
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_message_member_array,  // message members
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_GetResult_Request)() {
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "cdcl_umd_msgs/action/waypoint_navigation.h"
// Member `result`
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__init(message_memory);
}

void cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_fini_function(void * message_memory)
{
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_message_members = {
  "cdcl_umd_msgs__action",  // message namespace
  "WaypointNavigation_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response),
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_message_member_array,  // message members
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_GetResult_Response)() {
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_Result)();
  if (!cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_service_members = {
  "cdcl_umd_msgs__action",  // service namespace
  "WaypointNavigation_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_service_type_support_handle = {
  0,
  &cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_GetResult)() {
  if (!cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_service_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_GetResult_Response)()->data;
  }

  return &cdcl_umd_msgs__action__detail__waypoint_navigation__rosidl_typesupport_introspection_c__WaypointNavigation_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "cdcl_umd_msgs/action/waypoint_navigation.h"
// Member `feedback`
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__init(message_memory);
}

void cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_fini_function(void * message_memory)
{
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_message_members = {
  "cdcl_umd_msgs__action",  // message namespace
  "WaypointNavigation_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage),
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_message_member_array,  // message members
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_FeedbackMessage)() {
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, action, WaypointNavigation_Feedback)();
  if (!cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__rosidl_typesupport_introspection_c__WaypointNavigation_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
