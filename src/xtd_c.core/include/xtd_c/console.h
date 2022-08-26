/**
 @file
 @brief Contains console definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "console_color.h"
#include "types.h"

/** @name Properties */

/** @{ */
/**
 @brief Gets the background color of the console.
 @return the background xtd_console_color.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @remarks A get operation for a Windows-based application, in which a console does not exist, returns xtd_console_color_black.
 @par Examples
 The following example saves the values of the xtd_console_color enumeration to an array and stores the current values of the xtd_console_background_color and xtd_console_foreground_color properties to variables. It then changes the foreground color to each color in the xtd_console_color enumeration except to the color that matches the current background, and it changes the background color to each color in the xtd_console_color enumeration except to the color that matches the current foreground. (If the foreground color is the same as the background color, the text isn't visible.) Finally, it calls the xtd_console_reset_color method to restore the original console colors.
 @include console_color4.c
 */
xtd_console_color xtd_console_get_background_color();
/**
 @brief Sets the background color of the console.
 @param color A xtd_console_color that specifies the background color of the console; that is, the color that appears behind each character.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @remarks A change to the background_color method affects only output that is written to individual character cells after the background color is changed. To change the background color of the console window as a whole, set the BackgroundColor property and call the Clear method. The following example provides an illustration.
 @par Examples
 The following example saves the values of the xtd_console_color enumeration to an array and stores the current values of the xtd_console_background_color and xtd_console_foreground_color properties to variables. It then changes the foreground color to each color in the xtd_console_color enumeration except to the color that matches the current background, and it changes the background color to each color in the xtd_console_color enumeration except to the color that matches the current foreground. (If the foreground color is the same as the background color, the text isn't visible.) Finally, it calls the xtd_console_reset_color method to restore the original console colors.
 @include console_color4.c
 */
void xtd_console_set_background_color(xtd_console_color color);

/**
 @brief Gets the height of the buffer area.
 @return The current height, in rows, of the buffer area.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the buffer_height and buffer_width properties. The example reports the dimensions of an operating system window set to a buffer size of 300 rows and 85 columns.
 @include console_buffer.c
 */
int32_t xtd_console_get_buffer_height();
/**
 @brief Sets or sets the height of the buffer area.
 @param height The current height, in rows, of the buffer area.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the buffer_height and buffer_width properties. The example reports the dimensions of an operating system window set to a buffer size of 300 rows and 85 columns.
 @include console_buffer.c
 */
void xtd_console_set_buffer_height(int32_t height);

/**
 @brief Gets the width of the buffer area.
 @return The current width, in columns, of the buffer area.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the BufferHeight and buffer_width properties. The example reports the dimensions of an operating system window set to a buffer size of 300 rows and 85 columns.
 @include console_buffer.c
 */
int32_t xtd_console_get_buffer_width();

/**
 @brief Sets the width of the buffer area.
 @param width The current width, in columns, of the buffer area.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the BufferHeight and buffer_width properties. The example reports the dimensions of an operating system window set to a buffer size of 300 rows and 85 columns.
 @include console_buffer.c
 */
void xtd_console_set_buffer_width(int32_t width);

/**
 @brief Gets a value indicating whether the CAPS LOCK keyboard toggle is turned on or turned off.
 @return true if CAPS LOCK is turned on; false if CAPS LOCK is turned off.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 */
bool xtd_console_get_caps_lock();

/**
 @brief Gets the column position of the cursor within the buffer area.
 @return The current position, in columns, of the cursor.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the cursor_left and cursor_top properties, and the set_cursor_position and clear methods. The example positions the cursor, which determines where the next write will occur, to draw a 5 character by 5 character rectangle using a combination of "+", "|", and "-" strings. Note that the rectangle could be drawn with fewer steps using a combination of other strings.
 @include console_cursor.c
 */
int32_t xtd_console_get_cursor_left();
/**
 @brief Sets the column position of the cursor within the buffer area.
 @param left The current position, in columns, of the cursor.
 @return true if cursor left changed; otherwise false.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the cursor_left and cursor_top properties, and the set_cursor_position and clear methods. The example positions the cursor, which determines where the next write will occur, to draw a 5 character by 5 character rectangle using a combination of "+", "|", and "-" strings. Note that the rectangle could be drawn with fewer steps using a combination of other strings.
 @include console_cursor.c
 */
void xtd_console_set_cursor_left(int32_t left);

/**
// @brief Gets or sets the height of the cursor within a character cell.
 @return The size of the cursor expressed as a percentage of the height of a character cell. The property value ranges from 1 to 100.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the cursor_size property. The example increases the size of the cursor each time any console key is pressed, then restores the cursor to its original size before terminating.
 @include console_cursor_size.c
 */
int32_t xtd_console_get_cursor_size();
/**
 @brief Sets the height of the cursor within a character cell.
 @param size The size of the cursor expressed as a percentage of the height of a character cell. The property value ranges from 1 to 100.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the cursor_size property. The example increases the size of the cursor each time any console key is pressed, then restores the cursor to its original size before terminating.
 @include console_cursor_size.c
 */
void xtd_console_set_cursor_size(int32_t size);

/**
 @brief Gets the row position of the cursor within the buffer area.
 @return The current position, in rows, of the cursor.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the cursor_left and cursor_top properties, and the set_cursor_position and clear methods. The example positions the cursor, which determines where the next write will occur, to draw a 5 character by 5 character rectangle using a combination of "+", "|", and "-" strings. Note that the rectangle could be drawn with fewer steps using a combination of other strings.
 @include console_cursor.c
 */
int32_t xtd_console_get_cursor_top();
/**
 @brief Sets the row position of the cursor within the buffer area.
 @param top The current position, in rows, of the cursor.
 @return true if cursor top changed; otherwise false.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the cursor_left and cursor_top properties, and the set_cursor_position and clear methods. The example positions the cursor, which determines where the next write will occur, to draw a 5 character by 5 character rectangle using a combination of "+", "|", and "-" strings. Note that the rectangle could be drawn with fewer steps using a combination of other strings.
 @include console_cursor.c
 */
void xtd_console_set_cursor_top(int32_t top);

/**
 @brief Gets a value indicating whether the cursor is visible.
 @return true if the cursor is visible; otherwise, false.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the cursor_visible property. The example makes the cursor visible if the first column of input is a '+' character or invisible if the input is a '-' character.
 @include console_cursor_visible.c
 */
bool xtd_console_get_cursor_visible();
/**
 @brief Sets a value indicating whether the cursor is visible.
 @param visible true if the cursor is visible; otherwise, false.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 This example demonstrates the cursor_visible property. The example makes the cursor visible if the first column of input is a '+' character or invisible if the input is a '-' character.
 @include console_cursor_visible.c
 */
void xtd_console_set_cursor_visible(bool visible);

/**
 @brief Gets the foreground color of the console.
 @return A console_color that specifies the foreground color of the console; that is, the color of each character that is displayed.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 The following example saves the values of the console_color enumeration to an array and stores the current values of the background_color and foreground_color properties to variables. It then changes the foreground color to each color in the ConsoleColor enumeration except to the color that matches the current background, and it changes the background color to each color in the console_color enumeration except to the color that matches the current foreground. (If the foreground color is the same as the background color, the text isn't visible.) Finally, it calls the reset_color method to restore the original console colors.
 @include console_color4.cpp
 */
xtd_console_color xtd_console_get_foreground_color();
/**
 @brief Sets the foreground color of the console.
 @param color A console_color that specifies the foreground color of the console; that is, the color of each character that is displayed.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 @par Examples
 The following example saves the values of the console_color enumeration to an array and stores the current values of the background_color and foreground_color properties to variables. It then changes the foreground color to each color in the ConsoleColor enumeration except to the color that matches the current background, and it changes the background color to each color in the console_color enumeration except to the color that matches the current foreground. (If the foreground color is the same as the background color, the text isn't visible.) Finally, it calls the reset_color method to restore the original console colors.
 @include console_color4.cpp
 */
void xtd_console_set_foreground_color(xtd_console_color color);
/** @} */

/** @name Methods */

/** @{ */
/**
 @brief Writes the text representation of the specified list of values to the standard output stream using the specified format information.
 @param format A string format specifying how to interpret the data.
 @param ... Values to write,
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 */
void xtd_console_write(const char* format, ...);

/**
 @brief Writes the text representation of the specified list of values, followed by the current line terminator, to the standard output stream using the specified format information.
 @param format A string format specifying how to interpret the data.
 @param ... Values to write,
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system console
 */
void xtd_console_write_line(const char* format, ...);
/** @} */

