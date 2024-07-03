// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:srv/SetArenaOperatingMode.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_OPERATING_MODE__STRUCT_H_
#define CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_OPERATING_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'operating_mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetArenaOperatingMode in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__srv__SetArenaOperatingMode_Request
{
  rosidl_runtime_c__String operating_mode;
} cdcl_umd_msgs__srv__SetArenaOperatingMode_Request;

// Struct for a sequence of cdcl_umd_msgs__srv__SetArenaOperatingMode_Request.
typedef struct cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence
{
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetArenaOperatingMode in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__srv__SetArenaOperatingMode_Response
{
  bool success;
  rosidl_runtime_c__String msg;
} cdcl_umd_msgs__srv__SetArenaOperatingMode_Response;

// Struct for a sequence of cdcl_umd_msgs__srv__SetArenaOperatingMode_Response.
typedef struct cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence
{
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_OPERATING_MODE__STRUCT_H_
