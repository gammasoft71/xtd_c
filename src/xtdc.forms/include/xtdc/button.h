/**
 @file
 @brief Contains button definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "control.h"
struct xtd_button;
typedef struct xtd_button xtd_button;

xtd_button* xtd_ptr_to_xtd_button_ptr(void* ptr);

xtd_control* xtd_button_create(void);
void xtd_button_destroy(xtd_button* value);
