// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/SpeechActivity.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPEECH_ACTIVITY__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPEECH_ACTIVITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEECH_ACTIVITY'.
static const char * const cdcl_umd_msgs__msg__SpeechActivity__SPEECH_ACTIVITY = "SPEECH_ACTIVITY";

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/SpeechActivity in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__SpeechActivity
{
  builtin_interfaces__msg__Time stamp;
  /// is either 0 or 1
  int64_t observation;
} cdcl_umd_msgs__msg__SpeechActivity;

// Struct for a sequence of cdcl_umd_msgs__msg__SpeechActivity.
typedef struct cdcl_umd_msgs__msg__SpeechActivity__Sequence
{
  cdcl_umd_msgs__msg__SpeechActivity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__SpeechActivity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPEECH_ACTIVITY__STRUCT_H_
