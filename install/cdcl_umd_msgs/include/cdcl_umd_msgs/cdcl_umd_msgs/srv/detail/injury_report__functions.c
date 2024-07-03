// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cdcl_umd_msgs:srv/InjuryReport.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/srv/detail/injury_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `system`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

bool
cdcl_umd_msgs__srv__InjuryReport_Request__init(cdcl_umd_msgs__srv__InjuryReport_Request * msg)
{
  if (!msg) {
    return false;
  }
  // casualty_id
  // system
  if (!rosidl_runtime_c__String__init(&msg->system)) {
    cdcl_umd_msgs__srv__InjuryReport_Request__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    cdcl_umd_msgs__srv__InjuryReport_Request__fini(msg);
    return false;
  }
  // value
  // time_ago
  return true;
}

void
cdcl_umd_msgs__srv__InjuryReport_Request__fini(cdcl_umd_msgs__srv__InjuryReport_Request * msg)
{
  if (!msg) {
    return;
  }
  // casualty_id
  // system
  rosidl_runtime_c__String__fini(&msg->system);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // value
  // time_ago
}

bool
cdcl_umd_msgs__srv__InjuryReport_Request__are_equal(const cdcl_umd_msgs__srv__InjuryReport_Request * lhs, const cdcl_umd_msgs__srv__InjuryReport_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // casualty_id
  if (lhs->casualty_id != rhs->casualty_id) {
    return false;
  }
  // system
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->system), &(rhs->system)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // time_ago
  if (lhs->time_ago != rhs->time_ago) {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__srv__InjuryReport_Request__copy(
  const cdcl_umd_msgs__srv__InjuryReport_Request * input,
  cdcl_umd_msgs__srv__InjuryReport_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // casualty_id
  output->casualty_id = input->casualty_id;
  // system
  if (!rosidl_runtime_c__String__copy(
      &(input->system), &(output->system)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // value
  output->value = input->value;
  // time_ago
  output->time_ago = input->time_ago;
  return true;
}

cdcl_umd_msgs__srv__InjuryReport_Request *
cdcl_umd_msgs__srv__InjuryReport_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__InjuryReport_Request * msg = (cdcl_umd_msgs__srv__InjuryReport_Request *)allocator.allocate(sizeof(cdcl_umd_msgs__srv__InjuryReport_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__srv__InjuryReport_Request));
  bool success = cdcl_umd_msgs__srv__InjuryReport_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__srv__InjuryReport_Request__destroy(cdcl_umd_msgs__srv__InjuryReport_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__srv__InjuryReport_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__srv__InjuryReport_Request__Sequence__init(cdcl_umd_msgs__srv__InjuryReport_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__InjuryReport_Request * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__srv__InjuryReport_Request *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__srv__InjuryReport_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__srv__InjuryReport_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__srv__InjuryReport_Request__fini(&data[i - 1]);
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
cdcl_umd_msgs__srv__InjuryReport_Request__Sequence__fini(cdcl_umd_msgs__srv__InjuryReport_Request__Sequence * array)
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
      cdcl_umd_msgs__srv__InjuryReport_Request__fini(&array->data[i]);
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

cdcl_umd_msgs__srv__InjuryReport_Request__Sequence *
cdcl_umd_msgs__srv__InjuryReport_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__InjuryReport_Request__Sequence * array = (cdcl_umd_msgs__srv__InjuryReport_Request__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__srv__InjuryReport_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__srv__InjuryReport_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__srv__InjuryReport_Request__Sequence__destroy(cdcl_umd_msgs__srv__InjuryReport_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__srv__InjuryReport_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__srv__InjuryReport_Request__Sequence__are_equal(const cdcl_umd_msgs__srv__InjuryReport_Request__Sequence * lhs, const cdcl_umd_msgs__srv__InjuryReport_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__srv__InjuryReport_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__srv__InjuryReport_Request__Sequence__copy(
  const cdcl_umd_msgs__srv__InjuryReport_Request__Sequence * input,
  cdcl_umd_msgs__srv__InjuryReport_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__srv__InjuryReport_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__srv__InjuryReport_Request * data =
      (cdcl_umd_msgs__srv__InjuryReport_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__srv__InjuryReport_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__srv__InjuryReport_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__srv__InjuryReport_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
cdcl_umd_msgs__srv__InjuryReport_Response__init(cdcl_umd_msgs__srv__InjuryReport_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    cdcl_umd_msgs__srv__InjuryReport_Response__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__srv__InjuryReport_Response__fini(cdcl_umd_msgs__srv__InjuryReport_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
cdcl_umd_msgs__srv__InjuryReport_Response__are_equal(const cdcl_umd_msgs__srv__InjuryReport_Response * lhs, const cdcl_umd_msgs__srv__InjuryReport_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
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
cdcl_umd_msgs__srv__InjuryReport_Response__copy(
  const cdcl_umd_msgs__srv__InjuryReport_Response * input,
  cdcl_umd_msgs__srv__InjuryReport_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__srv__InjuryReport_Response *
cdcl_umd_msgs__srv__InjuryReport_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__InjuryReport_Response * msg = (cdcl_umd_msgs__srv__InjuryReport_Response *)allocator.allocate(sizeof(cdcl_umd_msgs__srv__InjuryReport_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__srv__InjuryReport_Response));
  bool success = cdcl_umd_msgs__srv__InjuryReport_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__srv__InjuryReport_Response__destroy(cdcl_umd_msgs__srv__InjuryReport_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__srv__InjuryReport_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__srv__InjuryReport_Response__Sequence__init(cdcl_umd_msgs__srv__InjuryReport_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__InjuryReport_Response * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__srv__InjuryReport_Response *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__srv__InjuryReport_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__srv__InjuryReport_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__srv__InjuryReport_Response__fini(&data[i - 1]);
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
cdcl_umd_msgs__srv__InjuryReport_Response__Sequence__fini(cdcl_umd_msgs__srv__InjuryReport_Response__Sequence * array)
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
      cdcl_umd_msgs__srv__InjuryReport_Response__fini(&array->data[i]);
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

cdcl_umd_msgs__srv__InjuryReport_Response__Sequence *
cdcl_umd_msgs__srv__InjuryReport_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__srv__InjuryReport_Response__Sequence * array = (cdcl_umd_msgs__srv__InjuryReport_Response__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__srv__InjuryReport_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__srv__InjuryReport_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__srv__InjuryReport_Response__Sequence__destroy(cdcl_umd_msgs__srv__InjuryReport_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__srv__InjuryReport_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__srv__InjuryReport_Response__Sequence__are_equal(const cdcl_umd_msgs__srv__InjuryReport_Response__Sequence * lhs, const cdcl_umd_msgs__srv__InjuryReport_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__srv__InjuryReport_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__srv__InjuryReport_Response__Sequence__copy(
  const cdcl_umd_msgs__srv__InjuryReport_Response__Sequence * input,
  cdcl_umd_msgs__srv__InjuryReport_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__srv__InjuryReport_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__srv__InjuryReport_Response * data =
      (cdcl_umd_msgs__srv__InjuryReport_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__srv__InjuryReport_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__srv__InjuryReport_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__srv__InjuryReport_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
