/**
 @file
 @brief Contains debugger definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "../types.h"
#include <stdlib.h>

/**
 @defgroup debugger debugger
 @brief debugger definition.
 @ingroup debug
 */

/** @name Methods */

/**  @{ */
/**
 @brief Gets a value that indicates whether a debugger is attached to the process.
 @return true if a debugger is attached; otherwise, false.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugger
 */
bool xtd_debugger_is_attached();

/**
 @brief Signals a breakpoint to an attached debugger.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugger
 @par Examples
 The following code example demonstrates how to stop the debugger at the call to write_line.
 @code
 debugger_break_();
 xtd_console_write_line("Hello, world.");
 @endcode
 */
void xtd_debugger_debug_break();

/**
 @brief Checks to see if logging is enabled by an attached debugger.
 @return true if a debugger is attached and logging is enabled; otherwise, false.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugger
 */
bool xtd_debugger_is_logging();

/**
 @brief Launches and attaches a debugger to the process.
 @return true if the startup is successful or if the debugger is already attached; otherwise, false.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugger
 @remarks If a debugger is already attached, nothing happens.
 @remarks Debugger launch is only supported on Windows. On Unix and macOS operating systems, the method returns true without launching a debugger.
 */
bool xtd_debugger_launch();
/**
 @brief Posts a message for the attached debugger.
 @param level A description of the importance of the message.
 @param category The category of the message.
 @param message The message to show.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug debugger
 @remarks If there is no debugger attached, this method has no effect. The debugger might or might not report the message, depending upon its settings.
 @note The category parameter is limited to 256 characters. std::string longer than 256 characters are truncated.
 */
void xtd_debugger_log(int32_t level, const char* category, const char* message);
/** @} */

#if defined(_MSC_VER)
/**
 @brief Signals a breakpoint to an attached debugger.
 @par Library
 xtdc.core
 @ingroup xtdc_core debug
 @par Examples
 The following code example demonstrates how to stop the debugger at the call to xtd_console_write_line.
 @code
 debug_break_();
 xtd_console_write_line("Hello, world.");
 @endcode
 */
#define debug_break_() \
  if (xtd_debugger_launch()) __debugbreak()
#else
/**
 @brief Signals a breakpoint to an attached debugger.
 @par Library
 xtd.core
 @ingroup xtdc_core debug
 @par Examples
 The following code example demonstrates how to stop the debugger at the call to xtd_console_write_line.
 @code
 debug_break_();
 xtd_console_write_line("Hello, world.");
 @endcode
 */
#define debug_break_() \
  if (xtd_debugger_launch()) abort()
#endif
