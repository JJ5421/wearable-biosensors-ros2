// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:srv/SetArenaOperatingMode.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_OPERATING_MODE__TRAITS_HPP_
#define CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_OPERATING_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/srv/detail/set_arena_operating_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cdcl_umd_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetArenaOperatingMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: operating_mode
  {
    out << "operating_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operating_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetArenaOperatingMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: operating_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operating_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.operating_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetArenaOperatingMode_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::srv::SetArenaOperatingMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::srv::SetArenaOperatingMode_Request & msg)
{
  return cdcl_umd_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::srv::SetArenaOperatingMode_Request>()
{
  return "cdcl_umd_msgs::srv::SetArenaOperatingMode_Request";
}

template<>
inline const char * name<cdcl_umd_msgs::srv::SetArenaOperatingMode_Request>()
{
  return "cdcl_umd_msgs/srv/SetArenaOperatingMode_Request";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::srv::SetArenaOperatingMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::srv::SetArenaOperatingMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::srv::SetArenaOperatingMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cdcl_umd_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetArenaOperatingMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: msg
  {
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetArenaOperatingMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg: ";
    rosidl_generator_traits::value_to_yaml(msg.msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetArenaOperatingMode_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::srv::SetArenaOperatingMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::srv::SetArenaOperatingMode_Response & msg)
{
  return cdcl_umd_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::srv::SetArenaOperatingMode_Response>()
{
  return "cdcl_umd_msgs::srv::SetArenaOperatingMode_Response";
}

template<>
inline const char * name<cdcl_umd_msgs::srv::SetArenaOperatingMode_Response>()
{
  return "cdcl_umd_msgs/srv/SetArenaOperatingMode_Response";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::srv::SetArenaOperatingMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::srv::SetArenaOperatingMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::srv::SetArenaOperatingMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cdcl_umd_msgs::srv::SetArenaOperatingMode>()
{
  return "cdcl_umd_msgs::srv::SetArenaOperatingMode";
}

template<>
inline const char * name<cdcl_umd_msgs::srv::SetArenaOperatingMode>()
{
  return "cdcl_umd_msgs/srv/SetArenaOperatingMode";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::srv::SetArenaOperatingMode>
  : std::integral_constant<
    bool,
    has_fixed_size<cdcl_umd_msgs::srv::SetArenaOperatingMode_Request>::value &&
    has_fixed_size<cdcl_umd_msgs::srv::SetArenaOperatingMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<cdcl_umd_msgs::srv::SetArenaOperatingMode>
  : std::integral_constant<
    bool,
    has_bounded_size<cdcl_umd_msgs::srv::SetArenaOperatingMode_Request>::value &&
    has_bounded_size<cdcl_umd_msgs::srv::SetArenaOperatingMode_Response>::value
  >
{
};

template<>
struct is_service<cdcl_umd_msgs::srv::SetArenaOperatingMode>
  : std::true_type
{
};

template<>
struct is_service_request<cdcl_umd_msgs::srv::SetArenaOperatingMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cdcl_umd_msgs::srv::SetArenaOperatingMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_OPERATING_MODE__TRAITS_HPP_
