#include "../../../include/xtd_c/privates/__ustring_helper__.h"

extern "C" {
#include "../../../include/xtd_c/diagnostics/current_stack_frame.h"

  xtd_current_stack_frame xtd_current_stack_frame_empty() {
    return xtd_current_stack_frame {nullptr, 0, nullptr};
  }

  xtd_bool xtd_current_stack_frame_is_empty(xtd_current_stack_frame stack_frame) {
    return stack_frame.file_name == nullptr && stack_frame.file_line_number == 0 && stack_frame.method_name == nullptr;
  }

  const char* xtd_current_stack_frame_to_string(xtd_current_stack_frame value) {
    if (xtd_current_stack_frame_is_empty(value)) return "";
    return string_format("%s at offset %s in file:line:column %s:{%d}:{%d}", value.method_name == nullptr ? "<unknown method>" : value.method_name, "<unknown offset>", value.file_name == nullptr ? "<filename unknown>" : value.file_name, value.file_line_number, 0);
  }
  
  size_t xtd_current_stack_frame_to_string_s(xtd_current_stack_frame value, char* string, size_t size) {
    if (xtd_current_stack_frame_is_empty(value)) return 0;
    return string_format_s(string, size, "%s at offset %s in file:line:column %s:{%d}:{%d}", value.method_name == nullptr ? "<unknown method>" : value.method_name, "<unknown offset>", value.file_name == nullptr ? "<filename unknown>" : value.file_name, value.file_line_number, 0);
  }
}
