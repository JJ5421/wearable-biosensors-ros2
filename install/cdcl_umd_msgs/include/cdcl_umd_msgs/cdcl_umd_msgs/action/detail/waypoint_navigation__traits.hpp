// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:action/WaypointNavigation.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__TRAITS_HPP_
#define CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'waypoint'
#include "sensor_msgs/msg/detail/nav_sat_fix__traits.hpp"

namespace cdcl_umd_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const WaypointNavigation_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: timeout
  {
    out << "timeout: ";
    to_flow_style_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: waypoint
  {
    out << "waypoint: ";
    to_flow_style_yaml(msg.waypoint, out);
    out << ", ";
  }

  // member: waypoint_reached_tolerance
  {
    out << "waypoint_reached_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_reached_tolerance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointNavigation_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout:\n";
    to_block_style_yaml(msg.timeout, out, indentation + 2);
  }

  // member: waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint:\n";
    to_block_style_yaml(msg.waypoint, out, indentation + 2);
  }

  // member: waypoint_reached_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_reached_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_reached_tolerance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointNavigation_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::action::WaypointNavigation_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::action::WaypointNavigation_Goal & msg)
{
  return cdcl_umd_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::action::WaypointNavigation_Goal>()
{
  return "cdcl_umd_msgs::action::WaypointNavigation_Goal";
}

template<>
inline const char * name<cdcl_umd_msgs::action::WaypointNavigation_Goal>()
{
  return "cdcl_umd_msgs/action/WaypointNavigation_Goal";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_Goal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<sensor_msgs::msg::NavSatFix>::value> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_Goal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<sensor_msgs::msg::NavSatFix>::value> {};

template<>
struct is_message<cdcl_umd_msgs::action::WaypointNavigation_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cdcl_umd_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const WaypointNavigation_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: meters_to_go
  {
    out << "meters_to_go: ";
    rosidl_generator_traits::value_to_yaml(msg.meters_to_go, out);
    out << ", ";
  }

  // member: successful
  {
    out << "successful: ";
    rosidl_generator_traits::value_to_yaml(msg.successful, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointNavigation_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: meters_to_go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meters_to_go: ";
    rosidl_generator_traits::value_to_yaml(msg.meters_to_go, out);
    out << "\n";
  }

  // member: successful
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "successful: ";
    rosidl_generator_traits::value_to_yaml(msg.successful, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointNavigation_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::action::WaypointNavigation_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::action::WaypointNavigation_Result & msg)
{
  return cdcl_umd_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::action::WaypointNavigation_Result>()
{
  return "cdcl_umd_msgs::action::WaypointNavigation_Result";
}

template<>
inline const char * name<cdcl_umd_msgs::action::WaypointNavigation_Result>()
{
  return "cdcl_umd_msgs/action/WaypointNavigation_Result";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::action::WaypointNavigation_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cdcl_umd_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const WaypointNavigation_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: meters_to_go
  {
    out << "meters_to_go: ";
    rosidl_generator_traits::value_to_yaml(msg.meters_to_go, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointNavigation_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: meters_to_go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meters_to_go: ";
    rosidl_generator_traits::value_to_yaml(msg.meters_to_go, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointNavigation_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::action::WaypointNavigation_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::action::WaypointNavigation_Feedback & msg)
{
  return cdcl_umd_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::action::WaypointNavigation_Feedback>()
{
  return "cdcl_umd_msgs::action::WaypointNavigation_Feedback";
}

template<>
inline const char * name<cdcl_umd_msgs::action::WaypointNavigation_Feedback>()
{
  return "cdcl_umd_msgs/action/WaypointNavigation_Feedback";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cdcl_umd_msgs::action::WaypointNavigation_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "cdcl_umd_msgs/action/detail/waypoint_navigation__traits.hpp"

namespace cdcl_umd_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const WaypointNavigation_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointNavigation_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointNavigation_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request & msg)
{
  return cdcl_umd_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request>()
{
  return "cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request";
}

template<>
inline const char * name<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request>()
{
  return "cdcl_umd_msgs/action/WaypointNavigation_SendGoal_Request";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace cdcl_umd_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const WaypointNavigation_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointNavigation_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointNavigation_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response & msg)
{
  return cdcl_umd_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response>()
{
  return "cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response";
}

template<>
inline const char * name<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response>()
{
  return "cdcl_umd_msgs/action/WaypointNavigation_SendGoal_Response";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cdcl_umd_msgs::action::WaypointNavigation_SendGoal>()
{
  return "cdcl_umd_msgs::action::WaypointNavigation_SendGoal";
}

template<>
inline const char * name<cdcl_umd_msgs::action::WaypointNavigation_SendGoal>()
{
  return "cdcl_umd_msgs/action/WaypointNavigation_SendGoal";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request>::value &&
    has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request>::value &&
    has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<cdcl_umd_msgs::action::WaypointNavigation_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace cdcl_umd_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const WaypointNavigation_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointNavigation_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointNavigation_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request & msg)
{
  return cdcl_umd_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request>()
{
  return "cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request";
}

template<>
inline const char * name<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request>()
{
  return "cdcl_umd_msgs/action/WaypointNavigation_GetResult_Request";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__traits.hpp"

namespace cdcl_umd_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const WaypointNavigation_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointNavigation_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointNavigation_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response & msg)
{
  return cdcl_umd_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response>()
{
  return "cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response";
}

template<>
inline const char * name<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response>()
{
  return "cdcl_umd_msgs/action/WaypointNavigation_GetResult_Response";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_Result>::value> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_Result>::value> {};

template<>
struct is_message<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cdcl_umd_msgs::action::WaypointNavigation_GetResult>()
{
  return "cdcl_umd_msgs::action::WaypointNavigation_GetResult";
}

template<>
inline const char * name<cdcl_umd_msgs::action::WaypointNavigation_GetResult>()
{
  return "cdcl_umd_msgs/action/WaypointNavigation_GetResult";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request>::value &&
    has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request>::value &&
    has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response>::value
  >
{
};

template<>
struct is_service<cdcl_umd_msgs::action::WaypointNavigation_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__traits.hpp"

namespace cdcl_umd_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const WaypointNavigation_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WaypointNavigation_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WaypointNavigation_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage & msg)
{
  return cdcl_umd_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage>()
{
  return "cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage";
}

template<>
inline const char * name<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage>()
{
  return "cdcl_umd_msgs/action/WaypointNavigation_FeedbackMessage";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<cdcl_umd_msgs::action::WaypointNavigation_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<cdcl_umd_msgs::action::WaypointNavigation_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<cdcl_umd_msgs::action::WaypointNavigation>
  : std::true_type
{
};

template<>
struct is_action_goal<cdcl_umd_msgs::action::WaypointNavigation_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<cdcl_umd_msgs::action::WaypointNavigation_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<cdcl_umd_msgs::action::WaypointNavigation_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__TRAITS_HPP_
