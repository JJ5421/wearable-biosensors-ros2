// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cdcl_umd_msgs:msg/AlertnessOcular.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cdcl_umd_msgs/msg/detail/alertness_ocular__struct.hpp"
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

void AlertnessOcular_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cdcl_umd_msgs::msg::AlertnessOcular(_init);
}

void AlertnessOcular_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cdcl_umd_msgs::msg::AlertnessOcular *>(message_memory);
  typed_message->~AlertnessOcular();
}

size_t size_function__AlertnessOcular__posteriors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AlertnessOcular__posteriors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__AlertnessOcular__posteriors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__AlertnessOcular__posteriors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__AlertnessOcular__posteriors(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__AlertnessOcular__posteriors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__AlertnessOcular__posteriors(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__AlertnessOcular__posteriors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AlertnessOcular__hypothesis_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AlertnessOcular__hypothesis_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__AlertnessOcular__hypothesis_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__AlertnessOcular__hypothesis_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__AlertnessOcular__hypothesis_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__AlertnessOcular__hypothesis_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__AlertnessOcular__hypothesis_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__AlertnessOcular__hypothesis_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AlertnessOcular_message_member_array[2] = {
  {
    "posteriors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::AlertnessOcular, posteriors),  // bytes offset in struct
    nullptr,  // default value
    size_function__AlertnessOcular__posteriors,  // size() function pointer
    get_const_function__AlertnessOcular__posteriors,  // get_const(index) function pointer
    get_function__AlertnessOcular__posteriors,  // get(index) function pointer
    fetch_function__AlertnessOcular__posteriors,  // fetch(index, &value) function pointer
    assign_function__AlertnessOcular__posteriors,  // assign(index, value) function pointer
    resize_function__AlertnessOcular__posteriors  // resize(index) function pointer
  },
  {
    "hypothesis_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cdcl_umd_msgs::msg::AlertnessOcular, hypothesis_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__AlertnessOcular__hypothesis_names,  // size() function pointer
    get_const_function__AlertnessOcular__hypothesis_names,  // get_const(index) function pointer
    get_function__AlertnessOcular__hypothesis_names,  // get(index) function pointer
    fetch_function__AlertnessOcular__hypothesis_names,  // fetch(index, &value) function pointer
    assign_function__AlertnessOcular__hypothesis_names,  // assign(index, value) function pointer
    resize_function__AlertnessOcular__hypothesis_names  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AlertnessOcular_message_members = {
  "cdcl_umd_msgs::msg",  // message namespace
  "AlertnessOcular",  // message name
  2,  // number of fields
  sizeof(cdcl_umd_msgs::msg::AlertnessOcular),
  AlertnessOcular_message_member_array,  // message members
  AlertnessOcular_init_function,  // function to initialize message memory (memory has to be allocated)
  AlertnessOcular_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AlertnessOcular_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AlertnessOcular_message_members,
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
get_message_type_support_handle<cdcl_umd_msgs::msg::AlertnessOcular>()
{
  return &::cdcl_umd_msgs::msg::rosidl_typesupport_introspection_cpp::AlertnessOcular_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cdcl_umd_msgs, msg, AlertnessOcular)() {
  return &::cdcl_umd_msgs::msg::rosidl_typesupport_introspection_cpp::AlertnessOcular_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
