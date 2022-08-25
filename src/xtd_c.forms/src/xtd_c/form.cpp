#include <xtd/forms/form.h>

extern "C" {
#include "../include/xtd_c/form.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_forms_control* xtd_forms_form_create(void) {
    object* result = new form();
    return reinterpret_cast<xtd_forms_control*>(result);
  }
  
  void xtd_forms_form_destroy(xtd_forms_form* value) {
    xtd_object_destroy(XTD_OBJECT(value));
  }
}
