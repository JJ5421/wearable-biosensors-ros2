// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/SpotStatus.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__SpotStatus __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__SpotStatus __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpotStatus_
{
  using Type = SpotStatus_<ContainerAllocator>;

  explicit SpotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->working_nodes_strings.resize(5);
      this->working_nodes_strings = {{"RESNET18_CLASSIFIERS"}, {"BACKGROUND_SUBTRACTION"}, {"SPEECH_ACTIVITY"}, {"APRILTAG_DETECTIONS"}, {"TARGET_DETECTION"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->state = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit SpotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->working_nodes_strings.resize(5);
      this->working_nodes_strings = {{"RESNET18_CLASSIFIERS"}, {"BACKGROUND_SUBTRACTION"}, {"SPEECH_ACTIVITY"}, {"APRILTAG_DETECTIONS"}, {"TARGET_DETECTION"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->state = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _working_nodes_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _working_nodes_type working_nodes;
  using _working_nodes_strings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _working_nodes_strings_type working_nodes_strings;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__working_nodes(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->working_nodes = _arg;
    return *this;
  }
  Type & set__working_nodes_strings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->working_nodes_strings = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__SpotStatus
    std::shared_ptr<cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__SpotStatus
    std::shared_ptr<cdcl_umd_msgs::msg::SpotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpotStatus_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->working_nodes != other.working_nodes) {
      return false;
    }
    if (this->working_nodes_strings != other.working_nodes_strings) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpotStatus_

// alias to use template instance with default allocator
using SpotStatus =
  cdcl_umd_msgs::msg::SpotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__STRUCT_HPP_
