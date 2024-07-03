// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:msg/SpotStatus.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__TRAITS_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/msg/detail/spot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cdcl_umd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: working_nodes
  {
    if (msg.working_nodes.size() == 0) {
      out << "working_nodes: []";
    } else {
      out << "working_nodes: [";
      size_t pending_items = msg.working_nodes.size();
      for (auto item : msg.working_nodes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: working_nodes_strings
  {
    if (msg.working_nodes_strings.size() == 0) {
      out << "working_nodes_strings: []";
    } else {
      out << "working_nodes_strings: [";
      size_t pending_items = msg.working_nodes_strings.size();
      for (auto item : msg.working_nodes_strings) {
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
  const SpotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: working_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.working_nodes.size() == 0) {
      out << "working_nodes: []\n";
    } else {
      out << "working_nodes:\n";
      for (auto item : msg.working_nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: working_nodes_strings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.working_nodes_strings.size() == 0) {
      out << "working_nodes_strings: []\n";
    } else {
      out << "working_nodes_strings:\n";
      for (auto item : msg.working_nodes_strings) {
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

inline std::string to_yaml(const SpotStatus & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::msg::SpotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::msg::SpotStatus & msg)
{
  return cdcl_umd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::msg::SpotStatus>()
{
  return "cdcl_umd_msgs::msg::SpotStatus";
}

template<>
inline const char * name<cdcl_umd_msgs::msg::SpotStatus>()
{
  return "cdcl_umd_msgs/msg/SpotStatus";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::msg::SpotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::msg::SpotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::msg::SpotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__TRAITS_HPP_
