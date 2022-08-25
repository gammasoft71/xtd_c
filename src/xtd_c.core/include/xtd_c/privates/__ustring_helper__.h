#include <xtd/ustring.h>

#define __C_STRING_BUFFER_SIZE__ (4096)

inline size_t to_c_string_s(const xtd::ustring& value, char* string, size_t size) {
  if (string == nullptr) return value.size() + 1;
  
  if (value.size() + 1 < size) size = value.size() + 1;
  strncpy(string, value.c_str(), size);
  string[size - 1] = 0;
  return size;
}

inline const char* to_c_string(const xtd::ustring& value) {
  thread_local static char buffer[__C_STRING_BUFFER_SIZE__];
  to_c_string_s(value, buffer, __C_STRING_BUFFER_SIZE__);
  return buffer;
}

template <typename type_t>
inline xtd::ustring* to_ustring(type_t* value) {
  return dynamic_cast<xtd::ustring*>(reinterpret_cast<xtd::object*>(value));
}

template <typename type_t>
inline const xtd::ustring* to_ustring(const type_t* value) {
  return dynamic_cast<const xtd::ustring*>(reinterpret_cast<const xtd::object*>(value));
}

inline const char* string_format(const char* format, ...) {
  thread_local static char buffer[__C_STRING_BUFFER_SIZE__];
  va_list args;
  va_start(args, format);
  vsnprintf(buffer, __C_STRING_BUFFER_SIZE__, format, args);
  va_end(args);
  return buffer;
}

inline size_t string_format_s(char* string, size_t size, const char* format, ...) {
  va_list args;
  va_start(args, format);
  size_t result = 0;
  if (string == nullptr) result =  vsnprintf(nullptr, 0, format, args) + 1;
  else result = vsnprintf(string, size, format, args);
  va_end(args);
  return result;
}
