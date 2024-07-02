// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cdcl_umd_msgs:msg/Resnet18ClassifierObservation.idl
// generated code does not contain a copyright notice

#ifndef CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__STRUCT_H_
#define CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'classifier_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Resnet18ClassifierObservation in the package cdcl_umd_msgs.
typedef struct cdcl_umd_msgs__msg__Resnet18ClassifierObservation
{
  rosidl_runtime_c__String classifier_name;
  int64_t observation;
} cdcl_umd_msgs__msg__Resnet18ClassifierObservation;

// Struct for a sequence of cdcl_umd_msgs__msg__Resnet18ClassifierObservation.
typedef struct cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence
{
  cdcl_umd_msgs__msg__Resnet18ClassifierObservation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cdcl_umd_msgs__msg__Resnet18ClassifierObservation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CDCL_UMD_MSGS__MSG__DETAIL__RESNET18_CLASSIFIER_OBSERVATION__STRUCT_H_
