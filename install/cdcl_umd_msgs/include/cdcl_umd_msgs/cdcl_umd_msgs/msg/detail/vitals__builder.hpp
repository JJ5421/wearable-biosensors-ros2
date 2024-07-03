// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/Vitals.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__VITALS__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__VITALS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/vitals__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_Vitals_data
{
public:
  explicit Init_Vitals_data(::cdcl_umd_msgs::msg::Vitals & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::Vitals data(::cdcl_umd_msgs::msg::Vitals::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Vitals msg_;
};

class Init_Vitals_stamp
{
public:
  Init_Vitals_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vitals_data stamp(::cdcl_umd_msgs::msg::Vitals::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Vitals_data(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Vitals msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::Vitals>()
{
  return cdcl_umd_msgs::msg::builder::Init_Vitals_stamp();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__VITALS__BUILDER_HPP_
