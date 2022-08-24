/**
 @file
 @brief Contains console definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "console_color.h"
#include "types.h"

/**
 @name Methods
 
 @{
 */

/**
 @brief Gets the background color of the console.
 @return the background xtd_console_color.
 @par Library
 xtdc.core
 @ingroup xtdc_core system console
 @remarks A get operation for a Windows-based application, in which a console does not exist, returns xtd_console_color_black.
 @par Examples
 The following example saves the values of the xtd_console_color enumeration to an array and stores the current values of the xtd_console_background_color and xtd_console_foreground_color properties to variables. It then changes the foreground color to each color in the xtd_console_color enumeration except to the color that matches the current background, and it changes the background color to each color in the xtd_console_color enumeration except to the color that matches the current foreground. (If the foreground color is the same as the background color, the text isn't visible.) Finally, it calls the xtd_console_reset_color method to restore the original console colors.
 @include console_color4.cpp
 */
xtd_console_color xtd_console_get_background_color();
/**
 @brief Sets the background color of the console.
 @param color A xtd_console_color that specifies the background color of the console; that is, the color that appears behind each character.
 @par Library
 xtdc.core
 @ingroup xtdc_core system console
 @remarks A change to the background_color method affects only output that is written to individual character cells after the background color is changed. To change the background color of the console window as a whole, set the BackgroundColor property and call the Clear method. The following example provides an illustration.
 @par Examples
 The following example saves the values of the xtd_console_color enumeration to an array and stores the current values of the xtd_console_background_color and xtd_console_foreground_color properties to variables. It then changes the foreground color to each color in the xtd_console_color enumeration except to the color that matches the current background, and it changes the background color to each color in the xtd_console_color enumeration except to the color that matches the current foreground. (If the foreground color is the same as the background color, the text isn't visible.) Finally, it calls the xtd_console_reset_color method to restore the original console colors.
 @include console_color4.cpp
 */
void xtd_console_set_background_color(xtd_console_color color);

int32_t xtd_console_get_buffer_height();
void xtd_console_set_buffer_height(int32_t height);

void xtd_console_set_foreground_color(xtd_console_color color);
xtd_console_color xtd_console_get_foreground_color();

void xtd_console_write(const char* format, ...);

void xtd_console_write_line(const char* format, ...);

/**
 @}
 */

/**
 @name Methods
 
 @{
 */

/**
 @}
 */

