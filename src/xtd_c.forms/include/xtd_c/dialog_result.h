/**
 @file
 @brief Contains dialog result definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

enum xtd_forms_dialog_result {
  xtd_forms_dialog_result_none = 0,
  xtd_forms_dialog_result_ok = 1,
  xtd_forms_dialog_result_cancel = 2,
  xtd_forms_dialog_result_abort = 3,
  xtd_forms_dialog_result_retry = 4,
  xtd_forms_dialog_result_ignore = 5,
  xtd_forms_dialog_result_yes = 6,
  xtd_forms_dialog_result_no = 7,
};
typedef enum xtd_forms_dialog_result xtd_forms_dialog_result;
