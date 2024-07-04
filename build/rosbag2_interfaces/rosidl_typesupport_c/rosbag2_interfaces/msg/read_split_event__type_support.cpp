// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rosbag2_interfaces:msg/ReadSplitEvent.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosbag2_interfaces/msg/detail/read_split_event__struct.h"
#include "rosbag2_interfaces/msg/detail/read_split_event__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rosbag2_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ReadSplitEvent_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReadSplitEvent_type_support_ids_t;

static const _ReadSplitEvent_type_support_ids_t _ReadSplitEvent_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReadSplitEvent_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReadSplitEvent_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReadSplitEvent_type_support_symbol_names_t _ReadSplitEvent_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbag2_interfaces, msg, ReadSplitEvent)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbag2_interfaces, msg, ReadSplitEvent)),
  }
};

typedef struct _ReadSplitEvent_type_support_data_t
{
  void * data[2];
} _ReadSplitEvent_type_support_data_t;

static _ReadSplitEvent_type_support_data_t _ReadSplitEvent_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReadSplitEvent_message_typesupport_map = {
  2,
  "rosbag2_interfaces",
  &_ReadSplitEvent_message_typesupport_ids.typesupport_identifier[0],
  &_ReadSplitEvent_message_typesupport_symbol_names.symbol_name[0],
  &_ReadSplitEvent_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReadSplitEvent_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReadSplitEvent_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace rosbag2_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rosbag2_interfaces, msg, ReadSplitEvent)() {
  return &::rosbag2_interfaces::msg::rosidl_typesupport_c::ReadSplitEvent_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
