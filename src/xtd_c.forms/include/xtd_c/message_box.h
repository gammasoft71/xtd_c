/**
 @file
 @brief Contains message box definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "control.h"
#include "dialog_result.h"
#include "message_box_buttons.h"
#include "message_box_default_button.h"
#include "message_box_icon.h"
#include "message_box_options.h"

xtd_dialog_result xtd_message_box_show(xtd_control* owner, const char* text, const char* caption, xtd_message_box_buttons buttons, xtd_message_box_icon icon, xtd_message_box_default_button default_button, xtd_message_box_options options, xtd_bool display_help_button);
