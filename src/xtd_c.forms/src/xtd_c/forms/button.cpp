#include <xtd/forms/button.h>

extern "C" {
#include "../../../include/xtd_c/forms/button.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_forms_control* xtd_forms_button_create(void) {
    object* result = new button();
    return reinterpret_cast<xtd_forms_control*>(result);
  }
  
  void xtd_forms_button_destroy(xtd_forms_button* value) {
    xtd_object_destroy(XTD_OBJECT(value));
  }
}
