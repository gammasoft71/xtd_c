/**
 @file
 @brief Contains debug definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "../types.h"
#include "current_stack_frame.h"
#include "debugger.h"

/**
 @defgroup debugobj debug
 @brief Provides a set of methods and properties that help you debug the execution of your code.
 @ingroup debug
 @remarks You can use the properties and methods in the xtd_diagnostics_debug to instrument release builds. Instrumentation allows you to monitor the health of your application running in real-life settings. Tracing helps you isolate problems and fix them without disturbing a running system.
 @remarks This class provides methods to display an assert dialog box, and to emit an assertion that will always fail. This class provides write methods in the following variations: xtd_diagnostics_debug_write, xtd_diagnostics_debug_write_line, xtd_diagnostics_debug_write_if, and xtd_diagnostics_debug_write_line_if.
 @remarks The xtd_boolean_switch and xtd_trace_switch classes provide means to dynamically control the tracing output. You can modify the values of these switches without recompiling your application. For information on using the configuration file to set a switch, see the xtd_switch class and the xtd_trace_switches topic.
 @remarks You can customize the tracing output's target by adding xtd_trace_listener instances to or removing instances from the xtd_diagnostics_debug_listeners collection. The xtd_diagnostics_debug_listeners collection is shared by both the xtd_diagnostics_debug and the xtd_trace; adding a trace listener to either class adds the listener to both. By default, trace output is emitted using the xtd_default_trace_listener class.
 @note Adding a trace listener to the xtd_diagnostics_debug_listeners collection can cause an exception to be thrown while tracing, if a resource used by the trace listener is not available. The conditions and the exception thrown depend on the trace listener and cannot be enumerated in this topic. It may be useful to place calls to the debug methods in try/catch blocks to detect and handle any exceptions from trace listeners.
 @remarks You can modify the level of indentation using the xtd_diagnostics_debug_indent method or the xtd_diagnostics_debug_indent_level property. To modify the indent spacing, use the xtd_diagnostics_debug_indent_size property. You can specify whether to automatically flush the output buffer after each write by setting the xtd_diagnostics_debug_auto_flush property to true.
 @remarks The debug class provides properties to get or set the level of indent, the xtd_diagnostics_debug_indent_size, and whether to xtd_diagnostics_debug_auto_flush after each write.
 @remarks You must enable debug mode to use a trace listener. The syntax is compiler specific. If you use other than cmake to manage your build, refer to the documentation of your build manager.
 * To enable debug mode with cmake, add the add_definitions(-DDEBUG) command line in the CMakeLists.txt of your project, or you can add #define DEBUG to the top of your file.
 @remarks To activate your code if DEBUG is defined, you must enclose calls to the methods of Debug in an #if defined(DEBUG) ... #endif block, and add the /DDEBUG option to the compiler command line or add #define DEBUG to the file.
 @par Examples
 The following example uses debug to indicate the beginning and the end of a program's execution. The example also uses the debug::indent and debug::unindent methods to distinguish the tracing output.
 @include debug.c
 */

/** @cond */
typedef struct {
  xtd_diagnostics_current_stack_frame current_stack_frame;
  bool condition;
  const char* message;
} __assert_args__;

bool __var_xtd_diagnostics_debug_should_aborted__(__assert_args__ args);
void __xtd_diagnostics_debug_write__(const char* message, const char* category);
void __xtd_diagnostics_debug_write_if__(bool condition, const char* message, const char* category);
void __xtd_diagnostics_debug_write_line__(const char* message, const char* category);
void __xtd_diagnostics_debug_write_line_if__(bool condition, const char* message, const char* category);
/** @endcond */

/** @name Properties */

/**  @{ */
/**
 @brief Gets whether xtd_diagnostics_debug_flush should be called on the xtd_diagnostics_debug_Listeners after every write.
 @return true if xtd_diagnostics_debug_flush is called on the xtd_diagnostics_debug_listeners after every write; otherwise, false.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugobj
 @remarks The default is false.
 @remarks Flushing the stream will not flush its underlying encoder unless you explicitly call xtd_diagnostics_debug_flush or xtd_diagnostics_debug_close. Setting xtd_diagnostics_debug_auto_flush to true means that data will be flushed from the buffer to the stream.
 */
bool xtd_diagnostics_debug_get_auto_flush();
/**
 @brief Sets whether xtd_diagnostics_debug_flush should be called on the xtd_diagnostics_debug_Listeners after every write.
 @param auto_flush true if xtd_diagnostics_debug_flush is called on the xtd_diagnostics_debug_listeners after every write; otherwise, false.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugobj
 @remarks The default is false.
 @remarks Flushing the stream will not flush its underlying encoder unless you explicitly call xtd_diagnostics_debug_flush or xtd_diagnostics_debug_close. Setting xtd_diagnostics_debug_auto_flush to true means that data will be flushed from the buffer to the stream.
 */
void xtd_diagnostics_debug_set_auto_flush(bool value);
/** @} */

/** @name Methods */

/**  @{ */
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
inline_ void xtd_diagnostics_debug_write(const char* message, const char* category) {
#if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
  __xtd_diagnostics_debug_write__(message, category);
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
inline_ void xtd_diagnostics_debug_write_if(bool condition, const char* message, const char* category) {
#if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
  __xtd_diagnostics_debug_write_if__(condition, message, category);
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
inline_ void xtd_diagnostics_debug_write_line(const char* message, const char* category) {
#if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
  __xtd_diagnostics_debug_write_line__(message, category);
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
inline_ void xtd_diagnostics_debug_write_line_if(bool condition, const char* message, const char* category) {
#if !defined(NDEBUG) || defined(DEBUG) || defined(TRACE)
  __xtd_diagnostics_debug_write_line_if__(condition, message, category);
#endif
}
/** @} */

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
  if (__var_xtd_diagnostics_debug_should_aborted__((__assert_args__){csf_, __VA_ARGS__})) debug_break_()

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
