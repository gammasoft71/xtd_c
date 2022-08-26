/**
 @file
 @brief Contains trace_listener_collection definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "../object.h"
#include "trace_listener.h"

/**
 @brief Defines the trace_listener_collection object.
 @par Library
 xtd_c.core
 @ingroup xtd_c trace_listener_collection
 */
struct xtd_diagnostics_trace_listener_collection {
  /// @brief Internal handle.
  /// @warning Internal use only
  xtd_handle internal_handle;
};

/** @cond */
typedef struct xtd_diagnostics_trace_listener_collection xtd_diagnostics_trace_listener_collection;

#define XTD_DIAGNOSTICS_TRACE_LISTENER_COLLECTION_TYPE \
(xtd_diagnostics_trace_listener_collection())
/** @endcond */

/** @name Converter */

/**  @{ */
/**
 @brief Convert an xtd object to trace_listener_collection object.
 @par Library
 xtd_c.core
 @ingroup xtd_c trace_listener_collection
 */
#define XTD_DIAGNOSTICS_TRACE_LISTENER_COLLECTION(object) \
(XTD_TYPE_CAST(object, XTD_DIAGNOSTICS_TRACE_LISTENER_COLLECTION_TYPE, xtd_diagnostics_trace_listener_collection))
/** @} */

/** @name Creation/Destruction */

/** @{ */
/**
 @brief Initializes a new instance of the xtd_diagnostics_trace_listener_collection with default settings.
 @return New trace_listener_collection created.
 @par Library
 xtd_c.core
 @ingroup xtd_c trace_listener_collection
 */
xtd_object* xtd_diagnostics_trace_listener_collection_create(void);
/**
 @brief Destroy the instance of the specfied trace_listener_collection
 @param value The trace_listener_collection to delete.
 @par Library
 xtd_c.core
 @ingroup xtd_c trace_listener_collection
 */
void xtd_diagnostics_trace_listener_collection_destroy(xtd_diagnostics_trace_listener_collection* value);
/** @} */

/** @name Properties */

/** @{ */
/** @} */

/** @name Events */

/** @{ */
/** @} */

/** @name Methods */

/** @{ */
/** @} */
