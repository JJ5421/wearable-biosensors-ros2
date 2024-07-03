// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/AlertnessVerbal.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_VERBAL__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_VERBAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/alertness_verbal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_AlertnessVerbal_hypothesis_names
{
public:
  explicit Init_AlertnessVerbal_hypothesis_names(::cdcl_umd_msgs::msg::AlertnessVerbal & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::AlertnessVerbal hypothesis_names(::cdcl_umd_msgs::msg::AlertnessVerbal::_hypothesis_names_type arg)
  {
    msg_.hypothesis_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::AlertnessVerbal msg_;
};

class Init_AlertnessVerbal_posteriors
{
public:
  Init_AlertnessVerbal_posteriors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlertnessVerbal_hypothesis_names posteriors(::cdcl_umd_msgs::msg::AlertnessVerbal::_posteriors_type arg)
  {
    msg_.posteriors = std::move(arg);
    return Init_AlertnessVerbal_hypothesis_names(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::AlertnessVerbal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::AlertnessVerbal>()
{
  return cdcl_umd_msgs::msg::builder::Init_AlertnessVerbal_posteriors();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_VERBAL__BUILDER_HPP_
