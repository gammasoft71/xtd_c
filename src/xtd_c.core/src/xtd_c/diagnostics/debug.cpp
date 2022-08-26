#include <xtd/diagnostics/debug.h>
#include "../include/xtd_c/privates/__ustring_helper__.h"
#include "../include/xtd_c/errors.h"

using namespace xtd;
using namespace xtd::diagnostics;

extern "C" {
#include "../include/xtd_c/diagnostics/debug.h"

  xtd_bool __xtd_debug_should_aborted_with_condition__(xtd_bool condition) {
    return debug::__should_aborted__(condition);
  }
  xtd_bool __xtd_debug_should_aborted_with_condition_message___(xtd_bool condition, const char* message) {
    return debug::__should_aborted__(condition, message);
  }

  xtd_bool __xtd_debug_should_aborted_with_condition_current_stack_frame__(xtd_bool condition, const xtd_current_stack_frame* current_stack_frame) {
    return debug::__should_aborted__(condition, stack_frame{current_stack_frame->file_name, current_stack_frame->file_line_number, current_stack_frame->method_name});
  }
  xtd_bool __xtd_debug_should_aborted_with_conditio_message_current_stack_frame__(xtd_bool condition, const char* message, const xtd_current_stack_frame* current_stack_frame) {
    return debug::__should_aborted__(condition, message, stack_frame{current_stack_frame->file_name, current_stack_frame->file_line_number, current_stack_frame->method_name});
  }
}
