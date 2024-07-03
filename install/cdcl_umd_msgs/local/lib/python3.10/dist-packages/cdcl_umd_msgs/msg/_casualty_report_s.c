// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cdcl_umd_msgs:msg/CasualtyReport.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "cdcl_umd_msgs/msg/detail/casualty_report__struct.h"
#include "cdcl_umd_msgs/msg/detail/casualty_report__functions.h"

bool cdcl_umd_msgs__msg__categorical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__categorical_field__convert_to_py(void * raw_ros_message);
bool cdcl_umd_msgs__msg__categorical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__categorical_field__convert_to_py(void * raw_ros_message);
bool cdcl_umd_msgs__msg__numerical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__numerical_field__convert_to_py(void * raw_ros_message);
bool cdcl_umd_msgs__msg__numerical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__numerical_field__convert_to_py(void * raw_ros_message);
bool cdcl_umd_msgs__msg__categorical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__categorical_field__convert_to_py(void * raw_ros_message);
bool cdcl_umd_msgs__msg__categorical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__categorical_field__convert_to_py(void * raw_ros_message);
bool cdcl_umd_msgs__msg__categorical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__categorical_field__convert_to_py(void * raw_ros_message);
bool cdcl_umd_msgs__msg__categorical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__categorical_field__convert_to_py(void * raw_ros_message);
bool cdcl_umd_msgs__msg__categorical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__categorical_field__convert_to_py(void * raw_ros_message);
bool cdcl_umd_msgs__msg__categorical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__categorical_field__convert_to_py(void * raw_ros_message);
bool cdcl_umd_msgs__msg__categorical_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__categorical_field__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cdcl_umd_msgs__msg__casualty_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("cdcl_umd_msgs.msg._casualty_report.CasualtyReport", full_classname_dest, 49) == 0);
  }
  cdcl_umd_msgs__msg__CasualtyReport * ros_message = _ros_message;
  {  // casualty_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "casualty_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->casualty_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // severe_hemorrhage
    PyObject * field = PyObject_GetAttrString(_pymsg, "severe_hemorrhage");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__categorical_field__convert_from_py(field, &ros_message->severe_hemorrhage)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // respiratory_distress
    PyObject * field = PyObject_GetAttrString(_pymsg, "respiratory_distress");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__categorical_field__convert_from_py(field, &ros_message->respiratory_distress)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heart_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "heart_rate");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__numerical_field__convert_from_py(field, &ros_message->heart_rate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // respiratory_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "respiratory_rate");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__numerical_field__convert_from_py(field, &ros_message->respiratory_rate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // trauma_head
    PyObject * field = PyObject_GetAttrString(_pymsg, "trauma_head");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__categorical_field__convert_from_py(field, &ros_message->trauma_head)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // trauma_torso
    PyObject * field = PyObject_GetAttrString(_pymsg, "trauma_torso");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__categorical_field__convert_from_py(field, &ros_message->trauma_torso)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // trauma_upper_extremity
    PyObject * field = PyObject_GetAttrString(_pymsg, "trauma_upper_extremity");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__categorical_field__convert_from_py(field, &ros_message->trauma_upper_extremity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // trauma_lower_extremity
    PyObject * field = PyObject_GetAttrString(_pymsg, "trauma_lower_extremity");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__categorical_field__convert_from_py(field, &ros_message->trauma_lower_extremity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // alertness_ocular
    PyObject * field = PyObject_GetAttrString(_pymsg, "alertness_ocular");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__categorical_field__convert_from_py(field, &ros_message->alertness_ocular)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // alertness_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "alertness_motor");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__categorical_field__convert_from_py(field, &ros_message->alertness_motor)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // alertness_verbal
    PyObject * field = PyObject_GetAttrString(_pymsg, "alertness_verbal");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__categorical_field__convert_from_py(field, &ros_message->alertness_verbal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cdcl_umd_msgs__msg__casualty_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CasualtyReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cdcl_umd_msgs.msg._casualty_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CasualtyReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cdcl_umd_msgs__msg__CasualtyReport * ros_message = (cdcl_umd_msgs__msg__CasualtyReport *)raw_ros_message;
  {  // casualty_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->casualty_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "casualty_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // severe_hemorrhage
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__categorical_field__convert_to_py(&ros_message->severe_hemorrhage);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "severe_hemorrhage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // respiratory_distress
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__categorical_field__convert_to_py(&ros_message->respiratory_distress);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "respiratory_distress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heart_rate
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__numerical_field__convert_to_py(&ros_message->heart_rate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heart_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // respiratory_rate
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__numerical_field__convert_to_py(&ros_message->respiratory_rate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "respiratory_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trauma_head
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__categorical_field__convert_to_py(&ros_message->trauma_head);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trauma_head", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trauma_torso
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__categorical_field__convert_to_py(&ros_message->trauma_torso);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trauma_torso", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trauma_upper_extremity
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__categorical_field__convert_to_py(&ros_message->trauma_upper_extremity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trauma_upper_extremity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trauma_lower_extremity
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__categorical_field__convert_to_py(&ros_message->trauma_lower_extremity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trauma_lower_extremity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alertness_ocular
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__categorical_field__convert_to_py(&ros_message->alertness_ocular);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "alertness_ocular", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alertness_motor
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__categorical_field__convert_to_py(&ros_message->alertness_motor);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "alertness_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alertness_verbal
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__categorical_field__convert_to_py(&ros_message->alertness_verbal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "alertness_verbal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
