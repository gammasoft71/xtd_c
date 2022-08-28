/**
 @file
 @brief Contains context menu definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "control.h"

/**
 @defgroup context menu button
 @brief Represents a Windows context menu control.
 @ingroup controls
 */

struct xtd_forms_context_menu {
  /**
   @brief Internal handle.
   @warning Internal use only
   */
  xtd_handle internal_handle;
};
/** @cond */
typedef struct xtd_forms_context_menu xtd_forms_context_menu;

#define XTD_FORMS_CONTEXT_MENU_TYPE \
  (xtd_forms_context_menu())
/** @endcond */

/** @name Converter */
 
/**  @{ */
/**
 @brief Convert an xtd object to button object.
 @par Library
 xtd_c.core
 @ingroup xtd_c_forms controls button
 */
#define XTD_FORMS_CONTEXT_MENU(object) \
  (XTD_TYPE_CAST(object, XTD_FORMS_CONTEXT_MENU_TYPE, xtd_forms_context_menu))
/** @} */

xtd_forms_control* xtd_forms_context_menu_create(void);
void xtd_forms_context_menu_destroy(xtd_forms_context_menu* value);
