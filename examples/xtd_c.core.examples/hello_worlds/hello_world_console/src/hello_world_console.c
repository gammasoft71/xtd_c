#include <xtd_c/xtd_c.h>

int main() {
  xtd_console_set_background_color(xtd_console_color_blue);
  xtd_console_set_foreground_color(xtd_console_color_white);
  xtd_console_write_line("Hello, World!");
  return EXIT_SUCCESS;
}

// This code produces the following output with colors :
//
// Hello, World!
