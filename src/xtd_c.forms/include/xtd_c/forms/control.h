/**
 @file
 @brief Contains control definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
*/
#pragma once
#include <xtd_c/event_handler.h>
#include <xtd_c/object.h>
#include <xtd_c/drawing/color.h>
#include <xtd_c/drawing/image.h>
#include <xtd_c/drawing/font.h>
#include <xtd_c/drawing/point.h>
#include <xtd_c/drawing/rectangle.h>
#include <xtd_c/drawing/size.h>
#include "anchor_styles.h"
#include "appearance.h"
#include "control_appearance.h"
#include "control_collection.h"
#include "cursor.h"
#include "dock_style.h"
#include "image_layout.h"

/** @cond */
struct xtd_forms_context_menu;
typedef struct xtd_forms_context_menu xtd_forms_context_menu;
/** @endcond */

/**
 @defgroup control control
 @brief Defines the base class for controls, which are components with visual representation.
 @ingroup controls
 @remarks To create your own control class, inherit from the xtd::forms::user_control, xtd::forms::control classes, or from the other Windows Forms provided controls.
 @remarks The xtd::forms::control class implements very basic functionality required by classes that display information to the user. It handles user input through the keyboard and pointing devices. It handles message routing and security. It defines the bounds of a control (its position and size), although it does not implement painting. It provides a window handle (hWnd).
 @remarks Windows Forms controls use ambient properties so child controls can appear like their surrounding environment. An ambient property is a control property that, if not set, is retrieved from the xtd::forms::control::parent control. If the control does not have a parent, and the property is not set, the control attempts to determine the value of the ambient property through the site property. If the control is not sited, if the site does not support ambient properties, or if the property is not set on the ambient_properties, the control uses its own default values. Typically, an ambient property represents a characteristic of a control, such as xtd::forms::control::back_color, that is communicated to a child control. For example, a button will have the same xtd::forms::control::back_color as its parent form by default. Ambient properties provided by the control class include: xtd::forms::control::cursor, xtd::forms::control::font, xtd::forms::control::back_color, xtd::forms::control::fore_color, and xtd::forms::control::right_to_left.
 @remarks The majority of the controls in the xtd::forms namespace use the underlying Windows common control as a base to build on.
 @par Examples
 The following code example demonstrates the use of control control.
 @include control.cpp
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
 @brief Gets the edges of the container to which a control is bound and determines how a control is resized with its parent.
 @return A bitwise combination of the xtd_forms::anchor_styles values. The default is xtd_forms::anchor_styles::top and xtd_forms::anchor_styles::left.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks Use the xtd_forms::control::anchor property to define how a control is automatically resized as its parent control is resized. Anchoring a control to its parent control ensures that the anchored edges remain in the same position relative to the edges of the parent control when the parent control is resized.
 @remarks You can anchor a control to one or more edges of its container. For example, if you have a form with a button whose xtd_forms::control::anchor property value is set to xtd_forms::canchor_styles::top and xtd_forms::anchor_styles::bottom, the button is stretched to maintain the anchored distance to the top and bottom edges of the form as the height of the form is increased.
 @note The xtd_forms::control::anchor and xtd_forms::control::dock properties are mutually exclusive. Only one can be set at a time, and the last one set takes precedence.
 @par Notes to Inheritors
 When overriding the xtd_forms::control::anchor property in a derived class, use the base class's xtd_forms::control::anchor property to extend the base implementation. Otherwise, you must provide all the implementation. You are not required to override both the get and set accessors of the xtd_forms::control::anchor property; you can override only one if needed.
 */
xtd_forms_anchor_styles xtd_forms_control_get_anchor(const xtd_forms_control* control);
/**
 @brief Gets the edges of the container to which a control is bound and determines how a control is resized with its parent.
 @param anchor A bitwise combination of the xtd_forms::anchor_styles values. The default is xtd_forms::anchor_styles::top and xtd_forms::anchor_styles::left.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks Use the xtd_forms::control::anchor property to define how a control is automatically resized as its parent control is resized. Anchoring a control to its parent control ensures that the anchored edges remain in the same position relative to the edges of the parent control when the parent control is resized.
 @remarks You can anchor a control to one or more edges of its container. For example, if you have a form with a button whose xtd_forms::control::anchor property value is set to xtd_forms::anchor_styles::top and xtd_forms::anchor_styles::bottom, the button is stretched to maintain the anchored distance to the top and bottom edges of the form as the height of the form is increased.
 @note The xtd_forms::control::anchor and xtd_forms::control::dock properties are mutually exclusive. Only one can be set at a time, and the last one set takes precedence.
 @warning Set the xtd_forms::control::anchor property after setting the xtd_forms::control::location and xtd_forms::control::size.
 @par Notes to Inheritors
 When overriding the anchor property in a derived class, use the base class's anchor property to extend the base implementation. Otherwise, you must provide all the implementation. You are not required to override both the get and set accessors of the anchor property; you can override only one if needed.
 */
xtd_forms_control* xtd_forms_control_set_anchor(xtd_forms_control* control, xtd_forms_anchor_styles anchor);

/**
 @brief Gets where this control is scrolled to in scroll_control_into_view(control).
 @return A xtd_xtd_drawing_point specifying the scroll location. The default is the upper-left corner of the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_drawing_point xtd_forms_control_get_auto_scroll_point(const xtd_forms_control* control);

/**
 @brief Gets a value that indicates whether the control resizes based on its contents.
 @return true if enabled; otherwise, false.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks This property is not relevant for this class.
 */
bool xtd_forms_control_get_auto_size(const xtd_forms_control* control);
/**
 @brief Sets a value that indicates whether the control resizes based on its contents.
 @param auto_size true if enabled; otherwise, false.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks This property is not relevant for this class.
 */
xtd_forms_control* xtd_forms_control_set_auto_size(xtd_forms_control* control, bool auto_size);

/**
 @brief Gets the background color for the control.
 @return A xtd_xtd_drawing_color that represents the background color of the control. The default is the value of the xtd_forms::control::default_back_color property.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The xtd_forms::control::back_color property does not support transparent colors unless the xtd_forms::control_styles::supports_transparent_back_color value of xtd_forms::control_styles is set to true.
 @remarks The xtd_forms::control::back_color property is an ambient property. An ambient property is a control property that, if not set, is retrieved from the parent control. For example, a button will have the same xtd_forms::control::back_color as its parent form by default.
 */
xtd_drawing_color xtd_forms_control_get_back_color(const xtd_forms_control* control);
/**
 @brief Sets the background color for the control.
 @param color A xtd_xtd_drawing_color that represents the background color of the control. The default is the value of the xtd_forms::control::default_back_color property.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The xtd_forms::control::back_color property does not support transparent colors unless the xtd_forms::control_styles::supports_transparent_back_color value of xtd_forms::control_styles is set to true.
 @remarks The xtd_forms::control::back_color property is an ambient property. An ambient property is a control property that, if not set, is retrieved from the parent control. For example, a button will have the same xtd_forms::control::back_color as its parent form by default.
 @par Notes to Inheritors
 When overriding the xtd_forms::control::back_color property in a derived class, use the base class's xtd_forms::control::back_color property to extend the base implementation. Otherwise, you must provide all the implementation. You are not required to override both the get and set accessors of the xtd_forms::control::back_color property; you can override only one if needed.
 */
xtd_forms_control* xtd_forms_control_set_back_color(xtd_forms_control* control, xtd_drawing_color color);
/** @cond */
xtd_forms_control* xtd_forms_control_reset_back_color();
/** @endcond */

/**
 @brief Gets the background image displayed in the control.
 @return An xtd_xtd_drawing_image that represents the image to display in the background of the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks Use the background_image property to place a graphic image onto a control.
 */
xtd_drawing_image* xtd_forms_control_get_background_image(const xtd_forms_control* control);
/**
 @brief Sets the background image displayed in the control.
 @param background_image An xtd_xtd_drawing_image that represents the image to display in the background of the control.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks Use the background_image property to place a graphic image onto a control.
 */
xtd_forms_control* xtd_forms_control_set_background_image(xtd_forms_control* control, const xtd_drawing_image* background_image);

/**
 @brief Gets the background image layout as defined in the xtd_forms::image_layout enumeration.
 @return One of the values of xtd_forms::image_layout (center , none, stretch, tile, or zoom). tile is the default value.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks Use the background_image_layout property to specify the position and behavior of an image you have placed onto a control. background_image_layout takes effect only if the background_image property is set.
 @remarks You can increase performance for large images if you set background_image_layout to something other than tile.
 */
xtd_forms_image_layout xtd_forms_control_get_background_image_layout(const xtd_forms_control* control);

/**
 @brief Sets the background image layout as defined in the xtd_forms::image_layout enumeration.
 @param background_image_layout One of the values of xtd_forms::image_layout (center , none, stretch, tile, or zoom). tile is the default value.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks Use the background_image_layout property to specify the position and behavior of an image you have placed onto a control. background_image_layout takes effect only if the background_image property is set.
 @remarks You can increase performance for large images if you set background_image_layout to something other than tile.
 */
xtd_forms_control* xtd_forms_control_set_background_image_layout(xtd_forms_control* control, xtd_forms_image_layout background_image_layout);

/**
 @brief Gets the distance, in pixels, between the bottom edge of the control and the top edge of its container's client area.
 @return An int32_t representing the distance, in pixels, between the bottom edge of the control and the top edge of its container's client area.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The value of this property is equal to the sum of the top property value, and the height property value.
 @remarks The bottom property is a read-only property. You can manipulate this property value by changing the value of the top or height properties or calling the set_bounds, set_bounds_core, update_bounds, or set_client_size_core methods.
 */
int32_t xtd_forms_control_get_bottom(const xtd_forms_control* control);

/**
 @brief Gets the size and location of the control including its nonclient elements, in pixels, relative to the parent control.
 @return A rectangle in pixels relative to the parent control that represents the size and location of the control including its nonclient elements.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The bounds of the control include the nonclient elements such as scroll bars, borders, title bars, and menus.
*/
 xtd_drawing_rectangle xtd_forms_control_get_bounds(const xtd_forms_control* control);
/**
 @brief Sets the size and location of the control including its nonclient elements, in pixels, relative to the parent control.
 @param bounds A rectangle in pixels relative to the parent control that represents the size and location of the control including its nonclient elements.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The bounds of the control include the nonclient elements such as scroll bars, borders, title bars, and menus. The Set_bounds_core method is called to set the bounds property. The bounds property is not always changed through its set method so you should override the set_bounds_core method to ensure that your code is executed when the bounds property is set.
*/
 xtd_forms_control* xtd_forms_control_set_bounds(xtd_forms_control* control, xtd_drawing_rectangle bounds);

/**
 @brief Gets a value indicating whether the control can receive focus.
 @return true if the control can receive focus; otherwise, false.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks In order for a control to receive input focus, the control must have a handle assigned to it, and the visible and enabled properties must both be set to true for both the control and all its parent controls, and the control must be a form or the control's outermost parent must be a form.
*/
 bool xtd_forms_control_get_can_focus(const xtd_forms_control* control);

/**
 @brief Gets a value indicating whether the control can be selected.
 @return true if the control can be selected; otherwise, false.s
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks This property returns true if the electable value of control_styles is set to true, is contained in another control, the control itself is visible and enabled, and all its parent controls are visible and enabled.
 @remarks The Windows Forms controls in the following list are not selectable and will return a value of false for the can_select property. controls derived from these controls are also not selectable.
 * panel
 * group_box
 * picture_box
 * progress_bar
 * splitter
 * label
 * link_label (when there is no link present in the control)
*/
 bool txd_forms_control_get_can_select(const xtd_forms_control* control);

/**
 @brief Determines if events can be raised on the control.
 @return true if the control can raise events; otherwise, false.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
*/
 bool xtd_forms_control_get_can_raise_events(const xtd_forms_control* control);

/**
 @brief Gets a value indicating whether to catch calls on the wrong thread that access a xtd_forms::contrtol::handle property when an application is being debugged.
 @return true if calls on the wrong thread are caught; otherwise, false.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks When a thread other than the creating thread of a control tries to access one of that control's methods or properties, it often leads to unpredictable results. A common invalid thread activity is a call on the wrong thread that accesses the xtd_forms::control::handle property. Set xtd_forms::control::check_for_illegal_cross_thread_calls to true to find and diagnose this thread activity more easily while debugging.
 @warning Be careful, some OS don't support cross-thread UI operations!
*/
 bool xtd_forms_control_get_check_for_illegal_cross_thread_calls();
/**
 @brief Sets a value indicating whether to catch calls on the wrong thread that access a xtd_forms::contrtol::handle property when an application is being debugged.
 @param value true if calls on the wrong thread are caught; otherwise, false.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks When a thread other than the creating thread of a control tries to access one of that control's methods or properties, it often leads to unpredictable results. A common invalid thread activity is a call on the wrong thread that accesses the xtd_forms::control::handle property. Set xtd_forms::control::check_for_illegal_cross_thread_calls to true to find and diagnose this thread activity more easily while debugging.
 @warning Be careful, some OS don't support cross-thread UI operations!
*/
 void xtd_forms_control_set_check_for_illegal_cross_thread_calls(bool value);

/**
 @brief Gets the rectangle that represents the client area of the control.
 @return A rectangle that represents the client area of the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The client area of a control is the bounds of the control, minus the nonclient elements such as scroll bars, borders, title bars, and menus.
 @remarks Because client coordinates are relative to the upper-left corner of the client area of the control, the coordinates of the upper-left corner of the rectangle returned by this property are (0,0). You can use this property to obtain the size and coordinates of the client area of the control for tasks such as drawing on the surface of the control.
*/
 xtd_drawing_rectangle xtd_forms_control_get_client_rectangle(xtd_forms_control* control);

/**
 @brief Gets the height and width of the client area of the control.
 @return A size that represents the dimensions of the client area of the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The client area of a control is the bounds of the control, minus the nonclient elements such as scroll bars, borders, title bars, and menus.
*/
 xtd_drawing_size* xtd_forms_control_get_client_size(const xtd_forms_control* control);
/**
 @brief Sets the height and width of the client area of the control.
 @param client_size A size that represents the dimensions of the client area of the control.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The client area of a control is the bounds of the control, minus the nonclient elements such as scroll bars, borders, title bars, and menus. The set_client_size_core method is called to set the client_size property. The client_size property is not always changed through its set method so you should override the set_client_size_core method to ensure that your code is executed when the client_size property is set.
*/
 xtd_forms_control* xtd_forms_control_set_client_size(xtd_forms_control* control, xtd_drawing_size client_size);

/**
 @brief Gets the name of the company or creator of the application containing the control.
 @return The company name or creator of the application containing the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
*/
 const char* xtd_forms_control_get_company_name(const xtd_forms_control* control);

/**
 @brief Gets the xtd_forms::context_menu that is displayed in the control.
 @return A xtd_forms::context_menu that represents the context menu to display in the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
*/
 xtd_forms_context_menu* xtd_forms_control_get_context_menu(const xtd_forms_control* control);
/**
 @brief Sets the xtd_forms::context_menu that is displayed in the control.
 @param value A xtd_forms::context_menu that represents the context menu to display in the control.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
*/
 xtd_forms_control* xtd_forms_control_set_context_menu(xtd_forms_control* control, xtd_forms_context_menu* value);
/**
 @brief Sets the xtd_forms::context_menu that is displayed in the control.
 @param value A xtd_forms::context_menu that represents the context menu to display in the control.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
*/
 xtd_forms_control* xtd_forms_control_reset_context_menu(xtd_forms_control* control);

/**
 @brief Gets control appearance.
 @return One of xtd_forms::control_appearance values. THe default is xtd_forms::control_appearance::standard.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @Remarks The control appearance determine how the control is drawed :
 * xtd_control::control_appearance::standard : The appearance of the control is determined by current theme of xtd.
 * xtd_control::control_appearance::system : The appearance of the control is determined by the user's operating system.
*/
 xtd_forms_control_appearance xtd_forms_control_get_control_appearance(const xtd_forms_control* control);
/**
 @brief Sets control appearance.
 @param value One of xtd_forms::control_appearance values. THe default is xtd_forms::control_appearance::standard.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @Remarks The control appearance determine how the control is drawed :
 * xtd_control::control_appearance::standard : The appearance of the control is determined by current theme of xtd.
 * xtd_control::control_appearance::system : The appearance of the control is determined by the user's operating system.
*/
 xtd_forms_control* xtd_forms_control_set_control_appearance(xtd_forms_control* control, xtd_forms_control_appearance value);

/**
 @brief Gets the collection of controls contained within the control.
 @return A control::control_collection representing the collection of controls contained within the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks A control can act as a parent to a collection of controls. For example, when several controls are added to a form, each of the controls is a member of the control::control_collection assigned to the controls property of the form, which is derived from the control class.
 @remarks You can manipulate the controls in the control::control_collection assigned to the controls property by using the methods available in the control::control_collection class.
 @remarks When adding several controls to a parent control, it is recommended that you call the suspend_layout method before initializing the controls to be added. After adding the controls to the parent control, call the resume_layout method. Doing so will increase the performance of applications with many controls.
 @remarks Use the controls property to iterate through all controls of a form, including nested controls. Use the get_next_control method to retrieve the previous or next child control in the tab order. Use the active_control property to get or set the active control of a container control.
*/
 xtd_forms_control_collection* xtd_forms_control_get_controls(xtd_forms_control* control);

/**
 @brief Gets a value indicating whether the control has been created.
 @return true if the control has been created; otherwise, false.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks The created property returns true if the control was successfully created even though the control's handle might not have been created or recreated yet.
*/
 bool xtd_forms_control_get_created(const xtd_forms_control* control);

/**
 @brief Gets the cursor that is displayed when the mouse pointer is over the control.
 @return A xtd_forms::cursor that represents the cursor to display when the mouse pointer is over the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
*/
 xtd_forms_cursor* xtd_forms_control_get_cursor(const xtd_forms_control* control);
/**
 @brief Sets the cursor that is displayed when the mouse pointer is over the control.
 @param cursor A xtd_forms::cursor that represents the cursor to display when the mouse pointer is over the control.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
*/
 xtd_forms_control* xtd_forms_control_set_cursor(xtd_forms_control* control, xtd_forms_cursor* cursor);
/** @cond */
xtd_forms_control* xtd_forms_control_reset_cursor(xtd_forms_control* control);
/** @endcond */

/**
 @brief Gets the rectangle that represents the display area of the control.
 @return A rectangle that represents the display area of the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_drawing_rectangle xtd_forms_control_get_display_rectangle(xtd_forms_control* control);

/**
 @brief Gets which control borders are docked to its parent control and determines how a control is resized with its parent.
 @return One of the xtd_forms::dock_style values. The default is xtd_forms::dock_style::none.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks Use the xtd_forms::control::dock property to define how a control is automatically resized as its parent control is resized. For example, setting xtd_forms::control::dock to xtd_forms::dock_style::left causes the control to align itself with the left edges of its parent control and to resize as the parent control is resized. Controls are docked in their Z-order, which is the visual layering of controls on a form along the form's Z-axis (depth).
 @remarks A control can be docked to one edge of its parent container or can be docked to all edges and fill the parent container.
 @remarks Setting the xtd_forms::control::margin property on a docked control has no effect on the distance of the control from the edges of its container.
 @note The xtd_forms::control::anchor and xtd_forms::control::dock properties are mutually exclusive. Only one can be set at a time, and the last one set takes precedence.
 @par Notes to Inheritors
 When overriding the xtd_forms::control::dock property in a derived class, use the base class's xtd_forms::control::dock property to extend the base implementation. Otherwise, you must provide all the implementation. You are not required to override both the get and set methods of the xtd_forms::control::dock property; you can override only one if needed.
 */
xtd_forms_dock_style xtd_forms_control_get_dock(const xtd_forms_control* control);
/**
 @brief Sets which control borders are docked to its parent control and determines how a control is resized with its parent.
 @param dock One of the td::forms::dock_style values. The default is xtd_forms::dock_style::none.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks Use the xtd_forms::control::dock property to define how a control is automatically resized as its parent control is resized. For example, setting xtd_forms::control::dock to xtd_forms::dock_style::left causes the control to align itself with the left edges of its parent control and to resize as the parent control is resized. Controls are docked in their Z-order, which is the visual layering of controls on a form along the form's Z-axis (depth).
 @remarks A control can be docked to one edge of its parent container or can be docked to all edges and fill the parent container.
 @remarks Setting the xtd_forms::control::margin property on a docked control has no effect on the distance of the control from the edges of its container.
 @note The xtd_forms::control::anchor and xtd_forms::control::dock properties are mutually exclusive. Only one can be set at a time, and the last one set takes precedence.
 @par Notes to Inheritors
 When overriding the xtd_forms::control::dock property in a derived class, use the base class's xtd_forms::control::dock property to extend the base implementation. Otherwise, you must provide all the implementation. You are not required to override both the get and set methods of the xtd_forms::control::dock property; you can override only one if needed.
 */
xtd_forms_control* xtd_forms_control_set_dock(xtd_forms_control* control, xtd_forms_dock_style dock);

/**
 @brief Gets a value indicating whether this control should redraw its surface using a secondary buffer to reduce or prevent flicker.
 @return true if the surface of the control should be drawn using double buffering; otherwise, false.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
bool xtd_forms_control_get_double_buffered(const xtd_forms_control* control);
/**
 @brief Sets a value indicating whether this control should redraw its surface using a secondary buffer to reduce or prevent flicker.
 @param double_buffered true if the surface of the control should be drawn using double buffering; otherwise, false.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_gset_double_buffered(xtd_forms_control* control, bool double_buffered);

/**
 @brief Gets a value indicating whether the control can respond to user interaction.
 @return true if the control can respond to user interaction; otherwise, false. The default is true.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
bool xtd_forms_control_get_enabled(const xtd_forms_control* control);
/**
 @brief Sets a value indicating whether the control can respond to user interaction.
 @param enabled true if the control can respond to user interaction; otherwise, false. The default is true.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_set_enabled(xtd_forms_control* control, bool enabled);

/**
 @brief Gets a value indicating whether the control has input focus.
 @return true if the control has focus; otherwise, false.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
bool xtd_forms_control_get_focused(const xtd_forms_control* control);

/**
 @brief Gets the font of the text displayed by the control.
 @return The font to apply to the text displayed by the control. The default is the value of the default_font property.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_drawing_font* xtd_forms_control_get_font(const xtd_forms_control* control);
/**
 @brief Sets the font of the text displayed by the control.
 @param font The font to apply to the text displayed by the control. The default is the value of the default_font property.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_set_font(xtd_forms_control* control, xtd_drawing_font* font);
/** @cond */
xtd_forms_control* xtd_forms_control_reset_font(xtd_forms_control* control);
/** @endcond */

/**
 @brief Gets the foreground color of the control.
 @return The foreground color of the control. The default is the value of the default_fore_color property.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_drawing_color xtd_forms_control_get_fore_color(const xtd_forms_control* control);
/**
 @brief Sets the foreground color of the control.
 @param color The foreground color of the control. The default is the value of the default_fore_color property.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_set_fore_color(xtd_forms_control* control, xtd_drawing_color color);
/** @cond */
xtd_forms_control* xtd_forms_control_reset_fore_color(xtd_forms_control* control);
/** @endcond */

/**
 @brief Gets the window handle that the control is bound to.
 @return An intptr_t that contains the window handle (HWND) of the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks When the underlying toolkits is native, xtd_forms::control::handle and xtd_forms::control::native_handle are the same, But if the underlying toolkit is not native, the xtd_forms::control::handle matches the toolkit handle while xtd_forms::control::native_handle returns the true native handle.
 */
intptr_t xtd_forms_control_get_handle(const xtd_forms_control* control);

/**
 @brief Gets the height of the control.
 @return The height of the control in pixels.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
int32_t xtd_forms_control_get_height(const xtd_forms_control* control);
/**
 @brief Sets the height of the control.
 @param height The height of the control in pixels.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_set_height(xtd_forms_control* control, int32_t height);

/**
 @brief Gets a value indicating whether the caller must call an invoke method when making method calls to the control because the caller is on a different thread than the one the control was created on.
 @return true if the control's xttd::forms::control::handle was created on a different thread than the calling thread (indicating that you must make calls to the control through an invoke method); otherwise, false.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
bool xtd_forms_control_get_invoke_required(const xtd_forms_control* control);

/**
 @brief Gets a value indicating whether the control has a handle associated with it.
 @return true if a handle has been assigned to the control; otherwise, false.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 @remarks Use the is_handle_created property to determine whether create_handle has been called.
 */
bool xtd_forms_control_is_handle_created(const xtd_forms_control* control);

/**
 @brief Gets the distance, in pixels, between the left edge of the control and the left edge of its container's client area.
 @return An int32_t representing the distance, in pixels, between the left edge of the control and the left edge of its container's client area.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
int32_t xtd_forms_control_get_left(const xtd_forms_control* control);
/**
 @brief Sets the distance, in pixels, between the left edge of the control and the left edge of its container's client area.
 @param left An int32_t representing the distance, in pixels, between the left edge of the control and the left edge of its container's client area.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_set_left(xtd_forms_control* control, int32_t left);

/**
 @brief Gets the coordinates of the upper-left corner of the specified control relative to the upper-left corner of its container.
 @param control The control.
 @return The point that represents the upper-left corner of the control relative to the upper-left corner of its container.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_drawing_point xtd_forms_control_get_location(const xtd_forms_control* control);
/**
 @brief Sets the coordinates of the upper-left corner of the specified control relative to the upper-left corner of its container.
 @param control The control.
 @param location The point that represents the upper-left corner of the control relative to the upper-left corner of its container.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_set_location(xtd_forms_control* control, xtd_drawing_point point);

/**
 @brief Gets the parent container of the specified control.
 @param control The control.
 @return A control that represents the parent or container control of the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_get_parent(const xtd_forms_control* control);
/**
 @brief Sets the parent container of the specified control.
 @param control The control.
 @param parent A control that represents the parent or container control of the control  or nullptr for none.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_set_parent(xtd_forms_control* control, xtd_forms_control* parent);
/**
 @brief Resets the parent container of the specified control.
 @param control The control.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_reset_parent(xtd_forms_control* control);

/**
 @brief Gets the text associated of the specified control.
 @param control The control.
 @return The text associated with this control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
const char* xtd_forms_control_get_text(const xtd_forms_control* control);
/**
 @brief Gets the text associated of the specified control.
 @param control The control.
 @return The text associated with this control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
size_t xtd_forms_control_get_text_s(xtd_forms_control* control, char* text, size_t size);
/**
 @brief Sets the text associated of specified control.
 @param control The control.
 @param text The text associated with this control.
 @return Current control.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms controls control
 */
xtd_forms_control* xtd_forms_control_set_text(xtd_forms_control* control, const char* text);
/** @} */

/** @name Events */
 
/** @{ */
void xtd_forms_control_set_click_event(xtd_forms_control* control, xtd_event_handler e, xtd_handle user_data);
void xtd_forms_control_reset_click_event(xtd_forms_control* control);
/** @} */

/** @name Methods */
 
/**  @{ */
/** @} */
