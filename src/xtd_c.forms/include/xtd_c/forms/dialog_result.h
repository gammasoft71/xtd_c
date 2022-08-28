/**
 @file
 @brief Contains dialog result definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

/**
 @brief Specifies identifiers to indicate the return value of a dialog box.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms
 @remarks The xtd_forms_button_dialog_result property and the xtd_forms_form_show_dialog method use this enumeration.
 @par Examples
 The following code example demonstrates how to display a xtd_forms_message_box_show with the options supported by this method. After verifying that a string variable, @verbatim server_name_text @endverbatim, is empty or NULL, the example displays a message box, offering the user the option to cancel the operation. If the xtd_forms_message_box_show method's return value evaluates to Yes, the form that displayed the message box is closed.
 @code
 void validate_user_entry() {
   // Checks the value of the text.
   if (server_name_text() == NULL || server_name_text()[0] == 0) {
     // Initializes the variables to pass to the xtd_forms_message_box_show method.
     const char* message = "You did not enter a server name. Cancel this operation?";
     const char* caption = "No Server Name Specified";
     xtd_forms_message_box_buttons buttons = xtd_forms_message_box_buttons_yes_no;
     xtd_forms_dialog_result result;

     // Displays the message_box.
     result = xtd_forms_message_box_show(main_form, message, caption, buttons, xtd_forms_message_box_icon_none, xtd_forms_message_box_default_button_1, xtd_forms_message_box_options_none, false);
     if (result == xtd_forms_dialog_result_yes) {
       // Closes the parent form.
       close(XTD_FORMS_FORM(main_form));
     }
   }
 }
 @endcode
 */
enum xtd_forms_dialog_result {
  /** @brief Nothing is returned from the dialog box. This means that the modal dialog continues running. */
  xtd_forms_dialog_result_none = 0,
  /** @brief The dialog box return value is OK (usually sent from a button labeled OK). */
  xtd_forms_dialog_result_ok = 1,
  /** @brief The dialog box return value is Cancel (usually sent from a button labeled Cancel). */
  xtd_forms_dialog_result_cancel = 2,
  /** @brief The dialog box return value is Abort (usually sent from a button labeled Abort). */
  xtd_forms_dialog_result_abort = 3,
  /** @brief The dialog box return value is Retry (usually sent from a button labeled Retry). */
  xtd_forms_dialog_result_retry = 4,
  /** @brief The dialog box return value is Ignore (usually sent from a button labeled Ignore). */
  xtd_forms_dialog_result_ignore = 5,
  /** @brief The dialog box return value is Yes (usually sent from a button labeled Yes). */
  xtd_forms_dialog_result_yes = 6,
  /** @brief The dialog box return value is No (usually sent from a button labeled No). */
  xtd_forms_dialog_result_no = 7,
};

/** @cond */
typedef enum xtd_forms_dialog_result xtd_forms_dialog_result;
/** @endcond */
