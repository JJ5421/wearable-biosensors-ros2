// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:msg/TargetList.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__TRAITS_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/msg/detail/target_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'targets'
#include "cdcl_umd_msgs/msg/detail/target__traits.hpp"

namespace cdcl_umd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TargetList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: targets
  {
    if (msg.targets.size() == 0) {
      out << "targets: []";
    } else {
      out << "targets: [";
      size_t pending_items = msg.targets.size();
      for (auto item : msg.targets) {
        to_flow_style_yaml(item, out);
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
  const TargetList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: targets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.targets.size() == 0) {
      out << "targets: []\n";
    } else {
      out << "targets:\n";
      for (auto item : msg.targets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetList & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::msg::TargetList & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::msg::TargetList & msg)
{
  return cdcl_umd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::msg::TargetList>()
{
  return "cdcl_umd_msgs::msg::TargetList";
}

template<>
inline const char * name<cdcl_umd_msgs::msg::TargetList>()
{
  return "cdcl_umd_msgs/msg/TargetList";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::msg::TargetList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::msg::TargetList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::msg::TargetList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__TRAITS_HPP_
