// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosbag2_interfaces:srv/Burst.idl
// generated code does not contain a copyright notice
#include "rosbag2_interfaces/srv/detail/burst__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosbag2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosbag2_interfaces/srv/detail/burst__struct.h"
#include "rosbag2_interfaces/srv/detail/burst__functions.h"
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


// forward declare type support functions


using _Burst_Request__ros_msg_type = rosbag2_interfaces__srv__Burst_Request;

static bool _Burst_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Burst_Request__ros_msg_type * ros_message = static_cast<const _Burst_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: num_messages
  {
    cdr << ros_message->num_messages;
  }

  return true;
}

static bool _Burst_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Burst_Request__ros_msg_type * ros_message = static_cast<_Burst_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: num_messages
  {
    cdr >> ros_message->num_messages;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbag2_interfaces
size_t get_serialized_size_rosbag2_interfaces__srv__Burst_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Burst_Request__ros_msg_type * ros_message = static_cast<const _Burst_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name num_messages
  {
    size_t item_size = sizeof(ros_message->num_messages);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Burst_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosbag2_interfaces__srv__Burst_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbag2_interfaces
size_t max_serialized_size_rosbag2_interfaces__srv__Burst_Request(
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

  // member: num_messages
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
    using DataType = rosbag2_interfaces__srv__Burst_Request;
    is_plain =
      (
      offsetof(DataType, num_messages) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Burst_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosbag2_interfaces__srv__Burst_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Burst_Request = {
  "rosbag2_interfaces::srv",
  "Burst_Request",
  _Burst_Request__cdr_serialize,
  _Burst_Request__cdr_deserialize,
  _Burst_Request__get_serialized_size,
  _Burst_Request__max_serialized_size
};

static rosidl_message_type_support_t _Burst_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Burst_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbag2_interfaces, srv, Burst_Request)() {
  return &_Burst_Request__type_support;
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
// #include "rosbag2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rosbag2_interfaces/srv/detail/burst__struct.h"
// already included above
// #include "rosbag2_interfaces/srv/detail/burst__functions.h"
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


// forward declare type support functions


using _Burst_Response__ros_msg_type = rosbag2_interfaces__srv__Burst_Response;

static bool _Burst_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Burst_Response__ros_msg_type * ros_message = static_cast<const _Burst_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: actually_burst
  {
    cdr << ros_message->actually_burst;
  }

  return true;
}

static bool _Burst_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Burst_Response__ros_msg_type * ros_message = static_cast<_Burst_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: actually_burst
  {
    cdr >> ros_message->actually_burst;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbag2_interfaces
size_t get_serialized_size_rosbag2_interfaces__srv__Burst_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Burst_Response__ros_msg_type * ros_message = static_cast<const _Burst_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name actually_burst
  {
    size_t item_size = sizeof(ros_message->actually_burst);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Burst_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosbag2_interfaces__srv__Burst_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosbag2_interfaces
size_t max_serialized_size_rosbag2_interfaces__srv__Burst_Response(
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

  // member: actually_burst
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
    using DataType = rosbag2_interfaces__srv__Burst_Response;
    is_plain =
      (
      offsetof(DataType, actually_burst) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Burst_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rosbag2_interfaces__srv__Burst_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Burst_Response = {
  "rosbag2_interfaces::srv",
  "Burst_Response",
  _Burst_Response__cdr_serialize,
  _Burst_Response__cdr_deserialize,
  _Burst_Response__get_serialized_size,
  _Burst_Response__max_serialized_size
};

static rosidl_message_type_support_t _Burst_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Burst_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbag2_interfaces, srv, Burst_Response)() {
  return &_Burst_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosbag2_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosbag2_interfaces/srv/burst.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Burst__callbacks = {
  "rosbag2_interfaces::srv",
  "Burst",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbag2_interfaces, srv, Burst_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbag2_interfaces, srv, Burst_Response)(),
};

static rosidl_service_type_support_t Burst__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Burst__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbag2_interfaces, srv, Burst)() {
  return &Burst__handle;
}

#if defined(__cplusplus)
}
#endif
