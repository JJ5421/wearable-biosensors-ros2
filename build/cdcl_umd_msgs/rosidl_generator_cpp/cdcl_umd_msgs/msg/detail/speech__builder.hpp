// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/Speech.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPEECH__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPEECH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/speech__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_Speech_doa
{
public:
  explicit Init_Speech_doa(::cdcl_umd_msgs::msg::Speech & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::Speech doa(::cdcl_umd_msgs::msg::Speech::_doa_type arg)
  {
    msg_.doa = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Speech msg_;
};

class Init_Speech_transcript
{
public:
  explicit Init_Speech_transcript(::cdcl_umd_msgs::msg::Speech & msg)
  : msg_(msg)
  {}
  Init_Speech_doa transcript(::cdcl_umd_msgs::msg::Speech::_transcript_type arg)
  {
    msg_.transcript = std::move(arg);
    return Init_Speech_doa(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Speech msg_;
};

class Init_Speech_raw_audio
{
public:
  explicit Init_Speech_raw_audio(::cdcl_umd_msgs::msg::Speech & msg)
  : msg_(msg)
  {}
  Init_Speech_transcript raw_audio(::cdcl_umd_msgs::msg::Speech::_raw_audio_type arg)
  {
    msg_.raw_audio = std::move(arg);
    return Init_Speech_transcript(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Speech msg_;
};

class Init_Speech_header
{
public:
  Init_Speech_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Speech_raw_audio header(::cdcl_umd_msgs::msg::Speech::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Speech_raw_audio(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Speech msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::Speech>()
{
  return cdcl_umd_msgs::msg::builder::Init_Speech_header();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPEECH__BUILDER_HPP_
