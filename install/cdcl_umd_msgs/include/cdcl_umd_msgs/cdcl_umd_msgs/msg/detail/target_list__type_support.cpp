// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cdcl_umd_msgs:msg/TargetList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cdcl_umd_msgs/msg/detail/target_list__struct.hpp"
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

void TargetList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cdcl_umd_msgs::msg::TargetList(_init);
}

void TargetList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cdcl_umd_msgs::msg::TargetList *>(message_memory);
  typed_message->~TargetList();
}

size_t size_function__TargetList__targets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cdcl_umd_msgs::msg::Target> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TargetList__targets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cdcl_umd_msgs::msg::Target> *>(untyped_member);
  return &member[index];
}

void * get_function__TargetList__targets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cdcl_umd_msgs::msg::Target> *>(untyped_member);
  return &member[index];
}

void fetch_function__TargetList__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const cdcl_umd_msgs::msg::Target *>(
    get_const_function__TargetList__targets(untyped_member, index));
  auto & value = *reinterpret_cast<cdcl_umd_msgs::msg::Target *>(untyped_value);
  value = item;
}

void assign_function__TargetList__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<cdcl_umd_msgs::msg::Target *>(
    get_function__TargetList__targets(untyped_member, index));
  const auto & value = *reinterpret_cast<const cdcl_umd_msgs::msg::Target *>(untyped_value);
  item = value;
}

void resize_function__TargetList__targets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cdcl_umd_msgs::msg::Target> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TargetList_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::TargetList, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "targets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cdcl_umd_msgs::msg::Target>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::TargetList, targets),  // bytes offset in struct
    nullptr,  // default value
    size_function__TargetList__targets,  // size() function pointer
    get_const_function__TargetList__targets,  // get_const(index) function pointer
    get_function__TargetList__targets,  // get(index) function pointer
    fetch_function__TargetList__targets,  // fetch(index, &value) function pointer
    assign_function__TargetList__targets,  // assign(index, value) function pointer
    resize_function__TargetList__targets  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TargetList_message_members = {
  "cdcl_umd_msgs::msg",  // message namespace
  "TargetList",  // message name
  2,  // number of fields
  sizeof(cdcl_umd_msgs::msg::TargetList),
  TargetList_message_member_array,  // message members
  TargetList_init_function,  // function to initialize message memory (memory has to be allocated)
  TargetList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TargetList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TargetList_message_members,
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
get_message_type_support_handle<cdcl_umd_msgs::msg::TargetList>()
{
  return &::cdcl_umd_msgs::msg::rosidl_typesupport_introspection_cpp::TargetList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cdcl_umd_msgs, msg, TargetList)() {
  return &::cdcl_umd_msgs::msg::rosidl_typesupport_introspection_cpp::TargetList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
