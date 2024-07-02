// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:msg/CategoricalField.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__CATEGORICAL_FIELD__STRUCT_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__CATEGORICAL_FIELD__STRUCT_HPP_

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
# define DEPRECATED__cdcl_umd_msgs__msg__CategoricalField __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__msg__CategoricalField __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CategoricalField_
{
  using Type = CategoricalField_<ContainerAllocator>;

  explicit CategoricalField_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_hypotheses = 0ll;
      this->max_posterior_index = 0ll;
    }
  }

  explicit CategoricalField_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : field(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_hypotheses = 0ll;
      this->max_posterior_index = 0ll;
    }
  }

  // field types and members
  using _field_type =
    cdcl_umd_msgs::msg::CasualtyReportField_<ContainerAllocator>;
  _field_type field;
  using _num_hypotheses_type =
    int64_t;
  _num_hypotheses_type num_hypotheses;
  using _max_posterior_index_type =
    int64_t;
  _max_posterior_index_type max_posterior_index;
  using _posteriors_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _posteriors_type posteriors;
  using _hypothesis_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _hypothesis_names_type hypothesis_names;

  // setters for named parameter idiom
  Type & set__field(
    const cdcl_umd_msgs::msg::CasualtyReportField_<ContainerAllocator> & _arg)
  {
    this->field = _arg;
    return *this;
  }
  Type & set__num_hypotheses(
    const int64_t & _arg)
  {
    this->num_hypotheses = _arg;
    return *this;
  }
  Type & set__max_posterior_index(
    const int64_t & _arg)
  {
    this->max_posterior_index = _arg;
    return *this;
  }
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

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__msg__CategoricalField
    std::shared_ptr<cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__msg__CategoricalField
    std::shared_ptr<cdcl_umd_msgs::msg::CategoricalField_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CategoricalField_ & other) const
  {
    if (this->field != other.field) {
      return false;
    }
    if (this->num_hypotheses != other.num_hypotheses) {
      return false;
    }
    if (this->max_posterior_index != other.max_posterior_index) {
      return false;
    }
    if (this->posteriors != other.posteriors) {
      return false;
    }
    if (this->hypothesis_names != other.hypothesis_names) {
      return false;
    }
    return true;
  }
  bool operator!=(const CategoricalField_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CategoricalField_

// alias to use template instance with default allocator
using CategoricalField =
  cdcl_umd_msgs::msg::CategoricalField_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__CATEGORICAL_FIELD__STRUCT_HPP_
