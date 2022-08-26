#include <xtd/diagnostics/debugger.h>

extern "C" {
#undef debug_break_
#include "../include/xtd_c/diagnostics/debugger.h"

  using namespace xtd;
  using namespace xtd::diagnostics;
  
  bool xtd_diagnostics_debugger_is_attached() {
    return debugger::is_attached();
  }
  
  void xtd_diagnostics_debugger_debug_break() {
    debugger::debug_break();
  }
  
  bool xtd_diagnostics_debugger_is_logging() {
    return debugger::is_logging();
  }
  
  bool xtd_diagnostics_debugger_launch() {
    return debugger::launch();
  }
  
  void xtd_diagnostics_debugger_log(int32_t level, const char* category, const char* message) {
    debugger::log(level, category == nullptr ? "" : category, message == nullptr ? "" : message);
  }
}
