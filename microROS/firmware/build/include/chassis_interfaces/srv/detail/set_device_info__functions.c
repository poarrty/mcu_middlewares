// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chassis_interfaces:srv/SetDeviceInfo.idl
// generated code does not contain a copyright notice
#include "chassis_interfaces/srv/detail/set_device_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `device_id`
// Member `device_secret`
#include "rosidl_runtime_c/string_functions.h"

bool
chassis_interfaces__srv__SetDeviceInfo_Request__init(chassis_interfaces__srv__SetDeviceInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // device_id
  if (!rosidl_runtime_c__String__init(&msg->device_id)) {
    chassis_interfaces__srv__SetDeviceInfo_Request__fini(msg);
    return false;
  }
  // device_secret
  if (!rosidl_runtime_c__String__init(&msg->device_secret)) {
    chassis_interfaces__srv__SetDeviceInfo_Request__fini(msg);
    return false;
  }
  return true;
}

void
chassis_interfaces__srv__SetDeviceInfo_Request__fini(chassis_interfaces__srv__SetDeviceInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // device_id
  rosidl_runtime_c__String__fini(&msg->device_id);
  // device_secret
  rosidl_runtime_c__String__fini(&msg->device_secret);
}

chassis_interfaces__srv__SetDeviceInfo_Request *
chassis_interfaces__srv__SetDeviceInfo_Request__create()
{
  chassis_interfaces__srv__SetDeviceInfo_Request * msg = (chassis_interfaces__srv__SetDeviceInfo_Request *)malloc(sizeof(chassis_interfaces__srv__SetDeviceInfo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chassis_interfaces__srv__SetDeviceInfo_Request));
  bool success = chassis_interfaces__srv__SetDeviceInfo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
chassis_interfaces__srv__SetDeviceInfo_Request__destroy(chassis_interfaces__srv__SetDeviceInfo_Request * msg)
{
  if (msg) {
    chassis_interfaces__srv__SetDeviceInfo_Request__fini(msg);
  }
  free(msg);
}


bool
chassis_interfaces__srv__SetDeviceInfo_Request__Sequence__init(chassis_interfaces__srv__SetDeviceInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  chassis_interfaces__srv__SetDeviceInfo_Request * data = NULL;
  if (size) {
    data = (chassis_interfaces__srv__SetDeviceInfo_Request *)calloc(size, sizeof(chassis_interfaces__srv__SetDeviceInfo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chassis_interfaces__srv__SetDeviceInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chassis_interfaces__srv__SetDeviceInfo_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chassis_interfaces__srv__SetDeviceInfo_Request__Sequence__fini(chassis_interfaces__srv__SetDeviceInfo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chassis_interfaces__srv__SetDeviceInfo_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chassis_interfaces__srv__SetDeviceInfo_Request__Sequence *
chassis_interfaces__srv__SetDeviceInfo_Request__Sequence__create(size_t size)
{
  chassis_interfaces__srv__SetDeviceInfo_Request__Sequence * array = (chassis_interfaces__srv__SetDeviceInfo_Request__Sequence *)malloc(sizeof(chassis_interfaces__srv__SetDeviceInfo_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = chassis_interfaces__srv__SetDeviceInfo_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
chassis_interfaces__srv__SetDeviceInfo_Request__Sequence__destroy(chassis_interfaces__srv__SetDeviceInfo_Request__Sequence * array)
{
  if (array) {
    chassis_interfaces__srv__SetDeviceInfo_Request__Sequence__fini(array);
  }
  free(array);
}


bool
chassis_interfaces__srv__SetDeviceInfo_Response__init(chassis_interfaces__srv__SetDeviceInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
chassis_interfaces__srv__SetDeviceInfo_Response__fini(chassis_interfaces__srv__SetDeviceInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

chassis_interfaces__srv__SetDeviceInfo_Response *
chassis_interfaces__srv__SetDeviceInfo_Response__create()
{
  chassis_interfaces__srv__SetDeviceInfo_Response * msg = (chassis_interfaces__srv__SetDeviceInfo_Response *)malloc(sizeof(chassis_interfaces__srv__SetDeviceInfo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chassis_interfaces__srv__SetDeviceInfo_Response));
  bool success = chassis_interfaces__srv__SetDeviceInfo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
chassis_interfaces__srv__SetDeviceInfo_Response__destroy(chassis_interfaces__srv__SetDeviceInfo_Response * msg)
{
  if (msg) {
    chassis_interfaces__srv__SetDeviceInfo_Response__fini(msg);
  }
  free(msg);
}


bool
chassis_interfaces__srv__SetDeviceInfo_Response__Sequence__init(chassis_interfaces__srv__SetDeviceInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  chassis_interfaces__srv__SetDeviceInfo_Response * data = NULL;
  if (size) {
    data = (chassis_interfaces__srv__SetDeviceInfo_Response *)calloc(size, sizeof(chassis_interfaces__srv__SetDeviceInfo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chassis_interfaces__srv__SetDeviceInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chassis_interfaces__srv__SetDeviceInfo_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chassis_interfaces__srv__SetDeviceInfo_Response__Sequence__fini(chassis_interfaces__srv__SetDeviceInfo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chassis_interfaces__srv__SetDeviceInfo_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chassis_interfaces__srv__SetDeviceInfo_Response__Sequence *
chassis_interfaces__srv__SetDeviceInfo_Response__Sequence__create(size_t size)
{
  chassis_interfaces__srv__SetDeviceInfo_Response__Sequence * array = (chassis_interfaces__srv__SetDeviceInfo_Response__Sequence *)malloc(sizeof(chassis_interfaces__srv__SetDeviceInfo_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = chassis_interfaces__srv__SetDeviceInfo_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
chassis_interfaces__srv__SetDeviceInfo_Response__Sequence__destroy(chassis_interfaces__srv__SetDeviceInfo_Response__Sequence * array)
{
  if (array) {
    chassis_interfaces__srv__SetDeviceInfo_Response__Sequence__fini(array);
  }
  free(array);
}
