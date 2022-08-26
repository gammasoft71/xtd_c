/**
 @file
 @brief Contains trace_listener definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "../object.h"
#include "trace_options.h"

/**
 @defgroup trace_listener trace_listener
 @brief Provides the abstract base class for the listeners who monitor trace and debug output.
 @ingroup debug
 @remarks For examples of how to implement a trace_listener, see the default_trace_listener, text_writer_trace_listener and the event_log_trace_listener classes.
 @remarks You must enable tracing or debugging to use a trace listener. The syntax is compiler specific. If you use other than cmake to manage your build, refer to the documentation of your build manager.
  * To enable debugging with cmake, add the add_definitions(-DDEBUG) command line in the CMakeLists.txt of your project, or you can add #define DEBUG to the top of your file but in this case, the compiler options for debug is not activated.
  * To enable tracing with cmake, add the add_definitions(-DTRACE) command line in the CMakeLists.txt of your project, or you can add #define TRACE to the top of your file.
 @note <b>to Inheritors:</b> Inherit from this class to implement a custom listener for the debug and trace classes. At a minimum, you must implement the write and write_line methods. Additionally, you can implement the fail, close and flush methods.
 */

/**
 @brief Defines the trace_listener object.
 @par Library
 xtd_c.core
 @ingroup xtd_c trace_listener
 */
struct xtd_diagnostics_trace_listener {
  /**
   @brief Internal handle.
   @warning Internal use only
   */
  xtd_handle internal_handle;
};

/** @cond */
typedef struct xtd_diagnostics_trace_listener xtd_diagnostics_trace_listener;

#define XTD_DIAGNOSTICS_TRACE_LISTENER_TYPE \
(xtd_diagnostics_trace_listener())
/** @endcond */

/** @name Converter */

/**  @{ */
/**
 @brief Convert an xtd object to trace_listener object.
 @par Library
 xtd_c.core
 @ingroup xtd_c trace_listener
 */
#define XTD_DIAGNOSTICS_TRACE_LISTENER(object) \
(XTD_TYPE_CAST(object, XTD_DIAGNOSTICS_TRACE_LISTENER_TYPE, xtd_diagnostics_trace_listener))
/** @} */

/** @name Properties */

/** @{ */
/**
 @brief Gets the indent level.
 @return uint32_t The indent level. The default is zero.
 @remarks The IndentLevel property represents the number of times that the indent specified by the IndentSize property is applied. This property is stored on per-thread/per-request basis.
 */
uint32_t xtd_diagnostics_trace_listener_get_indent_level(xtd_diagnostics_trace_listener* listener);

/**
 @brief Sets the indent level.
 @param indent_level The indent level. The default is zero.
 @remarks The IndentLevel property represents the number of times that the indent specified by the IndentSize property is applied. This property is stored on per-thread/per-request basis.
 */
void xtd_diagnostics_trace_listener_set_indent_level(xtd_diagnostics_trace_listener* listener, uint32_t indent_level);

/**
 @brief Gets the number of spaces in an indent.
 @return uint32_t The number of spaces in an indent. The default is four spaces.
 @remarks The property is stored on per-thread/per-request basis.
 */
uint32_t xtd_diagnostics_trace_listener_get_indent_size(xtd_diagnostics_trace_listener* listener);

/**
 @brief Sets the number of spaces in an indent.
 @param int32 The number of spaces in an indent. The default is four spaces.
 @remarks The property is stored on per-thread/per-request basis.
 */
void xtd_diagnostics_trace_listener_set_indent_size(xtd_diagnostics_trace_listener* listener, uint32_t indent_size);

/**
 @brief Gets a value indicating whether the trace listener is thread safe.
 @return bool true if the trace listener is thread safe; otherwise, false. The default is false.
 @remarks The value of IsThreadSafe is used to determine whether to use a global lock when writing to the listener. If the value of IsThreadSafe is false, the global lock is used regardless of the value of UseGlobalLock. The global lock is not used only if the value of IsThreadSafe is true and the value of UseGlobalLock is false. The default behavior is to use the global lock whenever writing to the listener.
 */
bool xtd_diagnostics_trace_listener_is_thread_safe(xtd_diagnostics_trace_listener* listener);

/**
 @brief Gets or sets a name for this TraceListener.
 @return string A name for this TraceListener. The default is an empty string ("").
 @remarks The name can be used to organize and access listeners in a TraceListenerCollection collection.
 */
const char* xtd_diagnostics_trace_listener_get_name(xtd_diagnostics_trace_listener* listener);

/**
 @brief Sets a name for this TraceListener.
 @param name A name for this TraceListener. The default is an empty string ("").
 @remarks The name can be used to organize and access listeners in a TraceListenerCollection collection.
 */
void xtd_diagnostics_trace_listener_set_name(xtd_diagnostics_trace_listener* listener, const char* name);

/**
 @brief Gets the trace output options.
 @return trace_options A bitwise combination of the enumeration values. The default is None.
 @remarks The TraceOutputOptions property determines the optional content of trace output. The property can be set in the configuration file or programmatically during execution to include additional data specifically for a section of code. For example, you can set the TraceOutputOptions property for the console trace listener to TraceOptions.Callstack to add call stack information to the trace output.
 @remarks The TraceOptions enumeration is not used by the following classes and methods:
 * The EventLogTraceListener class, because it can cause a large volume of data to be written to the log.
 * The Write and WriteLine methods of the ConsoleTraceListener, DefaultTraceListener, and TextWriterTraceListener classes.
 * The Write and WriteLine methods of the TraceListener class when they are not overridden in a derived class.
 */
xtd_diagnostics_trace_options xtd_diagnostics_trace_listener_get_trace_output_options(xtd_diagnostics_trace_listener* listener);

/**
 @brief Sets the trace output options.
 @param trace_output_options A bitwise combination of the enumeration values. The default is None.
 @remarks The TraceOutputOptions property determines the optional content of trace output. The property can be set in the configuration file or programmatically during execution to include additional data specifically for a section of code. For example, you can set the TraceOutputOptions property for the console trace listener to TraceOptions.Callstack to add call stack information to the trace output.
 @remarks The TraceOptions enumeration is not used by the following classes and methods:
 * The EventLogTraceListener class, because it can cause a large volume of data to be written to the log.
 * The Write and WriteLine methods of the ConsoleTraceListener, DefaultTraceListener, and TextWriterTraceListener classes.
 * The Write and WriteLine methods of the TraceListener class when they are not overridden in a derived class.
 */
void xtd_diagnostics_trace_listener_set_trace_output_options(xtd_diagnostics_trace_listener* listener, xtd_diagnostics_trace_options trace_output_options);
/** @} */

/** @name Events */

/** @{ */
/** @} */

/** @name Methods */

/** @{ */
/** @} */
