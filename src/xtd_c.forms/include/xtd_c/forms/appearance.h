/**
 @file
 @brief Contains xtd_forms_appearance enum class.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

/**
 @brief Specifies the appearance of a control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms
 @remarks Use the members of this enumeration in controls that provide the xtd_forms_control_set_appearance property to set its value.
*/
enum xtd_forms_appearance {
  /** @brief The default appearance defined by the control class. */
  xtd_forms_appearance_normal = 0,
  /** @brief The appearance of a button. */
  xtd_forms_appearance_button = 1,
  /** @brief The appearance of a switch button. */
  xtd_forms_appearance_switch_button = 2,
};

/** @cond */
typedef enum xtd_forms_appearance xtd_forms_appearance;
/** @endcond */
