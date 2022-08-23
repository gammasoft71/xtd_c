/**
 @file
 @brief Contains message box option definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

enum xtd_message_box_options {
  xtd_message_box_options_default_desktop_only = 0x00020000L,
  xtd_message_box_options_right_align = 0x00080000L,
  xtd_message_box_options_rtl_reading = 0x00100000L,
  xtd_message_box_options_service_notification = 0x00200000L
};
typedef enum xtd_message_box_options xtd_message_box_options;
