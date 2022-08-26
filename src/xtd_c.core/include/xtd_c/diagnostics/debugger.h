/**
 @file
 @brief Contains debugger definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "../types.h"
#include <stdlib.h>

/**
 @brief Launches and attaches a debugger to the process.
 @return true if the startup is successful or if the debugger is already attached; otherwise, false.
 @remarks If a debugger is already attached, nothing happens.
 @remarks Debugger launch is only supported on Windows. On Unix and macOS operating systems, the method returns true without launching a debugger.
 */
bool xtd_debugger_launch();

#if defined(_MSC_VER)
/**
 @brief Signals a breakpoint to an attached debugger.
 @par Library
 xtd.core
 @ingroup xtd_core debug
 @par Examples
 The following code example demonstrates how to stop the debugger at the call to write_line.
 @code
 debug_break_();
 console::write_line("Hello, world.");
 @endcode
 */
#define debug_break_() \
  if (xtd_debugger_launch()) __debugbreak()
#else
/**
 @brief Signals a breakpoint to an attached debugger.
 @par Library
 xtd.core
 @ingroup xtd_core debug
 @par Examples
 The following code example demonstrates how to stop the debugger at the call to write_line.
 @code
 debug_break_();
 console::write_line("Hello, world.");
 @endcode
 */
#define debug_break_() \
  if (xtd_debugger_launch()) abort()
#endif
