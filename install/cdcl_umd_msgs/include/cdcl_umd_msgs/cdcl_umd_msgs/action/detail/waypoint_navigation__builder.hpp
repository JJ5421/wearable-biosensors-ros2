// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cdcl_umd_msgs:action/WaypointNavigation.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__BUILDER_HPP_
#define CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cdcl_umd_msgs
{

namespace action
{

namespace builder
{

class Init_WaypointNavigation_Goal_waypoint_reached_tolerance
{
public:
  explicit Init_WaypointNavigation_Goal_waypoint_reached_tolerance(::cdcl_umd_msgs::action::WaypointNavigation_Goal & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::action::WaypointNavigation_Goal waypoint_reached_tolerance(::cdcl_umd_msgs::action::WaypointNavigation_Goal::_waypoint_reached_tolerance_type arg)
  {
    msg_.waypoint_reached_tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_Goal msg_;
};

class Init_WaypointNavigation_Goal_waypoint
{
public:
  explicit Init_WaypointNavigation_Goal_waypoint(::cdcl_umd_msgs::action::WaypointNavigation_Goal & msg)
  : msg_(msg)
  {}
  Init_WaypointNavigation_Goal_waypoint_reached_tolerance waypoint(::cdcl_umd_msgs::action::WaypointNavigation_Goal::_waypoint_type arg)
  {
    msg_.waypoint = std::move(arg);
    return Init_WaypointNavigation_Goal_waypoint_reached_tolerance(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_Goal msg_;
};

class Init_WaypointNavigation_Goal_timeout
{
public:
  Init_WaypointNavigation_Goal_timeout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointNavigation_Goal_waypoint timeout(::cdcl_umd_msgs::action::WaypointNavigation_Goal::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_WaypointNavigation_Goal_waypoint(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::action::WaypointNavigation_Goal>()
{
  return cdcl_umd_msgs::action::builder::Init_WaypointNavigation_Goal_timeout();
}

}  // namespace cdcl_umd_msgs


namespace cdcl_umd_msgs
{

namespace action
{

namespace builder
{

class Init_WaypointNavigation_Result_message
{
public:
  explicit Init_WaypointNavigation_Result_message(::cdcl_umd_msgs::action::WaypointNavigation_Result & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::action::WaypointNavigation_Result message(::cdcl_umd_msgs::action::WaypointNavigation_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_Result msg_;
};

class Init_WaypointNavigation_Result_successful
{
public:
  explicit Init_WaypointNavigation_Result_successful(::cdcl_umd_msgs::action::WaypointNavigation_Result & msg)
  : msg_(msg)
  {}
  Init_WaypointNavigation_Result_message successful(::cdcl_umd_msgs::action::WaypointNavigation_Result::_successful_type arg)
  {
    msg_.successful = std::move(arg);
    return Init_WaypointNavigation_Result_message(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_Result msg_;
};

class Init_WaypointNavigation_Result_meters_to_go
{
public:
  Init_WaypointNavigation_Result_meters_to_go()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointNavigation_Result_successful meters_to_go(::cdcl_umd_msgs::action::WaypointNavigation_Result::_meters_to_go_type arg)
  {
    msg_.meters_to_go = std::move(arg);
    return Init_WaypointNavigation_Result_successful(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::action::WaypointNavigation_Result>()
{
  return cdcl_umd_msgs::action::builder::Init_WaypointNavigation_Result_meters_to_go();
}

}  // namespace cdcl_umd_msgs


namespace cdcl_umd_msgs
{

namespace action
{

namespace builder
{

class Init_WaypointNavigation_Feedback_meters_to_go
{
public:
  Init_WaypointNavigation_Feedback_meters_to_go()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cdcl_umd_msgs::action::WaypointNavigation_Feedback meters_to_go(::cdcl_umd_msgs::action::WaypointNavigation_Feedback::_meters_to_go_type arg)
  {
    msg_.meters_to_go = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::action::WaypointNavigation_Feedback>()
{
  return cdcl_umd_msgs::action::builder::Init_WaypointNavigation_Feedback_meters_to_go();
}

}  // namespace cdcl_umd_msgs


namespace cdcl_umd_msgs
{

namespace action
{

namespace builder
{

class Init_WaypointNavigation_SendGoal_Request_goal
{
public:
  explicit Init_WaypointNavigation_SendGoal_Request_goal(::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request goal(::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request msg_;
};

class Init_WaypointNavigation_SendGoal_Request_goal_id
{
public:
  Init_WaypointNavigation_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointNavigation_SendGoal_Request_goal goal_id(::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_WaypointNavigation_SendGoal_Request_goal(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request>()
{
  return cdcl_umd_msgs::action::builder::Init_WaypointNavigation_SendGoal_Request_goal_id();
}

}  // namespace cdcl_umd_msgs


namespace cdcl_umd_msgs
{

namespace action
{

namespace builder
{

class Init_WaypointNavigation_SendGoal_Response_stamp
{
public:
  explicit Init_WaypointNavigation_SendGoal_Response_stamp(::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response stamp(::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response msg_;
};

class Init_WaypointNavigation_SendGoal_Response_accepted
{
public:
  Init_WaypointNavigation_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointNavigation_SendGoal_Response_stamp accepted(::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_WaypointNavigation_SendGoal_Response_stamp(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response>()
{
  return cdcl_umd_msgs::action::builder::Init_WaypointNavigation_SendGoal_Response_accepted();
}

}  // namespace cdcl_umd_msgs


namespace cdcl_umd_msgs
{

namespace action
{

namespace builder
{

class Init_WaypointNavigation_GetResult_Request_goal_id
{
public:
  Init_WaypointNavigation_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request goal_id(::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request>()
{
  return cdcl_umd_msgs::action::builder::Init_WaypointNavigation_GetResult_Request_goal_id();
}

}  // namespace cdcl_umd_msgs


namespace cdcl_umd_msgs
{

namespace action
{

namespace builder
{

class Init_WaypointNavigation_GetResult_Response_result
{
public:
  explicit Init_WaypointNavigation_GetResult_Response_result(::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response result(::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response msg_;
};

class Init_WaypointNavigation_GetResult_Response_status
{
public:
  Init_WaypointNavigation_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointNavigation_GetResult_Response_result status(::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_WaypointNavigation_GetResult_Response_result(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response>()
{
  return cdcl_umd_msgs::action::builder::Init_WaypointNavigation_GetResult_Response_status();
}

}  // namespace cdcl_umd_msgs


namespace cdcl_umd_msgs
{

namespace action
{

namespace builder
{

class Init_WaypointNavigation_FeedbackMessage_feedback
{
public:
  explicit Init_WaypointNavigation_FeedbackMessage_feedback(::cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage feedback(::cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage msg_;
};

class Init_WaypointNavigation_FeedbackMessage_goal_id
{
public:
  Init_WaypointNavigation_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointNavigation_FeedbackMessage_feedback goal_id(::cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_WaypointNavigation_FeedbackMessage_feedback(msg_);
  }

private:
  ::cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage>()
{
  return cdcl_umd_msgs::action::builder::Init_WaypointNavigation_FeedbackMessage_goal_id();
}

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__BUILDER_HPP_
