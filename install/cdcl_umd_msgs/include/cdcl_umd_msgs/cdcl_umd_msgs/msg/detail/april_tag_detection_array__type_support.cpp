// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cdcl_umd_msgs:msg/AprilTagDetectionArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cdcl_umd_msgs/msg/detail/april_tag_detection_array__struct.hpp"
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

void AprilTagDetectionArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cdcl_umd_msgs::msg::AprilTagDetectionArray(_init);
}

void AprilTagDetectionArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cdcl_umd_msgs::msg::AprilTagDetectionArray *>(message_memory);
  typed_message->~AprilTagDetectionArray();
}

size_t size_function__AprilTagDetectionArray__april_tags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cdcl_umd_msgs::msg::AprilTagDetection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AprilTagDetectionArray__april_tags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cdcl_umd_msgs::msg::AprilTagDetection> *>(untyped_member);
  return &member[index];
}

void * get_function__AprilTagDetectionArray__april_tags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cdcl_umd_msgs::msg::AprilTagDetection> *>(untyped_member);
  return &member[index];
}

void fetch_function__AprilTagDetectionArray__april_tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const cdcl_umd_msgs::msg::AprilTagDetection *>(
    get_const_function__AprilTagDetectionArray__april_tags(untyped_member, index));
  auto & value = *reinterpret_cast<cdcl_umd_msgs::msg::AprilTagDetection *>(untyped_value);
  value = item;
}

void assign_function__AprilTagDetectionArray__april_tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<cdcl_umd_msgs::msg::AprilTagDetection *>(
    get_function__AprilTagDetectionArray__april_tags(untyped_member, index));
  const auto & value = *reinterpret_cast<const cdcl_umd_msgs::msg::AprilTagDetection *>(untyped_value);
  item = value;
}

void resize_function__AprilTagDetectionArray__april_tags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cdcl_umd_msgs::msg::AprilTagDetection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AprilTagDetectionArray_message_member_array[1] = {
  {
    "april_tags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cdcl_umd_msgs::msg::AprilTagDetection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::AprilTagDetectionArray, april_tags),  // bytes offset in struct
    nullptr,  // default value
    size_function__AprilTagDetectionArray__april_tags,  // size() function pointer
    get_const_function__AprilTagDetectionArray__april_tags,  // get_const(index) function pointer
    get_function__AprilTagDetectionArray__april_tags,  // get(index) function pointer
    fetch_function__AprilTagDetectionArray__april_tags,  // fetch(index, &value) function pointer
    assign_function__AprilTagDetectionArray__april_tags,  // assign(index, value) function pointer
    resize_function__AprilTagDetectionArray__april_tags  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AprilTagDetectionArray_message_members = {
  "cdcl_umd_msgs::msg",  // message namespace
  "AprilTagDetectionArray",  // message name
  1,  // number of fields
  sizeof(cdcl_umd_msgs::msg::AprilTagDetectionArray),
  AprilTagDetectionArray_message_member_array,  // message members
  AprilTagDetectionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  AprilTagDetectionArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AprilTagDetectionArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AprilTagDetectionArray_message_members,
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
get_message_type_support_handle<cdcl_umd_msgs::msg::AprilTagDetectionArray>()
{
  return &::cdcl_umd_msgs::msg::rosidl_typesupport_introspection_cpp::AprilTagDetectionArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cdcl_umd_msgs, msg, AprilTagDetectionArray)() {
  return &::cdcl_umd_msgs::msg::rosidl_typesupport_introspection_cpp::AprilTagDetectionArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
