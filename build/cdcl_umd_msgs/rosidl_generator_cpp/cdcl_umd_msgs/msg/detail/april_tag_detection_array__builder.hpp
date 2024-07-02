// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/AprilTagDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/april_tag_detection_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_AprilTagDetectionArray_april_tags
{
public:
  Init_AprilTagDetectionArray_april_tags()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cdcl_umd_msgs::msg::AprilTagDetectionArray april_tags(::cdcl_umd_msgs::msg::AprilTagDetectionArray::_april_tags_type arg)
  {
    msg_.april_tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::AprilTagDetectionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::AprilTagDetectionArray>()
{
  return cdcl_umd_msgs::msg::builder::Init_AprilTagDetectionArray_april_tags();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__BUILDER_HPP_
