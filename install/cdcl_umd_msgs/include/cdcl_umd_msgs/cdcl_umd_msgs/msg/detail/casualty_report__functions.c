// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cdcl_umd_msgs:msg/CasualtyReport.idl
// generated code does not contain a copyright notice
#include "cdcl_umd_msgs/msg/detail/casualty_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `severe_hemorrhage`
// Member `respiratory_distress`
// Member `trauma_head`
// Member `trauma_torso`
// Member `trauma_upper_extremity`
// Member `trauma_lower_extremity`
// Member `alertness_ocular`
// Member `alertness_motor`
// Member `alertness_verbal`
#include "cdcl_umd_msgs/msg/detail/categorical_field__functions.h"
// Member `heart_rate`
// Member `respiratory_rate`
#include "cdcl_umd_msgs/msg/detail/numerical_field__functions.h"

bool
cdcl_umd_msgs__msg__CasualtyReport__init(cdcl_umd_msgs__msg__CasualtyReport * msg)
{
  if (!msg) {
    return false;
  }
  // casualty_id
  // severe_hemorrhage
  if (!cdcl_umd_msgs__msg__CategoricalField__init(&msg->severe_hemorrhage)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  // respiratory_distress
  if (!cdcl_umd_msgs__msg__CategoricalField__init(&msg->respiratory_distress)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  // heart_rate
  if (!cdcl_umd_msgs__msg__NumericalField__init(&msg->heart_rate)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  // respiratory_rate
  if (!cdcl_umd_msgs__msg__NumericalField__init(&msg->respiratory_rate)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  // trauma_head
  if (!cdcl_umd_msgs__msg__CategoricalField__init(&msg->trauma_head)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  // trauma_torso
  if (!cdcl_umd_msgs__msg__CategoricalField__init(&msg->trauma_torso)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  // trauma_upper_extremity
  if (!cdcl_umd_msgs__msg__CategoricalField__init(&msg->trauma_upper_extremity)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  // trauma_lower_extremity
  if (!cdcl_umd_msgs__msg__CategoricalField__init(&msg->trauma_lower_extremity)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  // alertness_ocular
  if (!cdcl_umd_msgs__msg__CategoricalField__init(&msg->alertness_ocular)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  // alertness_motor
  if (!cdcl_umd_msgs__msg__CategoricalField__init(&msg->alertness_motor)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  // alertness_verbal
  if (!cdcl_umd_msgs__msg__CategoricalField__init(&msg->alertness_verbal)) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
    return false;
  }
  return true;
}

void
cdcl_umd_msgs__msg__CasualtyReport__fini(cdcl_umd_msgs__msg__CasualtyReport * msg)
{
  if (!msg) {
    return;
  }
  // casualty_id
  // severe_hemorrhage
  cdcl_umd_msgs__msg__CategoricalField__fini(&msg->severe_hemorrhage);
  // respiratory_distress
  cdcl_umd_msgs__msg__CategoricalField__fini(&msg->respiratory_distress);
  // heart_rate
  cdcl_umd_msgs__msg__NumericalField__fini(&msg->heart_rate);
  // respiratory_rate
  cdcl_umd_msgs__msg__NumericalField__fini(&msg->respiratory_rate);
  // trauma_head
  cdcl_umd_msgs__msg__CategoricalField__fini(&msg->trauma_head);
  // trauma_torso
  cdcl_umd_msgs__msg__CategoricalField__fini(&msg->trauma_torso);
  // trauma_upper_extremity
  cdcl_umd_msgs__msg__CategoricalField__fini(&msg->trauma_upper_extremity);
  // trauma_lower_extremity
  cdcl_umd_msgs__msg__CategoricalField__fini(&msg->trauma_lower_extremity);
  // alertness_ocular
  cdcl_umd_msgs__msg__CategoricalField__fini(&msg->alertness_ocular);
  // alertness_motor
  cdcl_umd_msgs__msg__CategoricalField__fini(&msg->alertness_motor);
  // alertness_verbal
  cdcl_umd_msgs__msg__CategoricalField__fini(&msg->alertness_verbal);
}

bool
cdcl_umd_msgs__msg__CasualtyReport__are_equal(const cdcl_umd_msgs__msg__CasualtyReport * lhs, const cdcl_umd_msgs__msg__CasualtyReport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // casualty_id
  if (lhs->casualty_id != rhs->casualty_id) {
    return false;
  }
  // severe_hemorrhage
  if (!cdcl_umd_msgs__msg__CategoricalField__are_equal(
      &(lhs->severe_hemorrhage), &(rhs->severe_hemorrhage)))
  {
    return false;
  }
  // respiratory_distress
  if (!cdcl_umd_msgs__msg__CategoricalField__are_equal(
      &(lhs->respiratory_distress), &(rhs->respiratory_distress)))
  {
    return false;
  }
  // heart_rate
  if (!cdcl_umd_msgs__msg__NumericalField__are_equal(
      &(lhs->heart_rate), &(rhs->heart_rate)))
  {
    return false;
  }
  // respiratory_rate
  if (!cdcl_umd_msgs__msg__NumericalField__are_equal(
      &(lhs->respiratory_rate), &(rhs->respiratory_rate)))
  {
    return false;
  }
  // trauma_head
  if (!cdcl_umd_msgs__msg__CategoricalField__are_equal(
      &(lhs->trauma_head), &(rhs->trauma_head)))
  {
    return false;
  }
  // trauma_torso
  if (!cdcl_umd_msgs__msg__CategoricalField__are_equal(
      &(lhs->trauma_torso), &(rhs->trauma_torso)))
  {
    return false;
  }
  // trauma_upper_extremity
  if (!cdcl_umd_msgs__msg__CategoricalField__are_equal(
      &(lhs->trauma_upper_extremity), &(rhs->trauma_upper_extremity)))
  {
    return false;
  }
  // trauma_lower_extremity
  if (!cdcl_umd_msgs__msg__CategoricalField__are_equal(
      &(lhs->trauma_lower_extremity), &(rhs->trauma_lower_extremity)))
  {
    return false;
  }
  // alertness_ocular
  if (!cdcl_umd_msgs__msg__CategoricalField__are_equal(
      &(lhs->alertness_ocular), &(rhs->alertness_ocular)))
  {
    return false;
  }
  // alertness_motor
  if (!cdcl_umd_msgs__msg__CategoricalField__are_equal(
      &(lhs->alertness_motor), &(rhs->alertness_motor)))
  {
    return false;
  }
  // alertness_verbal
  if (!cdcl_umd_msgs__msg__CategoricalField__are_equal(
      &(lhs->alertness_verbal), &(rhs->alertness_verbal)))
  {
    return false;
  }
  return true;
}

bool
cdcl_umd_msgs__msg__CasualtyReport__copy(
  const cdcl_umd_msgs__msg__CasualtyReport * input,
  cdcl_umd_msgs__msg__CasualtyReport * output)
{
  if (!input || !output) {
    return false;
  }
  // casualty_id
  output->casualty_id = input->casualty_id;
  // severe_hemorrhage
  if (!cdcl_umd_msgs__msg__CategoricalField__copy(
      &(input->severe_hemorrhage), &(output->severe_hemorrhage)))
  {
    return false;
  }
  // respiratory_distress
  if (!cdcl_umd_msgs__msg__CategoricalField__copy(
      &(input->respiratory_distress), &(output->respiratory_distress)))
  {
    return false;
  }
  // heart_rate
  if (!cdcl_umd_msgs__msg__NumericalField__copy(
      &(input->heart_rate), &(output->heart_rate)))
  {
    return false;
  }
  // respiratory_rate
  if (!cdcl_umd_msgs__msg__NumericalField__copy(
      &(input->respiratory_rate), &(output->respiratory_rate)))
  {
    return false;
  }
  // trauma_head
  if (!cdcl_umd_msgs__msg__CategoricalField__copy(
      &(input->trauma_head), &(output->trauma_head)))
  {
    return false;
  }
  // trauma_torso
  if (!cdcl_umd_msgs__msg__CategoricalField__copy(
      &(input->trauma_torso), &(output->trauma_torso)))
  {
    return false;
  }
  // trauma_upper_extremity
  if (!cdcl_umd_msgs__msg__CategoricalField__copy(
      &(input->trauma_upper_extremity), &(output->trauma_upper_extremity)))
  {
    return false;
  }
  // trauma_lower_extremity
  if (!cdcl_umd_msgs__msg__CategoricalField__copy(
      &(input->trauma_lower_extremity), &(output->trauma_lower_extremity)))
  {
    return false;
  }
  // alertness_ocular
  if (!cdcl_umd_msgs__msg__CategoricalField__copy(
      &(input->alertness_ocular), &(output->alertness_ocular)))
  {
    return false;
  }
  // alertness_motor
  if (!cdcl_umd_msgs__msg__CategoricalField__copy(
      &(input->alertness_motor), &(output->alertness_motor)))
  {
    return false;
  }
  // alertness_verbal
  if (!cdcl_umd_msgs__msg__CategoricalField__copy(
      &(input->alertness_verbal), &(output->alertness_verbal)))
  {
    return false;
  }
  return true;
}

cdcl_umd_msgs__msg__CasualtyReport *
cdcl_umd_msgs__msg__CasualtyReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__CasualtyReport * msg = (cdcl_umd_msgs__msg__CasualtyReport *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__CasualtyReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cdcl_umd_msgs__msg__CasualtyReport));
  bool success = cdcl_umd_msgs__msg__CasualtyReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cdcl_umd_msgs__msg__CasualtyReport__destroy(cdcl_umd_msgs__msg__CasualtyReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cdcl_umd_msgs__msg__CasualtyReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cdcl_umd_msgs__msg__CasualtyReport__Sequence__init(cdcl_umd_msgs__msg__CasualtyReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__CasualtyReport * data = NULL;

  if (size) {
    data = (cdcl_umd_msgs__msg__CasualtyReport *)allocator.zero_allocate(size, sizeof(cdcl_umd_msgs__msg__CasualtyReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cdcl_umd_msgs__msg__CasualtyReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cdcl_umd_msgs__msg__CasualtyReport__fini(&data[i - 1]);
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
cdcl_umd_msgs__msg__CasualtyReport__Sequence__fini(cdcl_umd_msgs__msg__CasualtyReport__Sequence * array)
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
      cdcl_umd_msgs__msg__CasualtyReport__fini(&array->data[i]);
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

cdcl_umd_msgs__msg__CasualtyReport__Sequence *
cdcl_umd_msgs__msg__CasualtyReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cdcl_umd_msgs__msg__CasualtyReport__Sequence * array = (cdcl_umd_msgs__msg__CasualtyReport__Sequence *)allocator.allocate(sizeof(cdcl_umd_msgs__msg__CasualtyReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cdcl_umd_msgs__msg__CasualtyReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cdcl_umd_msgs__msg__CasualtyReport__Sequence__destroy(cdcl_umd_msgs__msg__CasualtyReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cdcl_umd_msgs__msg__CasualtyReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cdcl_umd_msgs__msg__CasualtyReport__Sequence__are_equal(const cdcl_umd_msgs__msg__CasualtyReport__Sequence * lhs, const cdcl_umd_msgs__msg__CasualtyReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cdcl_umd_msgs__msg__CasualtyReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cdcl_umd_msgs__msg__CasualtyReport__Sequence__copy(
  const cdcl_umd_msgs__msg__CasualtyReport__Sequence * input,
  cdcl_umd_msgs__msg__CasualtyReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cdcl_umd_msgs__msg__CasualtyReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cdcl_umd_msgs__msg__CasualtyReport * data =
      (cdcl_umd_msgs__msg__CasualtyReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cdcl_umd_msgs__msg__CasualtyReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cdcl_umd_msgs__msg__CasualtyReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cdcl_umd_msgs__msg__CasualtyReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
