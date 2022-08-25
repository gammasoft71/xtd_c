#include <xtd/forms/form.h>

extern "C" {
#include "../include/xtd_c/form.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_forms_form* xtd_ptr_to_xtd_forms_form_ptr(xtd_handle ptr) {
    return (xtd_forms_form*)ptr;
  }
  
  xtd_forms_forms_control* xtd_forms_form_create(void) {
    object* result = new form();
    return reinterpret_cast<xtd_forms_forms_control*>(result);
  }
  
  void xtd_forms_form_destroy(xtd_forms_form* value) {
    delete reinterpret_cast<control*>(value);
  }
}
