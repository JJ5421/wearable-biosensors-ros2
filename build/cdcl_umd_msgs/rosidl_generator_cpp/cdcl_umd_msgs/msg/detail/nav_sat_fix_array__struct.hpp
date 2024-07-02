// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/NavSatFixArray.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fixes'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__NavSatFixArray __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__NavSatFixArray __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavSatFixArray_
{
  using Type = NavSatFixArray_<ContainerAllocator>;

  explicit NavSatFixArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NavSatFixArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _fixes_type =
    std::vector<sensor_msgs::msg::NavSatFix_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::NavSatFix_<ContainerAllocator>>>;
  _fixes_type fixes;

  // setters for named parameter idiom
  Type & set__fixes(
    const std::vector<sensor_msgs::msg::NavSatFix_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_msgs::msg::NavSatFix_<ContainerAllocator>>> & _arg)
  {
    this->fixes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__NavSatFixArray
    std::shared_ptr<cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__NavSatFixArray
    std::shared_ptr<cdcl_umd_msgs::msg::NavSatFixArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavSatFixArray_ & other) const
  {
    if (this->fixes != other.fixes) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavSatFixArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavSatFixArray_

// alias to use template instance with default allocator
using NavSatFixArray =
  cdcl_umd_msgs::msg::NavSatFixArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__NAV_SAT_FIX_ARRAY__STRUCT_HPP_
