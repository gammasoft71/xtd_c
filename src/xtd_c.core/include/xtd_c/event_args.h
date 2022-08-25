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
 xtd_c.core
 @ingroup xtd_c_core system events
 */
struct xtd_event_args {
  /**
   @brief The user's data that is associated with the event.
   @remarks User data can be NULL.
   */
  xtd_handle user_data;
};

/** @cond */
typedef struct xtd_event_args xtd_event_args;
/** @endcond */

/** @name Fields */

/** @{ */
/**
 @brief Provides a value to use with events that do not have event data.
 @remarks Pass this value to event handlers that are associated with events that do not have data.
 */
xtd_event_args xtd_event_args_empty();
/** @} */

/** @name Methods */

/** @{*/
/**
 @brief Creates an xtd_event_args structure with user data.
 @param user_data An xtd_handle on user data.
 @remarks Generally used to transmit data to the function called by the event.
 */
xtd_event_args xtd_event_args_with_user_data(xtd_handle user_data);
/** @} */
