/**
 @file
 @brief Contains console definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "console_color.h"
#include "types.h"

xtd_console_color xtd_console_get_background_color();
void xtd_console_set_background_color(xtd_console_color color);

void xtd_console_set_foreground_color(xtd_console_color color);
xtd_console_color xtd_console_get_foreground_color();

void xtd_console_write(const char* format, ...);

void xtd_console_write_line(const char* format, ...);
