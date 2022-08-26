#include <xtd/forms/control.h>
#include <xtd/forms/message_box.h>

extern "C" {
#include "../include/xtd_c/message_box.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_forms_dialog_result xtd_forms_message_box_show(xtd_forms_control* owner, const char* text, const char* caption, xtd_forms_message_box_buttons buttons, xtd_forms_message_box_icon icon, xtd_forms_message_box_default_button default_button, xtd_forms_message_box_options options, bool display_help_button) {
    if (owner == nullptr) return static_cast<xtd_forms_dialog_result>(message_box::show(text, caption, static_cast<message_box_buttons>(buttons), static_cast<message_box_icon>(icon), static_cast<message_box_default_button>(default_button), static_cast<message_box_options>(options), display_help_button));
    return static_cast<xtd_forms_dialog_result>(message_box::show(*reinterpret_cast<control*>(owner), ustring(text), ustring(caption), static_cast<message_box_buttons>(buttons), static_cast<message_box_icon>(icon), static_cast<message_box_default_button>(default_button), static_cast<message_box_options>(options), display_help_button));
  }
}
