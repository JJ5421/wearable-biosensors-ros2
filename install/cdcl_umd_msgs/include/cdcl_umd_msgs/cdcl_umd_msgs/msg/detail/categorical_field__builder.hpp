// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/CategoricalField.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__CATEGORICAL_FIELD__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__CATEGORICAL_FIELD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/categorical_field__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_CategoricalField_hypothesis_names
{
public:
  explicit Init_CategoricalField_hypothesis_names(::cdcl_umd_msgs::msg::CategoricalField & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::CategoricalField hypothesis_names(::cdcl_umd_msgs::msg::CategoricalField::_hypothesis_names_type arg)
  {
    msg_.hypothesis_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CategoricalField msg_;
};

class Init_CategoricalField_posteriors
{
public:
  explicit Init_CategoricalField_posteriors(::cdcl_umd_msgs::msg::CategoricalField & msg)
  : msg_(msg)
  {}
  Init_CategoricalField_hypothesis_names posteriors(::cdcl_umd_msgs::msg::CategoricalField::_posteriors_type arg)
  {
    msg_.posteriors = std::move(arg);
    return Init_CategoricalField_hypothesis_names(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CategoricalField msg_;
};

class Init_CategoricalField_max_posterior_index
{
public:
  explicit Init_CategoricalField_max_posterior_index(::cdcl_umd_msgs::msg::CategoricalField & msg)
  : msg_(msg)
  {}
  Init_CategoricalField_posteriors max_posterior_index(::cdcl_umd_msgs::msg::CategoricalField::_max_posterior_index_type arg)
  {
    msg_.max_posterior_index = std::move(arg);
    return Init_CategoricalField_posteriors(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CategoricalField msg_;
};

class Init_CategoricalField_num_hypotheses
{
public:
  explicit Init_CategoricalField_num_hypotheses(::cdcl_umd_msgs::msg::CategoricalField & msg)
  : msg_(msg)
  {}
  Init_CategoricalField_max_posterior_index num_hypotheses(::cdcl_umd_msgs::msg::CategoricalField::_num_hypotheses_type arg)
  {
    msg_.num_hypotheses = std::move(arg);
    return Init_CategoricalField_max_posterior_index(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CategoricalField msg_;
};

class Init_CategoricalField_field
{
public:
  Init_CategoricalField_field()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CategoricalField_num_hypotheses field(::cdcl_umd_msgs::msg::CategoricalField::_field_type arg)
  {
    msg_.field = std::move(arg);
    return Init_CategoricalField_num_hypotheses(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CategoricalField msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::CategoricalField>()
{
  return cdcl_umd_msgs::msg::builder::Init_CategoricalField_field();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__CATEGORICAL_FIELD__BUILDER_HPP_
