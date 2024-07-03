// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/NavSatFixArray.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'fixes'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.h"

/// Struct defined in msg/NavSatFixArray in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__NavSatFixArray
{
  sensor_msgs__msg__NavSatFix__Sequence fixes;
} cdcl_umd_msgs__msg__NavSatFixArray;

// Struct for a sequence of cdcl_umd_msgs__msg__NavSatFixArray.
typedef struct cdcl_umd_msgs__msg__NavSatFixArray__Sequence
{
  cdcl_umd_msgs__msg__NavSatFixArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__NavSatFixArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__STRUCT_H_
