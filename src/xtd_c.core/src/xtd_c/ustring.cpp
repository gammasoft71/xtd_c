#include <xtd/object.h>
#include "../include/xtd_c/privates/__ustring_helper__.h"

extern "C" {
#include "../include/xtd_c/ustring.h"

  xtd_ustring* xtd_ustring_create(void) {
    xtd::object* result = new xtd::ustring();
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  xtd_ustring* xtd_ustring_create_from_xtd_ustringr(const xtd_ustring* value) {
    xtd::object* result = new xtd::ustring(*reinterpret_cast<const xtd::ustring*>(value));
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  xtd_ustring* xtd_ustring_create_from_char_ptr(const char* value) {
    xtd::object* result = new xtd::ustring(value);
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  xtd_ustring* xtd_ustring_create_from_wchar_ptr(const wchar* value) {
    xtd::object* result = new xtd::ustring(value);
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  xtd_ustring* xtd_ustring_create_from_char8_ptr(const char8* value) {
    xtd::object* result = new xtd::ustring(reinterpret_cast<const char8_t*>(value));
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  xtd_ustring* xtd_ustring_create_from_char16_ptr(const uint16_t* value) {
    xtd::object* result = new xtd::ustring(reinterpret_cast<const char16_t*>(value));
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  xtd_ustring* xtd_ustring_create_from_char32_ptr(const uint32_t* value) {
    xtd::object* result = new xtd::ustring(reinterpret_cast<const char32_t*>(value));
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  xtd_ustring* xtd_ustring_create_from_count_char(size_t count, char value) {
    xtd::object* result = new xtd::ustring(count, value);
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  xtd_ustring* xtd_ustring_create_from_count_wchar(size_t count, wchar_t value) {
    xtd::object* result = new xtd::ustring(count, value);
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  xtd_ustring* xtd_ustring_create_from_count_char16(size_t count, uint16_t value) {
    xtd::object* result = new xtd::ustring(count, static_cast<char16_t>(value));
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  xtd_ustring* xtd_ustring_create_from_count_char32(size_t count, uint32_t value) {
    xtd::object* result = new xtd::ustring(count, static_cast<char32_t>(value));
    return reinterpret_cast<xtd_ustring*>(result);
  }
  
  void xtd_ustring_destroy(xtd_ustring* value) {
    xtd_object_destroy(XTD_OBJECT(value));
  }
  
  const char* xtd_ustring_get_char_ptr(const xtd_ustring* value) {
    return to_ustring(value)->c_str();
  }
}
