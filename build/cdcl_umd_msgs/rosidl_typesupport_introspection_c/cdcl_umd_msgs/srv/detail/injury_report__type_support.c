// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cdcl_umd_msgs:srv/InjuryReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cdcl_umd_msgs/srv/detail/injury_report__rosidl_typesupport_introspection_c.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cdcl_umd_msgs/srv/detail/injury_report__functions.h"
#include "cdcl_umd_msgs/srv/detail/injury_report__struct.h"


// Include directives for member types
// Member `system`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__srv__InjuryReport_Request__init(message_memory);
}

void cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_fini_function(void * message_memory)
{
  cdcl_umd_msgs__srv__InjuryReport_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_message_member_array[5] = {
  {
    "casualty_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__srv__InjuryReport_Request, casualty_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "system",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__srv__InjuryReport_Request, system),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__srv__InjuryReport_Request, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__srv__InjuryReport_Request, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_ago",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__srv__InjuryReport_Request, time_ago),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_message_members = {
  "cdcl_umd_msgs__srv",  // message namespace
  "InjuryReport_Request",  // message name
  5,  // number of fields
  sizeof(cdcl_umd_msgs__srv__InjuryReport_Request),
  cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_message_member_array,  // message members
  cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, srv, InjuryReport_Request)() {
  if (!cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__srv__InjuryReport_Request__rosidl_typesupport_introspection_c__InjuryReport_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cdcl_umd_msgs/srv/detail/injury_report__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cdcl_umd_msgs/srv/detail/injury_report__functions.h"
// already included above
// #include "cdcl_umd_msgs/srv/detail/injury_report__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__srv__InjuryReport_Response__init(message_memory);
}

void cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_fini_function(void * message_memory)
{
  cdcl_umd_msgs__srv__InjuryReport_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__srv__InjuryReport_Response, success),  // bytes offset in struct
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
    offsetof(cdcl_umd_msgs__srv__InjuryReport_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_message_members = {
  "cdcl_umd_msgs__srv",  // message namespace
  "InjuryReport_Response",  // message name
  2,  // number of fields
  sizeof(cdcl_umd_msgs__srv__InjuryReport_Response),
  cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_message_member_array,  // message members
  cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, srv, InjuryReport_Response)() {
  if (!cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__srv__InjuryReport_Response__rosidl_typesupport_introspection_c__InjuryReport_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cdcl_umd_msgs/srv/detail/injury_report__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cdcl_umd_msgs__srv__detail__injury_report__rosidl_typesupport_introspection_c__InjuryReport_service_members = {
  "cdcl_umd_msgs__srv",  // service namespace
  "InjuryReport",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cdcl_umd_msgs__srv__detail__injury_report__rosidl_typesupport_introspection_c__InjuryReport_Request_message_type_support_handle,
  NULL  // response message
  // cdcl_umd_msgs__srv__detail__injury_report__rosidl_typesupport_introspection_c__InjuryReport_Response_message_type_support_handle
};

static rosidl_service_type_support_t cdcl_umd_msgs__srv__detail__injury_report__rosidl_typesupport_introspection_c__InjuryReport_service_type_support_handle = {
  0,
  &cdcl_umd_msgs__srv__detail__injury_report__rosidl_typesupport_introspection_c__InjuryReport_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, srv, InjuryReport_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, srv, InjuryReport_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, srv, InjuryReport)() {
  if (!cdcl_umd_msgs__srv__detail__injury_report__rosidl_typesupport_introspection_c__InjuryReport_service_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__srv__detail__injury_report__rosidl_typesupport_introspection_c__InjuryReport_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cdcl_umd_msgs__srv__detail__injury_report__rosidl_typesupport_introspection_c__InjuryReport_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, srv, InjuryReport_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, srv, InjuryReport_Response)()->data;
  }

  return &cdcl_umd_msgs__srv__detail__injury_report__rosidl_typesupport_introspection_c__InjuryReport_service_type_support_handle;
}
