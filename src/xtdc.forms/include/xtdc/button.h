/**
 @file
 @brief Contains button definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "control.h"

struct xtd_button {
  /// @brief Internal handle.
  /// @warning Internal use only
  xtd_handle internal_handle;
};
typedef struct xtd_button xtd_button;

xtd_button* xtd_ptr_to_xtd_button_ptr(void* ptr);

xtd_control* xtd_button_create(void);
void xtd_button_destroy(xtd_button* value);
