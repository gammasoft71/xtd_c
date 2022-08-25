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
 @brief Defines the base class for controls, which are components with visual representation.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
struct xtd_control {
  /// @brief Internal handle.
  /// @warning Internal use only
  xtd_handle internal_handle;
};
typedef struct xtd_control xtd_control;

/**
 @name Creation/Destruction
 
 @{
 */


/**
 @brief Initializes a new instance of the xtd_control with default settings.
 @return New control created.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The xtd_control structure is the base structure for all controls used in a Windows Forms application. Because this class is not typically used to create an instance of the class, this constructor is typically not called directly but is instead called by a derived control.
 */
xtd_control* xtd_control_create(void);
/**
 @brief Destroy the instance of the specfied control
 @param value The control to delete.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
void xtd_control_destroy(xtd_control* value);

/**
 @}
 */

/**
 @name Properties
 
 @{
 */

/**
 @brief Gets the coordinates of the upper-left corner of the control relative to the upper-left corner of its container.
 @param control The control.
 @return The point that represents the upper-left corner of the control relative to the upper-left corner of its container.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_point xtd_control_get_location(xtd_control* control);
/**
 @brief Sets the coordinates of the upper-left corner of the control relative to the upper-left corner of its container.
 @param control The control.
 @param location The point that represents the upper-left corner of the control relative to the upper-left corner of its container.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
void xtd_control_set_location(xtd_control* control, xtd_point point);

xtd_control* xtd_control_get_parent(xtd_control* control);
void xtd_control_set_parent(xtd_control* control, xtd_control* parent);
void xtd_control_reset_parent(xtd_control* control);

size_t xtd_control_get_text(xtd_control* control, char* text, size_t size);
void xtd_control_set_text(xtd_control* control, const char* text);

/**
 @}
 */

/**
 @name Events
 
 @{
 */

void xtd_control_set_click_event(xtd_control* control, xtd_event_handler e, xtd_handle user_data);
void xtd_control_reset_click_event(xtd_control* control);

/**
 @}
 */

/**
 @name Methods
 
 @{
 */

xtd_control* xtd_ptr_to_xtd_control_ptr(xtd_handle ptr);

/**
 @}
 */
