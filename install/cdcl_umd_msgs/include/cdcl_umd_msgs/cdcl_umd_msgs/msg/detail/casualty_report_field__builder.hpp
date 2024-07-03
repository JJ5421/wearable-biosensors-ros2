// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/CasualtyReportField.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT_FIELD__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT_FIELD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/casualty_report_field__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_CasualtyReportField_platform_name
{
public:
  explicit Init_CasualtyReportField_platform_name(::cdcl_umd_msgs::msg::CasualtyReportField & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::CasualtyReportField platform_name(::cdcl_umd_msgs::msg::CasualtyReportField::_platform_name_type arg)
  {
    msg_.platform_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReportField msg_;
};

class Init_CasualtyReportField_type
{
public:
  explicit Init_CasualtyReportField_type(::cdcl_umd_msgs::msg::CasualtyReportField & msg)
  : msg_(msg)
  {}
  Init_CasualtyReportField_platform_name type(::cdcl_umd_msgs::msg::CasualtyReportField::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CasualtyReportField_platform_name(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReportField msg_;
};

class Init_CasualtyReportField_name
{
public:
  explicit Init_CasualtyReportField_name(::cdcl_umd_msgs::msg::CasualtyReportField & msg)
  : msg_(msg)
  {}
  Init_CasualtyReportField_type name(::cdcl_umd_msgs::msg::CasualtyReportField::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CasualtyReportField_type(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReportField msg_;
};

class Init_CasualtyReportField_stamp
{
public:
  Init_CasualtyReportField_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CasualtyReportField_name stamp(::cdcl_umd_msgs::msg::CasualtyReportField::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CasualtyReportField_name(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReportField msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::CasualtyReportField>()
{
  return cdcl_umd_msgs::msg::builder::Init_CasualtyReportField_stamp();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT_FIELD__BUILDER_HPP_
