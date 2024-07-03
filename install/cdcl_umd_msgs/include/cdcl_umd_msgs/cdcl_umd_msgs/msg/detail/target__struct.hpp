// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__TARGET__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'keypoints'
#include "cdcl_umd_msgs/msg/detail/point2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__Target __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__Target __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Target_
{
  using Type = Target_<ContainerAllocator>;

  explicit Target_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_lung = 0.0;
      this->right_lung = 0.0;
      this->face = 0.0;
    }
  }

  explicit Target_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_lung = 0.0;
      this->right_lung = 0.0;
      this->face = 0.0;
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _left_lung_type =
    double;
  _left_lung_type left_lung;
  using _right_lung_type =
    double;
  _right_lung_type right_lung;
  using _face_type =
    double;
  _face_type face;
  using _keypoints_type =
    std::vector<cdcl_umd_msgs::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cdcl_umd_msgs::msg::Point2D_<ContainerAllocator>>>;
  _keypoints_type keypoints;
  using _features_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _features_type features;
  using _feature_descriptors_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _feature_descriptors_type feature_descriptors;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__left_lung(
    const double & _arg)
  {
    this->left_lung = _arg;
    return *this;
  }
  Type & set__right_lung(
    const double & _arg)
  {
    this->right_lung = _arg;
    return *this;
  }
  Type & set__face(
    const double & _arg)
  {
    this->face = _arg;
    return *this;
  }
  Type & set__keypoints(
    const std::vector<cdcl_umd_msgs::msg::Point2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cdcl_umd_msgs::msg::Point2D_<ContainerAllocator>>> & _arg)
  {
    this->keypoints = _arg;
    return *this;
  }
  Type & set__features(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->features = _arg;
    return *this;
  }
  Type & set__feature_descriptors(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->feature_descriptors = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int64_t NOSE =
    0;
  static constexpr int64_t LEFT_EYE =
    1;
  static constexpr int64_t RIGHT_EYE =
    2;
  static constexpr int64_t LEFT_EAR =
    3;
  static constexpr int64_t RIGHT_EAR =
    4;
  static constexpr int64_t LEFT_SHOULDER =
    5;
  static constexpr int64_t RIGHT_SHOULDER =
    6;
  static constexpr int64_t LEFT_ELBOW =
    7;
  static constexpr int64_t RIGHT_ELBOW =
    8;
  static constexpr int64_t LEFT_WRIST =
    9;
  static constexpr int64_t RIGHT_WRIST =
    10;
  static constexpr int64_t LEFT_HIP =
    11;
  static constexpr int64_t RIGHT_HIP =
    12;
  static constexpr int64_t LEFT_KNEE =
    13;
  static constexpr int64_t RIGHT_KNEE =
    14;
  static constexpr int64_t LEFT_ANKLE =
    15;
  static constexpr int64_t RIGHT_ANKLE =
    16;

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::Target_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::Target_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::Target_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::Target_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::Target_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::Target_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::Target_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::Target_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::Target_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::Target_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__Target
    std::shared_ptr<cdcl_umd_msgs::msg::Target_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__Target
    std::shared_ptr<cdcl_umd_msgs::msg::Target_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Target_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->left_lung != other.left_lung) {
      return false;
    }
    if (this->right_lung != other.right_lung) {
      return false;
    }
    if (this->face != other.face) {
      return false;
    }
    if (this->keypoints != other.keypoints) {
      return false;
    }
    if (this->features != other.features) {
      return false;
    }
    if (this->feature_descriptors != other.feature_descriptors) {
      return false;
    }
    return true;
  }
  bool operator!=(const Target_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Target_

// alias to use template instance with default allocator
using Target =
  cdcl_umd_msgs::msg::Target_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::NOSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::LEFT_EYE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::RIGHT_EYE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::LEFT_EAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::RIGHT_EAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::LEFT_SHOULDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::RIGHT_SHOULDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::LEFT_ELBOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::RIGHT_ELBOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::LEFT_WRIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::RIGHT_WRIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::LEFT_HIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::RIGHT_HIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::LEFT_KNEE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::RIGHT_KNEE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::LEFT_ANKLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int64_t Target_<ContainerAllocator>::RIGHT_ANKLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__TARGET__STRUCT_HPP_
