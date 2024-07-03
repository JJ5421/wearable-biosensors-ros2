// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:msg/AprilTagDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__TRAITS_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/msg/detail/april_tag_detection_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'april_tags'
#include "cdcl_umd_msgs/msg/detail/april_tag_detection__traits.hpp"

namespace cdcl_umd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AprilTagDetectionArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: april_tags
  {
    if (msg.april_tags.size() == 0) {
      out << "april_tags: []";
    } else {
      out << "april_tags: [";
      size_t pending_items = msg.april_tags.size();
      for (auto item : msg.april_tags) {
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
  const AprilTagDetectionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: april_tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.april_tags.size() == 0) {
      out << "april_tags: []\n";
    } else {
      out << "april_tags:\n";
      for (auto item : msg.april_tags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AprilTagDetectionArray & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::msg::AprilTagDetectionArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::msg::AprilTagDetectionArray & msg)
{
  return cdcl_umd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::msg::AprilTagDetectionArray>()
{
  return "cdcl_umd_msgs::msg::AprilTagDetectionArray";
}

template<>
inline const char * name<cdcl_umd_msgs::msg::AprilTagDetectionArray>()
{
  return "cdcl_umd_msgs/msg/AprilTagDetectionArray";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::msg::AprilTagDetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::msg::AprilTagDetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::msg::AprilTagDetectionArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__TRAITS_HPP_
