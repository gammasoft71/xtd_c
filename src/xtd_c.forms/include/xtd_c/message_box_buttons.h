/**
 @file
 @brief Contains message box buttons definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

enum xtd_message_box_buttons {
  xtd_message_box_buttons_ok = 0,
  xtd_message_box_buttons_ok_cancel = 1,
  xtd_message_box_buttons_abort_retry_ignore = 2,
  xtd_message_box_buttons_yes_no_cancel = 3,
  xtd_message_box_buttons_yes_no = 4,
  xtd_message_box_buttons_retry_ignore = 5,
};
typedef enum xtd_message_box_buttons xtd_message_box_buttons;
