// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cdcl_umd_msgs:msg/CasualtyReport.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/msg/detail/casualty_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cdcl_umd_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cdcl_umd_msgs/msg/detail/casualty_report__struct.h"
#include "cdcl_umd_msgs/msg/detail/casualty_report__functions.h"
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

#include "cdcl_umd_msgs/msg/detail/categorical_field__functions.h"  // alertness_motor, alertness_ocular, alertness_verbal, respiratory_distress, severe_hemorrhage, trauma_head, trauma_lower_extremity, trauma_torso, trauma_upper_extremity
#include "cdcl_umd_msgs/msg/detail/numerical_field__functions.h"  // heart_rate, respiratory_rate

// forward declare type support functions
size_t get_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField)();
size_t get_serialized_size_cdcl_umd_msgs__msg__NumericalField(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cdcl_umd_msgs__msg__NumericalField(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, NumericalField)();


using _CasualtyReport__ros_msg_type = cdcl_umd_msgs__msg__CasualtyReport;

static bool _CasualtyReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CasualtyReport__ros_msg_type * ros_message = static_cast<const _CasualtyReport__ros_msg_type *>(untyped_ros_message);
  // Field name: casualty_id
  {
    cdr << ros_message->casualty_id;
  }

  // Field name: severe_hemorrhage
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->severe_hemorrhage, cdr))
    {
      return false;
    }
  }

  // Field name: respiratory_distress
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->respiratory_distress, cdr))
    {
      return false;
    }
  }

  // Field name: heart_rate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, NumericalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heart_rate, cdr))
    {
      return false;
    }
  }

  // Field name: respiratory_rate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, NumericalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->respiratory_rate, cdr))
    {
      return false;
    }
  }

  // Field name: trauma_head
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trauma_head, cdr))
    {
      return false;
    }
  }

  // Field name: trauma_torso
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trauma_torso, cdr))
    {
      return false;
    }
  }

  // Field name: trauma_upper_extremity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trauma_upper_extremity, cdr))
    {
      return false;
    }
  }

  // Field name: trauma_lower_extremity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trauma_lower_extremity, cdr))
    {
      return false;
    }
  }

  // Field name: alertness_ocular
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->alertness_ocular, cdr))
    {
      return false;
    }
  }

  // Field name: alertness_motor
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->alertness_motor, cdr))
    {
      return false;
    }
  }

  // Field name: alertness_verbal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->alertness_verbal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CasualtyReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CasualtyReport__ros_msg_type * ros_message = static_cast<_CasualtyReport__ros_msg_type *>(untyped_ros_message);
  // Field name: casualty_id
  {
    cdr >> ros_message->casualty_id;
  }

  // Field name: severe_hemorrhage
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->severe_hemorrhage))
    {
      return false;
    }
  }

  // Field name: respiratory_distress
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->respiratory_distress))
    {
      return false;
    }
  }

  // Field name: heart_rate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, NumericalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heart_rate))
    {
      return false;
    }
  }

  // Field name: respiratory_rate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, NumericalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->respiratory_rate))
    {
      return false;
    }
  }

  // Field name: trauma_head
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trauma_head))
    {
      return false;
    }
  }

  // Field name: trauma_torso
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trauma_torso))
    {
      return false;
    }
  }

  // Field name: trauma_upper_extremity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trauma_upper_extremity))
    {
      return false;
    }
  }

  // Field name: trauma_lower_extremity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trauma_lower_extremity))
    {
      return false;
    }
  }

  // Field name: alertness_ocular
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->alertness_ocular))
    {
      return false;
    }
  }

  // Field name: alertness_motor
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->alertness_motor))
    {
      return false;
    }
  }

  // Field name: alertness_verbal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CategoricalField
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->alertness_verbal))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cdcl_umd_msgs
size_t get_serialized_size_cdcl_umd_msgs__msg__CasualtyReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CasualtyReport__ros_msg_type * ros_message = static_cast<const _CasualtyReport__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name casualty_id
  {
    size_t item_size = sizeof(ros_message->casualty_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name severe_hemorrhage

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
    &(ros_message->severe_hemorrhage), current_alignment);
  // field.name respiratory_distress

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
    &(ros_message->respiratory_distress), current_alignment);
  // field.name heart_rate

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__NumericalField(
    &(ros_message->heart_rate), current_alignment);
  // field.name respiratory_rate

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__NumericalField(
    &(ros_message->respiratory_rate), current_alignment);
  // field.name trauma_head

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
    &(ros_message->trauma_head), current_alignment);
  // field.name trauma_torso

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
    &(ros_message->trauma_torso), current_alignment);
  // field.name trauma_upper_extremity

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
    &(ros_message->trauma_upper_extremity), current_alignment);
  // field.name trauma_lower_extremity

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
    &(ros_message->trauma_lower_extremity), current_alignment);
  // field.name alertness_ocular

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
    &(ros_message->alertness_ocular), current_alignment);
  // field.name alertness_motor

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
    &(ros_message->alertness_motor), current_alignment);
  // field.name alertness_verbal

  current_alignment += get_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
    &(ros_message->alertness_verbal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CasualtyReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cdcl_umd_msgs__msg__CasualtyReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cdcl_umd_msgs
size_t max_serialized_size_cdcl_umd_msgs__msg__CasualtyReport(
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

  // member: casualty_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: severe_hemorrhage
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: respiratory_distress
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: heart_rate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__NumericalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: respiratory_rate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__NumericalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: trauma_head
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: trauma_torso
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: trauma_upper_extremity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: trauma_lower_extremity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: alertness_ocular
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: alertness_motor
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: alertness_verbal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_cdcl_umd_msgs__msg__CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cdcl_umd_msgs__msg__CasualtyReport;
    is_plain =
      (
      offsetof(DataType, alertness_verbal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CasualtyReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cdcl_umd_msgs__msg__CasualtyReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CasualtyReport = {
  "cdcl_umd_msgs::msg",
  "CasualtyReport",
  _CasualtyReport__cdr_serialize,
  _CasualtyReport__cdr_deserialize,
  _CasualtyReport__get_serialized_size,
  _CasualtyReport__max_serialized_size
};

static rosidl_message_type_support_t _CasualtyReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CasualtyReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cdcl_umd_msgs, msg, CasualtyReport)() {
  return &_CasualtyReport__type_support;
}

#if defined(__cplusplus)
}
#endif
