/**
 @file
 @brief Contains types definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

/**
 @brief Represent a boolean.
 @ingroup xtd_core types
 */
typedef char xtd_bool;
/**
 @brief Represent a false value for a boolean.
 @ingroup xtd_core types
 */
const char xtd_false = 0;
/**
 @brief Represent a true value for a boolean.
 @ingroup xtd_core types
 */
const char xtd_true = !xtd_false;

/**
 @brief Represent a pointer or a handle.
 @ingroup xtd_core types
 */
typedef void* xtd_handle;
