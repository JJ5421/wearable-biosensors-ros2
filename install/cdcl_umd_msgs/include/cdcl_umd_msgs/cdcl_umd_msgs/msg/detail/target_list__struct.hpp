// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/TargetList.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'targets'
#include "cdcl_umd_msgs/msg/detail/target__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__TargetList __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__TargetList __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetList_
{
  using Type = TargetList_<ContainerAllocator>;

  explicit TargetList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TargetList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _targets_type =
    std::vector<cdcl_umd_msgs::msg::Target_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cdcl_umd_msgs::msg::Target_<ContainerAllocator>>>;
  _targets_type targets;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__targets(
    const std::vector<cdcl_umd_msgs::msg::Target_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cdcl_umd_msgs::msg::Target_<ContainerAllocator>>> & _arg)
  {
    this->targets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::TargetList_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::TargetList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::TargetList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::TargetList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::TargetList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::TargetList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::TargetList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::TargetList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::TargetList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::TargetList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__TargetList
    std::shared_ptr<cdcl_umd_msgs::msg::TargetList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__TargetList
    std::shared_ptr<cdcl_umd_msgs::msg::TargetList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->targets != other.targets) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetList_

// alias to use template instance with default allocator
using TargetList =
  cdcl_umd_msgs::msg::TargetList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__TARGET_LIST__STRUCT_HPP_
