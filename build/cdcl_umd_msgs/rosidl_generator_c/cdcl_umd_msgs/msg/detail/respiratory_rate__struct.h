// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/RespiratoryRate.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__RESPIRATORY_RATE__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__RESPIRATORY_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NAME'.
static const char * const cdcl_umd_msgs__msg__RespiratoryRate__NAME = "rr";

/// Constant 'TYPE'.
static const char * const cdcl_umd_msgs__msg__RespiratoryRate__TYPE = "vitals";

/// Constant 'ESTIMATE'.
static const double cdcl_umd_msgs__msg__RespiratoryRate__ESTIMATE = 0.0l;

/// Constant 'COVARIANCE'.
static const double cdcl_umd_msgs__msg__RespiratoryRate__COVARIANCE = 0.0l;

/// Struct defined in msg/RespiratoryRate in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__RespiratoryRate
{
  uint8_t structure_needs_at_least_one_member;
} cdcl_umd_msgs__msg__RespiratoryRate;

// Struct for a sequence of cdcl_umd_msgs__msg__RespiratoryRate.
typedef struct cdcl_umd_msgs__msg__RespiratoryRate__Sequence
{
  cdcl_umd_msgs__msg__RespiratoryRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__RespiratoryRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__RESPIRATORY_RATE__STRUCT_H_
