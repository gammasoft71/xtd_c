#include <xtd/forms/button.h>

extern "C" {
#include "../include/xtd_c/button.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_forms_forms_button* xtd_ptr_to_xtd_forms_forms_button_ptr(xtd_handle ptr) {
    return (xtd_forms_forms_button*)ptr;
  }
  
  xtd_forms_forms_control* xtd_forms_forms_button_create(void) {
    object* result = new button();
    return reinterpret_cast<xtd_forms_forms_control*>(result);
  }
  
  void xtd_forms_forms_button_destroy(xtd_forms_forms_button* value) {
    delete reinterpret_cast<button*>(value);
  }
}
