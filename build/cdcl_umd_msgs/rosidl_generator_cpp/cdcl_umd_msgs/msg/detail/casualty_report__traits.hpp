// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:msg/CasualtyReport.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__TRAITS_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/msg/detail/casualty_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'severe_hemorrhage'
// Member 'respiratory_distress'
// Member 'trauma_head'
// Member 'trauma_torso'
// Member 'trauma_upper_extremity'
// Member 'trauma_lower_extremity'
// Member 'alertness_ocular'
// Member 'alertness_motor'
// Member 'alertness_verbal'
#include "cdcl_umd_msgs/msg/detail/categorical_field__traits.hpp"
// Member 'heart_rate'
// Member 'respiratory_rate'
#include "cdcl_umd_msgs/msg/detail/numerical_field__traits.hpp"

namespace cdcl_umd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CasualtyReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: casualty_id
  {
    out << "casualty_id: ";
    rosidl_generator_traits::value_to_yaml(msg.casualty_id, out);
    out << ", ";
  }

  // member: severe_hemorrhage
  {
    out << "severe_hemorrhage: ";
    to_flow_style_yaml(msg.severe_hemorrhage, out);
    out << ", ";
  }

  // member: respiratory_distress
  {
    out << "respiratory_distress: ";
    to_flow_style_yaml(msg.respiratory_distress, out);
    out << ", ";
  }

  // member: heart_rate
  {
    out << "heart_rate: ";
    to_flow_style_yaml(msg.heart_rate, out);
    out << ", ";
  }

  // member: respiratory_rate
  {
    out << "respiratory_rate: ";
    to_flow_style_yaml(msg.respiratory_rate, out);
    out << ", ";
  }

  // member: trauma_head
  {
    out << "trauma_head: ";
    to_flow_style_yaml(msg.trauma_head, out);
    out << ", ";
  }

  // member: trauma_torso
  {
    out << "trauma_torso: ";
    to_flow_style_yaml(msg.trauma_torso, out);
    out << ", ";
  }

  // member: trauma_upper_extremity
  {
    out << "trauma_upper_extremity: ";
    to_flow_style_yaml(msg.trauma_upper_extremity, out);
    out << ", ";
  }

  // member: trauma_lower_extremity
  {
    out << "trauma_lower_extremity: ";
    to_flow_style_yaml(msg.trauma_lower_extremity, out);
    out << ", ";
  }

  // member: alertness_ocular
  {
    out << "alertness_ocular: ";
    to_flow_style_yaml(msg.alertness_ocular, out);
    out << ", ";
  }

  // member: alertness_motor
  {
    out << "alertness_motor: ";
    to_flow_style_yaml(msg.alertness_motor, out);
    out << ", ";
  }

  // member: alertness_verbal
  {
    out << "alertness_verbal: ";
    to_flow_style_yaml(msg.alertness_verbal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CasualtyReport & msg,
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

  // member: severe_hemorrhage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "severe_hemorrhage:\n";
    to_block_style_yaml(msg.severe_hemorrhage, out, indentation + 2);
  }

  // member: respiratory_distress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "respiratory_distress:\n";
    to_block_style_yaml(msg.respiratory_distress, out, indentation + 2);
  }

  // member: heart_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heart_rate:\n";
    to_block_style_yaml(msg.heart_rate, out, indentation + 2);
  }

  // member: respiratory_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "respiratory_rate:\n";
    to_block_style_yaml(msg.respiratory_rate, out, indentation + 2);
  }

  // member: trauma_head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trauma_head:\n";
    to_block_style_yaml(msg.trauma_head, out, indentation + 2);
  }

  // member: trauma_torso
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trauma_torso:\n";
    to_block_style_yaml(msg.trauma_torso, out, indentation + 2);
  }

  // member: trauma_upper_extremity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trauma_upper_extremity:\n";
    to_block_style_yaml(msg.trauma_upper_extremity, out, indentation + 2);
  }

  // member: trauma_lower_extremity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trauma_lower_extremity:\n";
    to_block_style_yaml(msg.trauma_lower_extremity, out, indentation + 2);
  }

  // member: alertness_ocular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alertness_ocular:\n";
    to_block_style_yaml(msg.alertness_ocular, out, indentation + 2);
  }

  // member: alertness_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alertness_motor:\n";
    to_block_style_yaml(msg.alertness_motor, out, indentation + 2);
  }

  // member: alertness_verbal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alertness_verbal:\n";
    to_block_style_yaml(msg.alertness_verbal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CasualtyReport & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::msg::CasualtyReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::msg::CasualtyReport & msg)
{
  return cdcl_umd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::msg::CasualtyReport>()
{
  return "cdcl_umd_msgs::msg::CasualtyReport";
}

template<>
inline const char * name<cdcl_umd_msgs::msg::CasualtyReport>()
{
  return "cdcl_umd_msgs/msg/CasualtyReport";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::msg::CasualtyReport>
  : std::integral_constant<bool, has_fixed_size<cdcl_umd_msgs::msg::CategoricalField>::value && has_fixed_size<cdcl_umd_msgs::msg::NumericalField>::value> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::msg::CasualtyReport>
  : std::integral_constant<bool, has_bounded_size<cdcl_umd_msgs::msg::CategoricalField>::value && has_bounded_size<cdcl_umd_msgs::msg::NumericalField>::value> {};

template<>
struct is_message<cdcl_umd_msgs::msg::CasualtyReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__TRAITS_HPP_
