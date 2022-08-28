/**
 @file
 @brief Contains cursor definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include <xtd_c/object.h>

/**
 @defgroup cursor cursor
 @brief Represents a Windows cursor control.
 @ingroup controls
 */

struct xtd_forms_cursor {
  /**
   @brief Internal handle.
   @warning Internal use only
   */
  xtd_handle internal_handle;
};
/** @cond */
typedef struct xtd_forms_cursor xtd_forms_cursor;

#define XTD_FORMS_CURSOR_TYPE \
  (xtd_forms_cursor())
/** @endcond */

/** @name Converter */
 
/**  @{ */
/**
 @brief Convert an xtd object to cursor object.
 @par Library
 xtd_c.core
 @ingroup xtd_c_forms controls cursor
 */
#define XTD_FORMS_CURSOR(object) \
  (XTD_TYPE_CAST(object, XTD_FORMS_CURSOR_TYPE, xtd_forms_cursor))
/** @} */

xtd_forms_cursor* xtd_forms_cursor_create(void);
void xtd_forms_cursor_destroy(xtd_forms_cursor* value);
