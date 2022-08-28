/**
 @file
 @brief Contains rectangle definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include <xtd_c/object.h>

struct xtd_drawing_rectangle {
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
};

/** @cond */
typedef struct xtd_drawing_rectangle xtd_drawing_rectangle;
/** @endcond */
