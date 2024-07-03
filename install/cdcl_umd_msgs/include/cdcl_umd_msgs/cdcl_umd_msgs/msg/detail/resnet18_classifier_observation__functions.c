// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cdcl_umd_msgs:msg/Resnet18ClassifierObservation.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/msg/detail/resnet18_classifier_observation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `classifier_name`
#include "rosidl_runtime_c/string_functions.h"

bool
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__init(cdcl_umd_msgs__msg__Resnet18ClassifierObservation * msg)
{
  if (!msg) {
    return false;
  }
  // classifier_name
  if (!rosidl_runtime_c__String__init(&msg->classifier_name)) {
    cdcl_umd_msgs__msg__Resnet18ClassifierObservation__fini(msg);
    return false;
  }
  // observation
  return true;
}

void
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__fini(cdcl_umd_msgs__msg__Resnet18ClassifierObservation * msg)
{
  if (!msg) {
    return;
  }
  // classifier_name
  rosidl_runtime_c__String__fini(&msg->classifier_name);
  // observation
}

bool
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__are_equal(const cdcl_umd_msgs__msg__Resnet18ClassifierObservation * lhs, const cdcl_umd_msgs__msg__Resnet18ClassifierObservation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // classifier_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->classifier_name), &(rhs->classifier_name)))
  {
    return false;
  }
  // observation
  if (lhs->observation != rhs->observation) {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__copy(
  const cdcl_umd_msgs__msg__Resnet18ClassifierObservation * input,
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation * output)
{
  if (!input || !output) {
    return false;
  }
  // classifier_name
  if (!rosidl_runtime_c__String__copy(
      &(input->classifier_name), &(output->classifier_name)))
  {
    return false;
  }
  // observation
  output->observation = input->observation;
  return true;
}

cdcl_umd_msgs__msg__Resnet18ClassifierObservation *
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation * msg = (cdcl_umd_msgs__msg__Resnet18ClassifierObservation *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__Resnet18ClassifierObservation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__msg__Resnet18ClassifierObservation));
  bool success = cdcl_umd_msgs__msg__Resnet18ClassifierObservation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__destroy(cdcl_umd_msgs__msg__Resnet18ClassifierObservation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__msg__Resnet18ClassifierObservation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence__init(cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__msg__Resnet18ClassifierObservation *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__msg__Resnet18ClassifierObservation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__msg__Resnet18ClassifierObservation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__msg__Resnet18ClassifierObservation__fini(&data[i - 1]);
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
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence__fini(cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * array)
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
      cdcl_umd_msgs__msg__Resnet18ClassifierObservation__fini(&array->data[i]);
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

cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence *
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * array = (cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence__destroy(cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence__are_equal(const cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * lhs, const cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__msg__Resnet18ClassifierObservation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence__copy(
  const cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * input,
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__msg__Resnet18ClassifierObservation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__msg__Resnet18ClassifierObservation * data =
      (cdcl_umd_msgs__msg__Resnet18ClassifierObservation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__msg__Resnet18ClassifierObservation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__msg__Resnet18ClassifierObservation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__msg__Resnet18ClassifierObservation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
