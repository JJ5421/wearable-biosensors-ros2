// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/SpeechActivity.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPEECH_ACTIVITY__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPEECH_ACTIVITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/speech_activity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeechActivity_observation
{
public:
  explicit Init_SpeechActivity_observation(::cdcl_umd_msgs::msg::SpeechActivity & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::SpeechActivity observation(::cdcl_umd_msgs::msg::SpeechActivity::_observation_type arg)
  {
    msg_.observation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::SpeechActivity msg_;
};

class Init_SpeechActivity_stamp
{
public:
  Init_SpeechActivity_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeechActivity_observation stamp(::cdcl_umd_msgs::msg::SpeechActivity::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SpeechActivity_observation(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::SpeechActivity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::SpeechActivity>()
{
  return cdcl_umd_msgs::msg::builder::Init_SpeechActivity_stamp();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPEECH_ACTIVITY__BUILDER_HPP_
