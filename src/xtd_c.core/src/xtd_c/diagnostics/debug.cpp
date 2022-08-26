#include <xtd/diagnostics/debug.h>
#include "../include/xtd_c/privates/__ustring_helper__.h"
#include "../include/xtd_c/errors.h"

extern "C" {
  #undef assert_
  #undef cassert_
  #undef current_stack_frame_
  #undef debug_break_
  #include "../include/xtd_c/diagnostics/debug.h"

  using namespace xtd;
  using namespace xtd::diagnostics;
  
  bool __var_xtd_diagnostics_debug_should_aborted__(__assert_args__ args) {
    return debug::__should_aborted__(args.condition, args.message == nullptr ? "" : args.message, stack_frame{args.current_stack_frame.file_name, args.current_stack_frame.file_line_number, args.current_stack_frame.method_name});
  }

  bool xtd_diagnostics_debug_get_auto_flush() {
    return debug::auto_flush();
  }
  
  void xtd_diagnostics_debug_set_auto_flush(bool value) {
    debug::auto_flush(value);
  }

  void __xtd_diagnostics_debug_write__(const char* message, const char* category) {
    if (category == nullptr) debug::write(ustring(message == nullptr ? "" : message));
    else debug::write(ustring(message == nullptr ? "" : message), ustring(category));
  }
  
  void __xtd_diagnostics_debug_write_if__(bool condition, const char* message, const char* category) {
    if (category == nullptr) debug::write_if(condition, ustring(message == nullptr ? "" : message));
    else debug::write_if(condition, ustring(message == nullptr ? "" : message), ustring(category));
  }
  
  void __xtd_diagnostics_debug_write_line__(const char* message, const char* category) {
    if (category == nullptr) debug::write_line(ustring(message == nullptr ? "" : message));
    else debug::write_line(ustring(message == nullptr ? "" : message), ustring(category));
  }
  
  void __xtd_diagnostics_debug_write_line_if__(bool condition, const char* message, const char* category) {
    if (category == nullptr) debug::write_line_if(condition, ustring(message == nullptr ? "" : message));
    else debug::write_line_if(condition, ustring(message == nullptr ? "" : message), ustring(category));
  }
}
