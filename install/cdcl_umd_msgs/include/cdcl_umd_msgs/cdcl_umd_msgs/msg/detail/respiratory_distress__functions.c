// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cdcl_umd_msgs:msg/RespiratoryDistress.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/msg/detail/respiratory_distress__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `posteriors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `hypothesis_names`
#include "rosidl_runtime_c/string_functions.h"

bool
cdcl_umd_msgs__msg__RespiratoryDistress__init(cdcl_umd_msgs__msg__RespiratoryDistress * msg)
{
  if (!msg) {
    return false;
  }
  // posteriors
  {
    bool success = rosidl_runtime_c__double__Sequence__init(&msg->posteriors, 2);
    if (!success) {
      goto abort_init_0;
    }
  }
  msg->posteriors.data[0] = 0.5l;
  msg->posteriors.data[1] = 0.5l;
  // hypothesis_names
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->hypothesis_names, 2);
    if (!success) {
      goto abort_init_1;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->hypothesis_names.data[0], "absent");
    if (!success) {
      goto abort_init_2;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->hypothesis_names.data[1], "present");
    if (!success) {
      goto abort_init_3;
    }
  }
  return true;
abort_init_3:
  rosidl_runtime_c__String__fini(&msg->hypothesis_names.data[0]);
abort_init_2:
  rosidl_runtime_c__String__Sequence__fini(&msg->hypothesis_names);
abort_init_1:
  rosidl_runtime_c__double__Sequence__fini(&msg->posteriors);
abort_init_0:
  return false;
}

void
cdcl_umd_msgs__msg__RespiratoryDistress__fini(cdcl_umd_msgs__msg__RespiratoryDistress * msg)
{
  if (!msg) {
    return;
  }
  // posteriors
  rosidl_runtime_c__double__Sequence__fini(&msg->posteriors);
  // hypothesis_names
  rosidl_runtime_c__String__Sequence__fini(&msg->hypothesis_names);
}

bool
cdcl_umd_msgs__msg__RespiratoryDistress__are_equal(const cdcl_umd_msgs__msg__RespiratoryDistress * lhs, const cdcl_umd_msgs__msg__RespiratoryDistress * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // posteriors
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->posteriors), &(rhs->posteriors)))
  {
    return false;
  }
  // hypothesis_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->hypothesis_names), &(rhs->hypothesis_names)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__msg__RespiratoryDistress__copy(
  const cdcl_umd_msgs__msg__RespiratoryDistress * input,
  cdcl_umd_msgs__msg__RespiratoryDistress * output)
{
  if (!input || !output) {
    return false;
  }
  // posteriors
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->posteriors), &(output->posteriors)))
  {
    return false;
  }
  // hypothesis_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->hypothesis_names), &(output->hypothesis_names)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__msg__RespiratoryDistress *
cdcl_umd_msgs__msg__RespiratoryDistress__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__RespiratoryDistress * msg = (cdcl_umd_msgs__msg__RespiratoryDistress *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__RespiratoryDistress), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__msg__RespiratoryDistress));
  bool success = cdcl_umd_msgs__msg__RespiratoryDistress__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__msg__RespiratoryDistress__destroy(cdcl_umd_msgs__msg__RespiratoryDistress * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__msg__RespiratoryDistress__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__msg__RespiratoryDistress__Sequence__init(cdcl_umd_msgs__msg__RespiratoryDistress__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__RespiratoryDistress * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__msg__RespiratoryDistress *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__msg__RespiratoryDistress), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__msg__RespiratoryDistress__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__msg__RespiratoryDistress__fini(&data[i - 1]);
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
cdcl_umd_msgs__msg__RespiratoryDistress__Sequence__fini(cdcl_umd_msgs__msg__RespiratoryDistress__Sequence * array)
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
      cdcl_umd_msgs__msg__RespiratoryDistress__fini(&array->data[i]);
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

cdcl_umd_msgs__msg__RespiratoryDistress__Sequence *
cdcl_umd_msgs__msg__RespiratoryDistress__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__RespiratoryDistress__Sequence * array = (cdcl_umd_msgs__msg__RespiratoryDistress__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__RespiratoryDistress__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__msg__RespiratoryDistress__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__msg__RespiratoryDistress__Sequence__destroy(cdcl_umd_msgs__msg__RespiratoryDistress__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__msg__RespiratoryDistress__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__msg__RespiratoryDistress__Sequence__are_equal(const cdcl_umd_msgs__msg__RespiratoryDistress__Sequence * lhs, const cdcl_umd_msgs__msg__RespiratoryDistress__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__msg__RespiratoryDistress__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__msg__RespiratoryDistress__Sequence__copy(
  const cdcl_umd_msgs__msg__RespiratoryDistress__Sequence * input,
  cdcl_umd_msgs__msg__RespiratoryDistress__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__msg__RespiratoryDistress);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__msg__RespiratoryDistress * data =
      (cdcl_umd_msgs__msg__RespiratoryDistress *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__msg__RespiratoryDistress__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__msg__RespiratoryDistress__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__msg__RespiratoryDistress__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
