// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cdcl_umd_msgs:msg/Speech.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cdcl_umd_msgs/msg/detail/speech__rosidl_typesupport_introspection_c.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cdcl_umd_msgs/msg/detail/speech__functions.h"
#include "cdcl_umd_msgs/msg/detail/speech__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `raw_audio`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `transcript`
#include "rosidl_runtime_c/string_functions.h"
// Member `doa`
#include "geometry_msgs/msg/pose.h"
// Member `doa`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__msg__Speech__init(message_memory);
}

void cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_fini_function(void * message_memory)
{
  cdcl_umd_msgs__msg__Speech__fini(message_memory);
}

size_t cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__size_function__Speech__raw_audio(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__get_const_function__Speech__raw_audio(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__get_function__Speech__raw_audio(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__fetch_function__Speech__raw_audio(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__get_const_function__Speech__raw_audio(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__assign_function__Speech__raw_audio(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__get_function__Speech__raw_audio(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__resize_function__Speech__raw_audio(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Speech, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_audio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Speech, raw_audio),  // bytes offset in struct
    NULL,  // default value
    cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__size_function__Speech__raw_audio,  // size() function pointer
    cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__get_const_function__Speech__raw_audio,  // get_const(index) function pointer
    cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__get_function__Speech__raw_audio,  // get(index) function pointer
    cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__fetch_function__Speech__raw_audio,  // fetch(index, &value) function pointer
    cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__assign_function__Speech__raw_audio,  // assign(index, value) function pointer
    cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__resize_function__Speech__raw_audio  // resize(index) function pointer
  },
  {
    "transcript",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Speech, transcript),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "doa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Speech, doa),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_message_members = {
  "cdcl_umd_msgs__msg",  // message namespace
  "Speech",  // message name
  4,  // number of fields
  sizeof(cdcl_umd_msgs__msg__Speech),
  cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_message_member_array,  // message members
  cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, msg, Speech)() {
  cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__msg__Speech__rosidl_typesupport_introspection_c__Speech_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
