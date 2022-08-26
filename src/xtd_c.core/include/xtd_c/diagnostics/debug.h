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
  xtd_current_stack_frame current_stack_frame;
  bool condition;
  const char* message;
} __assert_args__;
bool __var_xtd_debug_should_aborted__(__assert_args__ args);
/** @endcond */

/**
 @brief Checks for a condition; if the condition is false, displays a message box that shows the call stack.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug
 @param condition The conditional expression to evaluate. If the condition is true, a failure message is not sent and the message box is not displayed.
 @param message (optional) The message to send to the xtd_diagnostics_debug_listeners collection.
 @par Examples
 The following example shows how to use #assert_ macro.
 @include assert_.c
 @par Examples
 The following example shows how to use #assert_ macro with message.
 @include assert_with_message.c
 */
#define assert_(...) \
  if (__var_xtd_debug_should_aborted__((__assert_args__){csf_, __VA_ARGS__})) debug_break_()

/**
 @brief Checks for a condition; if the condition is false, displays a message box that shows the call stack.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug
 @param condition The conditional expression to evaluate. If the condition is true, a failure message is not sent and the message box is not displayed.
 @param message (optional) The message to send to the xtd_diagnostics_debug_listeners collection.
 @par Examples
 The following example shows how to use #cassert_ macro.
 @include assert_.c
 @par Examples
 The following example shows how to use #cassert_ macro with message.
 @include assert_with_message.c
 */
#define cassert_(...) \
  assert_(__VA_ARGS__)
