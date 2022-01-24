// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from chassis_interfaces:msg/TaskHandler.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_INTERFACES__MSG__DETAIL__TASK_HANDLER__FUNCTIONS_H_
#define CHASSIS_INTERFACES__MSG__DETAIL__TASK_HANDLER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "chassis_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "chassis_interfaces/msg/detail/task_handler__struct.h"

/// Initialize msg/TaskHandler message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * chassis_interfaces__msg__TaskHandler
 * )) before or use
 * chassis_interfaces__msg__TaskHandler__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_interfaces
bool
chassis_interfaces__msg__TaskHandler__init(chassis_interfaces__msg__TaskHandler * msg);

/// Finalize msg/TaskHandler message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_interfaces
void
chassis_interfaces__msg__TaskHandler__fini(chassis_interfaces__msg__TaskHandler * msg);

/// Create msg/TaskHandler message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * chassis_interfaces__msg__TaskHandler__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_interfaces
chassis_interfaces__msg__TaskHandler *
chassis_interfaces__msg__TaskHandler__create();

/// Destroy msg/TaskHandler message.
/**
 * It calls
 * chassis_interfaces__msg__TaskHandler__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_interfaces
void
chassis_interfaces__msg__TaskHandler__destroy(chassis_interfaces__msg__TaskHandler * msg);


/// Initialize array of msg/TaskHandler messages.
/**
 * It allocates the memory for the number of elements and calls
 * chassis_interfaces__msg__TaskHandler__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_interfaces
bool
chassis_interfaces__msg__TaskHandler__Sequence__init(chassis_interfaces__msg__TaskHandler__Sequence * array, size_t size);

/// Finalize array of msg/TaskHandler messages.
/**
 * It calls
 * chassis_interfaces__msg__TaskHandler__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_interfaces
void
chassis_interfaces__msg__TaskHandler__Sequence__fini(chassis_interfaces__msg__TaskHandler__Sequence * array);

/// Create array of msg/TaskHandler messages.
/**
 * It allocates the memory for the array and calls
 * chassis_interfaces__msg__TaskHandler__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_interfaces
chassis_interfaces__msg__TaskHandler__Sequence *
chassis_interfaces__msg__TaskHandler__Sequence__create(size_t size);

/// Destroy array of msg/TaskHandler messages.
/**
 * It calls
 * chassis_interfaces__msg__TaskHandler__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_chassis_interfaces
void
chassis_interfaces__msg__TaskHandler__Sequence__destroy(chassis_interfaces__msg__TaskHandler__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CHASSIS_INTERFACES__MSG__DETAIL__TASK_HANDLER__FUNCTIONS_H_
