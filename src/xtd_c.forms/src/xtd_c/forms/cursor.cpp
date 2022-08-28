#include <xtd/forms/control.h>

extern "C" {
#include "../../../include/xtd_c/forms/cursor.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_forms_cursor* xtd_forms_cursor_create(void) {
    object* result = new cursor();
    return reinterpret_cast<xtd_forms_cursor*>(result);
  }
  
  void xtd_forms_cursor_destroy(xtd_forms_cursor* value) {
    xtd_object_destroy(XTD_OBJECT(value));
  }
}
