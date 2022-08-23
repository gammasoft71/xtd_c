#include <xtd/forms/application.h>
#include <xtd/forms/control.h>
#include <xtd/forms/form.h>

extern "C" {
  #include "../include/xtdc/application.h"
  
  using namespace xtd;
  using namespace xtd::forms;
  
  void xtd_application_run(xtd_form* form) {
    class form* main_form = dynamic_cast<class form*>(reinterpret_cast<control*>(form));
    if (main_form == nullptr) application::run();
    else application::run(*main_form);
  }
}
