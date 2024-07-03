// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cdcl_umd_msgs:msg/NumericalField.idl
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
#include "cdcl_umd_msgs/msg/detail/numerical_field__struct.h"
#include "cdcl_umd_msgs/msg/detail/numerical_field__functions.h"

bool cdcl_umd_msgs__msg__casualty_report_field__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cdcl_umd_msgs__msg__casualty_report_field__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cdcl_umd_msgs__msg__numerical_field__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("cdcl_umd_msgs.msg._numerical_field.NumericalField", full_classname_dest, 49) == 0);
  }
  cdcl_umd_msgs__msg__NumericalField * ros_message = _ros_message;
  {  // field
    PyObject * field = PyObject_GetAttrString(_pymsg, "field");
    if (!field) {
      return false;
    }
    if (!cdcl_umd_msgs__msg__casualty_report_field__convert_from_py(field, &ros_message->field)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // estimate
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->estimate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // covariance
    PyObject * field = PyObject_GetAttrString(_pymsg, "covariance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->covariance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cdcl_umd_msgs__msg__numerical_field__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NumericalField */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cdcl_umd_msgs.msg._numerical_field");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NumericalField");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cdcl_umd_msgs__msg__NumericalField * ros_message = (cdcl_umd_msgs__msg__NumericalField *)raw_ros_message;
  {  // field
    PyObject * field = NULL;
    field = cdcl_umd_msgs__msg__casualty_report_field__convert_to_py(&ros_message->field);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "field", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estimate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->estimate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estimate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // covariance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->covariance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "covariance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
