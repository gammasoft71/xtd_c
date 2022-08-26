#include <xtd_c/xtd_c.h>

/*
struct xtd_graphics;
typedef struct xtd_graphics xtd_graphics;

void xtd_graphics_draw_line(xtd_graphics* graphics, xtd_drawing_point point) {
  printf("xtd_graphics_draw_line : graphics %p, point [%d, %d]\n", (xtd_handle)graphics, point.x, point.y);
}
 */

int main(void) {
  //xtd_console_write_line("csf_ = %s", xtd_current_stack_frame_to_string(csf_));
  int index = 0;
  xtd_debug_write_line_if(index == 0, "Start application", NULL);
  //assert_(index > 0, "index must be greater than 0");
  xtd_debug_write_line("End application", NULL);

  return EXIT_SUCCESS;
}
