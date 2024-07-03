// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/AprilTagDetection.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/april_tag_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_AprilTagDetection_longitude
{
public:
  explicit Init_AprilTagDetection_longitude(::cdcl_umd_msgs::msg::AprilTagDetection & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::AprilTagDetection longitude(::cdcl_umd_msgs::msg::AprilTagDetection::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::AprilTagDetection msg_;
};

class Init_AprilTagDetection_latitude
{
public:
  explicit Init_AprilTagDetection_latitude(::cdcl_umd_msgs::msg::AprilTagDetection & msg)
  : msg_(msg)
  {}
  Init_AprilTagDetection_longitude latitude(::cdcl_umd_msgs::msg::AprilTagDetection::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_AprilTagDetection_longitude(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::AprilTagDetection msg_;
};

class Init_AprilTagDetection_tag_id
{
public:
  explicit Init_AprilTagDetection_tag_id(::cdcl_umd_msgs::msg::AprilTagDetection & msg)
  : msg_(msg)
  {}
  Init_AprilTagDetection_latitude tag_id(::cdcl_umd_msgs::msg::AprilTagDetection::_tag_id_type arg)
  {
    msg_.tag_id = std::move(arg);
    return Init_AprilTagDetection_latitude(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::AprilTagDetection msg_;
};

class Init_AprilTagDetection_header
{
public:
  Init_AprilTagDetection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AprilTagDetection_tag_id header(::cdcl_umd_msgs::msg::AprilTagDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AprilTagDetection_tag_id(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::AprilTagDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::AprilTagDetection>()
{
  return cdcl_umd_msgs::msg::builder::Init_AprilTagDetection_header();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__BUILDER_HPP_
