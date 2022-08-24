#include <xtd/console.h>
#include "../include/xtd_c/privates/__ustring_helper__.h"

extern "C" {
#include "../include/xtd_c/console.h"

  using namespace xtd;
  
  xtd_console_color xtd_console_get_background_color() {
    return static_cast<xtd_console_color>(console::background_color());
  }
  
  void xtd_console_set_background_color(xtd_console_color color) {
    console::background_color(static_cast<console_color>(color));
  }
  
  int32_t xtd_console_get_buffer_height() {
    return console::buffer_height();
  }
  
  void xtd_console_set_buffer_height(int32_t height) {
    console::buffer_height(height);
  }
  
  int32_t xtd_console_get_buffer_width() {
    return console::buffer_width();
  }

  void xtd_console_set_buffer_width(int32_t width) {
    console::buffer_width(width);
  }
  
  xtd_bool xtd_console_get_caps_lock() {
    return console::caps_lock();
  }

  int32_t xtd_console_get_cursor_left() {
    return console::cursor_left();
  }

  void xtd_console_set_cursor_left(int32_t left) {
    console::cursor_left(left);
  }

  int32_t xtd_console_get_cursor_size() {
    return console::cursor_size();
  }

  void xtd_console_set_cursor_size(int32_t size) {
    console::cursor_size(size);
  }

  int32_t xtd_console_get_cursor_top() {
    return console::cursor_top();
  }

  void xtd_console_set_cursor_top(int32_t top) {
    console::cursor_top(top);
  }

  xtd_bool xtd_console_get_cursor_visible() {
    return console::cursor_visible();
  }

  void xtd_console_set_cursor_visible(xtd_bool visible) {
    console::cursor_visible(visible);
  }

  xtd_console_color xtd_console_get_foreground_color() {
    return static_cast<xtd_console_color>(console::foreground_color());
  }
  
  void xtd_console_set_foreground_color(xtd_console_color color) {
    console::foreground_color(static_cast<console_color>(color));
  }
  
  void xtd_console_write(const char* format, ...) {
    va_list args;
    va_start(args, format);
    size_t size = vsnprintf(NULL, 0, format, args);
    size += 1;
    char* line = (char*)malloc(size);
    vsnprintf(line, size, format, args);
    va_end(args);
    console::write(line);
  }
  
  void xtd_console_write_line(const char* format, ...) {
    va_list args;
    va_start(args, format);
    size_t size = vsnprintf(NULL, 0, format, args);
    size += 1;
    char* line = (char*)malloc(size);
    vsnprintf(line, size, format, args);
    va_end(args);
    console::write_line(line);
  }
}
