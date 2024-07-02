// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/NumericalField.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/numerical_field__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_NumericalField_covariance
{
public:
  explicit Init_NumericalField_covariance(::cdcl_umd_msgs::msg::NumericalField & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::NumericalField covariance(::cdcl_umd_msgs::msg::NumericalField::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::NumericalField msg_;
};

class Init_NumericalField_estimate
{
public:
  explicit Init_NumericalField_estimate(::cdcl_umd_msgs::msg::NumericalField & msg)
  : msg_(msg)
  {}
  Init_NumericalField_covariance estimate(::cdcl_umd_msgs::msg::NumericalField::_estimate_type arg)
  {
    msg_.estimate = std::move(arg);
    return Init_NumericalField_covariance(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::NumericalField msg_;
};

class Init_NumericalField_field
{
public:
  Init_NumericalField_field()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NumericalField_estimate field(::cdcl_umd_msgs::msg::NumericalField::_field_type arg)
  {
    msg_.field = std::move(arg);
    return Init_NumericalField_estimate(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::NumericalField msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::NumericalField>()
{
  return cdcl_umd_msgs::msg::builder::Init_NumericalField_field();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__BUILDER_HPP_
