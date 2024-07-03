// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/Resnet18ClassifierObservations.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATIONS__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATIONS__STRUCT_HPP_

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
// Member 'classifier_observations'
#include "cdcl_umd_msgs/msg/detail/resnet18_classifier_observation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__Resnet18ClassifierObservations __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__Resnet18ClassifierObservations __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Resnet18ClassifierObservations_
{
  using Type = Resnet18ClassifierObservations_<ContainerAllocator>;

  explicit Resnet18ClassifierObservations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit Resnet18ClassifierObservations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _classifier_observations_type =
    std::vector<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator>>>;
  _classifier_observations_type classifier_observations;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__classifier_observations(
    const std::vector<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cdcl_umd_msgs::msg::Resnet18ClassifierObservation_<ContainerAllocator>>> & _arg)
  {
    this->classifier_observations = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RESNET18_SEVERE_HEMORRHAGE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RESNET18_TRAUMA_HEAD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RESNET18_TRAUMA_TORSO;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RESNET18_TRAUMA_UPPER_EXTREMITY;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RESNET18_TRAUMA_LOWER_EXTREMITY;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RESNET18_ALERTNESS_OCULAR;

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__Resnet18ClassifierObservations
    std::shared_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__Resnet18ClassifierObservations
    std::shared_ptr<cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Resnet18ClassifierObservations_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->classifier_observations != other.classifier_observations) {
      return false;
    }
    return true;
  }
  bool operator!=(const Resnet18ClassifierObservations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Resnet18ClassifierObservations_

// alias to use template instance with default allocator
using Resnet18ClassifierObservations =
  cdcl_umd_msgs::msg::Resnet18ClassifierObservations_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Resnet18ClassifierObservations_<ContainerAllocator>::RESNET18_SEVERE_HEMORRHAGE = "RESNET18_SEVERE_HEMORRHAGE";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Resnet18ClassifierObservations_<ContainerAllocator>::RESNET18_TRAUMA_HEAD = "RESNET18_TRAUMA_HEAD";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Resnet18ClassifierObservations_<ContainerAllocator>::RESNET18_TRAUMA_TORSO = "RESNET18_TRAUMA_TORSO";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Resnet18ClassifierObservations_<ContainerAllocator>::RESNET18_TRAUMA_UPPER_EXTREMITY = "RESNET18_TRAUMA_UPPER_EXTREMITY";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Resnet18ClassifierObservations_<ContainerAllocator>::RESNET18_TRAUMA_LOWER_EXTREMITY = "RESNET18_TRAUMA_LOWER_EXTREMITY";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Resnet18ClassifierObservations_<ContainerAllocator>::RESNET18_ALERTNESS_OCULAR = "RESNET18_ALERTNESS_OCULAR";

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATIONS__STRUCT_HPP_
