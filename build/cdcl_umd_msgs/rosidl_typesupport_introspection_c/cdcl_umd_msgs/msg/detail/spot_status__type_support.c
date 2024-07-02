// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cdcl_umd_msgs:msg/SpotStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cdcl_umd_msgs/msg/detail/spot_status__rosidl_typesupport_introspection_c.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cdcl_umd_msgs/msg/detail/spot_status__functions.h"
#include "cdcl_umd_msgs/msg/detail/spot_status__struct.h"


// Include directives for member types
// Member `state`
// Member `working_nodes_strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `working_nodes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__msg__SpotStatus__init(message_memory);
}

void cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_fini_function(void * message_memory)
{
  cdcl_umd_msgs__msg__SpotStatus__fini(message_memory);
}

size_t cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__size_function__SpotStatus__working_nodes(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_const_function__SpotStatus__working_nodes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_function__SpotStatus__working_nodes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__fetch_function__SpotStatus__working_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_const_function__SpotStatus__working_nodes(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__assign_function__SpotStatus__working_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_function__SpotStatus__working_nodes(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__resize_function__SpotStatus__working_nodes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__size_function__SpotStatus__working_nodes_strings(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_const_function__SpotStatus__working_nodes_strings(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_function__SpotStatus__working_nodes_strings(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__fetch_function__SpotStatus__working_nodes_strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_const_function__SpotStatus__working_nodes_strings(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__assign_function__SpotStatus__working_nodes_strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_function__SpotStatus__working_nodes_strings(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__resize_function__SpotStatus__working_nodes_strings(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_message_member_array[3] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__SpotStatus, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "working_nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__SpotStatus, working_nodes),  // bytes offset in struct
    NULL,  // default value
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__size_function__SpotStatus__working_nodes,  // size() function pointer
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_const_function__SpotStatus__working_nodes,  // get_const(index) function pointer
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_function__SpotStatus__working_nodes,  // get(index) function pointer
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__fetch_function__SpotStatus__working_nodes,  // fetch(index, &value) function pointer
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__assign_function__SpotStatus__working_nodes,  // assign(index, value) function pointer
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__resize_function__SpotStatus__working_nodes  // resize(index) function pointer
  },
  {
    "working_nodes_strings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__SpotStatus, working_nodes_strings),  // bytes offset in struct
    NULL,  // default value
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__size_function__SpotStatus__working_nodes_strings,  // size() function pointer
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_const_function__SpotStatus__working_nodes_strings,  // get_const(index) function pointer
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__get_function__SpotStatus__working_nodes_strings,  // get(index) function pointer
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__fetch_function__SpotStatus__working_nodes_strings,  // fetch(index, &value) function pointer
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__assign_function__SpotStatus__working_nodes_strings,  // assign(index, value) function pointer
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__resize_function__SpotStatus__working_nodes_strings  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_message_members = {
  "cdcl_umd_msgs__msg",  // message namespace
  "SpotStatus",  // message name
  3,  // number of fields
  sizeof(cdcl_umd_msgs__msg__SpotStatus),
  cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_message_member_array,  // message members
  cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, msg, SpotStatus)() {
  if (!cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__msg__SpotStatus__rosidl_typesupport_introspection_c__SpotStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
