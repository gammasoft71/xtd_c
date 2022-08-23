#include <xtd/console.h>
#include "../include/xtdc/privates/__ustring_helper__.h"

extern "C" {
  #include "../include/xtdc/console.h"

  using namespace xtd;
 
  xtd_console_color xtd_console_get_background_color() {
    return static_cast<xtd_console_color>(console::background_color());
  }

  void xtd_console_set_background_color(xtd_console_color color) {
    console::background_color(static_cast<console_color>(color));
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
