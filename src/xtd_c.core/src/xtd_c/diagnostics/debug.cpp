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
  
  extern void xtd_debug_write_line(const char* message, const char* category);
  
  bool __var_xtd_debug_should_aborted__(__assert_args__ args) {
    return debug::__should_aborted__(args.condition, args.message == nullptr ? "" : args.message, stack_frame{args.current_stack_frame.file_name, args.current_stack_frame.file_line_number, args.current_stack_frame.method_name});
  }

  void __xtd_debug_write__(const char* message, const char* category) {
    if (category == NULL) debug::write(ustring(message == nullptr ? "" : message));
    else debug::write(ustring(message == nullptr ? "" : message), ustring(category));
  }
  
  void __xtd_debug_write_if__(bool condition, const char* message, const char* category) {
    if (category == NULL) debug::write_if(condition, ustring(message == nullptr ? "" : message));
    else debug::write_if(condition, ustring(message == nullptr ? "" : message), ustring(category));
  }
  
  void __xtd_debug_write_line__(const char* message, const char* category) {
    if (category == NULL) debug::write_line(ustring(message == nullptr ? "" : message));
    else debug::write_line(ustring(message == nullptr ? "" : message), ustring(category));
  }
  
  void __xtd_debug_write_line_if__(bool condition, const char* message, const char* category) {
    if (category == NULL) debug::write_line_if(condition, ustring(message == nullptr ? "" : message));
    else debug::write_line_if(condition, ustring(message == nullptr ? "" : message), ustring(category));
  }
}
