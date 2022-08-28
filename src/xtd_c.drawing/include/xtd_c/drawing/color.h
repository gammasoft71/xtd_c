/**
 @file
 @brief Contains color definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include <xtd_c/object.h>
#include "known_color.h"

/**
 @defgroup color color
 @brief Represents an ARGB (alpha, red, green, blue) color.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 @remarks Named colors are represented by using the properties of the xtd_drawing_color structure. For more information about these colors, <a href="https://developer.mozilla.org/en-US/docs/Web/CSS/color_value">see Colors by Name</a>.
 @remarks The color of each pixel is represented as a 32-bit number: 8 bits each for alpha, red, green, and blue (ARGB). Each of the four components is a number from 0 through 255, with 0 representing no intensity and 255 representing full intensity. The alpha component specifies the transparency of the color: 0 is fully transparent, and 255 is fully opaque. To determine the alpha, red, green, or blue component of a color, use the xtd_drawing_color::a, xtd_drawing_color::r, xtd_drawing_color::g, or xtd_drawing_color::b property, respectively. You can create a custom color by using one of the xtd_drawing_color::from_argb methods
 @par Examples
 The following code example demonstrates the xtd_drawing_color::a, xtd_drawing_color::r, xtd_drawing_color::g, and B properties of a xtd_drawing_color, and the Implicit(size to size_f) member.<br>
 This example is designed to be used with a Windows Form (xtd::forms). Paste the code into the form and call the show_properties_of_slate_blue method from the form's  xtd::forms::control::paint event-handling method, passing e as xtd::forms::paint_event_args.
 @code
 void show_properties_of_slate_blue(xtd_forms_paint_event_args e) {
   color slate_blue = xtd_drawing_color_from_name("slate blue");
   byte_t a = slate_blue.a;
   byte_t r = slate_blue.r;
   byte_t g = slate_blue.g;
   byte_t b = slate_blue.b;
   char text[256];
   sprintf(text, "Slate blue has these ARGB values: alpha:%d, red:%d, green:%d, blue:%d", a, r, g, b);
   e.graphics->draw_string(text, xtd_drawing_font(xtd_forms_control_get_font(main_form), xtd_drawing_font_style_italic), xtd_drawing_solid_brush_create(slate_blue), xtd_drawing_rectangle_f_create_from_point_f_and_size_f(xtd_drawing_point_f(0.0f, 0.0f), (xtd_drawing_size_f){xtd_forms_control_get_size().x, xtd_forms_control_get_size().y});
 }
 @endcode
 */

/**
 @brief Represents an ARGB (alpha, red, green, blue) color.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 @remarks Named colors are represented by using the properties of the xtd_drawing_color structure. For more information about these colors, <a href="https://developer.mozilla.org/en-US/docs/Web/CSS/color_value">see Colors by Name</a>.
 @remarks The color of each pixel is represented as a 32-bit number: 8 bits each for alpha, red, green, and blue (ARGB). Each of the four components is a number from 0 through 255, with 0 representing no intensity and 255 representing full intensity. The alpha component specifies the transparency of the color: 0 is fully transparent, and 255 is fully opaque. To determine the alpha, red, green, or blue component of a color, use the xtd_drawing_color::a, xtd_drawing_color::r, xtd_drawing_color::g, or xtd_drawing_color::b property, respectively. You can create a custom color by using one of the xtd_drawing_color::from_argb methods
 @par Examples
 The following code example demonstrates the xtd_drawing_color::a, xtd_drawing_color::r, xtd_drawing_color::g, and B properties of a xtd_drawing_color, and the Implicit(size to size_f) member.<br>
 This example is designed to be used with a Windows Form (xtd::forms). Paste the code into the form and call the show_properties_of_slate_blue method from the form's  xtd::forms::control::paint event-handling method, passing e as xtd::forms::paint_event_args.
 @code
 void show_properties_of_slate_blue(xtd_forms_paint_event_args e) {
 color slate_blue = xtd_drawing_color_from_name("slate blue");
 byte_t a = slate_blue.a;
 byte_t r = slate_blue.r;
 byte_t g = slate_blue.g;
 byte_t b = slate_blue.b;
 char text[256];
 sprintf(text, "Slate blue has these ARGB values: alpha:%d, red:%d, green:%d, blue:%d", a, r, g, b);
 e.graphics->draw_string(text, xtd_drawing_font(xtd_forms_control_get_font(main_form), xtd_drawing_font_style_italic), xtd_drawing_solid_brush_create(slate_blue), xtd_drawing_rectangle_f_create_from_point_f_and_size_f(xtd_drawing_point_f(0.0f, 0.0f), (xtd_drawing_size_f){xtd_forms_control_get_size().x, xtd_forms_control_get_size().y});
 }
 */
struct xtd_drawing_color {
  /**
   @brief Gets or sets the alpha component value of this xtd_drawing_color struct.
   @return byte The alpha component value of this xtd_drawing_color.
   @par Library
   xtd_c.drawing
   @ingroup xtd_drawing drawing color
   @remarks The color of each pixel is represented as a 32-bit number: 8 bits each for alpha, red, green, and blue (ARGB). The alpha component specifies the transparency of the color: 0 is fully transparent, and 255 is fully opaque. Likewise, an xtd_drawing_color::a value of 255 represents an opaque color. An xtd_drawing_color::a value from 1 through 254 represents a semitransparent color. The color becomes more opaque as xtd_drawing_color::a approaches 255.
   */
  byte_t a;
  /**
   @brief Gets or sets the red component value of this xtd_drawing_color struct.
   @return byte The red component value of this xtd_drawing_color.
   @par Library
   xtd_c.drawing
   @ingroup xtd_drawing drawing color
   @remarks The color of each pixel is represented as a 32-bit number: 8 bits each for alpha, red, green, and blue (ARGB). The alpha component specifies the transparency of the color: 0 is fully transparent, and 255 is fully opaque. Likewise, an xtd_drawing_color::a value of 255 represents an opaque color. An xtd_drawing_color::a value from 1 through 254 represents a semitransparent color. The color becomes more opaque as xtd_drawing_color::a approaches 255.
   */
  byte_t r;
   /**
    @brief Gets or sets the green component value of this xtd_drawing_color struct.
    @return byte The green component value of this xtd_drawing_color.
    @par Library
    xtd_c.drawing
    @ingroup xtd_drawing drawing color
    @remarks The color of each pixel is represented as a 32-bit number: 8 bits each for alpha, red, green, and blue (ARGB). The alpha component specifies the transparency of the color: 0 is fully transparent, and 255 is fully opaque. Likewise, an xtd_drawing_color::a value of 255 represents an opaque color. An xtd_drawing_color::a value from 1 through 254 represents a semitransparent color. The color becomes more opaque as xtd_drawing_color::a approaches 255.
    */
  byte_t g;
   /**
    @brief Gets or sets the blue component value of this xtd_drawing_color struct.
    @return byte The blue component value of this xtd_drawing_color.
    @par Library
    xtd_c.drawing
    @ingroup xtd_drawing drawing color
    @remarks The color of each pixel is represented as a 32-bit number: 8 bits each for alpha, red, green, and blue (ARGB). The alpha component specifies the transparency of the color: 0 is fully transparent, and 255 is fully opaque. Likewise, an xtd_drawing_color::a value of 255 represents an opaque color. An xtd_drawing_color::a value from 1 through 254 represents a semitransparent color. The color becomes more opaque as xtd_drawing_color::a approaches 255.
    */
  byte_t b;
  /**
   @brief Must be set to 0
   @par Library
   xtd_c.drawing
   @ingroup xtd_drawing drawing color
   @warning Internal use only
   */
  xtd_drawing_known_color __known_color__;
  /**
   @brief Must be set to 0
   @par Library
   xtd_c.drawing
   @ingroup xtd_drawing drawing color
   @warning Internal use only
   */
  intptr_t __handle__;
  /**
   @brief Must be set to false
   @par Library
   xtd_c.drawing
   @ingroup xtd_drawing drawing color
   @warning Internal use only
   */
  bool __empty__;
};

/** @cond */
typedef struct xtd_drawing_color xtd_drawing_color;
/** @endcond */

/** @name Fields */

/** @{ */
/**
 @brief Represents a color that is null.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_empty();

/**
 @brief Gets a system-defined color that has an ARGB value of 0x00FFFFFF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_transparent();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF0F8FF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_alice_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFAEBD7. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_antique_white();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF00FFFF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_aqua();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF7FFFD4. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_aquamarine();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF0FFFF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_azure();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF5F5DC. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_beige();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFE4C4. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_bisque();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF000000. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_black();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFEBCD. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_blanched_almond();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF0000FF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF8A2BE2. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_blue_violet();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFA52A2A. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_brown();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFDEB887. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_burly_wood();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF5F9EA0. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_cadet_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF7FFF00. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_chartreuse();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFD2691E. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_chocolate();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFF7F50. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_coral();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF6495ED. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_cornflower_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFF8DC. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_cornsilk();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFDC143C. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_crimson();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF00FFFF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_cyan();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF00008B. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF008B8B. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_cyan();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFB8860B. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_goldenrod();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFA9A9A9. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_gray();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF006400. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFBDB76B. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_khaki();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF8B008B. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_magenta();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF556B2F. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_olive_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFF8C00. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_orange();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF9932CC. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_orchid();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF8B0000. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_red();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFE9967A. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_salmon();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF8FBC8B. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_sea_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF483D8B. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_slate_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF2F4F4F. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_slate_gray();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF00CED1. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_turquoise();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF9400D3. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dark_violet();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFF1493. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_deep_pink();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF00BFFF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_deep_sky_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF696969. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dim_gray();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF1E90FF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_dodger_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFB22222. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_firebrick();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFFAF0. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_floral_white();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF228B22. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_forest_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFF00FF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_fuchsia();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFDCDCDC. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_gainsboro();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF8F8FF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_ghost_white();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFD700. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_gold();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFDAA520. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_goldenrod();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF808080. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_gray();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF008000. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFADFF2F. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_green_yellow();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF0FFF0. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_honeydew();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFF69B4. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_hot_pink();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFCD5C5C. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_indian_red();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF4B0082. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_indigo();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFFFF0. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_ivory();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF0E68C. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_khaki();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFE6E6FA. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_lavender();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFF0F5. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_lavender_blush();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF7CFC00. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_lawn_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFFACD. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_lemon_chiffon();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFADD8E6. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF08080. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_coral();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFE0FFFF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_cyan();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFAFAD2. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_goldenrod_yellow();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFD3D3D3. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_gray();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF90EE90. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFB6C1. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_pink();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFA07A. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_salmon();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF20B2AA. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_sea_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF87CEFA. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_sky_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF778899. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_slate_gray();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFB0C4DE. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_steel_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFFFE0. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_light_yellow();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF00FF00. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_lime();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF32CD32. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_lime_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFAF0E6. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_linen();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFF00FF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_magenta();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF800000. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_maroon();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF66CDAA. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_medium_aquamarine();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF0000CD. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_medium_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFBA55D3. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_medium_orchid();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF9370DB. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_medium_purple();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF3CB371. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_medium_sea_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF7B68EE. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_medium_slate_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF00FA9A. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_medium_spring_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF48D1CC. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_medium_turquoise();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFC71585. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_medium_violet_red();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF191970. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_midnight_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF5FFFA. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_mint_cream();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFE4E1. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_misty_rose();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFE4B5. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_moccasin();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFDEAD. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_navajo_white();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF000080. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_navy();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFDF5E6. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_old_lace();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF808000. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_olive();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF6B8E23. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_olive_drab();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFA500. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_orange();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFF4500. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_orange_red();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFDA70D6. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_orchid();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFEEE8AA. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_pale_goldenrod();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF98FB98. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_pale_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFAFEEEE. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_pale_turquoise();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFDB7093. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_pale_violet_red();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFEFD5. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_papaya_whip();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFDAB9. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_peach_puff();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFCD853F. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_peru();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFC0CB. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_pink();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFDDA0DD. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_plum();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFB0E0E6. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_powder_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF800080. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_purple();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF663399. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_rebecca_purple();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFF0000. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_red();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFBC8F8F. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_rosy_brown();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF4169E1. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_royal_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF8B4513. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_saddle_brown();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFA8072. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_salmon();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF4A460. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_sandy_brown();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF2E8B57. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_sea_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFF5EE. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_sea_shell();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFA0522D. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_sienna();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFC0C0C0. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_silver();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF87CEEB. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_sky_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF6A5ACD. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_slate_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF708090. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_slate_gray();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFFAFA. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_snow();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF00FF7F. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_spring_green();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF4682B4. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_steel_blue();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFD2B48C. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_tan();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF008080. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_teal();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFD8BFD8. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_thistle();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFF6347. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_tomato();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF40E0D0. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_turquoise();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFEE82EE. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_violet();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF5DEB3. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_wheat();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFFFFF. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_white();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFF5F5F5. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_white_smoke();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFFFFFF00. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_yellow();

/**
 @brief Gets a system-defined color that has an ARGB value of 0xFF9ACD32. This field is constant.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
xtd_drawing_color xtd_drawing_color_yellow_green();
/** @} */

/** @name Properties */

/** @{ */
/**
 @brief Gets a value indicating wheter the specified xtd_drawing_color structure is dark color.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 @remarks return true if dark color; otherwise false.
 */
bool xtd_drawing_color_is_dark(xtd_drawing_color color);

/**
 @brief Specifies whether the specified xtd_drawing_color class is uninitialized.
 @return bool Returns true if this color is uninitialized; otherwise, false.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
bool xtd_drawing_color_is_empty(xtd_drawing_color color);

/**
 @brief Gets a value indicating whether the specified xtd_drawing_color structure is a predefined color. Predefined colors are represented by the elements of the xtd::drawing::known_color enumeration.
 @return bool Returns true if the specified xtd_drawing_color was created from a predefined color by using either the from_name method or the from_known_color method; otherwise, false.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 @remarks This property does not do a comparison of the ARGB values. Therefore, when the is_known_color property is applied to a xtd_drawing_color structure that is created by using the xtd_drawing_color::from_argb method, is_known_color returns false, even if the ARGB value matches the ARGB value of a predefined color.
 */
bool xtd_drawing_color_is_known_color(xtd_drawing_color color);

/**
 @brief Gets a value indicating wheter the specified xtd_drawing_color structure is light color.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 @remarks return true if light color; otherwise false.
 */
bool xtd_drawing_color_is_light(xtd_drawing_color color);

/**
 @brief Gets a value indicating whether the specified xtd_drawing_color structure is a named color or a member of the xtd::drawing::known_color enumeration.
 @return bool Returns true if the specified xtd_drawing_color was created by using either the xtd_drawing_color::from_name method or the xtd_drawing_color::from_known_color method; otherwise, false.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
bool xtd_drawing_color_is_named_color(xtd_drawing_color color);

/**
 @brief Gets a value indicating whether the specified xtd_drawing_color structure is a system color. A system color is a color that is used in a Windows display element. System colors are represented by elements of the xtd::drawing::known_color enumeration.
 @return bool Returns true if the specified xtd_drawing_color was created from a system color by using either the xtd_drawing_color::from_name method or the xtd_drawing_color::from_known_color method; otherwise, false.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
bool xtd_drawing_color_is_system_color(xtd_drawing_color color);

/**
 @brief Gets the name of the specified xtd_drawing_color.
 @return string The name of the specified xtd_drawing_color.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
const char* xtd_drawing_color_name(xtd_drawing_color color);

/**
 @brief Gets the name of the specified xtd_drawing_color.
 @return string The name of the specified xtd_drawing_color.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing drawing color
 */
size_t xtd_drawing_color_name_s(xtd_drawing_color color, char* string, size_t size);
/** @} */

/** @name Methods */

/** @{ */
/**
 @brief Returns the weighted average color between the two given colors.
 @param color1 The first color.
 @param color2 The second color.
 @param weight The weighting factor
 @param average_alpha if true alpha was compute to; otherwise the alpha result is the alpha of color1
 @return The average color.
 @remarks The alpha, red, green and blue values are averages using the following formula:
 @code
 color = color1 * (1 - weight) + color2 * weight;
 @endcode
 @remarks Thus, a weight value of 1.0 will return the first color, while a value of 0.0 will return the second color.
 */
xtd_drawing_color xtd_drawing_color_average_with_alpha(xtd_drawing_color color1, xtd_drawing_color color2, double weight, bool average_alpha);

/**
 @brief Returns the weighted average color between the two given colors.
 @param color1 The first color.
 @param color2 The second color.
 @param weight The weighting factor
 @return The average color.
 @remarks The alpha of color1 is conserved.
 @remarks The red, green and blue values are averages using the following formula:
 @code
 color = color1 * (1 - weight) + color2 * weight;
 @endcode
 @remarks Thus, a weight value of 1.0 will return the second color, while a value of 0.0 will return the first color.
 */
xtd_drawing_color xtd_drawing_color_average(xtd_drawing_color color1, xtd_drawing_color color2, double weight);

/**
 @brief Returns a darker version of the specified color.
 @param color The color to dark.
 @return the darker color result.
 */
xtd_drawing_color xtd_drawing_color_dark_with_weight(xtd_drawing_color color, double weight);

/**
 @brief Returns a darker version of the specified color.
 @param color The color to dark.
 @return the darker color result.
 */
xtd_drawing_color xtd_drawing_color_dark(xtd_drawing_color color);

/**
 @brief Returns a lighter version of the specified color.
 @param color The color to light.
 @return the lighter color result.
 */
xtd_drawing_color xtd_drawing_color_light_with_weight(xtd_drawing_color color, double weight);

/**
 @brief Returns a lighter version of the specified color.
 @param color The color to light.
 @return the lighter color result.
 */
xtd_drawing_color xtd_drawing_color_light(xtd_drawing_color color);

/**
 @brief Creates a xtd_drawing_color class from a 32-bit ARGB value.
 @param argb A value specifying the 32-bit ARGB value
 @return The xtd_drawing_color structure that this method creates.
 @remarks The byte-ordering of the 32-bit ARGB value is AARRGGBB. The most significant byte (MSB), represented by AA, is the alpha component value. The second, third, and fourth bytes, represented by RR, GG, and BB, respectively, are the color components red, green, and blue, respectively.
 */
xtd_drawing_color xtd_drawing_color_from_argb_with_32bits(uint32_t argb);

/**
 @brief Creates a xtd_drawing_color class from the specified xtd_drawing_color structure, but with the new specified alpha value. Although this method allows a 32-bit value to be passed for the alpha value, the value is limited to 8 bits.
 @param alpha The alpha value for the new xtd_drawing_color. Valid values are 0 through 255.
 @param base_color The xtd_drawing_color from which to create the new xtd_drawing_color.
 @return xtd_drawing_color The xtd_drawing_color structure that this method creates.
 */
xtd_drawing_color from_argb_with_base_color(uint8_t alpha, xtd_drawing_color base_color);

/**
 @brief Creates a xtd_drawing_color class from the four ARGB component (alpha, red, green, and blue) values. Although this method allows a 32-bit value to be passed for each component, the value of each component is limited to 8 bits.
 @param alpha The alpha value for the new xtd_drawing_color. Valid values are 0 through 255.
 @param red The red component. Valid values are 0 through 255.
 @param green The green component. Valid values are 0 through 255.
 @param blue The blue component. Valid values are 0 through 255.
 @return xtd_drawing_color The xtd_drawing_color structure that this method creates.
 */
xtd_drawing_color xtd_drawing_color_from_argb(uint8_t alpha, uint8_t red, uint8_t green, uint8_t blue);

/**
 @brief Creates a xtd_drawing_color structure from the specified 8-bit color values (red, green, and blue). The alpha value is implicitly 255 (fully opaque). Although this method allows a 32-bit value to be passed for each color component, the value of each component is limited to 8 bits.
 @param red The red component. Valid values are 0 through 255.
 @param green The green component. Valid values are 0 through 255.
 @param blue The blue component. Valid values are 0 through 255.
 @return xtd_drawing_color The xtd_drawing_color structure that this method creates.
 */
xtd_drawing_color xtd_drawing_color_from_argb_without_alpha(uint8_t red, uint8_t green, uint8_t blue);

/**
 @brief Creates a xtd_drawing_color class from native handle.
 @param handle the handle for the new xtd_drawing_color.
 @return xtd_drawing_color The xtd_drawing_color structure that this method creates.
 @remarks For internal use only.
 */
xtd_drawing_color xtd_drawing_color_from_handle(intptr_t handle);

/**
 @brief Creates a xtd_drawing_color class from the three HSV component (hue, saturation, and brightness) values.
 @param hue The xtd_drawing_color saturation. The saturation ranges from 0.0 through 1.0, where 0.0 is grayscale and 1.0 is the most saturated.
 @param saturation The xtd_drawing_color saturation. The saturation ranges from 0.0 through 1.0, where 0.0 is grayscale and 1.0 is the most saturated.
 @param brightness The xtd_drawing_color lightness. The brightness ranges from 0.0 through 1.0, where 0.0 represents black and 1.0 represents white.
 */
xtd_drawing_color xtd_drawing_color_from_hsb(float hue, float saturation, float brightness);

/**
 @brief Creates a xtd_drawing_color class from the three HSL component (hue, saturation, and lightness) values.
 @param hue The xtd_drawing_color saturation. The saturation ranges from 0.0 through 1.0, where 0.0 is grayscale and 1.0 is the most saturated.
 @param saturation The xtd_drawing_color saturation. The saturation ranges from 0.0 through 1.0, where 0.0 is grayscale and 1.0 is the most saturated.
 @param lightness The xtd_drawing_color lightness. The lightness ranges from 0.0 through 1.0, where 0.0 represents black and 1.0 represents white.
 */
xtd_drawing_color xtd_drawing_color_from_hsl(float hue, float saturation, float lightness);

/**
 @brief Creates a xtd_drawing_color class from the four ARGB component (alpha, red, green, and blue) values. Although this method allows a 32-bit value to be passed for each component, the value of each component is limited to 8 bits.
 @param alpha The alpha value for the new xtd_drawing_color. Valid values are 0 through 255.
 @param red The red component. Valid values are 0 through 255.
 @param green The green component. Valid values are 0 through 255.
 @param blue The blue component. Valid values are 0 through 255.
 @return xtd_drawing_color The xtd_drawing_color structure that this method creates.
 @exception std::invalid_argument color is not a known_color.
 */
xtd_drawing_color xtd_drawing_color_from_known_color(xtd_drawing_known_color color);

/**
 @brief Creates a xtd_drawing_color class from the specified name of a predefined color.
 @param name A string that is the name of a predefined color. Valid names are the same as the names of the elements of the xtd::drawing::known_color enumeration.
 @return xtd_drawing_color The xtd_drawing_color structure that this method creates.
 @remarks A predefined color is also called a known color and is represented by an element of the xtd::drawing::known_color enumeration. If the name parameter is not the valid name of a predefined color, the xtd_drawing_color::from_name method creates a xtd_drawing_color structure that has an ARGB value of 0 (that is, all ARGB components are 0).
 */
xtd_drawing_color xtd_drawing_color_from_name(const char* name);

/**
 @brief Gets the hue-saturation-brightness (HSB) brightness value for the specified xtd_drawing_color structure.
 @return The brightness of the specified xtd_drawing_color. The lightness ranges from 0.0 through 1.0, where 0.0 represents black and 1.0 represents white.
 */
float xtd_drawing_color_get_brightness(xtd_drawing_color color);

/**
 @brief Gets the hue-saturation-brightness (HSB) hue value, in degrees, for the specified xtd_drawing_color structure.
 @return The hue, in degrees, of the specified xtd_drawing_color. The hue is measured in degrees, ranging from 0.0 through 360.0, in HSL color space.
 */
float xtd_drawing_color_get_hue(xtd_drawing_color color);

/**
 @brief Gets the hue-saturation-lightness (HSL) lightness value for the specified xtd_drawing_color structure.
 @return The lightness of the specified xtd_drawing_color. The lightness ranges from 0.0 through 1.0, where 0.0 represents black and 1.0 represents white.
 */
float xtd_drawing_color_get_lightness(xtd_drawing_color color);

/**
 @brief Gets the hue-saturation-brightness (HSB) saturation value for the specified xtd_drawing_color structure.
 @return The saturation of the specified xtd_drawing_color. The saturation ranges from 0.0 through 1.0, where 0.0 is grayscale and 1.0 is the most saturated.
 */
float xtd_drawing_color_get_saturation(xtd_drawing_color color);

/**
 @brief Creates a xtd_drawing_color class from the specified name.
 @param name A string that is the name of a predefined color. Valid names are the same as the names of the elements of the xtd::drawing::known_color enumeration or hexadecimal value that represents argb value, or four decimal values separated by a comma representing respectively a, r, g, b, values.
 @return xtd_drawing_color The xtd_drawing_color structure that this method creates.
 */
xtd_drawing_color xtd_drawing_color_parse(const char* color);

/**
 @brief Gets the 32-bit ARGB value of the specified xtd_drawing_color class.
 @return The 32-bit ARGB value of the specified xtd_drawing_color.
 @remarks The byte-ordering of the 32-bit ARGB value is AARRGGBB. The most significant byte (MSB), represented by AA, is the alpha component value. The second, third, and fourth bytes, represented by RR, GG, and BB, respectively, are the color components red, green, and blue, respectively.
 */
uint32_t xtd_drawing_color_to_argb(xtd_drawing_color color);

/**
 @brief Gets the xtd::drawing::known_color value of the specified xtd_drawing_color class.
 @return xtd::drawing::known_color An element of the xtd::drawing::known_color enumeration, if the xtd_drawing_color is created from a predefined color by using either the xtd_drawing_color::from_name method or the xtd_drawing_color::from_known_color method; otherwise, 0.
 @remarks A predefined color is also called a known color and is represented by an element of the xtd::drawing::known_color enumeration. When the xtd_drawing_color::to_known_color method is applied to a xtd_drawing_color structure that is created by using the FromArgb method, xtd_drawing_color::to_known_color returns 0, even if the ARGB value matches the ARGB value of a predefined color. xtd_drawing_color::to_known_color also returns 0 when it is applied to a xtd_drawing_color structure that is created by using the xtd_drawing_color::from_name method with a string name that is not valid.
 */
xtd_drawing_known_color xtd_drawing_color_to_known_color(xtd_drawing_color color);

/**
 @brief Creates a human-readable string that represents this color class.
 @return string A string that represents this Size.
 */
const char* xtd_drawing_color_to_string(xtd_drawing_color color);

/**
 @brief Creates a human-readable string that represents this color class.
 @return string A string that represents this Size.
 */
size_t xtd_drawing_color_to_string_s(char* string, size_t size, xtd_drawing_color color);
/** @} */
