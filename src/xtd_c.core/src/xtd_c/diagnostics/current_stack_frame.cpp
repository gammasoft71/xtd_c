#include "../../../include/xtd_c/privates/__ustring_helper__.h"
#include <xtd/diagnostics/stack_frame.h>

extern "C" {
#undef current_stack_frame_
#undef csf_
#include "../../../include/xtd_c/diagnostics/current_stack_frame.h"

  using namespace xtd;
  using namespace xtd::diagnostics;
  
  xtd_current_stack_frame xtd_current_stack_frame_empty() {
    return xtd_current_stack_frame {nullptr, 0, nullptr};
  }

  bool xtd_current_stack_frame_is_empty(xtd_current_stack_frame stack_frame) {
    return stack_frame.file_name == nullptr && stack_frame.file_line_number == 0 && stack_frame.method_name == nullptr;
  }

  const char* xtd_current_stack_frame_to_string(xtd_current_stack_frame value) {
    stack_frame sf;
    if (!xtd_current_stack_frame_is_empty(value))
      sf = stack_frame {value.file_name, value.file_line_number, value.method_name};
    return to_c_string(sf.to_string());
  }
  
  size_t xtd_current_stack_frame_to_string_s(xtd_current_stack_frame value, char* string, size_t size) {
    stack_frame sf;
    if (!xtd_current_stack_frame_is_empty(value))
      sf = stack_frame {value.file_name, value.file_line_number, value.method_name};
    return to_c_string_s(string, size, sf.to_string());
  }
}
