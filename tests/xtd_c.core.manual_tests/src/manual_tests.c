#include <xtd_c/console.h>
#include <xtd_c/object.h>
#include <xtd_c/ustring.h>
#include <stdio.h>
#include <stdlib.h>

/*
struct xtd_graphics;
typedef struct xtd_graphics xtd_graphics;

void xtd_graphics_draw_line(xtd_graphics* graphics, xtd_drawing_point point) {
  printf("xtd_graphics_draw_line : graphics %p, point [%d, %d]\n", (xtd_handle)graphics, point.x, point.y);
}
 */

/* The main entry point for the application. */
int main(int argc, char* argv[]) {
  xtd_console_write_line(xtd_error_to_string(ENONE));
  xtd_console_write_line(xtd_error_to_string(EBADEXEC));
  xtd_console_write_line(xtd_error_to_string(1024));
  return EXIT_SUCCESS;
}
