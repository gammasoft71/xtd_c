/**
 @file
 @brief Contains xtd_forms_dock_style enum class.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

/**
 @brief Specifies the position and manner in which a control is docked.
 @par Namespace
 xtd::forms
 @par Library
 xtd.forms
 @ingroup xtd_c_forms
 @remarks When a control is docked to an edge of its container, it is always positioned flush against that edge when the container is resized. If more than one control is docked to an edge, the controls appear side by side according to their z-order; controls higher in the z-order are positioned farther from the container's edge.
 @remarks If left, right, top, or bottom is selected, the specified and opposite edges of the control are resized to the size of the containing control's corresponding edges. If fill is selected, all four sides of the control are resized to match the containing control's edges.
 */
enum xtd_forms_dock_style {
  /** @brief The control is not docked. */
  xtd_forms_dock_style_none = 0,
  /** @brief The control's top edge is docked to the top of its containing control. */
  xtd_forms_dock_style_top = 1,
  /** @brief The control's bottom edge is docked to the bottom of its containing control. */
  xtd_forms_dock_style_bottom = 2,
  /** @brief The control's left edge is docked to the left edge of its containing control. */
  xtd_forms_dock_style_left = 3,
  /** @brief The control's right edge is docked to the right edge of its containing control. */
  xtd_forms_dock_style_right = 4,
  /** @brief All the control's edges are docked to the all edges of its containing control and sized appropriately. */
  xtd_forms_dock_style_fill = 5,
};

/** @cond */
typedef enum xtd_forms_dock_style xtd_forms_dock_style;
/** @endcond */
