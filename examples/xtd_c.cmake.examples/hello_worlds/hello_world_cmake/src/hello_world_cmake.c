#include <xtd_c/xtd_c.h>

int main() {
  xtd_forms_form* form = XTD_FORMS_FORM(xtd_forms_form_create());
  xtd_forms_application_run(form);
  xtd_forms_form_destroy(form);
  return EXIT_SUCCESS;
}
