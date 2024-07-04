// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosbag2_storage_mcap_testdata:srv/BasicSrv.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosbag2_storage_mcap_testdata/srv/detail/basic_srv__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbag2_storage_mcap_testdata
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void BasicSrv_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbag2_storage_mcap_testdata::srv::BasicSrv_Request(_init);
}

void BasicSrv_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbag2_storage_mcap_testdata::srv::BasicSrv_Request *>(message_memory);
  typed_message->~BasicSrv_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BasicSrv_Request_message_member_array[1] = {
  {
    "req",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbag2_storage_mcap_testdata::srv::BasicSrv_Request, req),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BasicSrv_Request_message_members = {
  "rosbag2_storage_mcap_testdata::srv",  // message namespace
  "BasicSrv_Request",  // message name
  1,  // number of fields
  sizeof(rosbag2_storage_mcap_testdata::srv::BasicSrv_Request),
  BasicSrv_Request_message_member_array,  // message members
  BasicSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  BasicSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BasicSrv_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BasicSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rosbag2_storage_mcap_testdata


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbag2_storage_mcap_testdata::srv::BasicSrv_Request>()
{
  return &::rosbag2_storage_mcap_testdata::srv::rosidl_typesupport_introspection_cpp::BasicSrv_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbag2_storage_mcap_testdata, srv, BasicSrv_Request)() {
  return &::rosbag2_storage_mcap_testdata::srv::rosidl_typesupport_introspection_cpp::BasicSrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosbag2_storage_mcap_testdata/srv/detail/basic_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbag2_storage_mcap_testdata
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void BasicSrv_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbag2_storage_mcap_testdata::srv::BasicSrv_Response(_init);
}

void BasicSrv_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbag2_storage_mcap_testdata::srv::BasicSrv_Response *>(message_memory);
  typed_message->~BasicSrv_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BasicSrv_Response_message_member_array[1] = {
  {
    "resp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbag2_storage_mcap_testdata::srv::BasicSrv_Response, resp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BasicSrv_Response_message_members = {
  "rosbag2_storage_mcap_testdata::srv",  // message namespace
  "BasicSrv_Response",  // message name
  1,  // number of fields
  sizeof(rosbag2_storage_mcap_testdata::srv::BasicSrv_Response),
  BasicSrv_Response_message_member_array,  // message members
  BasicSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  BasicSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BasicSrv_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BasicSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rosbag2_storage_mcap_testdata


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbag2_storage_mcap_testdata::srv::BasicSrv_Response>()
{
  return &::rosbag2_storage_mcap_testdata::srv::rosidl_typesupport_introspection_cpp::BasicSrv_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbag2_storage_mcap_testdata, srv, BasicSrv_Response)() {
  return &::rosbag2_storage_mcap_testdata::srv::rosidl_typesupport_introspection_cpp::BasicSrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "rosbag2_storage_mcap_testdata/srv/detail/basic_srv__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace rosbag2_storage_mcap_testdata
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers BasicSrv_service_members = {
  "rosbag2_storage_mcap_testdata::srv",  // service namespace
  "BasicSrv",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<rosbag2_storage_mcap_testdata::srv::BasicSrv>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t BasicSrv_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BasicSrv_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace rosbag2_storage_mcap_testdata


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosbag2_storage_mcap_testdata::srv::BasicSrv>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::rosbag2_storage_mcap_testdata::srv::rosidl_typesupport_introspection_cpp::BasicSrv_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosbag2_storage_mcap_testdata::srv::BasicSrv_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosbag2_storage_mcap_testdata::srv::BasicSrv_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbag2_storage_mcap_testdata, srv, BasicSrv)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<rosbag2_storage_mcap_testdata::srv::BasicSrv>();
}

#ifdef __cplusplus
}
#endif