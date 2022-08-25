#include <xtd/object.h>
#include <xtd/ustring.h>
#include "../include/xtd_c/privates/__ustring_helper__.h"

using namespace xtd;

extern "C" {
#include <string.h>
#include "../include/xtd_c/object.h"

  xtd_object* xtd_object_create(void) {
    return reinterpret_cast<xtd_object*>(new object());
  }
  
  void xtd_object_destroy(xtd_object* value) {
    delete reinterpret_cast<object*>(value);
  }
  
  const char* xtd_object_to_string(const xtd_object* value) {
    return to_c_string(reinterpret_cast<const object*>(value)->to_string());
  }
  
  size_t xtd_object_to_string_s(const xtd_object* value, char* string, size_t size) {
    return to_c_string_s(reinterpret_cast<const object*>(value)->to_string(), string, size);
  }
}
