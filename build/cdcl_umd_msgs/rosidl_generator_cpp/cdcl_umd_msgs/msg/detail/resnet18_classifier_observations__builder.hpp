// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/Resnet18ClassifierObservations.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATIONS__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/resnet18_classifier_observations__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_Resnet18ClassifierObservations_classifier_observations
{
public:
  explicit Init_Resnet18ClassifierObservations_classifier_observations(::cdcl_umd_msgs::msg::Resnet18ClassifierObservations & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::Resnet18ClassifierObservations classifier_observations(::cdcl_umd_msgs::msg::Resnet18ClassifierObservations::_classifier_observations_type arg)
  {
    msg_.classifier_observations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Resnet18ClassifierObservations msg_;
};

class Init_Resnet18ClassifierObservations_stamp
{
public:
  Init_Resnet18ClassifierObservations_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Resnet18ClassifierObservations_classifier_observations stamp(::cdcl_umd_msgs::msg::Resnet18ClassifierObservations::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Resnet18ClassifierObservations_classifier_observations(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Resnet18ClassifierObservations msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::Resnet18ClassifierObservations>()
{
  return cdcl_umd_msgs::msg::builder::Init_Resnet18ClassifierObservations_stamp();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATIONS__BUILDER_HPP_
