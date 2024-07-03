// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/LatitudeLongitude.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__LATITUDE_LONGITUDE__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__LATITUDE_LONGITUDE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__LatitudeLongitude __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__LatitudeLongitude __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LatitudeLongitude_
{
  using Type = LatitudeLongitude_<ContainerAllocator>;

  explicit LatitudeLongitude_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit LatitudeLongitude_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr int64_t LATITUDE =
    0;
  static constexpr int64_t LONGITUDE =
    1;

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__LatitudeLongitude
    std::shared_ptr<cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__LatitudeLongitude
    std::shared_ptr<cdcl_umd_msgs::msg::LatitudeLongitude_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LatitudeLongitude_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const LatitudeLongitude_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LatitudeLongitude_

// alias to use template instance with default allocator
using LatitudeLongitude =
  cdcl_umd_msgs::msg::LatitudeLongitude_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t LatitudeLongitude_<ContainerAllocator>::LATITUDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t LatitudeLongitude_<ContainerAllocator>::LONGITUDE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__LATITUDE_LONGITUDE__STRUCT_HPP_
