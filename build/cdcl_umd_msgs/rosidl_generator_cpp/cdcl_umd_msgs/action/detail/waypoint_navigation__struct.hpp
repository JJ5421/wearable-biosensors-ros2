// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cdcl_umd_msgs:action/WaypointNavigation.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__STRUCT_HPP_
#define CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'waypoint'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Goal __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Goal __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointNavigation_Goal_
{
  using Type = WaypointNavigation_Goal_<ContainerAllocator>;

  explicit WaypointNavigation_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timeout(_init),
    waypoint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_reached_tolerance = 0.0;
    }
  }

  explicit WaypointNavigation_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timeout(_alloc, _init),
    waypoint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->waypoint_reached_tolerance = 0.0;
    }
  }

  // field types and members
  using _timeout_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _timeout_type timeout;
  using _waypoint_type =
    sensor_msgs::msg::NavSatFix_<ContainerAllocator>;
  _waypoint_type waypoint;
  using _waypoint_reached_tolerance_type =
    double;
  _waypoint_reached_tolerance_type waypoint_reached_tolerance;

  // setters for named parameter idiom
  Type & set__timeout(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__waypoint(
    const sensor_msgs::msg::NavSatFix_<ContainerAllocator> & _arg)
  {
    this->waypoint = _arg;
    return *this;
  }
  Type & set__waypoint_reached_tolerance(
    const double & _arg)
  {
    this->waypoint_reached_tolerance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Goal
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Goal
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointNavigation_Goal_ & other) const
  {
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->waypoint != other.waypoint) {
      return false;
    }
    if (this->waypoint_reached_tolerance != other.waypoint_reached_tolerance) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointNavigation_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointNavigation_Goal_

// alias to use template instance with default allocator
using WaypointNavigation_Goal =
  cdcl_umd_msgs::action::WaypointNavigation_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cdcl_umd_msgs


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Result __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Result __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointNavigation_Result_
{
  using Type = WaypointNavigation_Result_<ContainerAllocator>;

  explicit WaypointNavigation_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meters_to_go = 0.0;
      this->successful = false;
      this->message = "";
    }
  }

  explicit WaypointNavigation_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meters_to_go = 0.0;
      this->successful = false;
      this->message = "";
    }
  }

  // field types and members
  using _meters_to_go_type =
    double;
  _meters_to_go_type meters_to_go;
  using _successful_type =
    bool;
  _successful_type successful;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__meters_to_go(
    const double & _arg)
  {
    this->meters_to_go = _arg;
    return *this;
  }
  Type & set__successful(
    const bool & _arg)
  {
    this->successful = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Result
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Result
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointNavigation_Result_ & other) const
  {
    if (this->meters_to_go != other.meters_to_go) {
      return false;
    }
    if (this->successful != other.successful) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointNavigation_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointNavigation_Result_

// alias to use template instance with default allocator
using WaypointNavigation_Result =
  cdcl_umd_msgs::action::WaypointNavigation_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cdcl_umd_msgs


#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Feedback __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointNavigation_Feedback_
{
  using Type = WaypointNavigation_Feedback_<ContainerAllocator>;

  explicit WaypointNavigation_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meters_to_go = 0.0;
    }
  }

  explicit WaypointNavigation_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meters_to_go = 0.0;
    }
  }

  // field types and members
  using _meters_to_go_type =
    double;
  _meters_to_go_type meters_to_go;

  // setters for named parameter idiom
  Type & set__meters_to_go(
    const double & _arg)
  {
    this->meters_to_go = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Feedback
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_Feedback
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointNavigation_Feedback_ & other) const
  {
    if (this->meters_to_go != other.meters_to_go) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointNavigation_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointNavigation_Feedback_

// alias to use template instance with default allocator
using WaypointNavigation_Feedback =
  cdcl_umd_msgs::action::WaypointNavigation_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cdcl_umd_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointNavigation_SendGoal_Request_
{
  using Type = WaypointNavigation_SendGoal_Request_<ContainerAllocator>;

  explicit WaypointNavigation_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit WaypointNavigation_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const cdcl_umd_msgs::action::WaypointNavigation_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointNavigation_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointNavigation_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointNavigation_SendGoal_Request_

// alias to use template instance with default allocator
using WaypointNavigation_SendGoal_Request =
  cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cdcl_umd_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointNavigation_SendGoal_Response_
{
  using Type = WaypointNavigation_SendGoal_Response_<ContainerAllocator>;

  explicit WaypointNavigation_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit WaypointNavigation_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointNavigation_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointNavigation_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointNavigation_SendGoal_Response_

// alias to use template instance with default allocator
using WaypointNavigation_SendGoal_Response =
  cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cdcl_umd_msgs

namespace cdcl_umd_msgs
{

namespace action
{

struct WaypointNavigation_SendGoal
{
  using Request = cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Request;
  using Response = cdcl_umd_msgs::action::WaypointNavigation_SendGoal_Response;
};

}  // namespace action

}  // namespace cdcl_umd_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointNavigation_GetResult_Request_
{
  using Type = WaypointNavigation_GetResult_Request_<ContainerAllocator>;

  explicit WaypointNavigation_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit WaypointNavigation_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointNavigation_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointNavigation_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointNavigation_GetResult_Request_

// alias to use template instance with default allocator
using WaypointNavigation_GetResult_Request =
  cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cdcl_umd_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointNavigation_GetResult_Response_
{
  using Type = WaypointNavigation_GetResult_Response_<ContainerAllocator>;

  explicit WaypointNavigation_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit WaypointNavigation_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const cdcl_umd_msgs::action::WaypointNavigation_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointNavigation_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointNavigation_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointNavigation_GetResult_Response_

// alias to use template instance with default allocator
using WaypointNavigation_GetResult_Response =
  cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cdcl_umd_msgs

namespace cdcl_umd_msgs
{

namespace action
{

struct WaypointNavigation_GetResult
{
  using Request = cdcl_umd_msgs::action::WaypointNavigation_GetResult_Request;
  using Response = cdcl_umd_msgs::action::WaypointNavigation_GetResult_Response;
};

}  // namespace action

}  // namespace cdcl_umd_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage __declspec(deprecated)
#endif

namespace cdcl_umd_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct WaypointNavigation_FeedbackMessage_
{
  using Type = WaypointNavigation_FeedbackMessage_<ContainerAllocator>;

  explicit WaypointNavigation_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit WaypointNavigation_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const cdcl_umd_msgs::action::WaypointNavigation_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage
    std::shared_ptr<cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WaypointNavigation_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const WaypointNavigation_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WaypointNavigation_FeedbackMessage_

// alias to use template instance with default allocator
using WaypointNavigation_FeedbackMessage =
  cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cdcl_umd_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace cdcl_umd_msgs
{

namespace action
{

struct WaypointNavigation
{
  /// The goal message defined in the action definition.
  using Goal = cdcl_umd_msgs::action::WaypointNavigation_Goal;
  /// The result message defined in the action definition.
  using Result = cdcl_umd_msgs::action::WaypointNavigation_Result;
  /// The feedback message defined in the action definition.
  using Feedback = cdcl_umd_msgs::action::WaypointNavigation_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = cdcl_umd_msgs::action::WaypointNavigation_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = cdcl_umd_msgs::action::WaypointNavigation_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = cdcl_umd_msgs::action::WaypointNavigation_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct WaypointNavigation WaypointNavigation;

}  // namespace action

}  // namespace cdcl_umd_msgs

#endif  // CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__STRUCT_HPP_
