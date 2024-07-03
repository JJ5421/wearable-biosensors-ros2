// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/TargetList.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'targets'
#include "cdcl_umd_msgs/msg/detail/target__struct.h"

/// Struct defined in msg/TargetList in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__TargetList
{
  std_msgs__msg__Header header;
  cdcl_umd_msgs__msg__Target__Sequence targets;
} cdcl_umd_msgs__msg__TargetList;

// Struct for a sequence of cdcl_umd_msgs__msg__TargetList.
typedef struct cdcl_umd_msgs__msg__TargetList__Sequence
{
  cdcl_umd_msgs__msg__TargetList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__TargetList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__STRUCT_H_
