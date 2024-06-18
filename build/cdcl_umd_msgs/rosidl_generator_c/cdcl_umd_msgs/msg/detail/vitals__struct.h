// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/Vitals.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__VITALS__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__VITALS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Vitals in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__Vitals
{
  builtin_interfaces__msg__Time stamp;
  float data;
} cdcl_umd_msgs__msg__Vitals;

// Struct for a sequence of cdcl_umd_msgs__msg__Vitals.
typedef struct cdcl_umd_msgs__msg__Vitals__Sequence
{
  cdcl_umd_msgs__msg__Vitals * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__Vitals__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__VITALS__STRUCT_H_
