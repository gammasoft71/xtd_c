extern "C" {
#include <string.h>
#include "../include/xtd_c/event_args.h"
#include "../include/xtd_c/errors.h"

  xtd_event_args xtd_event_args_empty() {
    xtd_event_args args;
    return args;
  }
  
  xtd_event_args xtd_event_args_with_user_data(xtd_handle user_data) {
    xtd_event_args args;
    args.user_data = user_data;
    return args;
  }
}
