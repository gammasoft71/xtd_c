/**
 @file
 @brief Contains form definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
*/
#pragma once
#include "control.h"

struct xtd_forms_form {
  /**
   @brief Internal handle.
   @warning Internal use only
   */
  xtd_handle internal_handle;
};

/** @cond */
typedef struct xtd_forms_form xtd_forms_form;

#define XTD_FORMS_FORM_TYPE \
  (xtd_forms_form())
/** @endcond */

/**
 @name Converter
 
 @{
 */

/**
 @brief Convert an xtd object to form object.
 @par Library
 xtd_c.core
 @ingroup xtd_c_forms controls form
 */
#define XTD_FORMS_FORM(object) \
  (XTD_TYPE_CAST(object, XTD_FORMS_FORM_TYPE, xtd_forms_form))

/**
 @}
 */

xtd_forms_control* xtd_forms_form_create(void);
void xtd_forms_form_destroy(xtd_forms_form* value);
