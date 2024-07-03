// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/BackgroundSubtraction.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__BACKGROUND_SUBTRACTION__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__BACKGROUND_SUBTRACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/background_subtraction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_BackgroundSubtraction_observation
{
public:
  explicit Init_BackgroundSubtraction_observation(::cdcl_umd_msgs::msg::BackgroundSubtraction & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::BackgroundSubtraction observation(::cdcl_umd_msgs::msg::BackgroundSubtraction::_observation_type arg)
  {
    msg_.observation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::BackgroundSubtraction msg_;
};

class Init_BackgroundSubtraction_stamp
{
public:
  Init_BackgroundSubtraction_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BackgroundSubtraction_observation stamp(::cdcl_umd_msgs::msg::BackgroundSubtraction::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_BackgroundSubtraction_observation(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::BackgroundSubtraction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::BackgroundSubtraction>()
{
  return cdcl_umd_msgs::msg::builder::Init_BackgroundSubtraction_stamp();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__BACKGROUND_SUBTRACTION__BUILDER_HPP_
