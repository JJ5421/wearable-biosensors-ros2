// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/NavSatFixArray.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/nav_sat_fix_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_NavSatFixArray_fixes
{
public:
  Init_NavSatFixArray_fixes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cdcl_umd_msgs::msg::NavSatFixArray fixes(::cdcl_umd_msgs::msg::NavSatFixArray::_fixes_type arg)
  {
    msg_.fixes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::NavSatFixArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::NavSatFixArray>()
{
  return cdcl_umd_msgs::msg::builder::Init_NavSatFixArray_fixes();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__BUILDER_HPP_
