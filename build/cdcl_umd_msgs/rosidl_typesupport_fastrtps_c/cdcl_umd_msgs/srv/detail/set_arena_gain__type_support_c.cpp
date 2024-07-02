// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cdcl_umd_msgs:srv/SetArenaGain.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/srv/detail/set_arena_gain__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cdcl_umd_msgs/srv/detail/set_arena_gain__struct.h"
#include "cdcl_umd_msgs/srv/detail/set_arena_gain__functions.h"
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

#include "rosidl_runtime_c/string.h"  // gain
#include "rosidl_runtime_c/string_functions.h"  // gain

// forward declare type support functions


using _SetArenaGain_Request__ros_msg_type = cdcl_umd_msgs__srv__SetArenaGain_Request;

static bool _SetArenaGain_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetArenaGain_Request__ros_msg_type * ros_message = static_cast<const _SetArenaGain_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: gain
  {
    const rosidl_runtime_c__String * str = &ros_message->gain;
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

static bool _SetArenaGain_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetArenaGain_Request__ros_msg_type * ros_message = static_cast<_SetArenaGain_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: gain
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gain.data) {
      rosidl_runtime_c__String__init(&ros_message->gain);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gain,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gain'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cdcl_umd_msgs
size_t get_serialized_size_cdcl_umd_msgs__srv__SetArenaGain_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetArenaGain_Request__ros_msg_type * ros_message = static_cast<const _SetArenaGain_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gain
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gain.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetArenaGain_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cdcl_umd_msgs__srv__SetArenaGain_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cdcl_umd_msgs
size_t max_serialized_size_cdcl_umd_msgs__srv__SetArenaGain_Request(
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

  // member: gain
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
    using DataType = cdcl_umd_msgs__srv__SetArenaGain_Request;
    is_plain =
      (
      offsetof(DataType, gain) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetArenaGain_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cdcl_umd_msgs__srv__SetArenaGain_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetArenaGain_Request = {
  "cdcl_umd_msgs::srv",
  "SetArenaGain_Request",
  _SetArenaGain_Request__cdr_serialize,
  _SetArenaGain_Request__cdr_deserialize,
  _SetArenaGain_Request__get_serialized_size,
  _SetArenaGain_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetArenaGain_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetArenaGain_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, srv, SetArenaGain_Request)() {
  return &_SetArenaGain_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cdcl_umd_msgs/srv/detail/set_arena_gain__struct.h"
// already included above
// #include "cdcl_umd_msgs/srv/detail/set_arena_gain__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // msg
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // msg

// forward declare type support functions


using _SetArenaGain_Response__ros_msg_type = cdcl_umd_msgs__srv__SetArenaGain_Response;

static bool _SetArenaGain_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetArenaGain_Response__ros_msg_type * ros_message = static_cast<const _SetArenaGain_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: msg
  {
    const rosidl_runtime_c__String * str = &ros_message->msg;
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

static bool _SetArenaGain_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetArenaGain_Response__ros_msg_type * ros_message = static_cast<_SetArenaGain_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->msg.data) {
      rosidl_runtime_c__String__init(&ros_message->msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'msg'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cdcl_umd_msgs
size_t get_serialized_size_cdcl_umd_msgs__srv__SetArenaGain_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetArenaGain_Response__ros_msg_type * ros_message = static_cast<const _SetArenaGain_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->msg.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetArenaGain_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cdcl_umd_msgs__srv__SetArenaGain_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cdcl_umd_msgs
size_t max_serialized_size_cdcl_umd_msgs__srv__SetArenaGain_Response(
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

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: msg
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
    using DataType = cdcl_umd_msgs__srv__SetArenaGain_Response;
    is_plain =
      (
      offsetof(DataType, msg) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetArenaGain_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cdcl_umd_msgs__srv__SetArenaGain_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetArenaGain_Response = {
  "cdcl_umd_msgs::srv",
  "SetArenaGain_Response",
  _SetArenaGain_Response__cdr_serialize,
  _SetArenaGain_Response__cdr_deserialize,
  _SetArenaGain_Response__get_serialized_size,
  _SetArenaGain_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetArenaGain_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetArenaGain_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, srv, SetArenaGain_Response)() {
  return &_SetArenaGain_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cdcl_umd_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cdcl_umd_msgs/srv/set_arena_gain.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetArenaGain__callbacks = {
  "cdcl_umd_msgs::srv",
  "SetArenaGain",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, srv, SetArenaGain_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, srv, SetArenaGain_Response)(),
};

static rosidl_service_type_support_t SetArenaGain__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetArenaGain__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, srv, SetArenaGain)() {
  return &SetArenaGain__handle;
}

#if defined(__cplusplus)
}
#endif
