/**
 @file
 @brief Contains event handler definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "object.h"
#include "event_args.h"

/**
 @brief Represents the method that will handle an event that has no event data.
 @param sender The source of the event.
 @param e An object that contains no event data.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core events
 */
typedef void (*xtd_event_handler)(xtd_object* sender, xtd_event_args e);
