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
void __xtd_debug_write__(const char* message, const char* category);
void __xtd_debug_write_if__(bool condition, const char* message, const char* category);
void __xtd_debug_write_line__(const char* message, const char* category);
void __xtd_debug_write_line_if__(bool condition, const char* message, const char* category);
/** @endcond */

/**
 @brief Writes a category name and message to the trace listeners in the listeners collection.
 @param message A message to write.
 @param category A category name used to organize the output. If the value is NULL, this is equivalent to no category.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugobj
 @remarks By default, the output is written to an instance of default_trace_listener.
 @remarks Use the category parameter to group output messages.
 @remarks This method calls the write method of the trace listener.
 */
inline_ void xtd_debug_write(const char* message, const char* category) {
#if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
  __xtd_debug_write__(message, category);
#endif
}

/**
 @brief Writes a category name and message to the trace listeners in the Listeners collection if a condition is true.
 @param condition true to cause a message to be written; otherwise, false.
 @param message A message to write.
 @param category A category name used to organize the output. If the value is NULL, this is equivalent to no category.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugobj
 @remarks By default, the output is written to an instance of default_trace_listener.
 @remarks This method calls the write method of the trace listener.
 */
inline_ void xtd_debug_write_if(bool condition, const char* message, const char* category) {
#if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
  __xtd_debug_write_if__(condition, message, category);
#endif
}

/**
 @brief Writes a category name and message followed by a line terminator to the trace listeners in the listeners collection.
 @param message A message to write.
 @param category A category name used to organize the output. If the value is NULL, this is equivalent to no category.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugobj
 @remarks By default, the output is written to an instance of default_trace_listener.
 @remarks Use the category parameter to group output messages.
 @remarks This method calls the write method of the trace listener.
 */
inline_ void xtd_debug_write_line(const char* message, const char* category) {
#if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
  __xtd_debug_write_line__(message, category);
#endif
}

/**
 @brief Writes a category name and message followed by a line terminator to the trace listeners in the Listeners collection if a condition is true.
 @param condition true to cause a message to be written; otherwise, false.
 @param message A message to write.
 @param category A category name used to organize the output. If the value is NULL, this is equivalent to no category.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugobj
 @remarks By default, the output is written to an instance of default_trace_listener.
 @remarks This method calls the write method of the trace listener.
 */
inline_ void xtd_debug_write_line_if(bool condition, const char* message, const char* category) {
#if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
  __xtd_debug_write_line_if__(condition, message, category);
#endif
}

/**
 @brief Checks for a condition; if the condition is false, displays a message box that shows the call stack.
 @param condition The conditional expression to evaluate. If the condition is true, a failure message is not sent and the message box is not displayed.
 @param message (optional) The message to send to the xtd_diagnostics_debug_listeners collection.
 @par Examples
 The following example shows how to use #assert_ macro.
 @include assert_.c
 @par Library
 xtdc.core
 @ingroup xtdc_core debug
 @par Examples
 The following example shows how to use #assert_ macro with message.
 @include assert_with_message.c
 */
#define assert_(...) \
  if (__var_xtd_debug_should_aborted__((__assert_args__){csf_, __VA_ARGS__})) debug_break_()

/**
 @brief Checks for a condition; if the condition is false, displays a message box that shows the call stack.
 @param condition The conditional expression to evaluate. If the condition is true, a failure message is not sent and the message box is not displayed.
 @param message (optional) The message to send to the xtd_diagnostics_debug_listeners collection.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug
 @par Examples
 The following example shows how to use #cassert_ macro.
 @include assert_.c
 @par Examples
 The following example shows how to use #cassert_ macro with message.
 @include assert_with_message.c
 */
#define cassert_(...) \
  assert_(__VA_ARGS__)
