#include <xtd_c/xtd_c.forms.h>

void on_button1_click(xtd_object* sender, xtd_event_args e) {
  xtd_message_box_show(xtd_ptr_to_xtd_control_ptr(e.user_data), "Hello, World!", "", xtd_message_box_buttons_ok, xtd_message_box_icon_none, xtd_message_box_default_button_1, xtd_message_box_options_none, xtd_false);
}

int main(void) {
  xtd_control* form1 = xtd_form_create();
  xtd_control_set_text(form1, "Hello world (message_box)");
  
  xtd_control* button1 = xtd_button_create();
  xtd_control_set_location(button1, (xtd_point) {10, 10});
  xtd_control_set_parent(button1, form1);
  xtd_control_set_text(button1, "&Click me");
  xtd_control_set_click_event(button1, &on_button1_click, form1);

  xtd_application_run(xtd_ptr_to_xtd_form_ptr(form1));
  
  xtd_control_destroy(button1);
  xtd_control_destroy(form1);
  return EXIT_SUCCESS;
}
