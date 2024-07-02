// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/LatitudeLongitude.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__LATITUDE_LONGITUDE__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__LATITUDE_LONGITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LATITUDE'.
enum
{
  cdcl_umd_msgs__msg__LatitudeLongitude__LATITUDE = 0ll
};

/// Constant 'LONGITUDE'.
enum
{
  cdcl_umd_msgs__msg__LatitudeLongitude__LONGITUDE = 1ll
};

/// Struct defined in msg/LatitudeLongitude in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__LatitudeLongitude
{
  uint8_t structure_needs_at_least_one_member;
} cdcl_umd_msgs__msg__LatitudeLongitude;

// Struct for a sequence of cdcl_umd_msgs__msg__LatitudeLongitude.
typedef struct cdcl_umd_msgs__msg__LatitudeLongitude__Sequence
{
  cdcl_umd_msgs__msg__LatitudeLongitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__LatitudeLongitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__LATITUDE_LONGITUDE__STRUCT_H_
