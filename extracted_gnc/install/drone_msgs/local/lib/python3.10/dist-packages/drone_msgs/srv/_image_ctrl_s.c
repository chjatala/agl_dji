// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from drone_msgs:srv/ImageCtrl.idl
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
#include "drone_msgs/srv/detail/image_ctrl__struct.h"
#include "drone_msgs/srv/detail/image_ctrl__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool drone_msgs__srv__image_ctrl__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("drone_msgs.srv._image_ctrl.ImageCtrl_Request", full_classname_dest, 44) == 0);
  }
  drone_msgs__srv__ImageCtrl_Request * ros_message = _ros_message;
  {  // enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mode, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // next_picture_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_picture_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->next_picture_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // overlap
    PyObject * field = PyObject_GetAttrString(_pymsg, "overlap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->overlap = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fov
    PyObject * field = PyObject_GetAttrString(_pymsg, "fov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // picture_plane_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "picture_plane_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->picture_plane_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drone_msgs__srv__image_ctrl__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ImageCtrl_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drone_msgs.srv._image_ctrl");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ImageCtrl_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drone_msgs__srv__ImageCtrl_Request * ros_message = (drone_msgs__srv__ImageCtrl_Request *)raw_ros_message;
  {  // enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mode.data,
      strlen(ros_message->mode.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_picture_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->next_picture_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_picture_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overlap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->overlap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overlap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // picture_plane_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->picture_plane_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "picture_plane_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "drone_msgs/srv/detail/image_ctrl__struct.h"
// already included above
// #include "drone_msgs/srv/detail/image_ctrl__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool drone_msgs__srv__image_ctrl__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("drone_msgs.srv._image_ctrl.ImageCtrl_Response", full_classname_dest, 45) == 0);
  }
  drone_msgs__srv__ImageCtrl_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drone_msgs__srv__image_ctrl__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ImageCtrl_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drone_msgs.srv._image_ctrl");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ImageCtrl_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drone_msgs__srv__ImageCtrl_Response * ros_message = (drone_msgs__srv__ImageCtrl_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
