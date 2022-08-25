/**
 @file
 @brief Contains message box option definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

enum xtd_forms_message_box_options {
  xtd_forms_message_box_options_none = 0L,
  xtd_forms_message_box_options_default_desktop_only = 0x00020000L,
  xtd_forms_message_box_options_right_align = 0x00080000L,
  xtd_forms_message_box_options_rtl_reading = 0x00100000L,
  xtd_forms_message_box_options_service_notification = 0x00200000L
};

/** @cond */
typedef enum xtd_forms_message_box_options xtd_forms_message_box_options;
/** @endcond */
