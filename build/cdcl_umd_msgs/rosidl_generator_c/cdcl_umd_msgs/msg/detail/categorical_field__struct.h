// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/CategoricalField.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__CATEGORICAL_FIELD__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__CATEGORICAL_FIELD__STRUCT_H_

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
// Member 'posteriors'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'hypothesis_names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CategoricalField in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__CategoricalField
{
  cdcl_umd_msgs__msg__CasualtyReportField field;
  int64_t num_hypotheses;
  int64_t max_posterior_index;
  rosidl_runtime_c__double__Sequence posteriors;
  rosidl_runtime_c__String__Sequence hypothesis_names;
} cdcl_umd_msgs__msg__CategoricalField;

// Struct for a sequence of cdcl_umd_msgs__msg__CategoricalField.
typedef struct cdcl_umd_msgs__msg__CategoricalField__Sequence
{
  cdcl_umd_msgs__msg__CategoricalField * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__CategoricalField__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__CATEGORICAL_FIELD__STRUCT_H_
