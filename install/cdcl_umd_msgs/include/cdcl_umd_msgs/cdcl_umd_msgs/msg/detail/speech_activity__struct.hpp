// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/SpeechActivity.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPEECH_ACTIVITY__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPEECH_ACTIVITY__STRUCT_HPP_

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
# define DEPRECATED__cdcl_umd_msgs__msg__SpeechActivity __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__SpeechActivity __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeechActivity_
{
  using Type = SpeechActivity_<ContainerAllocator>;

  explicit SpeechActivity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->observation = 0ll;
    }
  }

  explicit SpeechActivity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->observation = 0ll;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _observation_type =
    int64_t;
  _observation_type observation;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__observation(
    const int64_t & _arg)
  {
    this->observation = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SPEECH_ACTIVITY;

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__SpeechActivity
    std::shared_ptr<cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__SpeechActivity
    std::shared_ptr<cdcl_umd_msgs::msg::SpeechActivity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeechActivity_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->observation != other.observation) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeechActivity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeechActivity_

// alias to use template instance with default allocator
using SpeechActivity =
  cdcl_umd_msgs::msg::SpeechActivity_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SpeechActivity_<ContainerAllocator>::SPEECH_ACTIVITY = "SPEECH_ACTIVITY";

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPEECH_ACTIVITY__STRUCT_HPP_
