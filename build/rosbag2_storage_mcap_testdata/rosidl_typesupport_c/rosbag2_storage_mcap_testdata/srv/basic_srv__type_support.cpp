// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rosbag2_storage_mcap_testdata:srv/BasicSrv.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosbag2_storage_mcap_testdata/srv/detail/basic_srv__struct.h"
#include "rosbag2_storage_mcap_testdata/srv/detail/basic_srv__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rosbag2_storage_mcap_testdata
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BasicSrv_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BasicSrv_Request_type_support_ids_t;

static const _BasicSrv_Request_type_support_ids_t _BasicSrv_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BasicSrv_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BasicSrv_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BasicSrv_Request_type_support_symbol_names_t _BasicSrv_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbag2_storage_mcap_testdata, srv, BasicSrv_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbag2_storage_mcap_testdata, srv, BasicSrv_Request)),
  }
};

typedef struct _BasicSrv_Request_type_support_data_t
{
  void * data[2];
} _BasicSrv_Request_type_support_data_t;

static _BasicSrv_Request_type_support_data_t _BasicSrv_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BasicSrv_Request_message_typesupport_map = {
  2,
  "rosbag2_storage_mcap_testdata",
  &_BasicSrv_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BasicSrv_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BasicSrv_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BasicSrv_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BasicSrv_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rosbag2_storage_mcap_testdata

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rosbag2_storage_mcap_testdata, srv, BasicSrv_Request)() {
  return &::rosbag2_storage_mcap_testdata::srv::rosidl_typesupport_c::BasicSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosbag2_storage_mcap_testdata/srv/detail/basic_srv__struct.h"
// already included above
// #include "rosbag2_storage_mcap_testdata/srv/detail/basic_srv__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbag2_storage_mcap_testdata
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BasicSrv_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BasicSrv_Response_type_support_ids_t;

static const _BasicSrv_Response_type_support_ids_t _BasicSrv_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BasicSrv_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BasicSrv_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BasicSrv_Response_type_support_symbol_names_t _BasicSrv_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbag2_storage_mcap_testdata, srv, BasicSrv_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbag2_storage_mcap_testdata, srv, BasicSrv_Response)),
  }
};

typedef struct _BasicSrv_Response_type_support_data_t
{
  void * data[2];
} _BasicSrv_Response_type_support_data_t;

static _BasicSrv_Response_type_support_data_t _BasicSrv_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BasicSrv_Response_message_typesupport_map = {
  2,
  "rosbag2_storage_mcap_testdata",
  &_BasicSrv_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BasicSrv_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BasicSrv_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BasicSrv_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BasicSrv_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rosbag2_storage_mcap_testdata

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rosbag2_storage_mcap_testdata, srv, BasicSrv_Response)() {
  return &::rosbag2_storage_mcap_testdata::srv::rosidl_typesupport_c::BasicSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosbag2_storage_mcap_testdata/srv/detail/basic_srv__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosbag2_storage_mcap_testdata
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BasicSrv_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BasicSrv_type_support_ids_t;

static const _BasicSrv_type_support_ids_t _BasicSrv_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BasicSrv_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BasicSrv_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BasicSrv_type_support_symbol_names_t _BasicSrv_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosbag2_storage_mcap_testdata, srv, BasicSrv)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbag2_storage_mcap_testdata, srv, BasicSrv)),
  }
};

typedef struct _BasicSrv_type_support_data_t
{
  void * data[2];
} _BasicSrv_type_support_data_t;

static _BasicSrv_type_support_data_t _BasicSrv_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BasicSrv_service_typesupport_map = {
  2,
  "rosbag2_storage_mcap_testdata",
  &_BasicSrv_service_typesupport_ids.typesupport_identifier[0],
  &_BasicSrv_service_typesupport_symbol_names.symbol_name[0],
  &_BasicSrv_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BasicSrv_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BasicSrv_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rosbag2_storage_mcap_testdata

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rosbag2_storage_mcap_testdata, srv, BasicSrv)() {
  return &::rosbag2_storage_mcap_testdata::srv::rosidl_typesupport_c::BasicSrv_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
