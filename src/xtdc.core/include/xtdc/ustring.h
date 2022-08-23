/**
 @file
 @brief Contains ustring definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "object.h"
#include <wchar.h>

/**
 @brief Represents text as a sequence of UTF-8 code units.
 @par Library
 xtdc.core
 @ingroup xtdc_core system ustring
 */
struct xtd_ustring {
  /// @brief Internal handle.
  /// @warning Internal use only
  xtd_handle internal_handle;
};
typedef struct xtd_ustring xtd_ustring;

xtd_ustring* xtd_ptr_to_xtd_ustring_ptr(xtd_handle ptr);

xtd_ustring* xtd_ustring_create(void);
xtd_ustring* xtd_ustring_create_from_xtd_ustring(const xtd_ustring* value);
xtd_ustring* xtd_ustring_create_from_char_ptr(const char* value);
xtd_ustring* xtd_ustring_create_from_wchar_ptr(const wchar* value);
xtd_ustring* xtd_ustring_create_from_char8_ptr(const char8* value);
xtd_ustring* xtd_ustring_create_from_char16_ptr(const char16* value);
xtd_ustring* xtd_ustring_create_from_char32_ptr(const char32* value);
xtd_ustring* xtd_ustring_create_from_count_char(size_t count, char value);
xtd_ustring* xtd_ustring_create_from_count_wchar(size_t count, wchar_t value);
xtd_ustring* xtd_ustring_create_from_count_char16(size_t count, uint16_t value);
xtd_ustring* xtd_ustring_create_from_count_char32(size_t count, uint32_t value);

void xtd_ustring_destroy(xtd_ustring* value);

const char* xtd_ustring_get_char_ptr(const xtd_ustring* value);
