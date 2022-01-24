// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifdef __cplusplus
extern "C"
{
#endif

#include "rcutils/macros.h"

#include "rcl/node_options.h"

#ifdef RCL_COMMAND_LINE_ENABLED
#include "rcl/arguments.h"
#endif // RCL_COMMAND_LINE_ENABLED
#include "rcl/domain_id.h"
#include "rcl/error_handling.h"
#ifdef RCL_LOGGING_ENABLED
#include "rcl/logging_rosout.h"
#endif // RCL_LOGGING_ENABLED

rcl_node_options_t
rcl_node_get_default_options()
{
  // !!! MAKE SURE THAT CHANGES TO THESE DEFAULTS ARE REFLECTED IN THE HEADER DOC STRING
  static rcl_node_options_t default_options = {
    .domain_id = RCL_NODE_OPTIONS_DEFAULT_DOMAIN_ID,
    .use_global_arguments = true,
    .enable_rosout = true,
  };
  // Must set the allocator after because it is not a compile time constant.
  default_options.allocator = rcl_get_default_allocator();
#ifdef RCL_COMMAND_LINE_ENABLED
  default_options.arguments = rcl_get_zero_initialized_arguments();
#endif // RCL_COMMAND_LINE_ENABLED
  return default_options;
}

rcl_ret_t
rcl_node_options_copy(
  const rcl_node_options_t * options,
  rcl_node_options_t * options_out)
{
  RCUTILS_CAN_SET_MSG_AND_RETURN_WITH_ERROR_OF(RCL_RET_INVALID_ARGUMENT);

  RCL_CHECK_ARGUMENT_FOR_NULL(options, RCL_RET_INVALID_ARGUMENT);
  RCL_CHECK_ARGUMENT_FOR_NULL(options_out, RCL_RET_INVALID_ARGUMENT);
  if (options_out == options) {
    RCL_SET_ERROR_MSG("Attempted to copy options into itself");
    return RCL_RET_INVALID_ARGUMENT;
  }
#ifdef RCL_COMMAND_LINE_ENABLED
  if (NULL != options_out->arguments.impl) {
    RCL_SET_ERROR_MSG("Options out must be zero initialized");
    return RCL_RET_INVALID_ARGUMENT;
  }
#endif // RCL_COMMAND_LINE_ENABLED

  options_out->domain_id = options->domain_id;
  options_out->allocator = options->allocator;
  options_out->use_global_arguments = options->use_global_arguments;
  options_out->enable_rosout = options->enable_rosout;
#ifdef RCL_COMMAND_LINE_ENABLED
  if (NULL != options->arguments.impl) {
    return rcl_arguments_copy(&(options->arguments), &(options_out->arguments));
  }
#endif // RCL_COMMAND_LINE_ENABLED
  return RCL_RET_OK;
}

rcl_ret_t
rcl_node_options_fini(
  rcl_node_options_t * options)
{
  RCL_CHECK_ARGUMENT_FOR_NULL(options, RCL_RET_INVALID_ARGUMENT);
  rcl_allocator_t allocator = options->allocator;
  RCL_CHECK_ALLOCATOR(&allocator, return RCL_RET_INVALID_ARGUMENT);

#ifdef RCL_COMMAND_LINE_ENABLED
  if (options->arguments.impl) {
    rcl_ret_t ret = rcl_arguments_fini(&options->arguments);
    if (RCL_RET_OK != ret) {
      RCL_SET_ERROR_MSG("Failed to fini rcl arguments");
      return ret;
    }
  }
#endif // RCL_COMMAND_LINE_ENABLED

  return RCL_RET_OK;
}

#ifdef __cplusplus
}
#endif
