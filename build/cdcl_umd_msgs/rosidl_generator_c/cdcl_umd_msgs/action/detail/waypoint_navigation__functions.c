// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cdcl_umd_msgs:action/WaypointNavigation.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `waypoint`
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"

bool
cdcl_umd_msgs__action__WaypointNavigation_Goal__init(cdcl_umd_msgs__action__WaypointNavigation_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // timeout
  if (!builtin_interfaces__msg__Duration__init(&msg->timeout)) {
    cdcl_umd_msgs__action__WaypointNavigation_Goal__fini(msg);
    return false;
  }
  // waypoint
  if (!sensor_msgs__msg__NavSatFix__init(&msg->waypoint)) {
    cdcl_umd_msgs__action__WaypointNavigation_Goal__fini(msg);
    return false;
  }
  // waypoint_reached_tolerance
  return true;
}

void
cdcl_umd_msgs__action__WaypointNavigation_Goal__fini(cdcl_umd_msgs__action__WaypointNavigation_Goal * msg)
{
  if (!msg) {
    return;
  }
  // timeout
  builtin_interfaces__msg__Duration__fini(&msg->timeout);
  // waypoint
  sensor_msgs__msg__NavSatFix__fini(&msg->waypoint);
  // waypoint_reached_tolerance
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Goal__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Goal * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timeout
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->timeout), &(rhs->timeout)))
  {
    return false;
  }
  // waypoint
  if (!sensor_msgs__msg__NavSatFix__are_equal(
      &(lhs->waypoint), &(rhs->waypoint)))
  {
    return false;
  }
  // waypoint_reached_tolerance
  if (lhs->waypoint_reached_tolerance != rhs->waypoint_reached_tolerance) {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Goal__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Goal * input,
  cdcl_umd_msgs__action__WaypointNavigation_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // timeout
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->timeout), &(output->timeout)))
  {
    return false;
  }
  // waypoint
  if (!sensor_msgs__msg__NavSatFix__copy(
      &(input->waypoint), &(output->waypoint)))
  {
    return false;
  }
  // waypoint_reached_tolerance
  output->waypoint_reached_tolerance = input->waypoint_reached_tolerance;
  return true;
}

cdcl_umd_msgs__action__WaypointNavigation_Goal *
cdcl_umd_msgs__action__WaypointNavigation_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_Goal * msg = (cdcl_umd_msgs__action__WaypointNavigation_Goal *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__action__WaypointNavigation_Goal));
  bool success = cdcl_umd_msgs__action__WaypointNavigation_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__action__WaypointNavigation_Goal__destroy(cdcl_umd_msgs__action__WaypointNavigation_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__action__WaypointNavigation_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_Goal * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__action__WaypointNavigation_Goal *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__action__WaypointNavigation_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__action__WaypointNavigation_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__action__WaypointNavigation_Goal__fini(&data[i - 1]);
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
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * array)
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
      cdcl_umd_msgs__action__WaypointNavigation_Goal__fini(&array->data[i]);
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

cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * array = (cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__action__WaypointNavigation_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__action__WaypointNavigation_Goal * data =
      (cdcl_umd_msgs__action__WaypointNavigation_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__action__WaypointNavigation_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__action__WaypointNavigation_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
cdcl_umd_msgs__action__WaypointNavigation_Result__init(cdcl_umd_msgs__action__WaypointNavigation_Result * msg)
{
  if (!msg) {
    return false;
  }
  // meters_to_go
  // successful
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    cdcl_umd_msgs__action__WaypointNavigation_Result__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__action__WaypointNavigation_Result__fini(cdcl_umd_msgs__action__WaypointNavigation_Result * msg)
{
  if (!msg) {
    return;
  }
  // meters_to_go
  // successful
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Result__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Result * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // meters_to_go
  if (lhs->meters_to_go != rhs->meters_to_go) {
    return false;
  }
  // successful
  if (lhs->successful != rhs->successful) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Result__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Result * input,
  cdcl_umd_msgs__action__WaypointNavigation_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // meters_to_go
  output->meters_to_go = input->meters_to_go;
  // successful
  output->successful = input->successful;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__action__WaypointNavigation_Result *
cdcl_umd_msgs__action__WaypointNavigation_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_Result * msg = (cdcl_umd_msgs__action__WaypointNavigation_Result *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__action__WaypointNavigation_Result));
  bool success = cdcl_umd_msgs__action__WaypointNavigation_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__action__WaypointNavigation_Result__destroy(cdcl_umd_msgs__action__WaypointNavigation_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__action__WaypointNavigation_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_Result * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__action__WaypointNavigation_Result *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__action__WaypointNavigation_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__action__WaypointNavigation_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__action__WaypointNavigation_Result__fini(&data[i - 1]);
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
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * array)
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
      cdcl_umd_msgs__action__WaypointNavigation_Result__fini(&array->data[i]);
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

cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * array = (cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__action__WaypointNavigation_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__action__WaypointNavigation_Result * data =
      (cdcl_umd_msgs__action__WaypointNavigation_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__action__WaypointNavigation_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__action__WaypointNavigation_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
cdcl_umd_msgs__action__WaypointNavigation_Feedback__init(cdcl_umd_msgs__action__WaypointNavigation_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // meters_to_go
  return true;
}

void
cdcl_umd_msgs__action__WaypointNavigation_Feedback__fini(cdcl_umd_msgs__action__WaypointNavigation_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // meters_to_go
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Feedback__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Feedback * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // meters_to_go
  if (lhs->meters_to_go != rhs->meters_to_go) {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Feedback__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Feedback * input,
  cdcl_umd_msgs__action__WaypointNavigation_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // meters_to_go
  output->meters_to_go = input->meters_to_go;
  return true;
}

cdcl_umd_msgs__action__WaypointNavigation_Feedback *
cdcl_umd_msgs__action__WaypointNavigation_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_Feedback * msg = (cdcl_umd_msgs__action__WaypointNavigation_Feedback *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__action__WaypointNavigation_Feedback));
  bool success = cdcl_umd_msgs__action__WaypointNavigation_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__action__WaypointNavigation_Feedback__destroy(cdcl_umd_msgs__action__WaypointNavigation_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__action__WaypointNavigation_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_Feedback * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__action__WaypointNavigation_Feedback *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__action__WaypointNavigation_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__action__WaypointNavigation_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__action__WaypointNavigation_Feedback__fini(&data[i - 1]);
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
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * array)
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
      cdcl_umd_msgs__action__WaypointNavigation_Feedback__fini(&array->data[i]);
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

cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * array = (cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__action__WaypointNavigation_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__action__WaypointNavigation_Feedback * data =
      (cdcl_umd_msgs__action__WaypointNavigation_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__action__WaypointNavigation_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__action__WaypointNavigation_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"

bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__init(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!cdcl_umd_msgs__action__WaypointNavigation_Goal__init(&msg->goal)) {
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  cdcl_umd_msgs__action__WaypointNavigation_Goal__fini(&msg->goal);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * lhs, const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!cdcl_umd_msgs__action__WaypointNavigation_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * input,
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!cdcl_umd_msgs__action__WaypointNavigation_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request *
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * msg = (cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request));
  bool success = cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__destroy(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini(&data[i - 1]);
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
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * array)
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
      cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini(&array->data[i]);
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

cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * array = (cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * data =
      (cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__init(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__fini(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * lhs, const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * input,
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response *
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * msg = (cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response));
  bool success = cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__destroy(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__fini(&data[i - 1]);
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
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * array)
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
      cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__fini(&array->data[i]);
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

cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * array = (cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * data =
      (cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__init(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__fini(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * lhs, const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * input,
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request *
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * msg = (cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request));
  bool success = cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__destroy(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__fini(&data[i - 1]);
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
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * array)
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
      cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__fini(&array->data[i]);
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

cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * array = (cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * data =
      (cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"

bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__init(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!cdcl_umd_msgs__action__WaypointNavigation_Result__init(&msg->result)) {
    cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__fini(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  cdcl_umd_msgs__action__WaypointNavigation_Result__fini(&msg->result);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * lhs, const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!cdcl_umd_msgs__action__WaypointNavigation_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * input,
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!cdcl_umd_msgs__action__WaypointNavigation_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response *
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * msg = (cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response));
  bool success = cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__destroy(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__fini(&data[i - 1]);
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
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * array)
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
      cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__fini(&array->data[i]);
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

cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * array = (cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * data =
      (cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "cdcl_umd_msgs/action/detail/waypoint_navigation__functions.h"

bool
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__init(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!cdcl_umd_msgs__action__WaypointNavigation_Feedback__init(&msg->feedback)) {
    cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  cdcl_umd_msgs__action__WaypointNavigation_Feedback__fini(&msg->feedback);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * lhs, const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!cdcl_umd_msgs__action__WaypointNavigation_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * input,
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!cdcl_umd_msgs__action__WaypointNavigation_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage *
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * msg = (cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage));
  bool success = cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__destroy(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini(&data[i - 1]);
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
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * array)
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
      cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini(&array->data[i]);
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

cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * array = (cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * data =
      (cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
