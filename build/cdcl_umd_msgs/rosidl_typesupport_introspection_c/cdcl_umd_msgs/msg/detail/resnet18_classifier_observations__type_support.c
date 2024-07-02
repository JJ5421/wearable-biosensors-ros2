// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cdcl_umd_msgs:msg/Resnet18ClassifierObservations.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cdcl_umd_msgs/msg/detail/resnet18_classifier_observations__rosidl_typesupport_introspection_c.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cdcl_umd_msgs/msg/detail/resnet18_classifier_observations__functions.h"
#include "cdcl_umd_msgs/msg/detail/resnet18_classifier_observations__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `classifier_observations`
#include "cdcl_umd_msgs/msg/resnet18_classifier_observation.h"
// Member `classifier_observations`
#include "cdcl_umd_msgs/msg/detail/resnet18_classifier_observation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__msg__Resnet18ClassifierObservations__init(message_memory);
}

void cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_fini_function(void * message_memory)
{
  cdcl_umd_msgs__msg__Resnet18ClassifierObservations__fini(message_memory);
}

size_t cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__size_function__Resnet18ClassifierObservations__classifier_observations(
  const void * untyped_member)
{
  const cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * member =
    (const cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence *)(untyped_member);
  return member->size;
}

const void * cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__get_const_function__Resnet18ClassifierObservations__classifier_observations(
  const void * untyped_member, size_t index)
{
  const cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * member =
    (const cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__get_function__Resnet18ClassifierObservations__classifier_observations(
  void * untyped_member, size_t index)
{
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * member =
    (cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence *)(untyped_member);
  return &member->data[index];
}

void cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__fetch_function__Resnet18ClassifierObservations__classifier_observations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cdcl_umd_msgs__msg__Resnet18ClassifierObservation * item =
    ((const cdcl_umd_msgs__msg__Resnet18ClassifierObservation *)
    cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__get_const_function__Resnet18ClassifierObservations__classifier_observations(untyped_member, index));
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation * value =
    (cdcl_umd_msgs__msg__Resnet18ClassifierObservation *)(untyped_value);
  *value = *item;
}

void cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__assign_function__Resnet18ClassifierObservations__classifier_observations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation * item =
    ((cdcl_umd_msgs__msg__Resnet18ClassifierObservation *)
    cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__get_function__Resnet18ClassifierObservations__classifier_observations(untyped_member, index));
  const cdcl_umd_msgs__msg__Resnet18ClassifierObservation * value =
    (const cdcl_umd_msgs__msg__Resnet18ClassifierObservation *)(untyped_value);
  *item = *value;
}

bool cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__resize_function__Resnet18ClassifierObservations__classifier_observations(
  void * untyped_member, size_t size)
{
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * member =
    (cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence *)(untyped_member);
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence__fini(member);
  return cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Resnet18ClassifierObservations, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classifier_observations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Resnet18ClassifierObservations, classifier_observations),  // bytes offset in struct
    NULL,  // default value
    cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__size_function__Resnet18ClassifierObservations__classifier_observations,  // size() function pointer
    cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__get_const_function__Resnet18ClassifierObservations__classifier_observations,  // get_const(index) function pointer
    cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__get_function__Resnet18ClassifierObservations__classifier_observations,  // get(index) function pointer
    cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__fetch_function__Resnet18ClassifierObservations__classifier_observations,  // fetch(index, &value) function pointer
    cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__assign_function__Resnet18ClassifierObservations__classifier_observations,  // assign(index, value) function pointer
    cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__resize_function__Resnet18ClassifierObservations__classifier_observations  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_message_members = {
  "cdcl_umd_msgs__msg",  // message namespace
  "Resnet18ClassifierObservations",  // message name
  2,  // number of fields
  sizeof(cdcl_umd_msgs__msg__Resnet18ClassifierObservations),
  cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_message_member_array,  // message members
  cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, msg, Resnet18ClassifierObservations)() {
  cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, msg, Resnet18ClassifierObservation)();
  if (!cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__msg__Resnet18ClassifierObservations__rosidl_typesupport_introspection_c__Resnet18ClassifierObservations_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
