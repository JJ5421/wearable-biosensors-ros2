// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/AlertnessOcular.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_OCULAR__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_OCULAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__AlertnessOcular __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__AlertnessOcular __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AlertnessOcular_
{
  using Type = AlertnessOcular_<ContainerAllocator>;

  explicit AlertnessOcular_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->posteriors.resize(3);
      this->posteriors = {{0.34, 0.33, 0.33}};
      this->hypothesis_names.resize(3);
      this->hypothesis_names = {{"open"}, {"closed"}, {"NT"}};
    }
  }

  explicit AlertnessOcular_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->posteriors.resize(3);
      this->posteriors = {{0.34, 0.33, 0.33}};
      this->hypothesis_names.resize(3);
      this->hypothesis_names = {{"open"}, {"closed"}, {"NT"}};
    }
  }

  // field types and members
  using _posteriors_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _posteriors_type posteriors;
  using _hypothesis_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _hypothesis_names_type hypothesis_names;

  // setters for named parameter idiom
  Type & set__posteriors(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->posteriors = _arg;
    return *this;
  }
  Type & set__hypothesis_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->hypothesis_names = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE;
  static constexpr int64_t NUM_HYPOTHESES =
    3;
  static constexpr int64_t MAX_POSTERIOR_INDEX =
    0;

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__AlertnessOcular
    std::shared_ptr<cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__AlertnessOcular
    std::shared_ptr<cdcl_umd_msgs::msg::AlertnessOcular_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlertnessOcular_ & other) const
  {
    if (this->posteriors != other.posteriors) {
      return false;
    }
    if (this->hypothesis_names != other.hypothesis_names) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlertnessOcular_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlertnessOcular_

// alias to use template instance with default allocator
using AlertnessOcular =
  cdcl_umd_msgs::msg::AlertnessOcular_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AlertnessOcular_<ContainerAllocator>::NAME = "alertness_ocular";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
AlertnessOcular_<ContainerAllocator>::TYPE = "injury";
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t AlertnessOcular_<ContainerAllocator>::NUM_HYPOTHESES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t AlertnessOcular_<ContainerAllocator>::MAX_POSTERIOR_INDEX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__ALERTNESS_OCULAR__STRUCT_HPP_
