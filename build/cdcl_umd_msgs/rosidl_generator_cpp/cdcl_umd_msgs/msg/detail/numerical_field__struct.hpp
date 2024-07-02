// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/NumericalField.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'field'
#include "cdcl_umd_msgs/msg/detail/casualty_report_field__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__NumericalField __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__NumericalField __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NumericalField_
{
  using Type = NumericalField_<ContainerAllocator>;

  explicit NumericalField_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->estimate = 0.0;
      this->covariance = 0.0;
    }
  }

  explicit NumericalField_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->estimate = 0.0;
      this->covariance = 0.0;
    }
  }

  // field types and members
  using _field_type =
    cdcl_umd_msgs::msg::CasualtyReportField_<ContainerAllocator>;
  _field_type field;
  using _estimate_type =
    double;
  _estimate_type estimate;
  using _covariance_type =
    double;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__field(
    const cdcl_umd_msgs::msg::CasualtyReportField_<ContainerAllocator> & _arg)
  {
    this->field = _arg;
    return *this;
  }
  Type & set__estimate(
    const double & _arg)
  {
    this->estimate = _arg;
    return *this;
  }
  Type & set__covariance(
    const double & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__NumericalField
    std::shared_ptr<cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__NumericalField
    std::shared_ptr<cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NumericalField_ & other) const
  {
    if (this->field != other.field) {
      return false;
    }
    if (this->estimate != other.estimate) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const NumericalField_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NumericalField_

// alias to use template instance with default allocator
using NumericalField =
  cdcl_umd_msgs::msg::NumericalField_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__NUMERICAL_FIELD__STRUCT_HPP_
