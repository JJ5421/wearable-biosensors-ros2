// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/HeartRate.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__HEART_RATE__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__HEART_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NAME'.
static const char * const cdcl_umd_msgs__msg__HeartRate__NAME = "hr";

/// Constant 'TYPE'.
static const char * const cdcl_umd_msgs__msg__HeartRate__TYPE = "vitals";

/// Constant 'ESTIMATE'.
static const double cdcl_umd_msgs__msg__HeartRate__ESTIMATE = 0.0l;

/// Constant 'COVARIANCE'.
static const double cdcl_umd_msgs__msg__HeartRate__COVARIANCE = 0.0l;

/// Struct defined in msg/HeartRate in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__HeartRate
{
  uint8_t structure_needs_at_least_one_member;
} cdcl_umd_msgs__msg__HeartRate;

// Struct for a sequence of cdcl_umd_msgs__msg__HeartRate.
typedef struct cdcl_umd_msgs__msg__HeartRate__Sequence
{
  cdcl_umd_msgs__msg__HeartRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__HeartRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__HEART_RATE__STRUCT_H_
