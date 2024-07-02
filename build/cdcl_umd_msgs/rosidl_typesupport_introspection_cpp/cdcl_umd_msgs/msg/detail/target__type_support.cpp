// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cdcl_umd_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cdcl_umd_msgs/msg/detail/target__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cdcl_umd_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Target_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cdcl_umd_msgs::msg::Target(_init);
}

void Target_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cdcl_umd_msgs::msg::Target *>(message_memory);
  typed_message->~Target();
}

size_t size_function__Target__keypoints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cdcl_umd_msgs::msg::Point2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Target__keypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cdcl_umd_msgs::msg::Point2D> *>(untyped_member);
  return &member[index];
}

void * get_function__Target__keypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cdcl_umd_msgs::msg::Point2D> *>(untyped_member);
  return &member[index];
}

void fetch_function__Target__keypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const cdcl_umd_msgs::msg::Point2D *>(
    get_const_function__Target__keypoints(untyped_member, index));
  auto & value = *reinterpret_cast<cdcl_umd_msgs::msg::Point2D *>(untyped_value);
  value = item;
}

void assign_function__Target__keypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<cdcl_umd_msgs::msg::Point2D *>(
    get_function__Target__keypoints(untyped_member, index));
  const auto & value = *reinterpret_cast<const cdcl_umd_msgs::msg::Point2D *>(untyped_value);
  item = value;
}

void resize_function__Target__keypoints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cdcl_umd_msgs::msg::Point2D> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Target__features(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Target__features(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Target__features(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Target__features(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Target__features(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Target__features(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Target__features(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Target__features(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Target__feature_descriptors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Target__feature_descriptors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Target__feature_descriptors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Target__feature_descriptors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Target__feature_descriptors(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Target__feature_descriptors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Target__feature_descriptors(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Target__feature_descriptors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Target_message_member_array[7] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::Target, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_lung",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::Target, left_lung),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_lung",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::Target, right_lung),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "face",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::Target, face),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "keypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cdcl_umd_msgs::msg::Point2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::Target, keypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__Target__keypoints,  // size() function pointer
    get_const_function__Target__keypoints,  // get_const(index) function pointer
    get_function__Target__keypoints,  // get(index) function pointer
    fetch_function__Target__keypoints,  // fetch(index, &value) function pointer
    assign_function__Target__keypoints,  // assign(index, value) function pointer
    resize_function__Target__keypoints  // resize(index) function pointer
  },
  {
    "features",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::Target, features),  // bytes offset in struct
    nullptr,  // default value
    size_function__Target__features,  // size() function pointer
    get_const_function__Target__features,  // get_const(index) function pointer
    get_function__Target__features,  // get(index) function pointer
    fetch_function__Target__features,  // fetch(index, &value) function pointer
    assign_function__Target__features,  // assign(index, value) function pointer
    resize_function__Target__features  // resize(index) function pointer
  },
  {
    "feature_descriptors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::Target, feature_descriptors),  // bytes offset in struct
    nullptr,  // default value
    size_function__Target__feature_descriptors,  // size() function pointer
    get_const_function__Target__feature_descriptors,  // get_const(index) function pointer
    get_function__Target__feature_descriptors,  // get(index) function pointer
    fetch_function__Target__feature_descriptors,  // fetch(index, &value) function pointer
    assign_function__Target__feature_descriptors,  // assign(index, value) function pointer
    resize_function__Target__feature_descriptors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Target_message_members = {
  "cdcl_umd_msgs::msg",  // message namespace
  "Target",  // message name
  7,  // number of fields
  sizeof(cdcl_umd_msgs::msg::Target),
  Target_message_member_array,  // message members
  Target_init_function,  // function to initialize message memory (memory has to be allocated)
  Target_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Target_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Target_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cdcl_umd_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cdcl_umd_msgs::msg::Target>()
{
  return &::cdcl_umd_msgs::msg::rosidl_typesupport_introspection_cpp::Target_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cdcl_umd_msgs, msg, Target)() {
  return &::cdcl_umd_msgs::msg::rosidl_typesupport_introspection_cpp::Target_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
