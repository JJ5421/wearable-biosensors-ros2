// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/SevereHemorrhage.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SEVERE_HEMORRHAGE__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__SEVERE_HEMORRHAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/severe_hemorrhage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_SevereHemorrhage_hypothesis_names
{
public:
  explicit Init_SevereHemorrhage_hypothesis_names(::cdcl_umd_msgs::msg::SevereHemorrhage & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::SevereHemorrhage hypothesis_names(::cdcl_umd_msgs::msg::SevereHemorrhage::_hypothesis_names_type arg)
  {
    msg_.hypothesis_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::SevereHemorrhage msg_;
};

class Init_SevereHemorrhage_posteriors
{
public:
  Init_SevereHemorrhage_posteriors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SevereHemorrhage_hypothesis_names posteriors(::cdcl_umd_msgs::msg::SevereHemorrhage::_posteriors_type arg)
  {
    msg_.posteriors = std::move(arg);
    return Init_SevereHemorrhage_hypothesis_names(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::SevereHemorrhage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::SevereHemorrhage>()
{
  return cdcl_umd_msgs::msg::builder::Init_SevereHemorrhage_posteriors();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SEVERE_HEMORRHAGE__BUILDER_HPP_
