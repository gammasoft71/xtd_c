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
  /*printf("Hello, World!\n");*/
  xtd_console_set_background_color(xtd_console_color_blue);
  xtd_console_set_foreground_color(xtd_console_color_white);
  const char s[14]  = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  //xtd_console_write_line("Hello, World!");
  xtd_console_write_line(s);
  return EXIT_SUCCESS;
}
