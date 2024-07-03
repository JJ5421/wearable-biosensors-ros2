// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_Target_feature_descriptors
{
public:
  explicit Init_Target_feature_descriptors(::cdcl_umd_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::Target feature_descriptors(::cdcl_umd_msgs::msg::Target::_feature_descriptors_type arg)
  {
    msg_.feature_descriptors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Target msg_;
};

class Init_Target_features
{
public:
  explicit Init_Target_features(::cdcl_umd_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_feature_descriptors features(::cdcl_umd_msgs::msg::Target::_features_type arg)
  {
    msg_.features = std::move(arg);
    return Init_Target_feature_descriptors(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Target msg_;
};

class Init_Target_keypoints
{
public:
  explicit Init_Target_keypoints(::cdcl_umd_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_features keypoints(::cdcl_umd_msgs::msg::Target::_keypoints_type arg)
  {
    msg_.keypoints = std::move(arg);
    return Init_Target_features(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Target msg_;
};

class Init_Target_face
{
public:
  explicit Init_Target_face(::cdcl_umd_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_keypoints face(::cdcl_umd_msgs::msg::Target::_face_type arg)
  {
    msg_.face = std::move(arg);
    return Init_Target_keypoints(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Target msg_;
};

class Init_Target_right_lung
{
public:
  explicit Init_Target_right_lung(::cdcl_umd_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_face right_lung(::cdcl_umd_msgs::msg::Target::_right_lung_type arg)
  {
    msg_.right_lung = std::move(arg);
    return Init_Target_face(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Target msg_;
};

class Init_Target_left_lung
{
public:
  explicit Init_Target_left_lung(::cdcl_umd_msgs::msg::Target & msg)
  : msg_(msg)
  {}
  Init_Target_right_lung left_lung(::cdcl_umd_msgs::msg::Target::_left_lung_type arg)
  {
    msg_.left_lung = std::move(arg);
    return Init_Target_right_lung(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Target msg_;
};

class Init_Target_position
{
public:
  Init_Target_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Target_left_lung position(::cdcl_umd_msgs::msg::Target::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Target_left_lung(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::Target msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::Target>()
{
  return cdcl_umd_msgs::msg::builder::Init_Target_position();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__TARGET__BUILDER_HPP_
