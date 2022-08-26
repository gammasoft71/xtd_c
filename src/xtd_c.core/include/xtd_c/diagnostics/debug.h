/**
 @file
 @brief Contains debug definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "../types.h"
#include "current_stack_frame.h"
#include "debugger.h"

/** @cond */
typedef struct {
  bool condition;
  const char* message;
} __assert_args__;
bool __var_xtd_debug_should_aborted__(xtd_current_stack_frame current_stack_frame, __assert_args__ args);
/** @endcond */

#define assert_(...) \
  if (__var_xtd_debug_should_aborted__(csf_, (__assert_args__){__VA_ARGS__})) debug_break_()

