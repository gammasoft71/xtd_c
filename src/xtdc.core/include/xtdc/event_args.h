/**
 @file
 @brief Contains event args definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "types.h"

/**
 @brief Represent an instance of the event args object.
 @par Library
 xtdc.core
 @ingroup xtdc_core system events
 */
struct xtd_event_args {
  /// @brief The user's data that is associated with the event.
  /// @remarks User data can be NULL.
  xtd_handle user_data;
};
typedef struct xtd_event_args xtd_event_args;

xtd_event_args xtd_event_args_empty();

xtd_event_args xtd_event_args_with_user_data(xtd_handle user_data);
