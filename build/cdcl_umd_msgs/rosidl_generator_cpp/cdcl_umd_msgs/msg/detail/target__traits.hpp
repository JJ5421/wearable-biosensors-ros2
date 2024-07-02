// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'keypoints'
#include "cdcl_umd_msgs/msg/detail/point2_d__traits.hpp"

namespace cdcl_umd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Target & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: left_lung
  {
    out << "left_lung: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lung, out);
    out << ", ";
  }

  // member: right_lung
  {
    out << "right_lung: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lung, out);
    out << ", ";
  }

  // member: face
  {
    out << "face: ";
    rosidl_generator_traits::value_to_yaml(msg.face, out);
    out << ", ";
  }

  // member: keypoints
  {
    if (msg.keypoints.size() == 0) {
      out << "keypoints: []";
    } else {
      out << "keypoints: [";
      size_t pending_items = msg.keypoints.size();
      for (auto item : msg.keypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: features
  {
    if (msg.features.size() == 0) {
      out << "features: []";
    } else {
      out << "features: [";
      size_t pending_items = msg.features.size();
      for (auto item : msg.features) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: feature_descriptors
  {
    if (msg.feature_descriptors.size() == 0) {
      out << "feature_descriptors: []";
    } else {
      out << "feature_descriptors: [";
      size_t pending_items = msg.feature_descriptors.size();
      for (auto item : msg.feature_descriptors) {
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
  const Target & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: left_lung
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lung: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lung, out);
    out << "\n";
  }

  // member: right_lung
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lung: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lung, out);
    out << "\n";
  }

  // member: face
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "face: ";
    rosidl_generator_traits::value_to_yaml(msg.face, out);
    out << "\n";
  }

  // member: keypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.keypoints.size() == 0) {
      out << "keypoints: []\n";
    } else {
      out << "keypoints:\n";
      for (auto item : msg.keypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.features.size() == 0) {
      out << "features: []\n";
    } else {
      out << "features:\n";
      for (auto item : msg.features) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: feature_descriptors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.feature_descriptors.size() == 0) {
      out << "feature_descriptors: []\n";
    } else {
      out << "feature_descriptors:\n";
      for (auto item : msg.feature_descriptors) {
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

inline std::string to_yaml(const Target & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::msg::Target & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::msg::Target & msg)
{
  return cdcl_umd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::msg::Target>()
{
  return "cdcl_umd_msgs::msg::Target";
}

template<>
inline const char * name<cdcl_umd_msgs::msg::Target>()
{
  return "cdcl_umd_msgs/msg/Target";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::msg::Target>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::msg::Target>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::msg::Target>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__TARGET__TRAITS_HPP_
