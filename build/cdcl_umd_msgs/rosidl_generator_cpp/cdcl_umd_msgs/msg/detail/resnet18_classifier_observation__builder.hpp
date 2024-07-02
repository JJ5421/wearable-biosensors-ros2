// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/Resnet18ClassifierObservation.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/resnet18_classifier_observation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_Resnet18ClassifierObservation_observation
{
public:
  explicit Init_Resnet18ClassifierObservation_observation(::cdcl_umd_msgs::msg::Resnet18ClassifierObservation & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::Resnet18ClassifierObservation observation(::cdcl_umd_msgs::msg::Resnet18ClassifierObservation::_observation_type arg)
  {
    msg_.observation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Resnet18ClassifierObservation msg_;
};

class Init_Resnet18ClassifierObservation_classifier_name
{
public:
  Init_Resnet18ClassifierObservation_classifier_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Resnet18ClassifierObservation_observation classifier_name(::cdcl_umd_msgs::msg::Resnet18ClassifierObservation::_classifier_name_type arg)
  {
    msg_.classifier_name = std::move(arg);
    return Init_Resnet18ClassifierObservation_observation(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Resnet18ClassifierObservation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::Resnet18ClassifierObservation>()
{
  return cdcl_umd_msgs::msg::builder::Init_Resnet18ClassifierObservation_classifier_name();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__BUILDER_HPP_
