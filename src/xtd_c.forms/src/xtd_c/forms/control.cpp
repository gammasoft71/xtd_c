#include <xtd/forms/control.h>
#include <xtd_c/privates/__ustring_helper__.h>

extern "C" {
#include "../../../include/xtd_c/forms/control.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_forms_control* xtd_forms_control_create(void) {
    object* result = new control();
    return reinterpret_cast<xtd_forms_control*>(result);
  }
  
  void xtd_forms_control_destroy(xtd_forms_control* value) {
    delete reinterpret_cast<control*>(value);
  }
  
  xtd_drawing_point xtd_forms_control_get_location(const xtd_forms_control* control) {
    auto point = reinterpret_cast<const class control*>(control)->location();
    return xtd_drawing_point {.x=point.x(), .y=point.y()};
  }
  
  xtd_forms_control* xtd_forms_control_set_location(xtd_forms_control* control, xtd_drawing_point point) {
    reinterpret_cast<class control*>(control)->location({point.x, point.y});
    return control;
  }
  
  xtd_forms_control* xtd_forms_control_get_parent(const xtd_forms_control* control) {
    auto parent = reinterpret_cast<const class control*>(control)->parent();
    if (!parent.has_value()) return nullptr;
    return reinterpret_cast<xtd_forms_control*>(&parent.value().get());
  }
  
  xtd_forms_control* xtd_forms_control_set_parent(xtd_forms_control* control, xtd_forms_control* parent) {
    if (parent == nullptr) reinterpret_cast<class control*>(control)->parent(nullptr);
    else reinterpret_cast<class control*>(control)->parent(*reinterpret_cast<class control*>(parent));
    return control;
  }
  
  xtd_forms_control* xtd_forms_control_reset_parent(xtd_forms_control* control) {
    reinterpret_cast<class control*>(control)->parent(nullptr);
    return control;
  }
  
  xtd_forms_control* xtd_forms_control_set_client_size(xtd_forms_control* control, xtd_drawing_size client_size) {
    reinterpret_cast<class control*>(control)->client_size({client_size.width, client_size.height});
    return control;
  }
  
  const char* xtd_forms_control_get_text(const xtd_forms_control* control) {
    return to_c_string(reinterpret_cast<const class control*>(control)->text());
  }
  
  size_t xtd_forms_control_get_text_s(xtd_forms_control* control, char* text, size_t size) {
    return to_c_string_s(text, size, reinterpret_cast<class control*>(control)->text());
  }

  xtd_forms_control* xtd_forms_control_set_text(xtd_forms_control* control, const char* text) {
    reinterpret_cast<class control*>(control)->text(text == nullptr ? "" : text);
    return control;
  }
  
  void xtd_forms_control_set_click_event(xtd_forms_control* control, xtd_event_handler e, xtd_handle user_data) {
    xtd_forms_control_reset_click_event(control);
    reinterpret_cast<class control*>(control)->click += [handler = e, data = user_data](object & sender, const event_args & e) {
      handler(reinterpret_cast<xtd_object*>(&sender), xtd_event_args_with_user_data(data));
    };
  }
  
  void xtd_forms_control_reset_click_event(xtd_forms_control* control) {
    reinterpret_cast<class control*>(control)->click.clear();
  }
}
