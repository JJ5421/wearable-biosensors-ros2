// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/Resnet18ClassifierObservation.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__Resnet18ClassifierObservation __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__Resnet18ClassifierObservation __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Resnet18ClassifierObservation_
{
  using Type = Resnet18ClassifierObservation_<ContainerAllocator>;

  explicit Resnet18ClassifierObservation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->classifier_name = "";
      this->observation = 0ll;
    }
  }

  explicit Resnet18ClassifierObservation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : classifier_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->classifier_name = "";
      this->observation = 0ll;
    }
  }

  // field types and members
  using _classifier_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _classifier_name_type classifier_name;
  using _observation_type =
    int64_t;
  _observation_type observation;

  // setters for named parameter idiom
  Type & set__classifier_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->classifier_name = _arg;
    return *this;
  }
  Type & set__observation(
    const int64_t & _arg)
  {
    this->observation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__Resnet18ClassifierObservation
    std::shared_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__Resnet18ClassifierObservation
    std::shared_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Resnet18ClassifierObservation_ & other) const
  {
    if (this->classifier_name != other.classifier_name) {
      return false;
    }
    if (this->observation != other.observation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Resnet18ClassifierObservation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Resnet18ClassifierObservation_

// alias to use template instance with default allocator
using Resnet18ClassifierObservation =
  cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__STRUCT_HPP_
