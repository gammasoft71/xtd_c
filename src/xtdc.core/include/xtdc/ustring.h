/** @file **/
/** @brief Contains ustring methods. **/
#pragma once
#include "object.h"
#include <wchar.h>

struct xtd_ustring;
typedef struct xtd_ustring xtd_ustring;

xtd_ustring* xtd_ustring_create();
xtd_ustring* xtd_ustring_create_from_xtd_ustring(const xtd_ustring* value);
xtd_ustring* xtd_ustring_create_from_char_ptr(const char* value);
xtd_ustring* xtd_ustring_create_from_wchar_ptr(const wchar_t* value);
xtd_ustring* xtd_ustring_create_from_char16_ptr(const uint16_t* value);
xtd_ustring* xtd_ustring_create_from_char32_ptr(const uint32_t* value);
xtd_ustring* xtd_ustring_create_from_count_char(size_t count, char value);
xtd_ustring* xtd_ustring_create_from_count_wchar(size_t count, wchar_t value);
xtd_ustring* xtd_ustring_create_from_count_char16(size_t count, uint16_t value);
xtd_ustring* xtd_ustring_create_from_count_char32(size_t count, uint32_t value);

void xtd_ustring_destroy(xtd_ustring* value);

const char* xtd_ustring_get_char_ptr(const xtd_ustring* value);
