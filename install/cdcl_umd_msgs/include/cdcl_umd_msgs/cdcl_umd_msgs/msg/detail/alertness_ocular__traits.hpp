// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:msg/AlertnessOcular.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_OCULAR__TRAITS_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_OCULAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/msg/detail/alertness_ocular__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cdcl_umd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AlertnessOcular & msg,
  std::ostream & out)
{
  out << "{";
  // member: posteriors
  {
    if (msg.posteriors.size() == 0) {
      out << "posteriors: []";
    } else {
      out << "posteriors: [";
      size_t pending_items = msg.posteriors.size();
      for (auto item : msg.posteriors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hypothesis_names
  {
    if (msg.hypothesis_names.size() == 0) {
      out << "hypothesis_names: []";
    } else {
      out << "hypothesis_names: [";
      size_t pending_items = msg.hypothesis_names.size();
      for (auto item : msg.hypothesis_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AlertnessOcular & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: posteriors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.posteriors.size() == 0) {
      out << "posteriors: []\n";
    } else {
      out << "posteriors:\n";
      for (auto item : msg.posteriors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hypothesis_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hypothesis_names.size() == 0) {
      out << "hypothesis_names: []\n";
    } else {
      out << "hypothesis_names:\n";
      for (auto item : msg.hypothesis_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlertnessOcular & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::msg::AlertnessOcular & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::msg::AlertnessOcular & msg)
{
  return cdcl_umd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::msg::AlertnessOcular>()
{
  return "cdcl_umd_msgs::msg::AlertnessOcular";
}

template<>
inline const char * name<cdcl_umd_msgs::msg::AlertnessOcular>()
{
  return "cdcl_umd_msgs/msg/AlertnessOcular";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::msg::AlertnessOcular>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::msg::AlertnessOcular>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::msg::AlertnessOcular>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_OCULAR__TRAITS_HPP_
