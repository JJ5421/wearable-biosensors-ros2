// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:srv/InjuryReport.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__STRUCT_HPP_
#define CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__srv__InjuryReport_Request __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__srv__InjuryReport_Request __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InjuryReport_Request_
{
  using Type = InjuryReport_Request_<ContainerAllocator>;

  explicit InjuryReport_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->casualty_id = 0ll;
      this->system = "";
      this->type = "";
      this->value = 0ll;
      this->time_ago = 0ll;
    }
  }

  explicit InjuryReport_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system(_alloc),
    type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->casualty_id = 0ll;
      this->system = "";
      this->type = "";
      this->value = 0ll;
      this->time_ago = 0ll;
    }
  }

  // field types and members
  using _casualty_id_type =
    int64_t;
  _casualty_id_type casualty_id;
  using _system_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _system_type system;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _value_type =
    int64_t;
  _value_type value;
  using _time_ago_type =
    int64_t;
  _time_ago_type time_ago;

  // setters for named parameter idiom
  Type & set__casualty_id(
    const int64_t & _arg)
  {
    this->casualty_id = _arg;
    return *this;
  }
  Type & set__system(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->system = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__value(
    const int64_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__time_ago(
    const int64_t & _arg)
  {
    this->time_ago = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__srv__InjuryReport_Request
    std::shared_ptr<cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__srv__InjuryReport_Request
    std::shared_ptr<cdcl_umd_msgs::srv::InjuryReport_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InjuryReport_Request_ & other) const
  {
    if (this->casualty_id != other.casualty_id) {
      return false;
    }
    if (this->system != other.system) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->time_ago != other.time_ago) {
      return false;
    }
    return true;
  }
  bool operator!=(const InjuryReport_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InjuryReport_Request_

// alias to use template instance with default allocator
using InjuryReport_Request =
  cdcl_umd_msgs::srv::InjuryReport_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cdcl_umd_msgs


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__srv__InjuryReport_Response __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__srv__InjuryReport_Response __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InjuryReport_Response_
{
  using Type = InjuryReport_Response_<ContainerAllocator>;

  explicit InjuryReport_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit InjuryReport_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__srv__InjuryReport_Response
    std::shared_ptr<cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__srv__InjuryReport_Response
    std::shared_ptr<cdcl_umd_msgs::srv::InjuryReport_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InjuryReport_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const InjuryReport_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InjuryReport_Response_

// alias to use template instance with default allocator
using InjuryReport_Response =
  cdcl_umd_msgs::srv::InjuryReport_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cdcl_umd_msgs

namespace cdcl_umd_msgs
{

namespace srv
{

struct InjuryReport
{
  using Request = cdcl_umd_msgs::srv::InjuryReport_Request;
  using Response = cdcl_umd_msgs::srv::InjuryReport_Response;
};

}  // namespace srv

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__SRV__DETAIL__INJURY_REPORT__STRUCT_HPP_
