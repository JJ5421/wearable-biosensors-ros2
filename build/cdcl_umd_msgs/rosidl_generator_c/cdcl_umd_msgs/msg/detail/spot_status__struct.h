// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/SpotStatus.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'working_nodes_strings'
#include "rosidl_runtime_c/string.h"
// Member 'working_nodes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SpotStatus in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__SpotStatus
{
  rosidl_runtime_c__String state;
  rosidl_runtime_c__boolean__Sequence working_nodes;
  rosidl_runtime_c__String__Sequence working_nodes_strings;
} cdcl_umd_msgs__msg__SpotStatus;

// Struct for a sequence of cdcl_umd_msgs__msg__SpotStatus.
typedef struct cdcl_umd_msgs__msg__SpotStatus__Sequence
{
  cdcl_umd_msgs__msg__SpotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__SpotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__STRUCT_H_
