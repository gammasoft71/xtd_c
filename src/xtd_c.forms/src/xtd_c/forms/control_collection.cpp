#include <xtd/forms/control.h>

extern "C" {
#include "../../../include/xtd_c/forms/control_collection.h"

  using namespace xtd;
  using namespace xtd::forms;
  
  xtd_forms_control_collection* xtd_forms_control_collection_create(void) {
    object* result = new control::control_collection();
    return reinterpret_cast<xtd_forms_control_collection*>(result);
  }
  
  void xtd_forms_control_collection_destroy(xtd_forms_control_collection* value) {
    xtd_object_destroy(XTD_OBJECT(value));
  }
}
