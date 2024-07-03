// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:srv/SetArenaGain.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_GAIN__BUILDER_HPP_
#define CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_GAIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/srv/detail/set_arena_gain__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace srv
{

namespace builder
{

class Init_SetArenaGain_Request_gain
{
public:
  Init_SetArenaGain_Request_gain()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cdcl_umd_msgs::srv::SetArenaGain_Request gain(::cdcl_umd_msgs::srv::SetArenaGain_Request::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::SetArenaGain_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::srv::SetArenaGain_Request>()
{
  return cdcl_umd_msgs::srv::builder::Init_SetArenaGain_Request_gain();
}

}  // namespace cdcl_umd_msgs


namespace cdcl_umd_msgs
{

namespace srv
{

namespace builder
{

class Init_SetArenaGain_Response_msg
{
public:
  explicit Init_SetArenaGain_Response_msg(::cdcl_umd_msgs::srv::SetArenaGain_Response & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::srv::SetArenaGain_Response msg(::cdcl_umd_msgs::srv::SetArenaGain_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::SetArenaGain_Response msg_;
};

class Init_SetArenaGain_Response_success
{
public:
  Init_SetArenaGain_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetArenaGain_Response_msg success(::cdcl_umd_msgs::srv::SetArenaGain_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetArenaGain_Response_msg(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::SetArenaGain_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::srv::SetArenaGain_Response>()
{
  return cdcl_umd_msgs::srv::builder::Init_SetArenaGain_Response_success();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_GAIN__BUILDER_HPP_
