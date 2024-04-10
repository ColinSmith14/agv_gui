// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
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
#include "amr_v4_msgs_srvs/msg/detail/motor__struct.h"
#include "amr_v4_msgs_srvs/msg/detail/motor__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool amr_v4_msgs_srvs__msg__motor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("amr_v4_msgs_srvs.msg._motor.Motor", full_classname_dest, 33) == 0);
  }
  amr_v4_msgs_srvs__msg__Motor * ros_message = _ros_message;
  {  // output_current_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_current_right");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->output_current_right, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // error_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_right");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->error_right, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // output_current_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_current_left");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->output_current_left, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // error_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_left");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->error_left, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // output_current_pin
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_current_pin");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->output_current_pin, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // error_pin
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_pin");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->error_pin, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // target_pos_high
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_pos_high");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_pos_high = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_pos_low
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_pos_low");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_pos_low = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_pos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amr_v4_msgs_srvs__msg__motor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Motor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amr_v4_msgs_srvs.msg._motor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Motor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amr_v4_msgs_srvs__msg__Motor * ros_message = (amr_v4_msgs_srvs__msg__Motor *)raw_ros_message;
  {  // output_current_right
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->output_current_right.data,
      strlen(ros_message->output_current_right.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_current_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_right
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->error_right.data,
      strlen(ros_message->error_right.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_current_left
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->output_current_left.data,
      strlen(ros_message->output_current_left.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_current_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_left
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->error_left.data,
      strlen(ros_message->error_left.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_current_pin
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->output_current_pin.data,
      strlen(ros_message->output_current_pin.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_current_pin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_pin
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->error_pin.data,
      strlen(ros_message->error_pin.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_pin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_pos_high
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_pos_high);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_pos_high", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_pos_low
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_pos_low);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_pos_low", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
