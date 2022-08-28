#include <xtd/forms/context_menu.h>

extern "C" {
#include "../../../include/xtd_c/forms/context_menu.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_forms_control* xtd_forms_context_menu_create(void) {
    object* result = new context_menu();
    return reinterpret_cast<xtd_forms_control*>(result);
  }
  
  void xtd_forms_context_menu_destroy(xtd_forms_context_menu* value) {
    xtd_object_destroy(XTD_OBJECT(value));
  }
}
