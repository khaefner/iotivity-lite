/****************************************************************************
 *
 * Copyright 2018 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#ifndef ST_TYPES_H
#define ST_TYPES_H

typedef enum {
  ST_ERROR_NONE,              // Successful
  ST_ERROR_INVALID_PARAMETER, // Invalid parameter (If parameter is null or
                              // empty)
  ST_ERROR_OPERATION_FAILED,          // Operation Failed
  ST_ERROR_STACK_NOT_INITIALIZED,     // Stack is not yet initialized
  ST_ERROR_STACK_ALREADY_INITIALIZED, // Stack is already initialized
  ST_ERROR_STACK_NOT_STARTED,         // Stack is not yet started
  ST_ERROR_STACK_RUNNING              // Stack is currently running
} st_error_t;

#endif