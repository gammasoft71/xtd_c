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

/**
 @brief Displays a message box in front of the specified window with the specified text, caption, buttons, icon, default button, options, and Help button.
 @param owner An xtd_forms_forms_control that will own the modal dialog box.
 @param text The text to display in the message box.
 @param caption The text to display in the title bar of the message box.
 @param buttons One of the xtd_forms_message_box_buttons values that specifies which buttons to display in the message box.
 @param icon One of the xtd_forms_message_box_icon values that specifies which icon to display in the message box.
 @param default_button One of the xtd_forms_message_box_default_button values that specifies the default button for the message box.
 @param options One of the xtd_forms_message_box_options values that specifies which display and association options will be used for the message box. You may pass in 0 if you wish to use the defaults.
 @param display_help_button true to show the Help button; otherwise, false. The default is false.
 @return One of the xtd_forms_forms_dialog_result values.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms dialogs message_box
 */
xtd_forms_forms_dialog_result xtd_forms_message_box_show(xtd_forms_forms_control* owner, const char* text, const char* caption, xtd_forms_message_box_buttons buttons, xtd_forms_message_box_icon icon, xtd_forms_message_box_default_button default_button, xtd_forms_message_box_options options, xtd_bool display_help_button);
