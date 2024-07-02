// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cdcl_umd_msgs:msg/CasualtyReport.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/msg/detail/casualty_report__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cdcl_umd_msgs/msg/detail/casualty_report__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace cdcl_umd_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cdcl_umd_msgs::msg::CategoricalField &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cdcl_umd_msgs::msg::CategoricalField &);
size_t get_serialized_size(
  const cdcl_umd_msgs::msg::CategoricalField &,
  size_t current_alignment);
size_t
max_serialized_size_CategoricalField(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cdcl_umd_msgs

// functions for cdcl_umd_msgs::msg::CategoricalField already declared above

namespace cdcl_umd_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cdcl_umd_msgs::msg::NumericalField &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cdcl_umd_msgs::msg::NumericalField &);
size_t get_serialized_size(
  const cdcl_umd_msgs::msg::NumericalField &,
  size_t current_alignment);
size_t
max_serialized_size_NumericalField(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cdcl_umd_msgs

// functions for cdcl_umd_msgs::msg::NumericalField already declared above

// functions for cdcl_umd_msgs::msg::CategoricalField already declared above

// functions for cdcl_umd_msgs::msg::CategoricalField already declared above

// functions for cdcl_umd_msgs::msg::CategoricalField already declared above

// functions for cdcl_umd_msgs::msg::CategoricalField already declared above

// functions for cdcl_umd_msgs::msg::CategoricalField already declared above

// functions for cdcl_umd_msgs::msg::CategoricalField already declared above

// functions for cdcl_umd_msgs::msg::CategoricalField already declared above


namespace cdcl_umd_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cdcl_umd_msgs
cdr_serialize(
  const cdcl_umd_msgs::msg::CasualtyReport & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: casualty_id
  cdr << ros_message.casualty_id;
  // Member: severe_hemorrhage
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.severe_hemorrhage,
    cdr);
  // Member: respiratory_distress
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.respiratory_distress,
    cdr);
  // Member: heart_rate
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.heart_rate,
    cdr);
  // Member: respiratory_rate
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.respiratory_rate,
    cdr);
  // Member: trauma_head
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.trauma_head,
    cdr);
  // Member: trauma_torso
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.trauma_torso,
    cdr);
  // Member: trauma_upper_extremity
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.trauma_upper_extremity,
    cdr);
  // Member: trauma_lower_extremity
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.trauma_lower_extremity,
    cdr);
  // Member: alertness_ocular
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.alertness_ocular,
    cdr);
  // Member: alertness_motor
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.alertness_motor,
    cdr);
  // Member: alertness_verbal
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.alertness_verbal,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cdcl_umd_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cdcl_umd_msgs::msg::CasualtyReport & ros_message)
{
  // Member: casualty_id
  cdr >> ros_message.casualty_id;

  // Member: severe_hemorrhage
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.severe_hemorrhage);

  // Member: respiratory_distress
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.respiratory_distress);

  // Member: heart_rate
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.heart_rate);

  // Member: respiratory_rate
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.respiratory_rate);

  // Member: trauma_head
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.trauma_head);

  // Member: trauma_torso
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.trauma_torso);

  // Member: trauma_upper_extremity
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.trauma_upper_extremity);

  // Member: trauma_lower_extremity
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.trauma_lower_extremity);

  // Member: alertness_ocular
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.alertness_ocular);

  // Member: alertness_motor
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.alertness_motor);

  // Member: alertness_verbal
  cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.alertness_verbal);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cdcl_umd_msgs
get_serialized_size(
  const cdcl_umd_msgs::msg::CasualtyReport & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: casualty_id
  {
    size_t item_size = sizeof(ros_message.casualty_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: severe_hemorrhage

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.severe_hemorrhage, current_alignment);
  // Member: respiratory_distress

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.respiratory_distress, current_alignment);
  // Member: heart_rate

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.heart_rate, current_alignment);
  // Member: respiratory_rate

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.respiratory_rate, current_alignment);
  // Member: trauma_head

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.trauma_head, current_alignment);
  // Member: trauma_torso

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.trauma_torso, current_alignment);
  // Member: trauma_upper_extremity

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.trauma_upper_extremity, current_alignment);
  // Member: trauma_lower_extremity

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.trauma_lower_extremity, current_alignment);
  // Member: alertness_ocular

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.alertness_ocular, current_alignment);
  // Member: alertness_motor

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.alertness_motor, current_alignment);
  // Member: alertness_verbal

  current_alignment +=
    cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.alertness_verbal, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cdcl_umd_msgs
max_serialized_size_CasualtyReport(
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


  // Member: casualty_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: severe_hemorrhage
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: respiratory_distress
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: heart_rate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NumericalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: respiratory_rate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NumericalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: trauma_head
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: trauma_torso
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: trauma_upper_extremity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: trauma_lower_extremity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: alertness_ocular
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: alertness_motor
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CategoricalField(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: alertness_verbal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CategoricalField(
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
    using DataType = cdcl_umd_msgs::msg::CasualtyReport;
    is_plain =
      (
      offsetof(DataType, alertness_verbal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CasualtyReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cdcl_umd_msgs::msg::CasualtyReport *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CasualtyReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cdcl_umd_msgs::msg::CasualtyReport *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CasualtyReport__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cdcl_umd_msgs::msg::CasualtyReport *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CasualtyReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CasualtyReport(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CasualtyReport__callbacks = {
  "cdcl_umd_msgs::msg",
  "CasualtyReport",
  _CasualtyReport__cdr_serialize,
  _CasualtyReport__cdr_deserialize,
  _CasualtyReport__get_serialized_size,
  _CasualtyReport__max_serialized_size
};

static rosidl_message_type_support_t _CasualtyReport__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CasualtyReport__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cdcl_umd_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cdcl_umd_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cdcl_umd_msgs::msg::CasualtyReport>()
{
  return &cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::_CasualtyReport__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cdcl_umd_msgs, msg, CasualtyReport)() {
  return &cdcl_umd_msgs::msg::typesupport_fastrtps_cpp::_CasualtyReport__handle;
}

#ifdef __cplusplus
}
#endif
