// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cdcl_umd_msgs:action/WaypointNavigation.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__FUNCTIONS_H_
#define CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cdcl_umd_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cdcl_umd_msgs/action/detail/waypoint_navigation__struct.h"

/// Initialize action/WaypointNavigation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cdcl_umd_msgs__action__WaypointNavigation_Goal
 * )) before or use
 * cdcl_umd_msgs__action__WaypointNavigation_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Goal__init(cdcl_umd_msgs__action__WaypointNavigation_Goal * msg);

/// Finalize action/WaypointNavigation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Goal__fini(cdcl_umd_msgs__action__WaypointNavigation_Goal * msg);

/// Create action/WaypointNavigation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cdcl_umd_msgs__action__WaypointNavigation_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_Goal *
cdcl_umd_msgs__action__WaypointNavigation_Goal__create();

/// Destroy action/WaypointNavigation message.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Goal__destroy(cdcl_umd_msgs__action__WaypointNavigation_Goal * msg);

/// Check for action/WaypointNavigation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Goal__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Goal * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Goal * rhs);

/// Copy a action/WaypointNavigation message.
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
cdcl_umd_msgs__action__WaypointNavigation_Goal__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Goal * input,
  cdcl_umd_msgs__action__WaypointNavigation_Goal * output);

/// Initialize array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the number of elements and calls
 * cdcl_umd_msgs__action__WaypointNavigation_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * array, size_t size);

/// Finalize array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * array);

/// Create array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the array and calls
 * cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__create(size_t size);

/// Destroy array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * array);

/// Check for action/WaypointNavigation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * rhs);

/// Copy an array of action/WaypointNavigation messages.
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
cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_Goal__Sequence * output);

/// Initialize action/WaypointNavigation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cdcl_umd_msgs__action__WaypointNavigation_Result
 * )) before or use
 * cdcl_umd_msgs__action__WaypointNavigation_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Result__init(cdcl_umd_msgs__action__WaypointNavigation_Result * msg);

/// Finalize action/WaypointNavigation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Result__fini(cdcl_umd_msgs__action__WaypointNavigation_Result * msg);

/// Create action/WaypointNavigation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cdcl_umd_msgs__action__WaypointNavigation_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_Result *
cdcl_umd_msgs__action__WaypointNavigation_Result__create();

/// Destroy action/WaypointNavigation message.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Result__destroy(cdcl_umd_msgs__action__WaypointNavigation_Result * msg);

/// Check for action/WaypointNavigation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Result__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Result * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Result * rhs);

/// Copy a action/WaypointNavigation message.
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
cdcl_umd_msgs__action__WaypointNavigation_Result__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Result * input,
  cdcl_umd_msgs__action__WaypointNavigation_Result * output);

/// Initialize array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the number of elements and calls
 * cdcl_umd_msgs__action__WaypointNavigation_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * array, size_t size);

/// Finalize array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * array);

/// Create array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the array and calls
 * cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__create(size_t size);

/// Destroy array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * array);

/// Check for action/WaypointNavigation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * rhs);

/// Copy an array of action/WaypointNavigation messages.
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
cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_Result__Sequence * output);

/// Initialize action/WaypointNavigation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cdcl_umd_msgs__action__WaypointNavigation_Feedback
 * )) before or use
 * cdcl_umd_msgs__action__WaypointNavigation_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Feedback__init(cdcl_umd_msgs__action__WaypointNavigation_Feedback * msg);

/// Finalize action/WaypointNavigation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Feedback__fini(cdcl_umd_msgs__action__WaypointNavigation_Feedback * msg);

/// Create action/WaypointNavigation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cdcl_umd_msgs__action__WaypointNavigation_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_Feedback *
cdcl_umd_msgs__action__WaypointNavigation_Feedback__create();

/// Destroy action/WaypointNavigation message.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Feedback__destroy(cdcl_umd_msgs__action__WaypointNavigation_Feedback * msg);

/// Check for action/WaypointNavigation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Feedback__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Feedback * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Feedback * rhs);

/// Copy a action/WaypointNavigation message.
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
cdcl_umd_msgs__action__WaypointNavigation_Feedback__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Feedback * input,
  cdcl_umd_msgs__action__WaypointNavigation_Feedback * output);

/// Initialize array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the number of elements and calls
 * cdcl_umd_msgs__action__WaypointNavigation_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * array, size_t size);

/// Finalize array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * array);

/// Create array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the array and calls
 * cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__create(size_t size);

/// Destroy array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * array);

/// Check for action/WaypointNavigation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * rhs);

/// Copy an array of action/WaypointNavigation messages.
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
cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_Feedback__Sequence * output);

/// Initialize action/WaypointNavigation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request
 * )) before or use
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__init(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * msg);

/// Finalize action/WaypointNavigation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * msg);

/// Create action/WaypointNavigation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request *
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__create();

/// Destroy action/WaypointNavigation message.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__destroy(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * msg);

/// Check for action/WaypointNavigation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * lhs, const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * rhs);

/// Copy a action/WaypointNavigation message.
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
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * input,
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request * output);

/// Initialize array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the number of elements and calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * array);

/// Create array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the array and calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * array);

/// Check for action/WaypointNavigation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/WaypointNavigation messages.
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
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Request__Sequence * output);

/// Initialize action/WaypointNavigation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response
 * )) before or use
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__init(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * msg);

/// Finalize action/WaypointNavigation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__fini(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * msg);

/// Create action/WaypointNavigation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response *
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__create();

/// Destroy action/WaypointNavigation message.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__destroy(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * msg);

/// Check for action/WaypointNavigation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * lhs, const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * rhs);

/// Copy a action/WaypointNavigation message.
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
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * input,
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response * output);

/// Initialize array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the number of elements and calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * array);

/// Create array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the array and calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * array);

/// Check for action/WaypointNavigation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/WaypointNavigation messages.
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
cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_SendGoal_Response__Sequence * output);

/// Initialize action/WaypointNavigation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request
 * )) before or use
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__init(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * msg);

/// Finalize action/WaypointNavigation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__fini(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * msg);

/// Create action/WaypointNavigation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request *
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__create();

/// Destroy action/WaypointNavigation message.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__destroy(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * msg);

/// Check for action/WaypointNavigation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * lhs, const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * rhs);

/// Copy a action/WaypointNavigation message.
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
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * input,
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request * output);

/// Initialize array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the number of elements and calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * array);

/// Create array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the array and calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * array);

/// Check for action/WaypointNavigation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * rhs);

/// Copy an array of action/WaypointNavigation messages.
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
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Request__Sequence * output);

/// Initialize action/WaypointNavigation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response
 * )) before or use
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__init(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * msg);

/// Finalize action/WaypointNavigation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__fini(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * msg);

/// Create action/WaypointNavigation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response *
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__create();

/// Destroy action/WaypointNavigation message.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__destroy(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * msg);

/// Check for action/WaypointNavigation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * lhs, const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * rhs);

/// Copy a action/WaypointNavigation message.
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
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * input,
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response * output);

/// Initialize array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the number of elements and calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * array);

/// Create array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the array and calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * array);

/// Check for action/WaypointNavigation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * rhs);

/// Copy an array of action/WaypointNavigation messages.
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
cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_GetResult_Response__Sequence * output);

/// Initialize action/WaypointNavigation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage
 * )) before or use
 * cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__init(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * msg);

/// Finalize action/WaypointNavigation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * msg);

/// Create action/WaypointNavigation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage *
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__create();

/// Destroy action/WaypointNavigation message.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__destroy(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * msg);

/// Check for action/WaypointNavigation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * lhs, const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * rhs);

/// Copy a action/WaypointNavigation message.
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
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * input,
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage * output);

/// Initialize array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the number of elements and calls
 * cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__init(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__fini(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * array);

/// Create array of action/WaypointNavigation messages.
/**
 * It allocates the memory for the array and calls
 * cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence *
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/WaypointNavigation messages.
/**
 * It calls
 * cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
void
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__destroy(cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * array);

/// Check for action/WaypointNavigation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cdcl_umd_msgs
bool
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__are_equal(const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * lhs, const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/WaypointNavigation messages.
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
cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence__copy(
  const cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * input,
  cdcl_umd_msgs__action__WaypointNavigation_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__ACTION__DETAIL__WAYPOINT_NAVIGATION__FUNCTIONS_H_
