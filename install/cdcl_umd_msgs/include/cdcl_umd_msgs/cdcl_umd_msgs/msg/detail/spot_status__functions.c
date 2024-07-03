// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cdcl_umd_msgs:msg/SpotStatus.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/msg/detail/spot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
// Member `working_nodes_strings`
#include "rosidl_runtime_c/string_functions.h"
// Member `working_nodes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cdcl_umd_msgs__msg__SpotStatus__init(cdcl_umd_msgs__msg__SpotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    cdcl_umd_msgs__msg__SpotStatus__fini(msg);
    return false;
  }
  // working_nodes
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->working_nodes, 0)) {
    cdcl_umd_msgs__msg__SpotStatus__fini(msg);
    return false;
  }
  // working_nodes_strings
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->working_nodes_strings, 5);
    if (!success) {
      goto abort_init_0;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->working_nodes_strings.data[0], "RESNET18_CLASSIFIERS");
    if (!success) {
      goto abort_init_1;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->working_nodes_strings.data[1], "BACKGROUND_SUBTRACTION");
    if (!success) {
      goto abort_init_2;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->working_nodes_strings.data[2], "SPEECH_ACTIVITY");
    if (!success) {
      goto abort_init_3;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->working_nodes_strings.data[3], "APRILTAG_DETECTIONS");
    if (!success) {
      goto abort_init_4;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->working_nodes_strings.data[4], "TARGET_DETECTION");
    if (!success) {
      goto abort_init_5;
    }
  }
  return true;
abort_init_5:
  rosidl_runtime_c__String__fini(&msg->working_nodes_strings.data[3]);
abort_init_4:
  rosidl_runtime_c__String__fini(&msg->working_nodes_strings.data[2]);
abort_init_3:
  rosidl_runtime_c__String__fini(&msg->working_nodes_strings.data[1]);
abort_init_2:
  rosidl_runtime_c__String__fini(&msg->working_nodes_strings.data[0]);
abort_init_1:
  rosidl_runtime_c__String__Sequence__fini(&msg->working_nodes_strings);
abort_init_0:
  return false;
}

void
cdcl_umd_msgs__msg__SpotStatus__fini(cdcl_umd_msgs__msg__SpotStatus * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // working_nodes
  rosidl_runtime_c__boolean__Sequence__fini(&msg->working_nodes);
  // working_nodes_strings
  rosidl_runtime_c__String__Sequence__fini(&msg->working_nodes_strings);
}

bool
cdcl_umd_msgs__msg__SpotStatus__are_equal(const cdcl_umd_msgs__msg__SpotStatus * lhs, const cdcl_umd_msgs__msg__SpotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // working_nodes
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->working_nodes), &(rhs->working_nodes)))
  {
    return false;
  }
  // working_nodes_strings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->working_nodes_strings), &(rhs->working_nodes_strings)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__msg__SpotStatus__copy(
  const cdcl_umd_msgs__msg__SpotStatus * input,
  cdcl_umd_msgs__msg__SpotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // working_nodes
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->working_nodes), &(output->working_nodes)))
  {
    return false;
  }
  // working_nodes_strings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->working_nodes_strings), &(output->working_nodes_strings)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__msg__SpotStatus *
cdcl_umd_msgs__msg__SpotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__SpotStatus * msg = (cdcl_umd_msgs__msg__SpotStatus *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__SpotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__msg__SpotStatus));
  bool success = cdcl_umd_msgs__msg__SpotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__msg__SpotStatus__destroy(cdcl_umd_msgs__msg__SpotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__msg__SpotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__msg__SpotStatus__Sequence__init(cdcl_umd_msgs__msg__SpotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__SpotStatus * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__msg__SpotStatus *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__msg__SpotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__msg__SpotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__msg__SpotStatus__fini(&data[i - 1]);
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
cdcl_umd_msgs__msg__SpotStatus__Sequence__fini(cdcl_umd_msgs__msg__SpotStatus__Sequence * array)
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
      cdcl_umd_msgs__msg__SpotStatus__fini(&array->data[i]);
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

cdcl_umd_msgs__msg__SpotStatus__Sequence *
cdcl_umd_msgs__msg__SpotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__SpotStatus__Sequence * array = (cdcl_umd_msgs__msg__SpotStatus__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__SpotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__msg__SpotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__msg__SpotStatus__Sequence__destroy(cdcl_umd_msgs__msg__SpotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__msg__SpotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__msg__SpotStatus__Sequence__are_equal(const cdcl_umd_msgs__msg__SpotStatus__Sequence * lhs, const cdcl_umd_msgs__msg__SpotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__msg__SpotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__msg__SpotStatus__Sequence__copy(
  const cdcl_umd_msgs__msg__SpotStatus__Sequence * input,
  cdcl_umd_msgs__msg__SpotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__msg__SpotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__msg__SpotStatus * data =
      (cdcl_umd_msgs__msg__SpotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__msg__SpotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__msg__SpotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__msg__SpotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
