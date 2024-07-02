// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/Resnet18ClassifierObservations.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATIONS__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESNET18_SEVERE_HEMORRHAGE'.
static const char * const cdcl_umd_msgs__msg__Resnet18ClassifierObservations__RESNET18_SEVERE_HEMORRHAGE = "RESNET18_SEVERE_HEMORRHAGE";

/// Constant 'RESNET18_TRAUMA_HEAD'.
static const char * const cdcl_umd_msgs__msg__Resnet18ClassifierObservations__RESNET18_TRAUMA_HEAD = "RESNET18_TRAUMA_HEAD";

/// Constant 'RESNET18_TRAUMA_TORSO'.
static const char * const cdcl_umd_msgs__msg__Resnet18ClassifierObservations__RESNET18_TRAUMA_TORSO = "RESNET18_TRAUMA_TORSO";

/// Constant 'RESNET18_TRAUMA_UPPER_EXTREMITY'.
static const char * const cdcl_umd_msgs__msg__Resnet18ClassifierObservations__RESNET18_TRAUMA_UPPER_EXTREMITY = "RESNET18_TRAUMA_UPPER_EXTREMITY";

/// Constant 'RESNET18_TRAUMA_LOWER_EXTREMITY'.
static const char * const cdcl_umd_msgs__msg__Resnet18ClassifierObservations__RESNET18_TRAUMA_LOWER_EXTREMITY = "RESNET18_TRAUMA_LOWER_EXTREMITY";

/// Constant 'RESNET18_ALERTNESS_OCULAR'.
static const char * const cdcl_umd_msgs__msg__Resnet18ClassifierObservations__RESNET18_ALERTNESS_OCULAR = "RESNET18_ALERTNESS_OCULAR";

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'classifier_observations'
#include "cdcl_umd_msgs/msg/detail/resnet18_classifier_observation__struct.h"

/// Struct defined in msg/Resnet18ClassifierObservations in the package cdcl_umd_msgs.
/**
  * the time at which the image containing the classification was captured
 */
typedef struct cdcl_umd_msgs__msg__Resnet18ClassifierObservations
{
  builtin_interfaces__msg__Time stamp;
  /// output of classification for each resnset 18 classifier
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence classifier_observations;
} cdcl_umd_msgs__msg__Resnet18ClassifierObservations;

// Struct for a sequence of cdcl_umd_msgs__msg__Resnet18ClassifierObservations.
typedef struct cdcl_umd_msgs__msg__Resnet18ClassifierObservations__Sequence
{
  cdcl_umd_msgs__msg__Resnet18ClassifierObservations * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__Resnet18ClassifierObservations__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATIONS__STRUCT_H_
