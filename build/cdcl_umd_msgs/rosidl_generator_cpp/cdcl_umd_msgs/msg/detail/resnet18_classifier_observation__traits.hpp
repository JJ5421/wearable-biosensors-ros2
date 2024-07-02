// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cdcl_umd_msgs:msg/Resnet18ClassifierObservation.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__TRAITS_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cdcl_umd_msgs/msg/detail/resnet18_classifier_observation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cdcl_umd_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Resnet18ClassifierObservation & msg,
  std::ostream & out)
{
  out << "{";
  // member: classifier_name
  {
    out << "classifier_name: ";
    rosidl_generator_traits::value_to_yaml(msg.classifier_name, out);
    out << ", ";
  }

  // member: observation
  {
    out << "observation: ";
    rosidl_generator_traits::value_to_yaml(msg.observation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Resnet18ClassifierObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: classifier_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classifier_name: ";
    rosidl_generator_traits::value_to_yaml(msg.classifier_name, out);
    out << "\n";
  }

  // member: observation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "observation: ";
    rosidl_generator_traits::value_to_yaml(msg.observation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Resnet18ClassifierObservation & msg, bool use_flow_style = false)
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
  const cdcl_umd_msgs::msg::Resnet18ClassifierObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  cdcl_umd_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cdcl_umd_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cdcl_umd_msgs::msg::Resnet18ClassifierObservation & msg)
{
  return cdcl_umd_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cdcl_umd_msgs::msg::Resnet18ClassifierObservation>()
{
  return "cdcl_umd_msgs::msg::Resnet18ClassifierObservation";
}

template<>
inline const char * name<cdcl_umd_msgs::msg::Resnet18ClassifierObservation>()
{
  return "cdcl_umd_msgs/msg/Resnet18ClassifierObservation";
}

template<>
struct has_fixed_size<cdcl_umd_msgs::msg::Resnet18ClassifierObservation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cdcl_umd_msgs::msg::Resnet18ClassifierObservation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cdcl_umd_msgs::msg::Resnet18ClassifierObservation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__TRAITS_HPP_
