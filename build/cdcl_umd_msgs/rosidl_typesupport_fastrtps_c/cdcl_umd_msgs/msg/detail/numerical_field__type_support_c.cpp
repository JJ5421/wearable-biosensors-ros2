// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cdcl_umd_msgs:msg/NumericalField.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/msg/detail/numerical_field__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cdcl_umd_msgs/msg/detail/numerical_field__struct.h"
#include "cdcl_umd_msgs/msg/detail/numerical_field__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "cdcl_umd_msgs/msg/detail/casualty_report_field__functions.h"  // field

// forward declare type support functions
size_t get_serialized_size_cdcl_umd_msgs__msg__CasualtyReportField(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cdcl_umd_msgs__msg__CasualtyReportField(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CasualtyReportField)();


using _NumericalField__ros_msg_type = cdcl_umd_msgs__msg__NumericalField;

static bool _NumericalField__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NumericalField__ros_msg_type * ros_message = static_cast<const _NumericalField__ros_msg_type *>(untyped_ros_message);
  // Field name: field
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CasualtyReportField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->field, cdr))
    {
      return false;
    }
  }

  // Field name: estimate
  {
    cdr << ros_message->estimate;
  }

  // Field name: covariance
  {
    cdr << ros_message->covariance;
  }

  return true;
}

static bool _NumericalField__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NumericalField__ros_msg_type * ros_message = static_cast<_NumericalField__ros_msg_type *>(untyped_ros_message);
  // Field name: field
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CasualtyReportField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->field))
    {
      return false;
    }
  }

  // Field name: estimate
  {
    cdr >> ros_message->estimate;
  }

  // Field name: covariance
  {
    cdr >> ros_message->covariance;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cdcl_umd_msgs
size_t get_serialized_size_cdcl_umd_msgs__msg__NumericalField(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NumericalField__ros_msg_type * ros_message = static_cast<const _NumericalField__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name field

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__CasualtyReportField(
    &(ros_message->field), current_alignment);
  // field.name estimate
  {
    size_t item_size = sizeof(ros_message->estimate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name covariance
  {
    size_t item_size = sizeof(ros_message->covariance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NumericalField__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cdcl_umd_msgs__msg__NumericalField(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cdcl_umd_msgs
size_t max_serialized_size_cdcl_umd_msgs__msg__NumericalField(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: field
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__CasualtyReportField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: estimate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: covariance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cdcl_umd_msgs__msg__NumericalField;
    is_plain =
      (
      offsetof(DataType, covariance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NumericalField__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cdcl_umd_msgs__msg__NumericalField(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NumericalField = {
  "cdcl_umd_msgs::msg",
  "NumericalField",
  _NumericalField__cdr_serialize,
  _NumericalField__cdr_deserialize,
  _NumericalField__get_serialized_size,
  _NumericalField__max_serialized_size
};

static rosidl_message_type_support_t _NumericalField__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NumericalField,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, NumericalField)() {
  return &_NumericalField__type_support;
}

#if defined(__cplusplus)
}
#endif
