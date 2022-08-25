/**
 @file
 @brief Contains button definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "control.h"

struct xtd_forms_forms_button {
  /// @brief Internal handle.
  /// @warning Internal use only
  xtd_handle internal_handle;
};
typedef struct xtd_forms_forms_button xtd_forms_forms_button;

xtd_forms_forms_button* xtd_ptr_to_xtd_forms_forms_button_ptr(xtd_handle ptr);

xtd_forms_forms_control* xtd_forms_forms_button_create(void);
void xtd_forms_forms_button_destroy(xtd_forms_forms_button* value);
