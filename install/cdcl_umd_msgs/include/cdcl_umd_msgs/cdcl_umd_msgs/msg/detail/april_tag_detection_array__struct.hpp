// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/AprilTagDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'april_tags'
#include "cdcl_umd_msgs/msg/detail/april_tag_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__AprilTagDetectionArray __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__AprilTagDetectionArray __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AprilTagDetectionArray_
{
  using Type = AprilTagDetectionArray_<ContainerAllocator>;

  explicit AprilTagDetectionArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AprilTagDetectionArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _april_tags_type =
    std::vector<cdcl_umd_msgs::msg::AprilTagDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cdcl_umd_msgs::msg::AprilTagDetection_<ContainerAllocator>>>;
  _april_tags_type april_tags;

  // setters for named parameter idiom
  Type & set__april_tags(
    const std::vector<cdcl_umd_msgs::msg::AprilTagDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cdcl_umd_msgs::msg::AprilTagDetection_<ContainerAllocator>>> & _arg)
  {
    this->april_tags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__AprilTagDetectionArray
    std::shared_ptr<cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__AprilTagDetectionArray
    std::shared_ptr<cdcl_umd_msgs::msg::AprilTagDetectionArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AprilTagDetectionArray_ & other) const
  {
    if (this->april_tags != other.april_tags) {
      return false;
    }
    return true;
  }
  bool operator!=(const AprilTagDetectionArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AprilTagDetectionArray_

// alias to use template instance with default allocator
using AprilTagDetectionArray =
  cdcl_umd_msgs::msg::AprilTagDetectionArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__STRUCT_HPP_
