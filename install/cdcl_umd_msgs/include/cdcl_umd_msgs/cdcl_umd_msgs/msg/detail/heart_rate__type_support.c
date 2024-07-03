// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cdcl_umd_msgs:msg/HeartRate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cdcl_umd_msgs/msg/detail/heart_rate__rosidl_typesupport_introspection_c.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cdcl_umd_msgs/msg/detail/heart_rate__functions.h"
#include "cdcl_umd_msgs/msg/detail/heart_rate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__msg__HeartRate__init(message_memory);
}

void cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_fini_function(void * message_memory)
{
  cdcl_umd_msgs__msg__HeartRate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__HeartRate, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_message_members = {
  "cdcl_umd_msgs__msg",  // message namespace
  "HeartRate",  // message name
  1,  // number of fields
  sizeof(cdcl_umd_msgs__msg__HeartRate),
  cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_message_member_array,  // message members
  cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, msg, HeartRate)() {
  if (!cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__msg__HeartRate__rosidl_typesupport_introspection_c__HeartRate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
