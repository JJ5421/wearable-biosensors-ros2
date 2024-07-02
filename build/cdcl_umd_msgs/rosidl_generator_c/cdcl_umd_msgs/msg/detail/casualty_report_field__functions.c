// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cdcl_umd_msgs:msg/CasualtyReportField.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/msg/detail/casualty_report_field__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `name`
// Member `type`
// Member `platform_name`
#include "rosidl_runtime_c/string_functions.h"

bool
cdcl_umd_msgs__msg__CasualtyReportField__init(cdcl_umd_msgs__msg__CasualtyReportField * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    cdcl_umd_msgs__msg__CasualtyReportField__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    cdcl_umd_msgs__msg__CasualtyReportField__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    cdcl_umd_msgs__msg__CasualtyReportField__fini(msg);
    return false;
  }
  // platform_name
  if (!rosidl_runtime_c__String__init(&msg->platform_name)) {
    cdcl_umd_msgs__msg__CasualtyReportField__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__msg__CasualtyReportField__fini(cdcl_umd_msgs__msg__CasualtyReportField * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // platform_name
  rosidl_runtime_c__String__fini(&msg->platform_name);
}

bool
cdcl_umd_msgs__msg__CasualtyReportField__are_equal(const cdcl_umd_msgs__msg__CasualtyReportField * lhs, const cdcl_umd_msgs__msg__CasualtyReportField * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // platform_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->platform_name), &(rhs->platform_name)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__msg__CasualtyReportField__copy(
  const cdcl_umd_msgs__msg__CasualtyReportField * input,
  cdcl_umd_msgs__msg__CasualtyReportField * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // platform_name
  if (!rosidl_runtime_c__String__copy(
      &(input->platform_name), &(output->platform_name)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__msg__CasualtyReportField *
cdcl_umd_msgs__msg__CasualtyReportField__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__CasualtyReportField * msg = (cdcl_umd_msgs__msg__CasualtyReportField *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__CasualtyReportField), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__msg__CasualtyReportField));
  bool success = cdcl_umd_msgs__msg__CasualtyReportField__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__msg__CasualtyReportField__destroy(cdcl_umd_msgs__msg__CasualtyReportField * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__msg__CasualtyReportField__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__msg__CasualtyReportField__Sequence__init(cdcl_umd_msgs__msg__CasualtyReportField__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__CasualtyReportField * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__msg__CasualtyReportField *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__msg__CasualtyReportField), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__msg__CasualtyReportField__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__msg__CasualtyReportField__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cdcl_umd_msgs__msg__CasualtyReportField__Sequence__fini(cdcl_umd_msgs__msg__CasualtyReportField__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cdcl_umd_msgs__msg__CasualtyReportField__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cdcl_umd_msgs__msg__CasualtyReportField__Sequence *
cdcl_umd_msgs__msg__CasualtyReportField__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__CasualtyReportField__Sequence * array = (cdcl_umd_msgs__msg__CasualtyReportField__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__CasualtyReportField__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__msg__CasualtyReportField__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__msg__CasualtyReportField__Sequence__destroy(cdcl_umd_msgs__msg__CasualtyReportField__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__msg__CasualtyReportField__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__msg__CasualtyReportField__Sequence__are_equal(const cdcl_umd_msgs__msg__CasualtyReportField__Sequence * lhs, const cdcl_umd_msgs__msg__CasualtyReportField__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__msg__CasualtyReportField__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__msg__CasualtyReportField__Sequence__copy(
  const cdcl_umd_msgs__msg__CasualtyReportField__Sequence * input,
  cdcl_umd_msgs__msg__CasualtyReportField__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__msg__CasualtyReportField);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__msg__CasualtyReportField * data =
      (cdcl_umd_msgs__msg__CasualtyReportField *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__msg__CasualtyReportField__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__msg__CasualtyReportField__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__msg__CasualtyReportField__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
