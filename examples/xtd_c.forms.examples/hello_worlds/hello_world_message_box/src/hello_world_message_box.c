#include <xtd_c/xtd_c.h>

void on_button1_click(xtd_object* sender, xtd_event_args e) {
  xtd_forms_message_box_show(NULL, "Hello, World!", "", xtd_forms_message_box_buttons_ok, xtd_forms_message_box_icon_none, xtd_forms_message_box_default_button_1, xtd_forms_message_box_options_none, false);
}

int main(void) {
  xtd_forms_control* form1 = xtd_forms_form_create();
  xtd_forms_control_set_text(form1, "Hello world (message_box)");
  
  xtd_forms_control* button1 = xtd_forms_button_create();
  xtd_forms_control_set_location(button1, (xtd_drawing_point){10, 10});
  xtd_forms_control_set_parent(button1, form1);
  xtd_forms_control_set_text(button1, "&Click me");
  xtd_forms_control_set_click_event(button1, &on_button1_click, NULL);
  
  xtd_forms_application_run(XTD_FORMS_FORM(form1));
  
  xtd_forms_control_destroy(button1);
  xtd_forms_control_destroy(form1);
  return EXIT_SUCCESS;
}
