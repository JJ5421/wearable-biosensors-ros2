// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/CasualtyReportField.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT_FIELD__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT_FIELD__STRUCT_H_

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
// Member 'name'
// Member 'type'
// Member 'platform_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CasualtyReportField in the package cdcl_umd_msgs.
/**
  * timestamp
 */
typedef struct cdcl_umd_msgs__msg__CasualtyReportField
{
  builtin_interfaces__msg__Time stamp;
  /// name of the field e.g. severe hemorrhage
  rosidl_runtime_c__String name;
  /// type
  rosidl_runtime_c__String type;
  /// name of the platform taking the measurement e.g. Apollo
  rosidl_runtime_c__String platform_name;
} cdcl_umd_msgs__msg__CasualtyReportField;

// Struct for a sequence of cdcl_umd_msgs__msg__CasualtyReportField.
typedef struct cdcl_umd_msgs__msg__CasualtyReportField__Sequence
{
  cdcl_umd_msgs__msg__CasualtyReportField * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__CasualtyReportField__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT_FIELD__STRUCT_H_
