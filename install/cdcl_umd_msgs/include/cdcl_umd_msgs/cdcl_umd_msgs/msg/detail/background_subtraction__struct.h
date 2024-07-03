// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/BackgroundSubtraction.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__BACKGROUND_SUBTRACTION__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__BACKGROUND_SUBTRACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BACKGROUND_SUBTRACTION'.
static const char * const cdcl_umd_msgs__msg__BackgroundSubtraction__BACKGROUND_SUBTRACTION = "BACKGROUND_SUBTRACTION";

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/BackgroundSubtraction in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__BackgroundSubtraction
{
  builtin_interfaces__msg__Time stamp;
  double observation;
} cdcl_umd_msgs__msg__BackgroundSubtraction;

// Struct for a sequence of cdcl_umd_msgs__msg__BackgroundSubtraction.
typedef struct cdcl_umd_msgs__msg__BackgroundSubtraction__Sequence
{
  cdcl_umd_msgs__msg__BackgroundSubtraction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__BackgroundSubtraction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__BACKGROUND_SUBTRACTION__STRUCT_H_
