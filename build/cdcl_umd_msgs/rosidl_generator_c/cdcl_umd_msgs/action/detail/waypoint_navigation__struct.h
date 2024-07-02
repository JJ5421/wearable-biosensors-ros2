// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:action/WaypointNavigation.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__STRUCT_H_
#define CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'waypoint'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.h"

/// Struct defined in action/WaypointNavigation in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_Goal
{
  builtin_interfaces__msg__Duration timeout;
  sensor_msgs__msg__NavSatFix waypoint;
  /// in meters
  double waypoint_reached_tolerance;
} cdcl_umd_msgs__action__WaypointNavigation_Goal;

// Struct for a sequence of cdcl_umd_msgs__action__WaypointNavigation_Goal.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence
{
  cdcl_umd_msgs__action__WaypointNavigation_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/WaypointNavigation in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_Result
{
  /// in meters
  double meters_to_go;
  bool successful;
  rosidl_runtime_c__String message;
} cdcl_umd_msgs__action__WaypointNavigation_Result;

// Struct for a sequence of cdcl_umd_msgs__action__WaypointNavigation_Result.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence
{
  cdcl_umd_msgs__action__WaypointNavigation_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/WaypointNavigation in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_Feedback
{
  double meters_to_go;
} cdcl_umd_msgs__action__WaypointNavigation_Feedback;

// Struct for a sequence of cdcl_umd_msgs__action__WaypointNavigation_Feedback.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence
{
  cdcl_umd_msgs__action__WaypointNavigation_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"

/// Struct defined in action/WaypointNavigation in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  cdcl_umd_msgs__action__WaypointNavigation_Goal goal;
} cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request;

// Struct for a sequence of cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence
{
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/WaypointNavigation in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response;

// Struct for a sequence of cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence
{
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/WaypointNavigation in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request;

// Struct for a sequence of cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence
{
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"

/// Struct defined in action/WaypointNavigation in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response
{
  int8_t status;
  cdcl_umd_msgs__action__WaypointNavigation_Result result;
} cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response;

// Struct for a sequence of cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence
{
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"

/// Struct defined in action/WaypointNavigation in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  cdcl_umd_msgs__action__WaypointNavigation_Feedback feedback;
} cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage;

// Struct for a sequence of cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage.
typedef struct cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence
{
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__STRUCT_H_
