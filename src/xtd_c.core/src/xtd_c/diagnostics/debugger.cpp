#include <xtd/diagnostics/debugger.h>

extern "C" {
#undef debug_break_
#include "../include/xtd_c/diagnostics/debugger.h"

  using namespace xtd;
  using namespace xtd::diagnostics;
  
  bool xtd_debugger_launch() {
    return debugger::launch();
  }
}
