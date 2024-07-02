// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cdcl_umd_msgs:msg/TraumaHead.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/msg/detail/trauma_head__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cdcl_umd_msgs/msg/detail/trauma_head__struct.h"
#include "cdcl_umd_msgs/msg/detail/trauma_head__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // posteriors
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // posteriors
#include "rosidl_runtime_c/string.h"  // hypothesis_names
#include "rosidl_runtime_c/string_functions.h"  // hypothesis_names

// forward declare type support functions


using _TraumaHead__ros_msg_type = cdcl_umd_msgs__msg__TraumaHead;

static bool _TraumaHead__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TraumaHead__ros_msg_type * ros_message = static_cast<const _TraumaHead__ros_msg_type *>(untyped_ros_message);
  // Field name: posteriors
  {
    size_t size = ros_message->posteriors.size;
    auto array_ptr = ros_message->posteriors.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: hypothesis_names
  {
    size_t size = ros_message->hypothesis_names.size;
    auto array_ptr = ros_message->hypothesis_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _TraumaHead__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TraumaHead__ros_msg_type * ros_message = static_cast<_TraumaHead__ros_msg_type *>(untyped_ros_message);
  // Field name: posteriors
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->posteriors.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->posteriors);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->posteriors, size)) {
      fprintf(stderr, "failed to create array for field 'posteriors'");
      return false;
    }
    auto array_ptr = ros_message->posteriors.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: hypothesis_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->hypothesis_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->hypothesis_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->hypothesis_names, size)) {
      fprintf(stderr, "failed to create array for field 'hypothesis_names'");
      return false;
    }
    auto array_ptr = ros_message->hypothesis_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'hypothesis_names'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cdcl_umd_msgs
size_t get_serialized_size_cdcl_umd_msgs__msg__TraumaHead(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TraumaHead__ros_msg_type * ros_message = static_cast<const _TraumaHead__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name posteriors
  {
    size_t array_size = ros_message->posteriors.size;
    auto array_ptr = ros_message->posteriors.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hypothesis_names
  {
    size_t array_size = ros_message->hypothesis_names.size;
    auto array_ptr = ros_message->hypothesis_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TraumaHead__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cdcl_umd_msgs__msg__TraumaHead(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cdcl_umd_msgs
size_t max_serialized_size_cdcl_umd_msgs__msg__TraumaHead(
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

  // member: posteriors
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hypothesis_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

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
    using DataType = cdcl_umd_msgs__msg__TraumaHead;
    is_plain =
      (
      offsetof(DataType, hypothesis_names) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TraumaHead__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cdcl_umd_msgs__msg__TraumaHead(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TraumaHead = {
  "cdcl_umd_msgs::msg",
  "TraumaHead",
  _TraumaHead__cdr_serialize,
  _TraumaHead__cdr_deserialize,
  _TraumaHead__get_serialized_size,
  _TraumaHead__max_serialized_size
};

static rosidl_message_type_support_t _TraumaHead__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TraumaHead,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, TraumaHead)() {
  return &_TraumaHead__type_support;
}

#if defined(__cplusplus)
}
#endif
