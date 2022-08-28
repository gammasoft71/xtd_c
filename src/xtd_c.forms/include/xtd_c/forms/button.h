/**
 @file
 @brief Contains button definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "control.h"

/**
 @defgroup button button
 @brief Represents a Windows button control.
 @ingroup controls
 */

struct xtd_forms_button {
  /**
   @brief Internal handle.
   @warning Internal use only
   */
  xtd_handle internal_handle;
};
/** @cond */
typedef struct xtd_forms_button xtd_forms_button;

#define XTD_FORMS_BUTTON_TYPE \
  (xtd_forms_button())
/** @endcond */

/** @name Converter */
 
/**  @{ */
/**
 @brief Convert an xtd object to button object.
 @par Library
 xtd_c.core
 @ingroup xtd_c_forms controls button
 */
#define XTD_FORMS_BUTTON(object) \
  (XTD_TYPE_CAST(object, XTD_FORMS_BUTTON_TYPE, xtd_forms_button))
/** @} */

xtd_forms_control* xtd_forms_button_create(void);
void xtd_forms_button_destroy(xtd_forms_button* value);
