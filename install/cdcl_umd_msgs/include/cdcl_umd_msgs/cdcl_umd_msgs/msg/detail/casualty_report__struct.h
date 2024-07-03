// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/CasualtyReport.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'severe_hemorrhage'
// Member 'respiratory_distress'
// Member 'trauma_head'
// Member 'trauma_torso'
// Member 'trauma_upper_extremity'
// Member 'trauma_lower_extremity'
// Member 'alertness_ocular'
// Member 'alertness_motor'
// Member 'alertness_verbal'
#include "cdcl_umd_msgs/msg/detail/categorical_field__struct.h"
// Member 'heart_rate'
// Member 'respiratory_rate'
#include "cdcl_umd_msgs/msg/detail/numerical_field__struct.h"

/// Struct defined in msg/CasualtyReport in the package cdcl_umd_msgs.
/**
  * the AprilTag ID of the casualty
 */
typedef struct cdcl_umd_msgs__msg__CasualtyReport
{
  int64_t casualty_id;
  cdcl_umd_msgs__msg__CategoricalField severe_hemorrhage;
  cdcl_umd_msgs__msg__CategoricalField respiratory_distress;
  cdcl_umd_msgs__msg__NumericalField heart_rate;
  cdcl_umd_msgs__msg__NumericalField respiratory_rate;
  cdcl_umd_msgs__msg__CategoricalField trauma_head;
  cdcl_umd_msgs__msg__CategoricalField trauma_torso;
  cdcl_umd_msgs__msg__CategoricalField trauma_upper_extremity;
  cdcl_umd_msgs__msg__CategoricalField trauma_lower_extremity;
  cdcl_umd_msgs__msg__CategoricalField alertness_ocular;
  cdcl_umd_msgs__msg__CategoricalField alertness_motor;
  cdcl_umd_msgs__msg__CategoricalField alertness_verbal;
} cdcl_umd_msgs__msg__CasualtyReport;

// Struct for a sequence of cdcl_umd_msgs__msg__CasualtyReport.
typedef struct cdcl_umd_msgs__msg__CasualtyReport__Sequence
{
  cdcl_umd_msgs__msg__CasualtyReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__CasualtyReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__STRUCT_H_
