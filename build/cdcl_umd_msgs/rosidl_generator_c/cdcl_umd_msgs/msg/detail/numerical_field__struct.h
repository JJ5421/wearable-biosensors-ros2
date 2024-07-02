// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/NumericalField.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'field'
#include "cdcl_umd_msgs/msg/detail/casualty_report_field__struct.h"

/// Struct defined in msg/NumericalField in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__NumericalField
{
  cdcl_umd_msgs__msg__CasualtyReportField field;
  double estimate;
  double covariance;
} cdcl_umd_msgs__msg__NumericalField;

// Struct for a sequence of cdcl_umd_msgs__msg__NumericalField.
typedef struct cdcl_umd_msgs__msg__NumericalField__Sequence
{
  cdcl_umd_msgs__msg__NumericalField * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__NumericalField__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__STRUCT_H_
