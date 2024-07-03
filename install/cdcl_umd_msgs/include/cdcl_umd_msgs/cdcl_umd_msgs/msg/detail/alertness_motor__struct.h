// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/AlertnessMotor.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_MOTOR__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NAME'.
static const char * const cdcl_umd_msgs__msg__AlertnessMotor__NAME = "alertness_motor";

/// Constant 'TYPE'.
static const char * const cdcl_umd_msgs__msg__AlertnessMotor__TYPE = "injury";

/// Constant 'NUM_HYPOTHESES'.
enum
{
  cdcl_umd_msgs__msg__AlertnessMotor__NUM_HYPOTHESES = 4ll
};

/// Constant 'MAX_POSTERIOR_INDEX'.
enum
{
  cdcl_umd_msgs__msg__AlertnessMotor__MAX_POSTERIOR_INDEX = 0ll
};

// Include directives for member types
// Member 'posteriors'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'hypothesis_names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AlertnessMotor in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__AlertnessMotor
{
  rosidl_runtime_c__double__Sequence posteriors;
  rosidl_runtime_c__String__Sequence hypothesis_names;
} cdcl_umd_msgs__msg__AlertnessMotor;

// Struct for a sequence of cdcl_umd_msgs__msg__AlertnessMotor.
typedef struct cdcl_umd_msgs__msg__AlertnessMotor__Sequence
{
  cdcl_umd_msgs__msg__AlertnessMotor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__AlertnessMotor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_MOTOR__STRUCT_H_
