#include <xtd/system_exception.h>
#include "../include/xtd_c/privates/__ustring_helper__.h"

using namespace xtd;

namespace {
  ustring errno_to_string(errno_t error) noexcept {
    if (error == 0) return "No error";
    ustring message = std::make_error_code(static_cast<std::errc>(error)).message();
    int32_t error_number = 0;
    if (ustring::is_empty(message) || message == "unspecified generic_category error"  || try_parse(message, error_number) == true) return ustring::format("Unspecified error : {}", error);
    return message;
  }
}

extern "C" {
  #include "../include/xtd_c/errors.h"

  const char* xtd_error_to_string(errno_t error) {
    return to_c_string(errno_to_string(error));
  }
  
  size_t xtd_error_to_string_s(errno_t error, char* string, size_t size) {
    return to_c_string_s(string, size, errno_to_string(error));
  }
}
