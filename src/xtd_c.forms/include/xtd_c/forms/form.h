/**
 @file
 @brief Contains form definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
*/
#pragma once
#include "control.h"

/**
 @defgroup form form
 @brief Represents a window or dialog box that makes up an application's user interface.
 @ingroup forms
 @remarks A form is a representation of any window displayed in your application. The Form class can be used to create standard, tool, borderless, and floating windows. You can also use the form class to create modal windows such as a dialog box. A special kind of form, the multiple-document interface (MDI) form, can contain other forms called MDI child forms. An MDI form is created by setting the is_mdi_container property to true. MDI child forms are created by setting the mdi_parent property to the MDI parent form that will contain the child form.
 @remarks Using the properties available in the form class, you can determine the appearance, size, color, and window management features of the window or dialog box you are creating. The text property allows you to specify the caption of the window in the title bar. The size and desktop_location properties allow you to define the size and position of the window when it is displayed. You can use the fore_color color property to change the default foreground color of all controls placed on the form. The form_border_style, minimize_box, and maximize_box properties allow you to control whether the form can be minimized, maximized, or resized at run time.
 @remarks In addition to properties, you can use the methods of the class to manipulate a form. For example, you can use the show_dialog method to show a form as a modal dialog box. You can use the set_desktop_location method to position the form on the desktop.
 @par Examples
 The following code example demonstrates the use of form control.
 @include form.c
 */

struct xtd_forms_form {
  /**
   @brief Internal handle.
   @warning Internal use only
   */
  xtd_handle internal_handle;
};

/** @cond */
typedef struct xtd_forms_form xtd_forms_form;

#define XTD_FORMS_FORM_TYPE \
  (xtd_forms_form())
/** @endcond */

/** @name Converter */
 
/**  @{ */
/**
 @brief Convert an xtd object to form object.
 @par Library
 xtd_c.core
 @ingroup xtd_c_forms controls form
 */
#define XTD_FORMS_FORM(object) \
  (XTD_TYPE_CAST(object, XTD_FORMS_FORM_TYPE, xtd_forms_form))
/** @} */

xtd_forms_control* xtd_forms_form_create(void);
void xtd_forms_form_destroy(xtd_forms_form* value);
