#include <xtd/forms/control.h>
#include <xtd_c/privates/__ustring_helper__.h>

extern "C" {
#include "../include/xtd_c/control.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_control* xtd_ptr_to_xtd_control_ptr(xtd_handle ptr) {
    return (xtd_control*)ptr;
  }
  
  xtd_control* xtd_control_create(void) {
    object* result = new control();
    return reinterpret_cast<xtd_control*>(result);
  }
  
  void xtd_control_destroy(xtd_control* value) {
    delete reinterpret_cast<control*>(value);
  }
  
  xtd_point xtd_control_get_location(xtd_control* control) {
    auto point = reinterpret_cast<class control*>(control)->location();
    return xtd_point {point.x(), point.y()};
  }
  
  void xtd_control_set_location(xtd_control* control, xtd_point point) {
    reinterpret_cast<class control*>(control)->location({point.x, point.y});
  }
  
  xtd_control* xtd_control_get_parent(xtd_control* control) {
    auto parent = reinterpret_cast<class control*>(control)->parent();
    if (!parent.has_value()) return nullptr;
    return reinterpret_cast<xtd_control*>(&parent.value().get());
  }
  
  void xtd_control_set_parent(xtd_control* control, xtd_control* parent) {
    if (parent == nullptr) reinterpret_cast<class control*>(control)->parent(nullptr);
    else reinterpret_cast<class control*>(control)->parent(*reinterpret_cast<class control*>(parent));
  }
  
  void xtd_control_reset_parent(xtd_control* control) {
    reinterpret_cast<class control*>(control)->parent(nullptr);
  }
  
  size_t xtd_control_get_text(xtd_control* control, char* text, size_t size) {
    return to_c_string(reinterpret_cast<class control*>(control)->text(), text, size);
  }
  
  void xtd_control_set_text(xtd_control* control, const char* text) {
    reinterpret_cast<class control*>(control)->text(text);
  }
  
  void xtd_control_set_click_event(xtd_control* control, xtd_event_handler e, xtd_handle user_data) {
    xtd_control_reset_click_event(control);
    reinterpret_cast<class control*>(control)->click += [handler = e, data = user_data](object & sender, const event_args & e) {
      handler(reinterpret_cast<xtd_object*>(&sender), xtd_event_args_with_user_data(data));
    };
  }
  
  void xtd_control_reset_click_event(xtd_control* control) {
    reinterpret_cast<class control*>(control)->click.clear();
  }
}
