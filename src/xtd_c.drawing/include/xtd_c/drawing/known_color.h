/**
 @file
 @brief Contains known_color enum.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

/**
 @brief Specifies the known system colors.
 @par Library
 xtd_c.drawing
 @ingroup xtd_drawing
 @see xtd_drawing_color
 */
enum xtd_drawing_known_color {
  /// @brief The system-defined color of the active window's border.
  xtd_drawing_known_color_active_border = 1,
  /// @brief The system-defined color of the background of the active window's title bar.
  xtd_drawing_known_color_active_caption,
  /// @brief The system-defined color of the text in the active window's title bar.
  xtd_drawing_known_color_active_caption_text,
  /// @brief The system-defined color of the application workspace. The application workspace is the area in a multiple-document view that is not being occupied by documents.
  xtd_drawing_known_color_app_workspace,
  /// @brief The system-defined face color of a 3-D element.
  xtd_drawing_known_color_control,
  /// @brief The system-defined shadow color of a 3-D element. The shadow color is applied to parts of a 3-D element that face away from the light source.
  xtd_drawing_known_color_control_dark,
  /// @brief The system-defined color that is the dark shadow color of a 3-D element. The dark shadow color is applied to the parts of a 3-D element that are the darkest color.
  xtd_drawing_known_color_control_dark_dark,
  /// @brief The system-defined color that is the light color of a 3-D element. The light color is applied to parts of a 3-D element that face the light source.
  xtd_drawing_known_color_control_light,
  /// @brief The system-defined highlight color of a 3-D element. The highlight color is applied to the parts of a 3-D element that are the lightest color.
  xtd_drawing_known_color_control_light_light,
  /// @brief The system-defined color of text in a 3-D element.
  xtd_drawing_known_color_control_text,
  /// @brief The system-defined color of the desktop.
  xtd_drawing_known_color_desktop,
  /// @brief The system-defined color of dimmed text. Items in a list that are disabled are displayed in dimmed text.
  xtd_drawing_known_color_gray_text,
  /// @brief The system-defined color of the background of selected items. This includes selected menu items as well as selected text.
  xtd_drawing_known_color_highlight,
  /// @brief The system-defined color of the text of selected items.
  xtd_drawing_known_color_highlight_text,
  /// @brief The system-defined color used to designate a hot-tracked item. Single-clicking a hot-tracked item executes the item.
  xtd_drawing_known_color_hot_track,
  /// @brief The system-defined color of an inactive window's border.
  xtd_drawing_known_color_inactive_border,
  /// @brief The system-defined color of the background of an inactive window's title bar.
  xtd_drawing_known_color_inactive_caption,
  /// @brief The system-defined color of the text in an inactive window's title bar.
  xtd_drawing_known_color_inactive_caption_text,
  /// @brief The system-defined color of the background of a ToolTip.
  xtd_drawing_known_color_info,
  /// @brief The system-defined color of the text of a ToolTip.
  xtd_drawing_known_color_info_text,
  /// @brief The system-defined color of a menu's background.
  xtd_drawing_known_color_menu,
  /// @brief The system-defined color of a menu's text.
  xtd_drawing_known_color_menu_text,
  /// @brief The system-defined color of the background of a scroll bar.
  xtd_drawing_known_color_scroll_bar,
  /// @brief The system-defined color of the background in the client area of a window.
  xtd_drawing_known_color_window,
  /// @brief The system-defined color of a window frame.
  xtd_drawing_known_color_window_frame,
  /// @brief The system-defined color of the text in the client area of a window.
  xtd_drawing_known_color_window_text,
  /// @brief A system-defined color.
  xtd_drawing_known_color_transparent,
  /// @brief A system-defined color.
  xtd_drawing_known_color_alice_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_antique_white,
  /// @brief A system-defined color.
  xtd_drawing_known_color_aqua,
  /// @brief A system-defined color.
  xtd_drawing_known_color_aquamarine,
  /// @brief A system-defined color.
  xtd_drawing_known_color_azure,
  /// @brief A system-defined color.
  xtd_drawing_known_color_beige,
  /// @brief A system-defined color.
  xtd_drawing_known_color_bisque,
  /// @brief A system-defined color.
  xtd_drawing_known_color_black,
  /// @brief A system-defined color.
  xtd_drawing_known_color_blanched_almond,
  /// @brief A system-defined color.
  xtd_drawing_known_color_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_blue_violet,
  /// @brief A system-defined color.
  xtd_drawing_known_color_brown,
  /// @brief A system-defined color.
  xtd_drawing_known_color_burly_wood,
  /// @brief A system-defined color.
  xtd_drawing_known_color_cadet_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_chartreuse,
  /// @brief A system-defined color.
  xtd_drawing_known_color_chocolate,
  /// @brief A system-defined color.
  xtd_drawing_known_color_coral,
  /// @brief A system-defined color.
  xtd_drawing_known_color_cornflower_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_cornsilk,
  /// @brief A system-defined color.
  xtd_drawing_known_color_crimson,
  /// @brief A system-defined color.
  xtd_drawing_known_color_cyan,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_cyan,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_goldenrod,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_gray,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_khaki,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_magenta,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_olive_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_orange,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_orchid,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_red,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_salmon,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_sea_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_slate_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_slate_gray,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_turquoise,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dark_violet,
  /// @brief A system-defined color.
  xtd_drawing_known_color_deep_pink,
  /// @brief A system-defined color.
  xtd_drawing_known_color_deep_sky_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dim_gray,
  /// @brief A system-defined color.
  xtd_drawing_known_color_dodger_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_firebrick,
  /// @brief A system-defined color.
  xtd_drawing_known_color_floral_white,
  /// @brief A system-defined color.
  xtd_drawing_known_color_forest_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_fuchsia,
  /// @brief A system-defined color.
  xtd_drawing_known_color_gainsboro,
  /// @brief A system-defined color.
  xtd_drawing_known_color_ghost_white,
  /// @brief A system-defined color.
  xtd_drawing_known_color_gold,
  /// @brief A system-defined color.
  xtd_drawing_known_color_goldenrod,
  /// @brief A system-defined color.
  xtd_drawing_known_color_gray,
  /// @brief A system-defined color.
  xtd_drawing_known_color_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_green_yellow,
  /// @brief A system-defined color.
  xtd_drawing_known_color_honeydew,
  /// @brief A system-defined color.
  xtd_drawing_known_color_hot_pink,
  /// @brief A system-defined color.
  xtd_drawing_known_color_indian_red,
  /// @brief A system-defined color.
  xtd_drawing_known_color_indigo,
  /// @brief A system-defined color.
  xtd_drawing_known_color_ivory,
  /// @brief A system-defined color.
  xtd_drawing_known_color_khaki,
  /// @brief A system-defined color.
  xtd_drawing_known_color_lavender,
  /// @brief A system-defined color.
  xtd_drawing_known_color_lavender_blush,
  /// @brief A system-defined color.
  xtd_drawing_known_color_lawn_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_lemon_chiffon,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_coral,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_cyan,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_goldenrod_yellow,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_gray,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_pink,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_salmon,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_sea_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_sky_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_slate_gray,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_steel_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_light_yellow,
  /// @brief A system-defined color.
  xtd_drawing_known_color_lime,
  /// @brief A system-defined color.
  xtd_drawing_known_color_lime_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_linen,
  /// @brief A system-defined color.
  xtd_drawing_known_color_magenta,
  /// @brief A system-defined color.
  xtd_drawing_known_color_maroon,
  /// @brief A system-defined color.
  xtd_drawing_known_color_medium_aquamarine,
  /// @brief A system-defined color.
  xtd_drawing_known_color_medium_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_medium_orchid,
  /// @brief A system-defined color.
  xtd_drawing_known_color_medium_purple,
  /// @brief A system-defined color.
  xtd_drawing_known_color_medium_sea_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_medium_slate_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_medium_spring_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_medium_turquoise,
  /// @brief A system-defined color.
  xtd_drawing_known_color_medium_violet_red,
  /// @brief A system-defined color.
  xtd_drawing_known_color_midnight_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_mint_cream,
  /// @brief A system-defined color.
  xtd_drawing_known_color_misty_rose,
  /// @brief A system-defined color.
  xtd_drawing_known_color_moccasin,
  /// @brief A system-defined color.
  xtd_drawing_known_color_navajo_white,
  /// @brief A system-defined color.
  xtd_drawing_known_color_navy,
  /// @brief A system-defined color.
  xtd_drawing_known_color_old_lace,
  /// @brief A system-defined color.
  xtd_drawing_known_color_olive,
  /// @brief A system-defined color.
  xtd_drawing_known_color_olive_drab,
  /// @brief A system-defined color.
  xtd_drawing_known_color_orange,
  /// @brief A system-defined color.
  xtd_drawing_known_color_orange_red,
  /// @brief A system-defined color.
  xtd_drawing_known_color_orchid,
  /// @brief A system-defined color.
  xtd_drawing_known_color_pale_goldenrod,
  /// @brief A system-defined color.
  xtd_drawing_known_color_pale_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_pale_turquoise,
  /// @brief A system-defined color.
  xtd_drawing_known_color_pale_violet_red,
  /// @brief A system-defined color.
  xtd_drawing_known_color_papaya_whip,
  /// @brief A system-defined color.
  xtd_drawing_known_color_peach_puff,
  /// @brief A system-defined color.
  xtd_drawing_known_color_peru,
  /// @brief A system-defined color.
  xtd_drawing_known_color_pink,
  /// @brief A system-defined color.
  xtd_drawing_known_color_plum,
  /// @brief A system-defined color.
  xtd_drawing_known_color_powder_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_purple,
  /// @brief A system-defined color.
  xtd_drawing_known_color_rebecca_purple,
  /// @brief A system-defined color.
  xtd_drawing_known_color_red,
  /// @brief A system-defined color.
  xtd_drawing_known_color_rosy_brown,
  /// @brief A system-defined color.
  xtd_drawing_known_color_royal_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_saddle_brown,
  /// @brief A system-defined color.
  xtd_drawing_known_color_salmon,
  /// @brief A system-defined color.
  xtd_drawing_known_color_sandy_brown,
  /// @brief A system-defined color.
  xtd_drawing_known_color_sea_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_sea_shell,
  /// @brief A system-defined color.
  xtd_drawing_known_color_sienna,
  /// @brief A system-defined color.
  xtd_drawing_known_color_silver,
  /// @brief A system-defined color.
  xtd_drawing_known_color_sky_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_slate_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_slate_gray,
  /// @brief A system-defined color.
  xtd_drawing_known_color_snow,
  /// @brief A system-defined color.
  xtd_drawing_known_color_spring_green,
  /// @brief A system-defined color.
  xtd_drawing_known_color_steel_blue,
  /// @brief A system-defined color.
  xtd_drawing_known_color_tan,
  /// @brief A system-defined color.
  xtd_drawing_known_color_teal,
  /// @brief A system-defined color.
  xtd_drawing_known_color_thistle,
  /// @brief A system-defined color.
  xtd_drawing_known_color_tomato,
  /// @brief A system-defined color.
  xtd_drawing_known_color_turquoise,
  /// @brief A system-defined color.
  xtd_drawing_known_color_violet,
  /// @brief A system-defined color.
  xtd_drawing_known_color_wheat,
  /// @brief A system-defined color.
  xtd_drawing_known_color_white,
  /// @brief A system-defined color.
  xtd_drawing_known_color_white_smoke,
  /// @brief A system-defined color.
  xtd_drawing_known_color_yellow,
  /// @brief A system-defined color.
  xtd_drawing_known_color_yellow_green,
  /// @brief The system-defined face color of a 3-D element.
  xtd_drawing_known_color_button_face,
  /// @brief The system-defined color that is the highlight color of a 3-D element. This color is applied to parts of a 3-D element that face the light source.
  xtd_drawing_known_color_button_highlight,
  /// @brief The system-defined color that is the shadow color of a 3-D element. This color is applied to parts of a 3-D element that face away from the light source.
  xtd_drawing_known_color_button_shadow,
  /// @brief The system-defined color of the lightest color in the color gradient of an active window's title bar.
  xtd_drawing_known_color_gradient_active_caption,
  /// @brief The system-defined color of the lightest color in the color gradient of an inactive window's title bar.
  xtd_drawing_known_color_gradient_inactive_caption,
  /// @brief The system-defined color of the background of a menu bar.
  xtd_drawing_known_color_menu_bar,
  /// @brief The system-defined color used to highlight menu items when the menu appears as a flat menu.
  xtd_drawing_known_color_menu_highlight,
  /// @brief The system-defined color of the accent color (macos specific. On other platform is same as menu_highlight).
  xtd_drawing_known_color_accent,
  /// @brief The system-defined color of the accent text color (macos specific. On other platform is same as highlight_text).
  xtd_drawing_known_color_accent_text,
  /// @brief The system-defined color of the accent color (macos specific. On other platform is same as window).
  xtd_drawing_known_color_text_box,
  /// @brief The system-defined color of the accent text color (macos specific. On other platform is same as window_text).
  xtd_drawing_known_color_text_box_text,
};

/** @cond */
typedef enum xtd_drawing_known_color xtd_drawing_known_color;
/** @endcond */
