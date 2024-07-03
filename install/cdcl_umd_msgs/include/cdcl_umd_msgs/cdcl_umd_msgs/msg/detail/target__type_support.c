// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cdcl_umd_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cdcl_umd_msgs/msg/detail/target__rosidl_typesupport_introspection_c.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cdcl_umd_msgs/msg/detail/target__functions.h"
#include "cdcl_umd_msgs/msg/detail/target__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/vector3.h"
// Member `position`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `keypoints`
#include "cdcl_umd_msgs/msg/point2_d.h"
// Member `keypoints`
#include "cdcl_umd_msgs/msg/detail/point2_d__rosidl_typesupport_introspection_c.h"
// Member `features`
// Member `feature_descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cdcl_umd_msgs__msg__Target__init(message_memory);
}

void cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_fini_function(void * message_memory)
{
  cdcl_umd_msgs__msg__Target__fini(message_memory);
}

size_t cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__keypoints(
  const void * untyped_member)
{
  const cdcl_umd_msgs__msg__Point2D__Sequence * member =
    (const cdcl_umd_msgs__msg__Point2D__Sequence *)(untyped_member);
  return member->size;
}

const void * cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__keypoints(
  const void * untyped_member, size_t index)
{
  const cdcl_umd_msgs__msg__Point2D__Sequence * member =
    (const cdcl_umd_msgs__msg__Point2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__keypoints(
  void * untyped_member, size_t index)
{
  cdcl_umd_msgs__msg__Point2D__Sequence * member =
    (cdcl_umd_msgs__msg__Point2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__keypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cdcl_umd_msgs__msg__Point2D * item =
    ((const cdcl_umd_msgs__msg__Point2D *)
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__keypoints(untyped_member, index));
  cdcl_umd_msgs__msg__Point2D * value =
    (cdcl_umd_msgs__msg__Point2D *)(untyped_value);
  *value = *item;
}

void cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__keypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cdcl_umd_msgs__msg__Point2D * item =
    ((cdcl_umd_msgs__msg__Point2D *)
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__keypoints(untyped_member, index));
  const cdcl_umd_msgs__msg__Point2D * value =
    (const cdcl_umd_msgs__msg__Point2D *)(untyped_value);
  *item = *value;
}

bool cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__keypoints(
  void * untyped_member, size_t size)
{
  cdcl_umd_msgs__msg__Point2D__Sequence * member =
    (cdcl_umd_msgs__msg__Point2D__Sequence *)(untyped_member);
  cdcl_umd_msgs__msg__Point2D__Sequence__fini(member);
  return cdcl_umd_msgs__msg__Point2D__Sequence__init(member, size);
}

size_t cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__features(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__features(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__features(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__features(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__features(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__features(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__features(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__features(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__feature_descriptors(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__feature_descriptors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__feature_descriptors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__feature_descriptors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__feature_descriptors(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__feature_descriptors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__feature_descriptors(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__feature_descriptors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_member_array[7] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Target, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_lung",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Target, left_lung),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_lung",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Target, right_lung),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "face",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Target, face),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Target, keypoints),  // bytes offset in struct
    NULL,  // default value
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__keypoints,  // size() function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__keypoints,  // get_const(index) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__keypoints,  // get(index) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__keypoints,  // fetch(index, &value) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__keypoints,  // assign(index, value) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__keypoints  // resize(index) function pointer
  },
  {
    "features",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Target, features),  // bytes offset in struct
    NULL,  // default value
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__features,  // size() function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__features,  // get_const(index) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__features,  // get(index) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__features,  // fetch(index, &value) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__features,  // assign(index, value) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__features  // resize(index) function pointer
  },
  {
    "feature_descriptors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs__msg__Target, feature_descriptors),  // bytes offset in struct
    NULL,  // default value
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__size_function__Target__feature_descriptors,  // size() function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_const_function__Target__feature_descriptors,  // get_const(index) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__get_function__Target__feature_descriptors,  // get(index) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__fetch_function__Target__feature_descriptors,  // fetch(index, &value) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__assign_function__Target__feature_descriptors,  // assign(index, value) function pointer
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__resize_function__Target__feature_descriptors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_members = {
  "cdcl_umd_msgs__msg",  // message namespace
  "Target",  // message name
  7,  // number of fields
  sizeof(cdcl_umd_msgs__msg__Target),
  cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_member_array,  // message members
  cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_init_function,  // function to initialize message memory (memory has to be allocated)
  cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_type_support_handle = {
  0,
  &cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, msg, Target)() {
  cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cdcl_umd_msgs, msg, Point2D)();
  if (!cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_type_support_handle.typesupport_identifier) {
    cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cdcl_umd_msgs__msg__Target__rosidl_typesupport_introspection_c__Target_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
