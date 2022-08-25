/**
 @file
 @brief Contains errors definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "types.h"
#include <errno.h>

/** @name Fieds */

/** @{ */
#ifndef ENONE
/**
 @brief No error value (0).
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system errors
 */
#define ENONE ((errno_t)0)
#endif
/** @} */

/** @name Methods */

/** @{ */
const char* xtd_error_to_string(errno_t error);
size_t xtd_error_to_string_s(errno_t error, char* string, size_t size);
/** @} */
