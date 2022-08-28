/**
 @file
 @brief Contains xtd_forms_anchor_styles enum.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

/**
 @brief Specifies how a control anchors to the edges of its container.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms
 @remarks This enumeration has a flags  attribute that allows a bitwise combination of its member values.
 @remarks When a control is anchored to an edge of its container, the distance between the control and the specified edge remains constant when the container resizes. For example, if a control is anchored to the right edge of its container, the distance between the right edge of the control and the right edge of the container remains constant when the container resizes. A control can be anchored to any combination of control edges. If the control is anchored to opposite edges of its container (for example, to the top and bottom), it resizes when the container resizes. If a control has its anchor property set to none, the control moves half of the distance that the container of the control is resized. For example, if a button has its anchor property set to none and the form that the control is located on is resized by 20 pixels in either direction, the button will be moved 10 pixels in both directions.
 */
enum xtd_forms_anchor_styles {
  /** @brief no styles. */
  xtd_forms_anchor_styles_none = 0x0,
  /** @brief Bind control edges to the top of its container. */
  xtd_forms_anchor_styles_top = 0x1,
  /** @brief Bind control edges to the bottom of its container. */
  xtd_forms_anchor_styles_bottom = 0x2,
  /** @brief Bind control edges to the left of its container. */
  xtd_forms_anchor_styles_left = 0x4,
  /** @brief Bind control edges to the right of its container. */
  xtd_forms_anchor_styles_right = 0x8,
  /** @brief All flags except none. */
  xtd_forms_anchor_styles_all = xtd_forms_anchor_styles_top | xtd_forms_anchor_styles_bottom | xtd_forms_anchor_styles_left | xtd_forms_anchor_styles_right,
};

/** @cond */
typedef enum xtd_forms_anchor_styles xtd_forms_anchor_styles;
/** @endcond */
