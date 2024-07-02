// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/AprilTagDetection.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__STRUCT_H_

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

/// Struct defined in msg/AprilTagDetection in the package cdcl_umd_msgs.
/**
  * This message includes information relevant to the detection of AprilTags
 */
typedef struct cdcl_umd_msgs__msg__AprilTagDetection
{
  /// The header includes a time stamp allowing users to know the time between tag detections
  std_msgs__msg__Header header;
  /// The tag_id is the number generated from identifying the april tag
  int32_t tag_id;
  /// Latitude and Longitude are the location of the tag
  double latitude;
  double longitude;
} cdcl_umd_msgs__msg__AprilTagDetection;

// Struct for a sequence of cdcl_umd_msgs__msg__AprilTagDetection.
typedef struct cdcl_umd_msgs__msg__AprilTagDetection__Sequence
{
  cdcl_umd_msgs__msg__AprilTagDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__AprilTagDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__STRUCT_H_
