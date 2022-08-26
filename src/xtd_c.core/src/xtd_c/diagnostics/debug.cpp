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
  
  bool __var_xtd_debug_should_aborted__(__assert_args__ args) {
    return debug::__should_aborted__(args.condition, args.message == nullptr ? "" : args.message, stack_frame{args.current_stack_frame.file_name, args.current_stack_frame.file_line_number, args.current_stack_frame.method_name});
  }
}
