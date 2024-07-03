// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:msg/NavSatFixArray.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__TRAITS_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/msg/detail/nav_sat_fix_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fixes'
#include "sensor_msgs/msg/detail/nav_sat_fix__traits.hpp"

namespace cdcl_umd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavSatFixArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: fixes
  {
    if (msg.fixes.size() == 0) {
      out << "fixes: []";
    } else {
      out << "fixes: [";
      size_t pending_items = msg.fixes.size();
      for (auto item : msg.fixes) {
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
  const NavSatFixArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fixes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fixes.size() == 0) {
      out << "fixes: []\n";
    } else {
      out << "fixes:\n";
      for (auto item : msg.fixes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavSatFixArray & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::msg::NavSatFixArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::msg::NavSatFixArray & msg)
{
  return cdcl_umd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::msg::NavSatFixArray>()
{
  return "cdcl_umd_msgs::msg::NavSatFixArray";
}

template<>
inline const char * name<cdcl_umd_msgs::msg::NavSatFixArray>()
{
  return "cdcl_umd_msgs/msg/NavSatFixArray";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::msg::NavSatFixArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::msg::NavSatFixArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::msg::NavSatFixArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__TRAITS_HPP_
