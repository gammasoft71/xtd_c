/**
 @file
 @brief Contains types definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

/** @cond */
#ifdef NDEBUG
/** @todo Add check current type with global type in debug mode... */
#define __XTD_CHECK_TYPE_CAST__(object, global_type, current_type) \
  ((current_type*)object)
#else
#define __XTD_CHECK_TYPE_CAST__(object, global_type, current_type) \
  ((current_type*)object)
#endif

#define XTD_TYPE_CAST(object, global_type, current_type) \
  __XTD_CHECK_TYPE_CAST__(object, global_type, current_type)

typedef uint8_t byte_t;
typedef char char_t;
typedef long double decimal_t;
typedef int8_t sbyte_t;
typedef float single_t;
typedef unsigned char uchar_t;
typedef unsigned short ushort_t;
typedef unsigned long ulong_t;

#if defined(__linux__) && defined(_LP64)
typedef long long int llong_t;
typedef unsigned long long int ullong_t;
#else
typedef long llong_t;
typedef unsigned long ullong_t;
#endif
/** @endcond */

/**
 @brief Represents a 8-bit unsigned integer.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef uint8_t byte;

/**
 @brief Represents a 16-bit unicode character.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef char char8;

/**
 @brief Represents a 8-bit unicode character.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef uint16_t char16;

/**
 @brief Represents a 32-bit unicode character.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef uint32_t char32;

/**
 @brief Represents a wide character.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef wchar_t wchar;

/**
 @brief Represents a decimal-precision floating-point number.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef decimal_t decimal;

/**
 @brief Represents a 16-bit signed integer.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef int16_t int16;

/**
 @brief Represents a 32-bit signed integer.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef int32_t int32;

/**
@brief Represents a 64-bit signed integer.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef int64_t int64;

/**
 @brief Represent a pointer or a handle.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef intptr_t intptr;

/**
 @brief Represent a boolean.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef char xtd_bool;
/**
 @brief Represent a false value for a boolean.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
const char xtd_false = 0;
/**
 @brief Represent a true value for a boolean.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
const char xtd_true = !xtd_false;

/**
 @brief Represent a pointer or a handle.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core types
 */
typedef void* xtd_handle;
