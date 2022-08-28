/**
 @file
 @brief Contains image_layout enum class.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

/**
 @brief Specifies the position of the image on the control.
 @par Library
 xtd_c.forms
 @ingroup xtd_forms
 */
enum xtd_forms_image_layout {
  /** @brief The image is left-aligned at the top across the control's client rectangle. */
  xtd_forms_image_layout_none = 0,
  /** @brief The image is tiled across the control's client rectangle. */
  xtd_forms_image_layout_tile = 1,
  /** @brief The image is centered within the control's client rectangle. */
  xtd_forms_image_layout_center = 2,
  /** @brief The image is stretched across the control's client rectangle. */
  xtd_forms_image_layout_stretch = 3,
  /** @brief The image is enlarged within the control's client rectangle. */
  xtd_forms_image_layout_zoom = 4,
};

/** @cond */
typedef enum xtd_forms_image_layout xtd_forms_image_layout;
/** @endcond */
