// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/TraumaLowerExtremity.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__TRAUMA_LOWER_EXTREMITY__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__TRAUMA_LOWER_EXTREMITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/trauma_lower_extremity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_TraumaLowerExtremity_hypothesis_names
{
public:
  explicit Init_TraumaLowerExtremity_hypothesis_names(::cdcl_umd_msgs::msg::TraumaLowerExtremity & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::TraumaLowerExtremity hypothesis_names(::cdcl_umd_msgs::msg::TraumaLowerExtremity::_hypothesis_names_type arg)
  {
    msg_.hypothesis_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::TraumaLowerExtremity msg_;
};

class Init_TraumaLowerExtremity_posteriors
{
public:
  Init_TraumaLowerExtremity_posteriors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TraumaLowerExtremity_hypothesis_names posteriors(::cdcl_umd_msgs::msg::TraumaLowerExtremity::_posteriors_type arg)
  {
    msg_.posteriors = std::move(arg);
    return Init_TraumaLowerExtremity_hypothesis_names(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::TraumaLowerExtremity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::TraumaLowerExtremity>()
{
  return cdcl_umd_msgs::msg::builder::Init_TraumaLowerExtremity_posteriors();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__TRAUMA_LOWER_EXTREMITY__BUILDER_HPP_
