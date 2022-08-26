/**
 @file
 @brief Contains stack_frame definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "../types.h"
#include <stdio.h>

/** @cond */
#define __CURRENT_STACK_FRAME_FILE_NAME__ (1024)
#define __CURRENT_STACK_FRAME_METHOD_NAME__ (256)
/** @endcond */

#define XTD_CURRENT_STACK_FRAME_OFFSET_UNKNOWN UINT_FAST32_MAX

/**
 @brief Defines the stack_frame object.
 @par Library
 xtd_c.core
 @ingroup xtd_c stack_frame
 */
struct xtd_current_stack_frame {
  const char* file_name;
  uint32_t file_line_number;
  const char* method_name;
  
};

/** @cond */
typedef struct xtd_current_stack_frame xtd_current_stack_frame;

#define current_stack_frame_  \
((xtd_current_stack_frame){__FILE__, __LINE__, __func__})

#define csf_  \
current_stack_frame_

/** @endcond */

/** @name Properties */

/** @{ */
xtd_current_stack_frame xtd_current_stack_frame_empty();
/** @} */

/** @name Events */

/** @{ */
/** @} */

/** @name Methods */

/** @{ */
bool xtd_current_stack_frame_is_empty(xtd_current_stack_frame stack_frame);
const char* xtd_current_stack_frame_to_string(xtd_current_stack_frame value);
size_t xtd_current_stack_frame_to_string_s(xtd_current_stack_frame value, char* string, size_t size);
/** @} */
