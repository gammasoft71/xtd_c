#include <xtd/forms/button.h>

extern "C" {
  #include "../include/xtdc/button.h"
  
  using namespace xtd;
  using namespace xtd::forms;

  xtd_button* xtd_ptr_to_xtd_button_ptr(void* ptr) {
    return (xtd_button*)ptr;
  }

  xtd_control* xtd_button_create(void) {
    object* result = new button();
    return reinterpret_cast<xtd_control*>(result);
  }
  
  void xtd_button_destroy(xtd_button* value) {
    delete reinterpret_cast<button*>(value);
  }
}
