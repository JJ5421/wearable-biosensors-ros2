// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:msg/Speech.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPEECH__TRAITS_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPEECH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/msg/detail/speech__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'doa'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace cdcl_umd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Speech & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: raw_audio
  {
    if (msg.raw_audio.size() == 0) {
      out << "raw_audio: []";
    } else {
      out << "raw_audio: [";
      size_t pending_items = msg.raw_audio.size();
      for (auto item : msg.raw_audio) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: transcript
  {
    out << "transcript: ";
    rosidl_generator_traits::value_to_yaml(msg.transcript, out);
    out << ", ";
  }

  // member: doa
  {
    out << "doa: ";
    to_flow_style_yaml(msg.doa, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Speech & msg,
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

  // member: raw_audio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.raw_audio.size() == 0) {
      out << "raw_audio: []\n";
    } else {
      out << "raw_audio:\n";
      for (auto item : msg.raw_audio) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: transcript
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transcript: ";
    rosidl_generator_traits::value_to_yaml(msg.transcript, out);
    out << "\n";
  }

  // member: doa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doa:\n";
    to_block_style_yaml(msg.doa, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Speech & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::msg::Speech & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::msg::Speech & msg)
{
  return cdcl_umd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::msg::Speech>()
{
  return "cdcl_umd_msgs::msg::Speech";
}

template<>
inline const char * name<cdcl_umd_msgs::msg::Speech>()
{
  return "cdcl_umd_msgs/msg/Speech";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::msg::Speech>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::msg::Speech>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::msg::Speech>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPEECH__TRAITS_HPP_
