// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rosbag2_storage_mcap_testdata:msg/ComplexIdl.idl
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
#include "rosbag2_storage_mcap_testdata/msg/detail/complex_idl__struct.h"
#include "rosbag2_storage_mcap_testdata/msg/detail/complex_idl__functions.h"

bool rosbag2_storage_mcap_testdata__msg__basic_idl__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rosbag2_storage_mcap_testdata__msg__basic_idl__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rosbag2_storage_mcap_testdata__msg__complex_idl__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("rosbag2_storage_mcap_testdata.msg._complex_idl.ComplexIdl", full_classname_dest, 57) == 0);
  }
  rosbag2_storage_mcap_testdata__msg__ComplexIdl * ros_message = _ros_message;
  {  // a
    PyObject * field = PyObject_GetAttrString(_pymsg, "a");
    if (!field) {
      return false;
    }
    if (!rosbag2_storage_mcap_testdata__msg__basic_idl__convert_from_py(field, &ros_message->a)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosbag2_storage_mcap_testdata__msg__complex_idl__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ComplexIdl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosbag2_storage_mcap_testdata.msg._complex_idl");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ComplexIdl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rosbag2_storage_mcap_testdata__msg__ComplexIdl * ros_message = (rosbag2_storage_mcap_testdata__msg__ComplexIdl *)raw_ros_message;
  {  // a
    PyObject * field = NULL;
    field = rosbag2_storage_mcap_testdata__msg__basic_idl__convert_to_py(&ros_message->a);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
