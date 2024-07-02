// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cdcl_umd_msgs:msg/TargetList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cdcl_umd_msgs/msg/detail/target_list__rosidl_typesupport_introspection_c.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cdcl_umd_msgs/msg/detail/target_list__functions.h"
#include "cdcl_umd_msgs/msg/detail/target_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `targets`
#include "cdcl_umd_msgs/msg/target.h"
// Member `targets`
#include "cdcl_umd_msgs/msg/detail/target__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__msg__TargetList__init(message_memory);
}

void cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_fini_function(void * message_memory)
{
  cdcl_umd_msgs__msg__TargetList__fini(message_memory);
}

size_t cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__size_function__TargetList__targets(
  const void * untyped_member)
{
  const cdcl_umd_msgs__msg__Target__Sequence * member =
    (const cdcl_umd_msgs__msg__Target__Sequence *)(untyped_member);
  return member->size;
}

const void * cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__get_const_function__TargetList__targets(
  const void * untyped_member, size_t index)
{
  const cdcl_umd_msgs__msg__Target__Sequence * member =
    (const cdcl_umd_msgs__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__get_function__TargetList__targets(
  void * untyped_member, size_t index)
{
  cdcl_umd_msgs__msg__Target__Sequence * member =
    (cdcl_umd_msgs__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__fetch_function__TargetList__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cdcl_umd_msgs__msg__Target * item =
    ((const cdcl_umd_msgs__msg__Target *)
    cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__get_const_function__TargetList__targets(untyped_member, index));
  cdcl_umd_msgs__msg__Target * value =
    (cdcl_umd_msgs__msg__Target *)(untyped_value);
  *value = *item;
}

void cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__assign_function__TargetList__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cdcl_umd_msgs__msg__Target * item =
    ((cdcl_umd_msgs__msg__Target *)
    cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__get_function__TargetList__targets(untyped_member, index));
  const cdcl_umd_msgs__msg__Target * value =
    (const cdcl_umd_msgs__msg__Target *)(untyped_value);
  *item = *value;
}

bool cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__resize_function__TargetList__targets(
  void * untyped_member, size_t size)
{
  cdcl_umd_msgs__msg__Target__Sequence * member =
    (cdcl_umd_msgs__msg__Target__Sequence *)(untyped_member);
  cdcl_umd_msgs__msg__Target__Sequence__fini(member);
  return cdcl_umd_msgs__msg__Target__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__TargetList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "targets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__TargetList, targets),  // bytes offset in struct
    NULL,  // default value
    cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__size_function__TargetList__targets,  // size() function pointer
    cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__get_const_function__TargetList__targets,  // get_const(index) function pointer
    cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__get_function__TargetList__targets,  // get(index) function pointer
    cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__fetch_function__TargetList__targets,  // fetch(index, &value) function pointer
    cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__assign_function__TargetList__targets,  // assign(index, value) function pointer
    cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__resize_function__TargetList__targets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_message_members = {
  "cdcl_umd_msgs__msg",  // message namespace
  "TargetList",  // message name
  2,  // number of fields
  sizeof(cdcl_umd_msgs__msg__TargetList),
  cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_message_member_array,  // message members
  cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, msg, TargetList)() {
  cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, msg, Target)();
  if (!cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__msg__TargetList__rosidl_typesupport_introspection_c__TargetList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
