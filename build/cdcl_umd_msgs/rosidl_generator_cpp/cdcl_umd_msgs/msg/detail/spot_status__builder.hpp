// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/SpotStatus.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/spot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_SpotStatus_working_nodes_strings
{
public:
  explicit Init_SpotStatus_working_nodes_strings(::cdcl_umd_msgs::msg::SpotStatus & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::SpotStatus working_nodes_strings(::cdcl_umd_msgs::msg::SpotStatus::_working_nodes_strings_type arg)
  {
    msg_.working_nodes_strings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::SpotStatus msg_;
};

class Init_SpotStatus_working_nodes
{
public:
  explicit Init_SpotStatus_working_nodes(::cdcl_umd_msgs::msg::SpotStatus & msg)
  : msg_(msg)
  {}
  Init_SpotStatus_working_nodes_strings working_nodes(::cdcl_umd_msgs::msg::SpotStatus::_working_nodes_type arg)
  {
    msg_.working_nodes = std::move(arg);
    return Init_SpotStatus_working_nodes_strings(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::SpotStatus msg_;
};

class Init_SpotStatus_state
{
public:
  Init_SpotStatus_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpotStatus_working_nodes state(::cdcl_umd_msgs::msg::SpotStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SpotStatus_working_nodes(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::SpotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::SpotStatus>()
{
  return cdcl_umd_msgs::msg::builder::Init_SpotStatus_state();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__BUILDER_HPP_
