/**
 @file
 @brief Contains stack_frame definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "../types.h"
#include <stdio.h>

/** @cond */
#define __STACK_FRAME_FILE_NAME__ (1024)
#define __STACK_FRAME_METHOD_NAME__ (256)
/** @endcond */

#define XTD_STACK_FRAME_OFFSET_UNKNOWN UINT_FAST32_MAX

/**
 @brief Defines the stack_frame object.
 @par Library
 xtd_c.core
 @ingroup xtd_c stack_frame
 */
struct xtd_stack_frame {
  char file_name[__STACK_FRAME_FILE_NAME__];
  uint32_t file_line_number;
  char method_name[__STACK_FRAME_METHOD_NAME__];
  uint32_t file_column_number;
  uint32_t offset;
  
};

/** @cond */
typedef struct xtd_stack_frame xtd_stack_frame;

#define CSF  \
(xtd_stack_frame_create_from_file_line_func(__FILE__, __LINE__, __func__))

/** @endcond */

/** @name Creation/Destruction */

/** @{ */
/**
 @brief Initializes a new instance of the xtd_stack_frame with default settings.
 @return New stack_frame created.
 @par Library
 xtd_c.core
 @ingroup xtd_c stack_frame
 */
xtd_stack_frame xtd_stack_frame_create_from_file_line_func(const char* file_name, uint32_t line_number, const char* method_name);

/**
 @brief Destroy the instance of the specfied stack_frame
 @param value The stack_frame to delete.
 @par Library
 xtd_c.core
 @ingroup xtd_c stack_frame
 */
void xtd_stack_frame_destroy(xtd_stack_frame* value);
/** @} */

/** @name Properties */

/** @{ */
xtd_stack_frame xtd_stack_frame_empty();
/** @} */

/** @name Events */

/** @{ */
/** @} */

/** @name Methods */

/** @{ */
xtd_bool xtd_stack_frame_is_empty(xtd_stack_frame stack_frame);
const char* xtd_stack_frame_to_string(const xtd_stack_frame value);
size_t xtd_stack_frame_to_string_s(const xtd_stack_frame value, char* string, size_t size);
/** @} */
