// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:srv/PlaySound.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__SRV__DETAIL__PLAY_SOUND__BUILDER_HPP_
#define CDCL_UMD_MSGS__SRV__DETAIL__PLAY_SOUND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/srv/detail/play_sound__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace srv
{

namespace builder
{

class Init_PlaySound_Request_file_name
{
public:
  Init_PlaySound_Request_file_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cdcl_umd_msgs::srv::PlaySound_Request file_name(::cdcl_umd_msgs::srv::PlaySound_Request::_file_name_type arg)
  {
    msg_.file_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::PlaySound_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::srv::PlaySound_Request>()
{
  return cdcl_umd_msgs::srv::builder::Init_PlaySound_Request_file_name();
}

}  // namespace cdcl_umd_msgs


namespace cdcl_umd_msgs
{

namespace srv
{

namespace builder
{

class Init_PlaySound_Response_msg
{
public:
  explicit Init_PlaySound_Response_msg(::cdcl_umd_msgs::srv::PlaySound_Response & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::srv::PlaySound_Response msg(::cdcl_umd_msgs::srv::PlaySound_Response::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::PlaySound_Response msg_;
};

class Init_PlaySound_Response_success
{
public:
  Init_PlaySound_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySound_Response_msg success(::cdcl_umd_msgs::srv::PlaySound_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlaySound_Response_msg(msg_);
  }

private:
  ::cdcl_umd_msgs::srv::PlaySound_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::srv::PlaySound_Response>()
{
  return cdcl_umd_msgs::srv::builder::Init_PlaySound_Response_success();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__SRV__DETAIL__PLAY_SOUND__BUILDER_HPP_
