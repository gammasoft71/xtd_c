#include "../../../include/xtd_c/privates/__ustring_helper__.h"

extern "C" {
#include "../../../include/xtd_c/diagnostics/current_stack_frame.h"

  xtd_current_stack_frame xtd_current_stack_frame_create_from_file_line_func(const char* file_name, uint32_t line_number, const char* method_name) {
    xtd_current_stack_frame result;
    result.file_column_number  = 0;
    to_c_string_s(file_name, result.file_name, __CURRENT_STACK_FRAME_FILE_NAME__);
    result.file_line_number = line_number;
    to_c_string_s(method_name, result.method_name, __CURRENT_STACK_FRAME_FILE_NAME__);
    result.offset = XTD_CURRENT_STACK_FRAME_OFFSET_UNKNOWN;
    return result;
  }
  
  xtd_current_stack_frame xtd_current_stack_frame_empty() {
    xtd_current_stack_frame result;
    result.file_name[0] = 0;
    result.file_line_number = 0;
    result.method_name[0] = 0;
    result.file_column_number  = 0;
    result.offset = XTD_CURRENT_STACK_FRAME_OFFSET_UNKNOWN;
    return result;
  }

  xtd_bool xtd_current_stack_frame_is_empty(const xtd_current_stack_frame stack_frame) {
    return stack_frame.file_name[0] == 0 && stack_frame.file_line_number == 0 && stack_frame.method_name[0] == 0 && stack_frame.file_column_number == 0 && stack_frame.offset == XTD_CURRENT_STACK_FRAME_OFFSET_UNKNOWN;
  }

  const char* xtd_current_stack_frame_to_string(const xtd_current_stack_frame value) {
    if (xtd_current_stack_frame_is_empty(value)) return "";
    return string_format("%s at offset %s in file:line:column %s:{%d}:{%d}", value.method_name[0] == 0 ? "<unknown method>" : value.method_name, value.offset == XTD_CURRENT_STACK_FRAME_OFFSET_UNKNOWN || value.file_name[0] == 0 ? "<unknown offset>" : std::to_string(value.offset).c_str(), value.file_name[0] == 0 ? "<filename unknown>" : value.file_name, value.file_line_number, value.file_column_number);
  }
  
  size_t xtd_current_stack_frame_to_string_s(const xtd_current_stack_frame value, char* string, size_t size) {
    if (xtd_current_stack_frame_is_empty(value)) return 0;
    return string_format_s(string, size, "%s at offset %s in file:line:column %s:{%d}:{%d}", value.method_name[0] == 0 ? "<unknown method>" : value.method_name, value.offset == XTD_CURRENT_STACK_FRAME_OFFSET_UNKNOWN || value.file_name[0] == 0 ? "<unknown offset>" : std::to_string(value.offset).c_str(), value.file_name[0] == 0 ? "<filename unknown>" : value.file_name, value.file_line_number, value.file_column_number);
  }
}
