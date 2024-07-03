// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cdcl_umd_msgs:srv/SetArenaOperatingMode.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/srv/detail/set_arena_operating_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `operating_mode`
#include "rosidl_runtime_c/string_functions.h"

bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__init(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // operating_mode
  if (!rosidl_runtime_c__String__init(&msg->operating_mode)) {
    cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__fini(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * msg)
{
  if (!msg) {
    return;
  }
  // operating_mode
  rosidl_runtime_c__String__fini(&msg->operating_mode);
}

bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__are_equal(const cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * lhs, const cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // operating_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operating_mode), &(rhs->operating_mode)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__copy(
  const cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * input,
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // operating_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->operating_mode), &(output->operating_mode)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__srv__SetArenaOperatingMode_Request *
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * msg = (cdcl_umd_msgs__srv__SetArenaOperatingMode_Request *)allocator.allocate(sizeof(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request));
  bool success = cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__destroy(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence__init(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__srv__SetArenaOperatingMode_Request *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__fini(&data[i - 1]);
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
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence__fini(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence * array)
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
      cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__fini(&array->data[i]);
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

cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence *
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence * array = (cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence__destroy(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence__are_equal(const cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence * lhs, const cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence__copy(
  const cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence * input,
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__srv__SetArenaOperatingMode_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__srv__SetArenaOperatingMode_Request * data =
      (cdcl_umd_msgs__srv__SetArenaOperatingMode_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__srv__SetArenaOperatingMode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__init(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__fini(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
}

bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__are_equal(const cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * lhs, const cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__copy(
  const cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * input,
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__srv__SetArenaOperatingMode_Response *
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * msg = (cdcl_umd_msgs__srv__SetArenaOperatingMode_Response *)allocator.allocate(sizeof(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response));
  bool success = cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__destroy(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence__init(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__srv__SetArenaOperatingMode_Response *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__fini(&data[i - 1]);
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
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence__fini(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence * array)
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
      cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__fini(&array->data[i]);
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

cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence *
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence * array = (cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence__destroy(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence__are_equal(const cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence * lhs, const cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence__copy(
  const cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence * input,
  cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__srv__SetArenaOperatingMode_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__srv__SetArenaOperatingMode_Response * data =
      (cdcl_umd_msgs__srv__SetArenaOperatingMode_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__srv__SetArenaOperatingMode_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
