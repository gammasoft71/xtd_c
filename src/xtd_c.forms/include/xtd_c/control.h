/**
 @file
 @brief Contains control definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
*/
#pragma once
#include <xtd_c/event_handler.h>
#include <xtd_c/object.h>
#include <xtd_c/point.h>
#include <xtd_c/size.h>

/**
 @defgroup control control
 @brief Defines the base class for controls, which are components with visual representation.
 @ingroup controls
 @remarks A Button can be clicked by using the mouse, ENTER key, or SPACEBAR if the button has focus.
 @remarks Set the accept_button or cancel_button property of a form to allow users to click a button by pressing the ENTER or ESC keys even if the button does not have focus. This gives the form the behavior of a dialog box.
 @remarks When you display a form using the show_dialog method, you can use the dialog_result property of a button to specify the return value of show_dialog.
 @remarks You can change the button's appearance. For example, to make it appear flat for a Web look, set the flat_style property to flat_style::flat. The flat_style property can also be set to flat_style::popup, which appears flat until the mouse pointer passes over the button; then the button takes on the standard Windows button appearance.
 @note If the control that has focus accepts and processes the ENTER key press, the button does not process it. For example, if a multiline text_box or another button has focus, that control processes the ENTER key press instead of the accept button.
 @par Examples
 The following code example demonstrates the use of button control.
 @include button.c
 @par Examples
 The following code example demonstrates the use of button control with bitmap.
 @include bitmap_button.c
*/

/**
 @brief Defines the base class for controls, which are components with visual representation.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
struct xtd_forms_control {
  /**
   @brief Internal handle.
   @warning Internal use only
   */
  xtd_handle internal_handle;
};

/** @cond */
typedef struct xtd_forms_control xtd_forms_control;

#define XTD_FORMS_CONTROL_TYPE \
  (xtd_forms_control())
/** @endcond */

/** @name Converter */
 
/**  @{ */
/**
 @brief Convert an xtd object to control object.
 @par Library
 xtd_c.core
 @ingroup xtd_c_forms controls control
 */
#define XTD_FORMS_CONTROL(object) \
  (XTD_TYPE_CAST(object, XTD_FORMS_CONTROL_TYPE, xtd_forms_control))
/** @} */

/** @name Creation/Destruction */
 
/**  @{ */
/**
 @brief Initializes a new instance of the xtd_forms_control with default settings.
 @return New control created.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The xtd_forms_control structure is the base structure for all controls used in a Windows Forms application. Because this class is not typically used to create an instance of the class, this constructor is typically not called directly but is instead called by a derived control.
 */
xtd_forms_control* xtd_forms_control_create(void);
/**
 @brief Destroy the instance of the specfied control
 @param value The control to delete.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
void xtd_forms_control_destroy(xtd_forms_control* value);
/** @} */

/** @name Properties */
 
/**  @{ */
/**
 @brief Gets the coordinates of the upper-left corner of the control relative to the upper-left corner of its container.
 @param control The control.
 @return The point that represents the upper-left corner of the control relative to the upper-left corner of its container.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_drawing_point xtd_forms_control_get_location(xtd_forms_control* control);
/**
 @brief Sets the coordinates of the upper-left corner of the control relative to the upper-left corner of its container.
 @param control The control.
 @param location The point that represents the upper-left corner of the control relative to the upper-left corner of its container.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
void xtd_forms_control_set_location(xtd_forms_control* control, xtd_drawing_point point);

xtd_forms_control* xtd_forms_control_get_parent(xtd_forms_control* control);
void xtd_forms_control_set_parent(xtd_forms_control* control, xtd_forms_control* parent);
void xtd_forms_control_reset_parent(xtd_forms_control* control);

const char* xtd_forms_control_get_text(xtd_forms_control* control);
size_t xtd_forms_control_get_text_s(xtd_forms_control* control, char* text, size_t size);
void xtd_forms_control_set_text(xtd_forms_control* control, const char* text);
/** @} */

/** @name Events */
 
/** @{ */
void xtd_forms_control_set_click_event(xtd_forms_control* control, xtd_event_handler e, xtd_handle user_data);
void xtd_forms_control_reset_click_event(xtd_forms_control* control);
/** @} */

/** @name Methods */
 
/**  @{ */
/** @} */
