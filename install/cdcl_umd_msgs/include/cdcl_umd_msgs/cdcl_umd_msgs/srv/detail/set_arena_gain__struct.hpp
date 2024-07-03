// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:srv/SetArenaGain.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_GAIN__STRUCT_HPP_
#define CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_GAIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__srv__SetArenaGain_Request __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__srv__SetArenaGain_Request __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetArenaGain_Request_
{
  using Type = SetArenaGain_Request_<ContainerAllocator>;

  explicit SetArenaGain_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gain = "";
    }
  }

  explicit SetArenaGain_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gain(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gain = "";
    }
  }

  // field types and members
  using _gain_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gain_type gain;

  // setters for named parameter idiom
  Type & set__gain(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gain = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__srv__SetArenaGain_Request
    std::shared_ptr<cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__srv__SetArenaGain_Request
    std::shared_ptr<cdcl_umd_msgs::srv::SetArenaGain_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetArenaGain_Request_ & other) const
  {
    if (this->gain != other.gain) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetArenaGain_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetArenaGain_Request_

// alias to use template instance with default allocator
using SetArenaGain_Request =
  cdcl_umd_msgs::srv::SetArenaGain_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cdcl_umd_msgs


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__srv__SetArenaGain_Response __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__srv__SetArenaGain_Response __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetArenaGain_Response_
{
  using Type = SetArenaGain_Response_<ContainerAllocator>;

  explicit SetArenaGain_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->msg = "";
    }
  }

  explicit SetArenaGain_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->msg = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__srv__SetArenaGain_Response
    std::shared_ptr<cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__srv__SetArenaGain_Response
    std::shared_ptr<cdcl_umd_msgs::srv::SetArenaGain_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetArenaGain_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetArenaGain_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetArenaGain_Response_

// alias to use template instance with default allocator
using SetArenaGain_Response =
  cdcl_umd_msgs::srv::SetArenaGain_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cdcl_umd_msgs

namespace cdcl_umd_msgs
{

namespace srv
{

struct SetArenaGain
{
  using Request = cdcl_umd_msgs::srv::SetArenaGain_Request;
  using Response = cdcl_umd_msgs::srv::SetArenaGain_Response;
};

}  // namespace srv

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__SRV__DETAIL__SET_ARENA_GAIN__STRUCT_HPP_
