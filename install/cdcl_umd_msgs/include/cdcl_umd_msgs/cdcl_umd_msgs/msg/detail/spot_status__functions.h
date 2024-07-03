// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cdcl_umd_msgs:msg/SpotStatus.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__FUNCTIONS_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cdcl_umd_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cdcl_umd_msgs/msg/detail/spot_status__struct.h"

/// Initialize msg/SpotStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cdcl_umd_msgs__msg__SpotStatus
 * )) before or use
 * cdcl_umd_msgs__msg__SpotStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__msg__SpotStatus__init(cdcl_umd_msgs__msg__SpotStatus * msg);

/// Finalize msg/SpotStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__msg__SpotStatus__fini(cdcl_umd_msgs__msg__SpotStatus * msg);

/// Create msg/SpotStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cdcl_umd_msgs__msg__SpotStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__msg__SpotStatus *
cdcl_umd_msgs__msg__SpotStatus__create();

/// Destroy msg/SpotStatus message.
/**
 * It calls
 * cdcl_umd_msgs__msg__SpotStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__msg__SpotStatus__destroy(cdcl_umd_msgs__msg__SpotStatus * msg);

/// Check for msg/SpotStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__msg__SpotStatus__are_equal(const cdcl_umd_msgs__msg__SpotStatus * lhs, const cdcl_umd_msgs__msg__SpotStatus * rhs);

/// Copy a msg/SpotStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__msg__SpotStatus__copy(
  const cdcl_umd_msgs__msg__SpotStatus * input,
  cdcl_umd_msgs__msg__SpotStatus * output);

/// Initialize array of msg/SpotStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * cdcl_umd_msgs__msg__SpotStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__msg__SpotStatus__Sequence__init(cdcl_umd_msgs__msg__SpotStatus__Sequence * array, size_t size);

/// Finalize array of msg/SpotStatus messages.
/**
 * It calls
 * cdcl_umd_msgs__msg__SpotStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__msg__SpotStatus__Sequence__fini(cdcl_umd_msgs__msg__SpotStatus__Sequence * array);

/// Create array of msg/SpotStatus messages.
/**
 * It allocates the memory for the array and calls
 * cdcl_umd_msgs__msg__SpotStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__msg__SpotStatus__Sequence *
cdcl_umd_msgs__msg__SpotStatus__Sequence__create(size_t size);

/// Destroy array of msg/SpotStatus messages.
/**
 * It calls
 * cdcl_umd_msgs__msg__SpotStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__msg__SpotStatus__Sequence__destroy(cdcl_umd_msgs__msg__SpotStatus__Sequence * array);

/// Check for msg/SpotStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__msg__SpotStatus__Sequence__are_equal(const cdcl_umd_msgs__msg__SpotStatus__Sequence * lhs, const cdcl_umd_msgs__msg__SpotStatus__Sequence * rhs);

/// Copy an array of msg/SpotStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__msg__SpotStatus__Sequence__copy(
  const cdcl_umd_msgs__msg__SpotStatus__Sequence * input,
  cdcl_umd_msgs__msg__SpotStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__SPOT_STATUS__FUNCTIONS_H_
