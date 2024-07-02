// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/TargetList.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/target_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetList_targets
{
public:
  explicit Init_TargetList_targets(::cdcl_umd_msgs::msg::TargetList & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::TargetList targets(::cdcl_umd_msgs::msg::TargetList::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::TargetList msg_;
};

class Init_TargetList_header
{
public:
  Init_TargetList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetList_targets header(::cdcl_umd_msgs::msg::TargetList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TargetList_targets(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::TargetList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::TargetList>()
{
  return cdcl_umd_msgs::msg::builder::Init_TargetList_header();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__BUILDER_HPP_
