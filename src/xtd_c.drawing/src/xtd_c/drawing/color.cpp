#include <xtd/drawing/color.h>
#include <xtd_c/privates/__ustring_helper__.h>

extern "C" {
  #include "../../../include/xtd_c/drawing/color.h"

  using namespace xtd;
  using namespace xtd::drawing;

  xtd_drawing_color to_xtd_drawing_color(const color& c) {
    return xtd_drawing_color {.a = c.a(), .r = c.r(), .g = c.g(), .b = c.b(), static_cast<xtd_drawing_known_color>(c.to_known_color()), c.handle(), c.is_empty()};
  }
  
  #define to_color_(c) \
    (c.__handle__ != 0 ? drawing::color::from_handle(c.__handle__) : \
    (c.__known_color__ != 0 ? drawing::color::from_known_color(static_cast<drawing::known_color>(c.__known_color__)) : \
    drawing::color::from_argb(c.a, c.r, c.g, c.b)))
  
  xtd_drawing_color xtd_drawing_color_empty() {
    return to_xtd_drawing_color(color::empty);
  }
  
  xtd_drawing_color xtd_drawing_color_transparent() {
    return to_xtd_drawing_color(color::transparent);
  }
  
  xtd_drawing_color xtd_drawing_color_alice_blue() {
    return to_xtd_drawing_color(color::alice_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_antique_white() {
    return to_xtd_drawing_color(color::antique_white);
  }
  
  xtd_drawing_color xtd_drawing_color_aqua() {
    return to_xtd_drawing_color(color::aqua);
  }
  
  xtd_drawing_color xtd_drawing_color_aquamarine() {
    return to_xtd_drawing_color(color::aquamarine);
  }
  
  xtd_drawing_color xtd_drawing_color_azure() {
    return to_xtd_drawing_color(color::azure);
  }
  
  xtd_drawing_color xtd_drawing_color_beige() {
    return to_xtd_drawing_color(color::beige);
  }
  
  xtd_drawing_color xtd_drawing_color_bisque() {
    return to_xtd_drawing_color(color::bisque);
  }
  
  xtd_drawing_color xtd_drawing_color_black() {
    return to_xtd_drawing_color(color::black);
  }
  
  xtd_drawing_color xtd_drawing_color_blanched_almond() {
    return to_xtd_drawing_color(color::blanched_almond);
  }
  
  xtd_drawing_color xtd_drawing_color_blue() {
    return to_xtd_drawing_color(color::blue);
  }
  
  xtd_drawing_color xtd_drawing_color_blue_violet() {
    return to_xtd_drawing_color(color::blue_violet);
  }
  
  xtd_drawing_color xtd_drawing_color_brown() {
    return to_xtd_drawing_color(color::brown);
  }
  
  xtd_drawing_color xtd_drawing_color_burly_wood() {
    return to_xtd_drawing_color(color::burly_wood);
  }
  
  xtd_drawing_color xtd_drawing_color_cadet_blue() {
    return to_xtd_drawing_color(color::cadet_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_chartreuse() {
    return to_xtd_drawing_color(color::chartreuse);
  }
  
  xtd_drawing_color xtd_drawing_color_chocolate() {
    return to_xtd_drawing_color(color::chocolate);
  }
  
  xtd_drawing_color xtd_drawing_color_coral() {
    return to_xtd_drawing_color(color::coral);
  }
  
  xtd_drawing_color xtd_drawing_color_cornflower_blue() {
    return to_xtd_drawing_color(color::cornflower_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_cornsilk() {
    return to_xtd_drawing_color(color::cornsilk);
  }
  
  xtd_drawing_color xtd_drawing_color_crimson() {
    return to_xtd_drawing_color(color::crimson);
  }
  
  xtd_drawing_color xtd_drawing_color_cyan() {
    return to_xtd_drawing_color(color::cyan);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_blue() {
    return to_xtd_drawing_color(color::dark_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_cyan() {
    return to_xtd_drawing_color(color::dark_cyan);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_goldenrod() {
    return to_xtd_drawing_color(color::dark_goldenrod);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_gray() {
    return to_xtd_drawing_color(color::dark_gray);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_green() {
    return to_xtd_drawing_color(color::dark_green);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_khaki() {
    return to_xtd_drawing_color(color::dark_khaki);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_magenta() {
    return to_xtd_drawing_color(color::dark_magenta);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_olive_green() {
    return to_xtd_drawing_color(color::dark_olive_green);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_orange() {
    return to_xtd_drawing_color(color::dark_orange);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_orchid() {
    return to_xtd_drawing_color(color::dark_orchid);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_red() {
    return to_xtd_drawing_color(color::dark_red);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_salmon() {
    return to_xtd_drawing_color(color::dark_salmon);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_sea_green() {
    return to_xtd_drawing_color(color::dark_sea_green);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_slate_blue() {
    return to_xtd_drawing_color(color::dark_slate_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_slate_gray() {
    return to_xtd_drawing_color(color::dark_slate_gray);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_turquoise() {
    return to_xtd_drawing_color(color::dark_turquoise);
  }
  
  xtd_drawing_color xtd_drawing_color_dark_violet() {
    return to_xtd_drawing_color(color::dark_violet);
  }
  
  xtd_drawing_color xtd_drawing_color_deep_pink() {
    return to_xtd_drawing_color(color::deep_pink);
  }
  
  xtd_drawing_color xtd_drawing_color_deep_sky_blue() {
    return to_xtd_drawing_color(color::deep_sky_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_dim_gray() {
    return to_xtd_drawing_color(color::dim_gray);
  }
  
  xtd_drawing_color xtd_drawing_color_dodger_blue() {
    return to_xtd_drawing_color(color::dodger_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_firebrick() {
    return to_xtd_drawing_color(color::firebrick);
  }
  
  xtd_drawing_color xtd_drawing_color_floral_white() {
    return to_xtd_drawing_color(color::floral_white);
  }
  
  xtd_drawing_color xtd_drawing_color_forest_green() {
    return to_xtd_drawing_color(color::forest_green);
  }
  
  xtd_drawing_color xtd_drawing_color_fuchsia() {
    return to_xtd_drawing_color(color::fuchsia);
  }
  
  xtd_drawing_color xtd_drawing_color_gainsboro() {
    return to_xtd_drawing_color(color::gainsboro);
  }
  
  xtd_drawing_color xtd_drawing_color_ghost_white() {
    return to_xtd_drawing_color(color::ghost_white);
  }
  
  xtd_drawing_color xtd_drawing_color_gold() {
    return to_xtd_drawing_color(color::gold);
  }
  
  xtd_drawing_color xtd_drawing_color_goldenrod() {
    return to_xtd_drawing_color(color::goldenrod);
  }
  
  xtd_drawing_color xtd_drawing_color_gray() {
    return to_xtd_drawing_color(color::gray);
  }
  
  xtd_drawing_color xtd_drawing_color_green() {
    return to_xtd_drawing_color(color::green);
  }
  
  xtd_drawing_color xtd_drawing_color_green_yellow() {
    return to_xtd_drawing_color(color::green_yellow);
  }
  
  xtd_drawing_color xtd_drawing_color_honeydew() {
    return to_xtd_drawing_color(color::honeydew);
  }
  
  xtd_drawing_color xtd_drawing_color_hot_pink() {
    return to_xtd_drawing_color(color::hot_pink);
  }
  
  xtd_drawing_color xtd_drawing_color_indian_red() {
    return to_xtd_drawing_color(color::indian_red);
  }
  
  xtd_drawing_color xtd_drawing_color_indigo() {
    return to_xtd_drawing_color(color::indigo);
  }
  
  xtd_drawing_color xtd_drawing_color_ivory() {
    return to_xtd_drawing_color(color::ivory);
  }
  
  xtd_drawing_color xtd_drawing_color_khaki() {
    return to_xtd_drawing_color(color::khaki);
  }
  
  xtd_drawing_color xtd_drawing_color_lavender() {
    return to_xtd_drawing_color(color::lavender);
  }
  
  xtd_drawing_color xtd_drawing_color_lavender_blush() {
    return to_xtd_drawing_color(color::lavender_blush);
  }
  
  xtd_drawing_color xtd_drawing_color_lawn_green() {
    return to_xtd_drawing_color(color::lawn_green);
  }
  
  xtd_drawing_color xtd_drawing_color_lemon_chiffon() {
    return to_xtd_drawing_color(color::lemon_chiffon);
  }
  
  xtd_drawing_color xtd_drawing_color_light_blue() {
    return to_xtd_drawing_color(color::light_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_light_coral() {
    return to_xtd_drawing_color(color::light_coral);
  }
  
  xtd_drawing_color xtd_drawing_color_light_cyan() {
    return to_xtd_drawing_color(color::light_cyan);
  }
  
  xtd_drawing_color xtd_drawing_color_light_goldenrod_yellow() {
    return to_xtd_drawing_color(color::light_goldenrod_yellow);
  }
  
  xtd_drawing_color xtd_drawing_color_light_gray() {
    return to_xtd_drawing_color(color::light_gray);
  }
  
  xtd_drawing_color xtd_drawing_color_light_green() {
    return to_xtd_drawing_color(color::light_green);
  }
  
  xtd_drawing_color xtd_drawing_color_light_pink() {
    return to_xtd_drawing_color(color::light_pink);
  }

  xtd_drawing_color xtd_drawing_color_light_salmon() {
    return to_xtd_drawing_color(color::light_salmon);
  }
  
  xtd_drawing_color xtd_drawing_color_light_sea_green() {
    return to_xtd_drawing_color(color::light_sea_green);
  }
  
  xtd_drawing_color xtd_drawing_color_light_sky_blue() {
    return to_xtd_drawing_color(color::light_sky_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_light_slate_gray() {
    return to_xtd_drawing_color(color::light_slate_gray);
  }
  
  xtd_drawing_color xtd_drawing_color_light_steel_blue() {
    return to_xtd_drawing_color(color::light_steel_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_light_yellow() {
    return to_xtd_drawing_color(color::light_yellow);
  }
  
  xtd_drawing_color xtd_drawing_color_lime() {
    return to_xtd_drawing_color(color::lime);
  }
  
  xtd_drawing_color xtd_drawing_color_lime_green() {
    return to_xtd_drawing_color(color::lime_green);
  }
  
  xtd_drawing_color xtd_drawing_color_linen() {
    return to_xtd_drawing_color(color::linen);
  }
  
  xtd_drawing_color xtd_drawing_color_magenta() {
    return to_xtd_drawing_color(color::magenta);
  }
  
  xtd_drawing_color xtd_drawing_color_maroon() {
    return to_xtd_drawing_color(color::maroon);
  }
  
  xtd_drawing_color xtd_drawing_color_medium_aquamarine() {
    return to_xtd_drawing_color(color::medium_aquamarine);
  }
  
  xtd_drawing_color xtd_drawing_color_medium_blue() {
    return to_xtd_drawing_color(color::medium_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_medium_orchid() {
    return to_xtd_drawing_color(color::medium_orchid);
  }
  
  xtd_drawing_color xtd_drawing_color_medium_purple() {
    return to_xtd_drawing_color(color::medium_purple);
  }
  
  xtd_drawing_color xtd_drawing_color_medium_sea_green() {
    return to_xtd_drawing_color(color::medium_sea_green);
  }
  
  xtd_drawing_color xtd_drawing_color_medium_slate_blue() {
    return to_xtd_drawing_color(color::medium_slate_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_medium_spring_green() {
    return to_xtd_drawing_color(color::medium_spring_green);
  }
  
  xtd_drawing_color xtd_drawing_color_medium_turquoise() {
    return to_xtd_drawing_color(color::medium_turquoise);
  }
  
  xtd_drawing_color xtd_drawing_color_medium_violet_red() {
    return to_xtd_drawing_color(color::medium_violet_red);
  }
  
  xtd_drawing_color xtd_drawing_color_midnight_blue() {
    return to_xtd_drawing_color(color::midnight_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_mint_cream() {
    return to_xtd_drawing_color(color::mint_cream);
  }
  
  xtd_drawing_color xtd_drawing_color_misty_rose() {
    return to_xtd_drawing_color(color::misty_rose);
  }
  
  xtd_drawing_color xtd_drawing_color_moccasin() {
    return to_xtd_drawing_color(color::moccasin);
  }
  
  xtd_drawing_color xtd_drawing_color_navajo_white() {
    return to_xtd_drawing_color(color::navajo_white);
  }
  
  xtd_drawing_color xtd_drawing_color_navy() {
    return to_xtd_drawing_color(color::navy);
  }
  
  xtd_drawing_color xtd_drawing_color_old_lace() {
    return to_xtd_drawing_color(color::old_lace);
  }
  
  xtd_drawing_color xtd_drawing_color_olive() {
    return to_xtd_drawing_color(color::olive);
  }
  
  xtd_drawing_color xtd_drawing_color_olive_drab() {
    return to_xtd_drawing_color(color::olive_drab);
  }
  
  xtd_drawing_color xtd_drawing_color_orange() {
    return to_xtd_drawing_color(color::orange);
  }
  
  xtd_drawing_color xtd_drawing_color_orange_red() {
    return to_xtd_drawing_color(color::orange_red);
  }
  
  xtd_drawing_color xtd_drawing_color_orchid() {
    return to_xtd_drawing_color(color::orchid);
  }
  
  xtd_drawing_color xtd_drawing_color_pale_goldenrod() {
    return to_xtd_drawing_color(color::pale_goldenrod);
  }
  
  xtd_drawing_color xtd_drawing_color_pale_green() {
    return to_xtd_drawing_color(color::pale_green);
  }
  
  xtd_drawing_color xtd_drawing_color_pale_turquoise() {
    return to_xtd_drawing_color(color::pale_turquoise);
  }
  
  xtd_drawing_color xtd_drawing_color_pale_violet_red() {
    return to_xtd_drawing_color(color::pale_violet_red);
  }
  
  xtd_drawing_color xtd_drawing_color_papaya_whip() {
    return to_xtd_drawing_color(color::papaya_whip);
  }
  
  xtd_drawing_color xtd_drawing_color_peach_puff() {
    return to_xtd_drawing_color(color::peach_puff);
  }
  
  xtd_drawing_color xtd_drawing_color_peru() {
    return to_xtd_drawing_color(color::peru);
  }
  
  xtd_drawing_color xtd_drawing_color_pink() {
    return to_xtd_drawing_color(color::pink);
  }
  
  xtd_drawing_color xtd_drawing_color_plum() {
    return to_xtd_drawing_color(color::plum);
  }
  
  xtd_drawing_color xtd_drawing_color_powder_blue() {
    return to_xtd_drawing_color(color::powder_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_purple() {
    return to_xtd_drawing_color(color::purple);
  }
  
  xtd_drawing_color xtd_drawing_color_rebecca_purple() {
    return to_xtd_drawing_color(color::rebecca_purple);
  }
  
  xtd_drawing_color xtd_drawing_color_red() {
    return to_xtd_drawing_color(color::red);
  }
  
  xtd_drawing_color xtd_drawing_color_rosy_brown() {
    return to_xtd_drawing_color(color::rosy_brown);
  }
  
  xtd_drawing_color xtd_drawing_color_royal_blue() {
    return to_xtd_drawing_color(color::royal_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_saddle_brown() {
    return to_xtd_drawing_color(color::saddle_brown);
  }
  
  xtd_drawing_color xtd_drawing_color_salmon() {
    return to_xtd_drawing_color(color::salmon);
  }
  
  xtd_drawing_color xtd_drawing_color_sandy_brown() {
    return to_xtd_drawing_color(color::sandy_brown);
  }
  
  xtd_drawing_color xtd_drawing_color_sea_green() {
    return to_xtd_drawing_color(color::sea_green);
  }
  
  xtd_drawing_color xtd_drawing_color_sea_shell() {
    return to_xtd_drawing_color(color::sea_shell);
  }
  
  xtd_drawing_color xtd_drawing_color_sienna() {
    return to_xtd_drawing_color(color::sienna);
  }
  
  xtd_drawing_color xtd_drawing_color_silver() {
    return to_xtd_drawing_color(color::silver);
  }
  
  xtd_drawing_color xtd_drawing_color_sky_blue() {
    return to_xtd_drawing_color(color::sky_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_slate_blue() {
    return to_xtd_drawing_color(color::slate_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_slate_gray() {
    return to_xtd_drawing_color(color::slate_gray);
  }
  
  xtd_drawing_color xtd_drawing_color_snow() {
    return to_xtd_drawing_color(color::snow);
  }
  
  xtd_drawing_color xtd_drawing_color_spring_green() {
    return to_xtd_drawing_color(color::spring_green);
  }
  
  xtd_drawing_color xtd_drawing_color_steel_blue() {
    return to_xtd_drawing_color(color::steel_blue);
  }
  
  xtd_drawing_color xtd_drawing_color_tan() {
    return to_xtd_drawing_color(color::tan);
  }
  
  xtd_drawing_color xtd_drawing_color_teal() {
    return to_xtd_drawing_color(color::teal);
  }
  
  xtd_drawing_color xtd_drawing_color_thistle() {
    return to_xtd_drawing_color(color::thistle);
  }
  
  xtd_drawing_color xtd_drawing_color_tomato() {
    return to_xtd_drawing_color(color::tomato);
  }
  
  xtd_drawing_color xtd_drawing_color_turquoise() {
    return to_xtd_drawing_color(color::turquoise);
  }
  
  xtd_drawing_color xtd_drawing_color_violet() {
    return to_xtd_drawing_color(color::violet);
  }
  
  xtd_drawing_color xtd_drawing_color_wheat() {
    return to_xtd_drawing_color(color::wheat);
  }
  
  xtd_drawing_color xtd_drawing_color_white() {
    return to_xtd_drawing_color(color::white);
  }
  
  xtd_drawing_color xtd_drawing_color_white_smoke() {
    return to_xtd_drawing_color(color::white_smoke);
  }
  
  xtd_drawing_color xtd_drawing_color_yellow() {
    return to_xtd_drawing_color(color::yellow);
  }
  
  xtd_drawing_color xtd_drawing_color_yellow_green() {
    return to_xtd_drawing_color(color::yellow_green);
  }

  bool xtd_drawing_color_is_dark(xtd_drawing_color color) {
    return to_color_(color).is_dark();
  }
  
  bool xtd_drawing_color_is_empty(xtd_drawing_color color) {
    return to_color_(color).is_empty();
  }
  
  bool xtd_drawing_color_is_known_color(xtd_drawing_color color) {
    return to_color_(color).is_known_color();
  }
  
  bool xtd_drawing_color_is_light(xtd_drawing_color color) {
    return to_color_(color).is_light();
  }
  
  bool xtd_drawing_color_is_named_color(xtd_drawing_color color) {
    return to_color_(color).is_named_color();
  }
  
  bool xtd_drawing_color_is_system_color(xtd_drawing_color color) {
    return to_color_(color).is_system_color();
  }
  
  const char* xtd_drawing_color_name(xtd_drawing_color color) {
    return to_c_string(to_color_(color).to_string());
  }
  
  size_t xtd_drawing_color_name_s(xtd_drawing_color color, char* string, size_t size) {
    return to_c_string_s(string, size, to_color_(color).to_string());
  }
  
  xtd_drawing_color xtd_drawing_color_average_with_alpha(xtd_drawing_color color1, xtd_drawing_color color2, double weight, bool average_alpha) {
    return to_xtd_drawing_color(drawing::color::average(to_color_(color1), to_color_(color2), weight, average_alpha));
  }
  
  xtd_drawing_color xtd_drawing_color_average(xtd_drawing_color color1, xtd_drawing_color color2, double weight) {
    return to_xtd_drawing_color(drawing::color::average(to_color_(color1), to_color_(color2), weight));
  }
  
  xtd_drawing_color xtd_drawing_color_dark_with_weight(xtd_drawing_color color, double weight) {
    return to_xtd_drawing_color(drawing::color::dark(to_color_(color), weight));
  }
  
  xtd_drawing_color xtd_drawing_color_dark(xtd_drawing_color color) {
    return to_xtd_drawing_color(drawing::color::dark(to_color_(color)));
  }
  
  xtd_drawing_color xtd_drawing_color_light_with_weight(xtd_drawing_color color, double weight) {
    return to_xtd_drawing_color(drawing::color::light(to_color_(color), weight));
  }
  
  xtd_drawing_color xtd_drawing_color_light(xtd_drawing_color color) {
    return to_xtd_drawing_color(drawing::color::light(to_color_(color)));
  }
  
  xtd_drawing_color xtd_drawing_color_from_argb_with_32bits(uint32_t argb) {
    return to_xtd_drawing_color(drawing::color::from_argb(argb));
  }
  
  xtd_drawing_color from_argb_with_base_color(uint8_t alpha, xtd_drawing_color base_color) {
    return to_xtd_drawing_color(drawing::color::from_argb(alpha, to_color_(base_color)));
  }
  
  xtd_drawing_color xtd_drawing_color_from_argb(uint8_t alpha, uint8_t red, uint8_t green, uint8_t blue) {
    return to_xtd_drawing_color(drawing::color::from_argb(alpha, red, green, blue));
  }
  
  xtd_drawing_color xtd_drawing_color_from_argb_without_alpha(uint8_t red, uint8_t green, uint8_t blue) {
    return to_xtd_drawing_color(drawing::color::from_argb(red, green, blue));
  }
  
  xtd_drawing_color xtd_drawing_color_from_handle(intptr_t handle) {
    return to_xtd_drawing_color(drawing::color::from_handle(handle));
  }
  
  xtd_drawing_color xtd_drawing_color_from_hsb(float hue, float saturation, float brightness) {
    return to_xtd_drawing_color(drawing::color::from_hsb(hue, saturation, brightness));
  }
  
  xtd_drawing_color xtd_drawing_color_from_hsl(float hue, float saturation, float lightness) {
    return to_xtd_drawing_color(drawing::color::from_hsl(hue, saturation, lightness));
  }
  
  xtd_drawing_color xtd_drawing_color_from_known_color(xtd_drawing_known_color color) {
    return to_xtd_drawing_color(drawing::color::from_known_color(static_cast<known_color>(color)));
  }
  
  xtd_drawing_color xtd_drawing_color_from_name(const char* name) {
    return to_xtd_drawing_color(drawing::color::from_name(name));
  }
  
  float xtd_drawing_color_get_brightness(xtd_drawing_color color) {
    return to_color_(color).get_brightness();
  }
  
  float xtd_drawing_color_get_hue(xtd_drawing_color color) {
    return to_color_(color).get_hue();
  }
  
  float xtd_drawing_color_get_lightness(xtd_drawing_color color) {
    return to_color_(color).get_lightness();
  }
  
  float xtd_drawing_color_get_saturation(xtd_drawing_color color) {
    return to_color_(color).get_saturation();
  }
  
  xtd_drawing_color xtd_drawing_color_parse(const char* color) {
    return to_xtd_drawing_color(drawing::color::parse(color));
  }
  
  uint32_t xtd_drawing_color_to_argb(xtd_drawing_color color) {
    return to_color_(color).to_argb();
  }
  
  xtd_drawing_known_color xtd_drawing_color_to_known_color(xtd_drawing_color color) {
    return static_cast<xtd_drawing_known_color>(to_color_(color).to_known_color());
  }
  
  const char* xtd_drawing_color_to_string(xtd_drawing_color color) {
    return to_c_string(to_color_(color).to_string());
  }
  
  size_t xtd_drawing_color_to_string_s(char* string, size_t size, xtd_drawing_color color) {
    return to_c_string_s(string, size, to_color_(color).to_string());
  }
}
