// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosbag2_interfaces:msg/WriteSplitEvent.idl
// generated code does not contain a copyright notice
#include "rosbag2_interfaces/msg/detail/write_split_event__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosbag2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosbag2_interfaces/msg/detail/write_split_event__struct.h"
#include "rosbag2_interfaces/msg/detail/write_split_event__functions.h"
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

#include "rosidl_runtime_c/string.h"  // closed_file, opened_file
#include "rosidl_runtime_c/string_functions.h"  // closed_file, opened_file

// forward declare type support functions


using _WriteSplitEvent__ros_msg_type = rosbag2_interfaces__msg__WriteSplitEvent;

static bool _WriteSplitEvent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WriteSplitEvent__ros_msg_type * ros_message = static_cast<const _WriteSplitEvent__ros_msg_type *>(untyped_ros_message);
  // Field name: closed_file
  {
    const rosidl_runtime_c__String * str = &ros_message->closed_file;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: opened_file
  {
    const rosidl_runtime_c__String * str = &ros_message->opened_file;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _WriteSplitEvent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WriteSplitEvent__ros_msg_type * ros_message = static_cast<_WriteSplitEvent__ros_msg_type *>(untyped_ros_message);
  // Field name: closed_file
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->closed_file.data) {
      rosidl_runtime_c__String__init(&ros_message->closed_file);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->closed_file,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'closed_file'\n");
      return false;
    }
  }

  // Field name: opened_file
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->opened_file.data) {
      rosidl_runtime_c__String__init(&ros_message->opened_file);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->opened_file,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'opened_file'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbag2_interfaces
size_t get_serialized_size_rosbag2_interfaces__msg__WriteSplitEvent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WriteSplitEvent__ros_msg_type * ros_message = static_cast<const _WriteSplitEvent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name closed_file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->closed_file.size + 1);
  // field.name opened_file
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->opened_file.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _WriteSplitEvent__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosbag2_interfaces__msg__WriteSplitEvent(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbag2_interfaces
size_t max_serialized_size_rosbag2_interfaces__msg__WriteSplitEvent(
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

  // member: closed_file
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: opened_file
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rosbag2_interfaces__msg__WriteSplitEvent;
    is_plain =
      (
      offsetof(DataType, opened_file) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WriteSplitEvent__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosbag2_interfaces__msg__WriteSplitEvent(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WriteSplitEvent = {
  "rosbag2_interfaces::msg",
  "WriteSplitEvent",
  _WriteSplitEvent__cdr_serialize,
  _WriteSplitEvent__cdr_deserialize,
  _WriteSplitEvent__get_serialized_size,
  _WriteSplitEvent__max_serialized_size
};

static rosidl_message_type_support_t _WriteSplitEvent__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WriteSplitEvent,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbag2_interfaces, msg, WriteSplitEvent)() {
  return &_WriteSplitEvent__type_support;
}

#if defined(__cplusplus)
}
#endif
