/**
 @file
 @brief Contains xtd::forms::control_appearance enum class.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

/**
 @brief Specifies the appearance of a control.
 @par Namespace
 xtd::forms
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms
 */
enum xtd_forms_control_appearance {
  /** @brief The appearance of the control is determined by current theme of xtd. */
  xtd_forms_control_appearance_standard = 0,
  /** @brief The appearance of the control is determined by the user's operating system. */
  xtd_forms_control_appearance_system,
};

/** @cond */
typedef enum xtd_forms_control_appearance xtd_forms_control_appearance;
/** @endcond */
