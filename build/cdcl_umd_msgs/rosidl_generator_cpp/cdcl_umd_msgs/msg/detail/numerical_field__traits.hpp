// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:msg/NumericalField.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__TRAITS_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/msg/detail/numerical_field__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'field'
#include "cdcl_umd_msgs/msg/detail/casualty_report_field__traits.hpp"

namespace cdcl_umd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NumericalField & msg,
  std::ostream & out)
{
  out << "{";
  // member: field
  {
    out << "field: ";
    to_flow_style_yaml(msg.field, out);
    out << ", ";
  }

  // member: estimate
  {
    out << "estimate: ";
    rosidl_generator_traits::value_to_yaml(msg.estimate, out);
    out << ", ";
  }

  // member: covariance
  {
    out << "covariance: ";
    rosidl_generator_traits::value_to_yaml(msg.covariance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NumericalField & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "field:\n";
    to_block_style_yaml(msg.field, out, indentation + 2);
  }

  // member: estimate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimate: ";
    rosidl_generator_traits::value_to_yaml(msg.estimate, out);
    out << "\n";
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "covariance: ";
    rosidl_generator_traits::value_to_yaml(msg.covariance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NumericalField & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cdcl_umd_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cdcl_umd_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cdcl_umd_msgs::msg::NumericalField & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::msg::NumericalField & msg)
{
  return cdcl_umd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::msg::NumericalField>()
{
  return "cdcl_umd_msgs::msg::NumericalField";
}

template<>
inline const char * name<cdcl_umd_msgs::msg::NumericalField>()
{
  return "cdcl_umd_msgs/msg/NumericalField";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::msg::NumericalField>
  : std::integral_constant<bool, has_fixed_size<cdcl_umd_msgs::msg::CasualtyReportField>::value> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::msg::NumericalField>
  : std::integral_constant<bool, has_bounded_size<cdcl_umd_msgs::msg::CasualtyReportField>::value> {};

template<>
struct is_message<cdcl_umd_msgs::msg::NumericalField>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__TRAITS_HPP_
