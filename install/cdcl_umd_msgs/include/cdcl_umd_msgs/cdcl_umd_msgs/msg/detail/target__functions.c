// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cdcl_umd_msgs:msg/Target.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/msg/detail/target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `keypoints`
#include "cdcl_umd_msgs/msg/detail/point2_d__functions.h"
// Member `features`
// Member `feature_descriptors`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cdcl_umd_msgs__msg__Target__init(cdcl_umd_msgs__msg__Target * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    cdcl_umd_msgs__msg__Target__fini(msg);
    return false;
  }
  // left_lung
  // right_lung
  // face
  // keypoints
  if (!cdcl_umd_msgs__msg__Point2D__Sequence__init(&msg->keypoints, 0)) {
    cdcl_umd_msgs__msg__Target__fini(msg);
    return false;
  }
  // features
  if (!rosidl_runtime_c__double__Sequence__init(&msg->features, 0)) {
    cdcl_umd_msgs__msg__Target__fini(msg);
    return false;
  }
  // feature_descriptors
  if (!rosidl_runtime_c__double__Sequence__init(&msg->feature_descriptors, 0)) {
    cdcl_umd_msgs__msg__Target__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__msg__Target__fini(cdcl_umd_msgs__msg__Target * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // left_lung
  // right_lung
  // face
  // keypoints
  cdcl_umd_msgs__msg__Point2D__Sequence__fini(&msg->keypoints);
  // features
  rosidl_runtime_c__double__Sequence__fini(&msg->features);
  // feature_descriptors
  rosidl_runtime_c__double__Sequence__fini(&msg->feature_descriptors);
}

bool
cdcl_umd_msgs__msg__Target__are_equal(const cdcl_umd_msgs__msg__Target * lhs, const cdcl_umd_msgs__msg__Target * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // left_lung
  if (lhs->left_lung != rhs->left_lung) {
    return false;
  }
  // right_lung
  if (lhs->right_lung != rhs->right_lung) {
    return false;
  }
  // face
  if (lhs->face != rhs->face) {
    return false;
  }
  // keypoints
  if (!cdcl_umd_msgs__msg__Point2D__Sequence__are_equal(
      &(lhs->keypoints), &(rhs->keypoints)))
  {
    return false;
  }
  // features
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->features), &(rhs->features)))
  {
    return false;
  }
  // feature_descriptors
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->feature_descriptors), &(rhs->feature_descriptors)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__msg__Target__copy(
  const cdcl_umd_msgs__msg__Target * input,
  cdcl_umd_msgs__msg__Target * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // left_lung
  output->left_lung = input->left_lung;
  // right_lung
  output->right_lung = input->right_lung;
  // face
  output->face = input->face;
  // keypoints
  if (!cdcl_umd_msgs__msg__Point2D__Sequence__copy(
      &(input->keypoints), &(output->keypoints)))
  {
    return false;
  }
  // features
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->features), &(output->features)))
  {
    return false;
  }
  // feature_descriptors
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->feature_descriptors), &(output->feature_descriptors)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__msg__Target *
cdcl_umd_msgs__msg__Target__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__Target * msg = (cdcl_umd_msgs__msg__Target *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__Target), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__msg__Target));
  bool success = cdcl_umd_msgs__msg__Target__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__msg__Target__destroy(cdcl_umd_msgs__msg__Target * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__msg__Target__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__msg__Target__Sequence__init(cdcl_umd_msgs__msg__Target__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__Target * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__msg__Target *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__msg__Target), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__msg__Target__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__msg__Target__fini(&data[i - 1]);
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
cdcl_umd_msgs__msg__Target__Sequence__fini(cdcl_umd_msgs__msg__Target__Sequence * array)
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
      cdcl_umd_msgs__msg__Target__fini(&array->data[i]);
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

cdcl_umd_msgs__msg__Target__Sequence *
cdcl_umd_msgs__msg__Target__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__Target__Sequence * array = (cdcl_umd_msgs__msg__Target__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__Target__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__msg__Target__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__msg__Target__Sequence__destroy(cdcl_umd_msgs__msg__Target__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__msg__Target__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__msg__Target__Sequence__are_equal(const cdcl_umd_msgs__msg__Target__Sequence * lhs, const cdcl_umd_msgs__msg__Target__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__msg__Target__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__msg__Target__Sequence__copy(
  const cdcl_umd_msgs__msg__Target__Sequence * input,
  cdcl_umd_msgs__msg__Target__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__msg__Target);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__msg__Target * data =
      (cdcl_umd_msgs__msg__Target *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__msg__Target__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__msg__Target__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__msg__Target__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
