// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/AprilTagDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'april_tags'
#include "cdcl_umd_msgs/msg/detail/april_tag_detection__struct.h"

/// Struct defined in msg/AprilTagDetectionArray in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__AprilTagDetectionArray
{
  cdcl_umd_msgs__msg__AprilTagDetection__Sequence april_tags;
} cdcl_umd_msgs__msg__AprilTagDetectionArray;

// Struct for a sequence of cdcl_umd_msgs__msg__AprilTagDetectionArray.
typedef struct cdcl_umd_msgs__msg__AprilTagDetectionArray__Sequence
{
  cdcl_umd_msgs__msg__AprilTagDetectionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__AprilTagDetectionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__STRUCT_H_
