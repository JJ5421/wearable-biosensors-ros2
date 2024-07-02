// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:srv/InjuryReport.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__STRUCT_H_
#define CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'system'
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/InjuryReport in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__srv__InjuryReport_Request
{
  int64_t casualty_id;
  /// System running the assessment (i.e. Apollo, Balto, UAV1 etc.)
  rosidl_runtime_c__String system;
  /// The type of injury indicator (i.e. hr, rr, severe_hemorrhage etc.)
  rosidl_runtime_c__String type;
  /// The value of the indicator as an integer (i.e 60 bpm, 0 hemorrhage etc.)
  int64_t value;
  /// How long ago the indicator was assessed, only used for hr and rr
  int64_t time_ago;
} cdcl_umd_msgs__srv__InjuryReport_Request;

// Struct for a sequence of cdcl_umd_msgs__srv__InjuryReport_Request.
typedef struct cdcl_umd_msgs__srv__InjuryReport_Request__Sequence
{
  cdcl_umd_msgs__srv__InjuryReport_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__srv__InjuryReport_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/InjuryReport in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__srv__InjuryReport_Response
{
  bool success;
  /// Any messages returned by the DARPA command post
  rosidl_runtime_c__String message;
} cdcl_umd_msgs__srv__InjuryReport_Response;

// Struct for a sequence of cdcl_umd_msgs__srv__InjuryReport_Response.
typedef struct cdcl_umd_msgs__srv__InjuryReport_Response__Sequence
{
  cdcl_umd_msgs__srv__InjuryReport_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__srv__InjuryReport_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__STRUCT_H_
