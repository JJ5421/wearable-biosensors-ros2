// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:srv/PlaySound.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__SRV__DETAIL__PLAY_SOUND__STRUCT_HPP_
#define CDCL_UMD_MSGS__SRV__DETAIL__PLAY_SOUND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__srv__PlaySound_Request __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__srv__PlaySound_Request __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlaySound_Request_
{
  using Type = PlaySound_Request_<ContainerAllocator>;

  explicit PlaySound_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_name = "";
    }
  }

  explicit PlaySound_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_name = "";
    }
  }

  // field types and members
  using _file_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_name_type file_name;

  // setters for named parameter idiom
  Type & set__file_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__srv__PlaySound_Request
    std::shared_ptr<cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__srv__PlaySound_Request
    std::shared_ptr<cdcl_umd_msgs::srv::PlaySound_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaySound_Request_ & other) const
  {
    if (this->file_name != other.file_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaySound_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaySound_Request_

// alias to use template instance with default allocator
using PlaySound_Request =
  cdcl_umd_msgs::srv::PlaySound_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cdcl_umd_msgs


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__srv__PlaySound_Response __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__srv__PlaySound_Response __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlaySound_Response_
{
  using Type = PlaySound_Response_<ContainerAllocator>;

  explicit PlaySound_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->msg = "";
    }
  }

  explicit PlaySound_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__srv__PlaySound_Response
    std::shared_ptr<cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__srv__PlaySound_Response
    std::shared_ptr<cdcl_umd_msgs::srv::PlaySound_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaySound_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaySound_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaySound_Response_

// alias to use template instance with default allocator
using PlaySound_Response =
  cdcl_umd_msgs::srv::PlaySound_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cdcl_umd_msgs

namespace cdcl_umd_msgs
{

namespace srv
{

struct PlaySound
{
  using Request = cdcl_umd_msgs::srv::PlaySound_Request;
  using Response = cdcl_umd_msgs::srv::PlaySound_Response;
};

}  // namespace srv

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__SRV__DETAIL__PLAY_SOUND__STRUCT_HPP_
