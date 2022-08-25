/**
 @file
 @brief Contains form definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
*/
#pragma once
#include "control.h"

struct xtd_forms_form {
  /// @brief Internal handle.
  /// @warning Internal use only
  xtd_handle internal_handle;
};
typedef struct xtd_forms_form xtd_forms_form;

xtd_forms_form* xtd_ptr_to_xtd_forms_form_ptr(xtd_handle ptr);

xtd_forms_forms_control* xtd_forms_form_create(void);
void xtd_forms_form_destroy(xtd_forms_form* value);
