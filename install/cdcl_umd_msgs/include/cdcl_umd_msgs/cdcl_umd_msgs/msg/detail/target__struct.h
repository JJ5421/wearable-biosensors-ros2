// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__TARGET__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOSE'.
enum
{
  cdcl_umd_msgs__msg__Target__NOSE = 0ll
};

/// Constant 'LEFT_EYE'.
enum
{
  cdcl_umd_msgs__msg__Target__LEFT_EYE = 1ll
};

/// Constant 'RIGHT_EYE'.
enum
{
  cdcl_umd_msgs__msg__Target__RIGHT_EYE = 2ll
};

/// Constant 'LEFT_EAR'.
enum
{
  cdcl_umd_msgs__msg__Target__LEFT_EAR = 3ll
};

/// Constant 'RIGHT_EAR'.
enum
{
  cdcl_umd_msgs__msg__Target__RIGHT_EAR = 4ll
};

/// Constant 'LEFT_SHOULDER'.
enum
{
  cdcl_umd_msgs__msg__Target__LEFT_SHOULDER = 5ll
};

/// Constant 'RIGHT_SHOULDER'.
enum
{
  cdcl_umd_msgs__msg__Target__RIGHT_SHOULDER = 6ll
};

/// Constant 'LEFT_ELBOW'.
enum
{
  cdcl_umd_msgs__msg__Target__LEFT_ELBOW = 7ll
};

/// Constant 'RIGHT_ELBOW'.
enum
{
  cdcl_umd_msgs__msg__Target__RIGHT_ELBOW = 8ll
};

/// Constant 'LEFT_WRIST'.
enum
{
  cdcl_umd_msgs__msg__Target__LEFT_WRIST = 9ll
};

/// Constant 'RIGHT_WRIST'.
enum
{
  cdcl_umd_msgs__msg__Target__RIGHT_WRIST = 10ll
};

/// Constant 'LEFT_HIP'.
enum
{
  cdcl_umd_msgs__msg__Target__LEFT_HIP = 11ll
};

/// Constant 'RIGHT_HIP'.
enum
{
  cdcl_umd_msgs__msg__Target__RIGHT_HIP = 12ll
};

/// Constant 'LEFT_KNEE'.
enum
{
  cdcl_umd_msgs__msg__Target__LEFT_KNEE = 13ll
};

/// Constant 'RIGHT_KNEE'.
enum
{
  cdcl_umd_msgs__msg__Target__RIGHT_KNEE = 14ll
};

/// Constant 'LEFT_ANKLE'.
enum
{
  cdcl_umd_msgs__msg__Target__LEFT_ANKLE = 15ll
};

/// Constant 'RIGHT_ANKLE'.
enum
{
  cdcl_umd_msgs__msg__Target__RIGHT_ANKLE = 16ll
};

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'keypoints'
#include "cdcl_umd_msgs/msg/detail/point2_d__struct.h"
// Member 'features'
// Member 'feature_descriptors'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Target in the package cdcl_umd_msgs.
/**
  * everyone that the spot sees has one of these messages
  * - we measure the position of the person in the color camera frame
  * - we measure the distance to their chest in the color camera frame
 */
typedef struct cdcl_umd_msgs__msg__Target
{
  /// don't need a custom msg for this
  geometry_msgs__msg__Vector3 position;
  /// distance to the targets's left and right lungs in meters in color camera frame
  /// distnace in meters
  double left_lung;
  /// distance in meters
  double right_lung;
  /// intensity in W/m^2
  double face;
  /// position of "keypoints" from YOLOv8 pose in camera optical frame (pixel coordinates)
  cdcl_umd_msgs__msg__Point2D__Sequence keypoints;
  /// features and feature descriptors for helping with data association
  rosidl_runtime_c__double__Sequence features;
  rosidl_runtime_c__double__Sequence feature_descriptors;
} cdcl_umd_msgs__msg__Target;

// Struct for a sequence of cdcl_umd_msgs__msg__Target.
typedef struct cdcl_umd_msgs__msg__Target__Sequence
{
  cdcl_umd_msgs__msg__Target * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__Target__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__TARGET__STRUCT_H_
