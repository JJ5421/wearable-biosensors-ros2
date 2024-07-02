// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/Speech.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPEECH__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPEECH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'raw_audio'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'transcript'
#include "rosidl_runtime_c/string.h"
// Member 'doa'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/Speech in the package cdcl_umd_msgs.
/**
  * time stamp and frame id of microphone
 */
typedef struct cdcl_umd_msgs__msg__Speech
{
  std_msgs__msg__Header header;
  /// the raw audio in signed 16-bit PCM format
  rosidl_runtime_c__int16__Sequence raw_audio;
  /// text transcript
  rosidl_runtime_c__String transcript;
  /// the direction of the person speaking in the microphone frame
  geometry_msgs__msg__Pose doa;
} cdcl_umd_msgs__msg__Speech;

// Struct for a sequence of cdcl_umd_msgs__msg__Speech.
typedef struct cdcl_umd_msgs__msg__Speech__Sequence
{
  cdcl_umd_msgs__msg__Speech * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__Speech__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPEECH__STRUCT_H_
