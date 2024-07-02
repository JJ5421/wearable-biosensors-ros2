// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cdcl_umd_msgs:msg/SpotStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cdcl_umd_msgs/msg/detail/spot_status__struct.hpp"
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

void SpotStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cdcl_umd_msgs::msg::SpotStatus(_init);
}

void SpotStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cdcl_umd_msgs::msg::SpotStatus *>(message_memory);
  typed_message->~SpotStatus();
}

size_t size_function__SpotStatus__working_nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SpotStatus__working_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SpotStatus__working_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SpotStatus__working_nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpotStatus__working_nodes_strings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpotStatus__working_nodes_strings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SpotStatus__working_nodes_strings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpotStatus__working_nodes_strings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SpotStatus__working_nodes_strings(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SpotStatus__working_nodes_strings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SpotStatus__working_nodes_strings(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SpotStatus__working_nodes_strings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpotStatus_message_member_array[3] = {
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::SpotStatus, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "working_nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::SpotStatus, working_nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpotStatus__working_nodes,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SpotStatus__working_nodes,  // fetch(index, &value) function pointer
    assign_function__SpotStatus__working_nodes,  // assign(index, value) function pointer
    resize_function__SpotStatus__working_nodes  // resize(index) function pointer
  },
  {
    "working_nodes_strings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::SpotStatus, working_nodes_strings),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpotStatus__working_nodes_strings,  // size() function pointer
    get_const_function__SpotStatus__working_nodes_strings,  // get_const(index) function pointer
    get_function__SpotStatus__working_nodes_strings,  // get(index) function pointer
    fetch_function__SpotStatus__working_nodes_strings,  // fetch(index, &value) function pointer
    assign_function__SpotStatus__working_nodes_strings,  // assign(index, value) function pointer
    resize_function__SpotStatus__working_nodes_strings  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpotStatus_message_members = {
  "cdcl_umd_msgs::msg",  // message namespace
  "SpotStatus",  // message name
  3,  // number of fields
  sizeof(cdcl_umd_msgs::msg::SpotStatus),
  SpotStatus_message_member_array,  // message members
  SpotStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SpotStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpotStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpotStatus_message_members,
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
get_message_type_support_handle<cdcl_umd_msgs::msg::SpotStatus>()
{
  return &::cdcl_umd_msgs::msg::rosidl_typesupport_introspection_cpp::SpotStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cdcl_umd_msgs, msg, SpotStatus)() {
  return &::cdcl_umd_msgs::msg::rosidl_typesupport_introspection_cpp::SpotStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
