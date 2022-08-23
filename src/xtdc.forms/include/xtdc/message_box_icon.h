/**
 @file
 @brief Contains message box icon definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

enum xtd_message_box_icon {
  xtd_message_box_icon_none = 0,
  xtd_message_box_icon_hand = 0x00000010L,
  xtd_message_box_icon_stop = 0x00000010L,
  xtd_message_box_icon_error = 0x00000010L,
  xtd_message_box_icon_question = 0x00000020L,
  xtd_message_box_icon_exclamation = 0x00000030L,
  xtd_message_box_icon_warning = 0x00000030L,
  xtd_message_box_icon_asterisk = 0x00000040L,
  xtd_message_box_icon_information = 0x00000040L,
};
typedef enum xtd_message_box_icon xtd_message_box_icon;
