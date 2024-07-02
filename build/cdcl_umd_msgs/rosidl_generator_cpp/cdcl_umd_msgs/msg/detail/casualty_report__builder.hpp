// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:msg/CasualtyReport.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__BUILDER_HPP_
#define CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/msg/detail/casualty_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace msg
{

namespace builder
{

class Init_CasualtyReport_alertness_verbal
{
public:
  explicit Init_CasualtyReport_alertness_verbal(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::msg::CasualtyReport alertness_verbal(::cdcl_umd_msgs::msg::CasualtyReport::_alertness_verbal_type arg)
  {
    msg_.alertness_verbal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_alertness_motor
{
public:
  explicit Init_CasualtyReport_alertness_motor(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  Init_CasualtyReport_alertness_verbal alertness_motor(::cdcl_umd_msgs::msg::CasualtyReport::_alertness_motor_type arg)
  {
    msg_.alertness_motor = std::move(arg);
    return Init_CasualtyReport_alertness_verbal(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_alertness_ocular
{
public:
  explicit Init_CasualtyReport_alertness_ocular(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  Init_CasualtyReport_alertness_motor alertness_ocular(::cdcl_umd_msgs::msg::CasualtyReport::_alertness_ocular_type arg)
  {
    msg_.alertness_ocular = std::move(arg);
    return Init_CasualtyReport_alertness_motor(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_trauma_lower_extremity
{
public:
  explicit Init_CasualtyReport_trauma_lower_extremity(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  Init_CasualtyReport_alertness_ocular trauma_lower_extremity(::cdcl_umd_msgs::msg::CasualtyReport::_trauma_lower_extremity_type arg)
  {
    msg_.trauma_lower_extremity = std::move(arg);
    return Init_CasualtyReport_alertness_ocular(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_trauma_upper_extremity
{
public:
  explicit Init_CasualtyReport_trauma_upper_extremity(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  Init_CasualtyReport_trauma_lower_extremity trauma_upper_extremity(::cdcl_umd_msgs::msg::CasualtyReport::_trauma_upper_extremity_type arg)
  {
    msg_.trauma_upper_extremity = std::move(arg);
    return Init_CasualtyReport_trauma_lower_extremity(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_trauma_torso
{
public:
  explicit Init_CasualtyReport_trauma_torso(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  Init_CasualtyReport_trauma_upper_extremity trauma_torso(::cdcl_umd_msgs::msg::CasualtyReport::_trauma_torso_type arg)
  {
    msg_.trauma_torso = std::move(arg);
    return Init_CasualtyReport_trauma_upper_extremity(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_trauma_head
{
public:
  explicit Init_CasualtyReport_trauma_head(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  Init_CasualtyReport_trauma_torso trauma_head(::cdcl_umd_msgs::msg::CasualtyReport::_trauma_head_type arg)
  {
    msg_.trauma_head = std::move(arg);
    return Init_CasualtyReport_trauma_torso(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_respiratory_rate
{
public:
  explicit Init_CasualtyReport_respiratory_rate(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  Init_CasualtyReport_trauma_head respiratory_rate(::cdcl_umd_msgs::msg::CasualtyReport::_respiratory_rate_type arg)
  {
    msg_.respiratory_rate = std::move(arg);
    return Init_CasualtyReport_trauma_head(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_heart_rate
{
public:
  explicit Init_CasualtyReport_heart_rate(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  Init_CasualtyReport_respiratory_rate heart_rate(::cdcl_umd_msgs::msg::CasualtyReport::_heart_rate_type arg)
  {
    msg_.heart_rate = std::move(arg);
    return Init_CasualtyReport_respiratory_rate(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_respiratory_distress
{
public:
  explicit Init_CasualtyReport_respiratory_distress(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  Init_CasualtyReport_heart_rate respiratory_distress(::cdcl_umd_msgs::msg::CasualtyReport::_respiratory_distress_type arg)
  {
    msg_.respiratory_distress = std::move(arg);
    return Init_CasualtyReport_heart_rate(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_severe_hemorrhage
{
public:
  explicit Init_CasualtyReport_severe_hemorrhage(::cdcl_umd_msgs::msg::CasualtyReport & msg)
  : msg_(msg)
  {}
  Init_CasualtyReport_respiratory_distress severe_hemorrhage(::cdcl_umd_msgs::msg::CasualtyReport::_severe_hemorrhage_type arg)
  {
    msg_.severe_hemorrhage = std::move(arg);
    return Init_CasualtyReport_respiratory_distress(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

class Init_CasualtyReport_casualty_id
{
public:
  Init_CasualtyReport_casualty_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CasualtyReport_severe_hemorrhage casualty_id(::cdcl_umd_msgs::msg::CasualtyReport::_casualty_id_type arg)
  {
    msg_.casualty_id = std::move(arg);
    return Init_CasualtyReport_severe_hemorrhage(msg_);
  }

private:
  ::cdcl_umd_msgs::msg::CasualtyReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::msg::CasualtyReport>()
{
  return cdcl_umd_msgs::msg::builder::Init_CasualtyReport_casualty_id();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__CASUALTY_REPORT__BUILDER_HPP_
