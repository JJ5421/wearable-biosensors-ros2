// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:srv/InjuryReport.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__TRAITS_HPP_
#define CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/srv/detail/injury_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cdcl_umd_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InjuryReport_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: casualty_id
  {
    out << "casualty_id: ";
    rosidl_generator_traits::value_to_yaml(msg.casualty_id, out);
    out << ", ";
  }

  // member: system
  {
    out << "system: ";
    rosidl_generator_traits::value_to_yaml(msg.system, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: time_ago
  {
    out << "time_ago: ";
    rosidl_generator_traits::value_to_yaml(msg.time_ago, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InjuryReport_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: casualty_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "casualty_id: ";
    rosidl_generator_traits::value_to_yaml(msg.casualty_id, out);
    out << "\n";
  }

  // member: system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system: ";
    rosidl_generator_traits::value_to_yaml(msg.system, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: time_ago
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_ago: ";
    rosidl_generator_traits::value_to_yaml(msg.time_ago, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InjuryReport_Request & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::srv::InjuryReport_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::srv::InjuryReport_Request & msg)
{
  return cdcl_umd_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::srv::InjuryReport_Request>()
{
  return "cdcl_umd_msgs::srv::InjuryReport_Request";
}

template<>
inline const char * name<cdcl_umd_msgs::srv::InjuryReport_Request>()
{
  return "cdcl_umd_msgs/srv/InjuryReport_Request";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::srv::InjuryReport_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::srv::InjuryReport_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::srv::InjuryReport_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cdcl_umd_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InjuryReport_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const InjuryReport_Response & msg,
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

inline std::string to_yaml(const InjuryReport_Response & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::srv::InjuryReport_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::srv::InjuryReport_Response & msg)
{
  return cdcl_umd_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::srv::InjuryReport_Response>()
{
  return "cdcl_umd_msgs::srv::InjuryReport_Response";
}

template<>
inline const char * name<cdcl_umd_msgs::srv::InjuryReport_Response>()
{
  return "cdcl_umd_msgs/srv/InjuryReport_Response";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::srv::InjuryReport_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::srv::InjuryReport_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::srv::InjuryReport_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cdcl_umd_msgs::srv::InjuryReport>()
{
  return "cdcl_umd_msgs::srv::InjuryReport";
}

template<>
inline const char * name<cdcl_umd_msgs::srv::InjuryReport>()
{
  return "cdcl_umd_msgs/srv/InjuryReport";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::srv::InjuryReport>
  : std::integral_constant<
    bool,
    has_fixed_size<cdcl_umd_msgs::srv::InjuryReport_Request>::value &&
    has_fixed_size<cdcl_umd_msgs::srv::InjuryReport_Response>::value
  >
{
};

template<>
struct has_bounded_size<cdcl_umd_msgs::srv::InjuryReport>
  : std::integral_constant<
    bool,
    has_bounded_size<cdcl_umd_msgs::srv::InjuryReport_Request>::value &&
    has_bounded_size<cdcl_umd_msgs::srv::InjuryReport_Response>::value
  >
{
};

template<>
struct is_service<cdcl_umd_msgs::srv::InjuryReport>
  : std::true_type
{
};

template<>
struct is_service_request<cdcl_umd_msgs::srv::InjuryReport_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cdcl_umd_msgs::srv::InjuryReport_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__TRAITS_HPP_
