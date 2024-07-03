// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:srv/InjuryReport.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__BUILDER_HPP_
#define CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/srv/detail/injury_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace srv
{

namespace builder
{

class Init_InjuryReport_Request_time_ago
{
public:
  explicit Init_InjuryReport_Request_time_ago(::cdcl_umd_msgs::srv::InjuryReport_Request & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::srv::InjuryReport_Request time_ago(::cdcl_umd_msgs::srv::InjuryReport_Request::_time_ago_type arg)
  {
    msg_.time_ago = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::InjuryReport_Request msg_;
};

class Init_InjuryReport_Request_value
{
public:
  explicit Init_InjuryReport_Request_value(::cdcl_umd_msgs::srv::InjuryReport_Request & msg)
  : msg_(msg)
  {}
  Init_InjuryReport_Request_time_ago value(::cdcl_umd_msgs::srv::InjuryReport_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_InjuryReport_Request_time_ago(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::InjuryReport_Request msg_;
};

class Init_InjuryReport_Request_type
{
public:
  explicit Init_InjuryReport_Request_type(::cdcl_umd_msgs::srv::InjuryReport_Request & msg)
  : msg_(msg)
  {}
  Init_InjuryReport_Request_value type(::cdcl_umd_msgs::srv::InjuryReport_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_InjuryReport_Request_value(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::InjuryReport_Request msg_;
};

class Init_InjuryReport_Request_system
{
public:
  explicit Init_InjuryReport_Request_system(::cdcl_umd_msgs::srv::InjuryReport_Request & msg)
  : msg_(msg)
  {}
  Init_InjuryReport_Request_type system(::cdcl_umd_msgs::srv::InjuryReport_Request::_system_type arg)
  {
    msg_.system = std::move(arg);
    return Init_InjuryReport_Request_type(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::InjuryReport_Request msg_;
};

class Init_InjuryReport_Request_casualty_id
{
public:
  Init_InjuryReport_Request_casualty_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InjuryReport_Request_system casualty_id(::cdcl_umd_msgs::srv::InjuryReport_Request::_casualty_id_type arg)
  {
    msg_.casualty_id = std::move(arg);
    return Init_InjuryReport_Request_system(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::InjuryReport_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::srv::InjuryReport_Request>()
{
  return cdcl_umd_msgs::srv::builder::Init_InjuryReport_Request_casualty_id();
}

}  // namespace cdcl_umd_msgs


namespace cdcl_umd_msgs
{

namespace srv
{

namespace builder
{

class Init_InjuryReport_Response_message
{
public:
  explicit Init_InjuryReport_Response_message(::cdcl_umd_msgs::srv::InjuryReport_Response & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::srv::InjuryReport_Response message(::cdcl_umd_msgs::srv::InjuryReport_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::InjuryReport_Response msg_;
};

class Init_InjuryReport_Response_success
{
public:
  Init_InjuryReport_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InjuryReport_Response_message success(::cdcl_umd_msgs::srv::InjuryReport_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_InjuryReport_Response_message(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::InjuryReport_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::srv::InjuryReport_Response>()
{
  return cdcl_umd_msgs::srv::builder::Init_InjuryReport_Response_success();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__BUILDER_HPP_
