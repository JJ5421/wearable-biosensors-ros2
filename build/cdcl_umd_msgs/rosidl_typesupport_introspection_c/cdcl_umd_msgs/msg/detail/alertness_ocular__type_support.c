// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cdcl_umd_msgs:msg/AlertnessOcular.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cdcl_umd_msgs/msg/detail/alertness_ocular__rosidl_typesupport_introspection_c.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cdcl_umd_msgs/msg/detail/alertness_ocular__functions.h"
#include "cdcl_umd_msgs/msg/detail/alertness_ocular__struct.h"


// Include directives for member types
// Member `posteriors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `hypothesis_names`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__msg__AlertnessOcular__init(message_memory);
}

void cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_fini_function(void * message_memory)
{
  cdcl_umd_msgs__msg__AlertnessOcular__fini(message_memory);
}

size_t cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__size_function__AlertnessOcular__posteriors(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_const_function__AlertnessOcular__posteriors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_function__AlertnessOcular__posteriors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__fetch_function__AlertnessOcular__posteriors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_const_function__AlertnessOcular__posteriors(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__assign_function__AlertnessOcular__posteriors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_function__AlertnessOcular__posteriors(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__resize_function__AlertnessOcular__posteriors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__size_function__AlertnessOcular__hypothesis_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_const_function__AlertnessOcular__hypothesis_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_function__AlertnessOcular__hypothesis_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__fetch_function__AlertnessOcular__hypothesis_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_const_function__AlertnessOcular__hypothesis_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__assign_function__AlertnessOcular__hypothesis_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_function__AlertnessOcular__hypothesis_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__resize_function__AlertnessOcular__hypothesis_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_message_member_array[2] = {
  {
    "posteriors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__AlertnessOcular, posteriors),  // bytes offset in struct
    NULL,  // default value
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__size_function__AlertnessOcular__posteriors,  // size() function pointer
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_const_function__AlertnessOcular__posteriors,  // get_const(index) function pointer
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_function__AlertnessOcular__posteriors,  // get(index) function pointer
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__fetch_function__AlertnessOcular__posteriors,  // fetch(index, &value) function pointer
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__assign_function__AlertnessOcular__posteriors,  // assign(index, value) function pointer
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__resize_function__AlertnessOcular__posteriors  // resize(index) function pointer
  },
  {
    "hypothesis_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__AlertnessOcular, hypothesis_names),  // bytes offset in struct
    NULL,  // default value
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__size_function__AlertnessOcular__hypothesis_names,  // size() function pointer
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_const_function__AlertnessOcular__hypothesis_names,  // get_const(index) function pointer
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__get_function__AlertnessOcular__hypothesis_names,  // get(index) function pointer
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__fetch_function__AlertnessOcular__hypothesis_names,  // fetch(index, &value) function pointer
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__assign_function__AlertnessOcular__hypothesis_names,  // assign(index, value) function pointer
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__resize_function__AlertnessOcular__hypothesis_names  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_message_members = {
  "cdcl_umd_msgs__msg",  // message namespace
  "AlertnessOcular",  // message name
  2,  // number of fields
  sizeof(cdcl_umd_msgs__msg__AlertnessOcular),
  cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_message_member_array,  // message members
  cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, msg, AlertnessOcular)() {
  if (!cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__msg__AlertnessOcular__rosidl_typesupport_introspection_c__AlertnessOcular_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
