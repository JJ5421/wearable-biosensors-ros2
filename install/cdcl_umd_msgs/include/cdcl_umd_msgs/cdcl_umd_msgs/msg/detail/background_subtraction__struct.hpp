// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/BackgroundSubtraction.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__BACKGROUND_SUBTRACTION__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__BACKGROUND_SUBTRACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__BackgroundSubtraction __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__BackgroundSubtraction __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BackgroundSubtraction_
{
  using Type = BackgroundSubtraction_<ContainerAllocator>;

  explicit BackgroundSubtraction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->observation = 0.0;
    }
  }

  explicit BackgroundSubtraction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->observation = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _observation_type =
    double;
  _observation_type observation;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__observation(
    const double & _arg)
  {
    this->observation = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> BACKGROUND_SUBTRACTION;

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__BackgroundSubtraction
    std::shared_ptr<cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__BackgroundSubtraction
    std::shared_ptr<cdcl_umd_msgs::msg::BackgroundSubtraction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BackgroundSubtraction_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->observation != other.observation) {
      return false;
    }
    return true;
  }
  bool operator!=(const BackgroundSubtraction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BackgroundSubtraction_

// alias to use template instance with default allocator
using BackgroundSubtraction =
  cdcl_umd_msgs::msg::BackgroundSubtraction_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
BackgroundSubtraction_<ContainerAllocator>::BACKGROUND_SUBTRACTION = "BACKGROUND_SUBTRACTION";

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__BACKGROUND_SUBTRACTION__STRUCT_HPP_
