// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/CasualtyReport.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'severe_hemorrhage'
// Member 'respiratory_distress'
// Member 'trauma_head'
// Member 'trauma_torso'
// Member 'trauma_upper_extremity'
// Member 'trauma_lower_extremity'
// Member 'alertness_ocular'
// Member 'alertness_motor'
// Member 'alertness_verbal'
#include "cdcl_umd_msgs/msg/detail/categorical_field__struct.hpp"
// Member 'heart_rate'
// Member 'respiratory_rate'
#include "cdcl_umd_msgs/msg/detail/numerical_field__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__msg__CasualtyReport __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__CasualtyReport __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CasualtyReport_
{
  using Type = CasualtyReport_<ContainerAllocator>;

  explicit CasualtyReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : severe_hemorrhage(_init),
    respiratory_distress(_init),
    heart_rate(_init),
    respiratory_rate(_init),
    trauma_head(_init),
    trauma_torso(_init),
    trauma_upper_extremity(_init),
    trauma_lower_extremity(_init),
    alertness_ocular(_init),
    alertness_motor(_init),
    alertness_verbal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->casualty_id = 0ll;
    }
  }

  explicit CasualtyReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : severe_hemorrhage(_alloc, _init),
    respiratory_distress(_alloc, _init),
    heart_rate(_alloc, _init),
    respiratory_rate(_alloc, _init),
    trauma_head(_alloc, _init),
    trauma_torso(_alloc, _init),
    trauma_upper_extremity(_alloc, _init),
    trauma_lower_extremity(_alloc, _init),
    alertness_ocular(_alloc, _init),
    alertness_motor(_alloc, _init),
    alertness_verbal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->casualty_id = 0ll;
    }
  }

  // field types and members
  using _casualty_id_type =
    int64_t;
  _casualty_id_type casualty_id;
  using _severe_hemorrhage_type =
    cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>;
  _severe_hemorrhage_type severe_hemorrhage;
  using _respiratory_distress_type =
    cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>;
  _respiratory_distress_type respiratory_distress;
  using _heart_rate_type =
    cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator>;
  _heart_rate_type heart_rate;
  using _respiratory_rate_type =
    cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator>;
  _respiratory_rate_type respiratory_rate;
  using _trauma_head_type =
    cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>;
  _trauma_head_type trauma_head;
  using _trauma_torso_type =
    cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>;
  _trauma_torso_type trauma_torso;
  using _trauma_upper_extremity_type =
    cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>;
  _trauma_upper_extremity_type trauma_upper_extremity;
  using _trauma_lower_extremity_type =
    cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>;
  _trauma_lower_extremity_type trauma_lower_extremity;
  using _alertness_ocular_type =
    cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>;
  _alertness_ocular_type alertness_ocular;
  using _alertness_motor_type =
    cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>;
  _alertness_motor_type alertness_motor;
  using _alertness_verbal_type =
    cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>;
  _alertness_verbal_type alertness_verbal;

  // setters for named parameter idiom
  Type & set__casualty_id(
    const int64_t & _arg)
  {
    this->casualty_id = _arg;
    return *this;
  }
  Type & set__severe_hemorrhage(
    const cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> & _arg)
  {
    this->severe_hemorrhage = _arg;
    return *this;
  }
  Type & set__respiratory_distress(
    const cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> & _arg)
  {
    this->respiratory_distress = _arg;
    return *this;
  }
  Type & set__heart_rate(
    const cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator> & _arg)
  {
    this->heart_rate = _arg;
    return *this;
  }
  Type & set__respiratory_rate(
    const cdcl_umd_msgs::msg::NumericalField_<ContainerAllocator> & _arg)
  {
    this->respiratory_rate = _arg;
    return *this;
  }
  Type & set__trauma_head(
    const cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> & _arg)
  {
    this->trauma_head = _arg;
    return *this;
  }
  Type & set__trauma_torso(
    const cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> & _arg)
  {
    this->trauma_torso = _arg;
    return *this;
  }
  Type & set__trauma_upper_extremity(
    const cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> & _arg)
  {
    this->trauma_upper_extremity = _arg;
    return *this;
  }
  Type & set__trauma_lower_extremity(
    const cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> & _arg)
  {
    this->trauma_lower_extremity = _arg;
    return *this;
  }
  Type & set__alertness_ocular(
    const cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> & _arg)
  {
    this->alertness_ocular = _arg;
    return *this;
  }
  Type & set__alertness_motor(
    const cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> & _arg)
  {
    this->alertness_motor = _arg;
    return *this;
  }
  Type & set__alertness_verbal(
    const cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> & _arg)
  {
    this->alertness_verbal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__CasualtyReport
    std::shared_ptr<cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__CasualtyReport
    std::shared_ptr<cdcl_umd_msgs::msg::CasualtyReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CasualtyReport_ & other) const
  {
    if (this->casualty_id != other.casualty_id) {
      return false;
    }
    if (this->severe_hemorrhage != other.severe_hemorrhage) {
      return false;
    }
    if (this->respiratory_distress != other.respiratory_distress) {
      return false;
    }
    if (this->heart_rate != other.heart_rate) {
      return false;
    }
    if (this->respiratory_rate != other.respiratory_rate) {
      return false;
    }
    if (this->trauma_head != other.trauma_head) {
      return false;
    }
    if (this->trauma_torso != other.trauma_torso) {
      return false;
    }
    if (this->trauma_upper_extremity != other.trauma_upper_extremity) {
      return false;
    }
    if (this->trauma_lower_extremity != other.trauma_lower_extremity) {
      return false;
    }
    if (this->alertness_ocular != other.alertness_ocular) {
      return false;
    }
    if (this->alertness_motor != other.alertness_motor) {
      return false;
    }
    if (this->alertness_verbal != other.alertness_verbal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CasualtyReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CasualtyReport_

// alias to use template instance with default allocator
using CasualtyReport =
  cdcl_umd_msgs::msg::CasualtyReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__STRUCT_HPP_
