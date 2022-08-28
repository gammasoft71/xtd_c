/**
 @file
 @brief Contains control_collection definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include <xtd_c/object.h>

/**
 @defgroup control_collection control_collection
 @brief Represents a Windows control_collection control.
 @ingroup controls
 */

struct xtd_forms_control_collection {
  /**
   @brief Internal handle.
   @warning Internal use only
   */
  xtd_handle internal_handle;
};
/** @cond */
typedef struct xtd_forms_control_collection xtd_forms_control_collection;

#define XTD_FORMS_CONTROL_COLLECTION_TYPE \
  (xtd_forms_control_collection())
/** @endcond */

/** @name Converter */
 
/**  @{ */
/**
 @brief Convert an xtd object to control_collection object.
 @par Library
 xtd_c.core
 @ingroup xtd_c_forms controls control_collection
 */
#define XTD_FORMS_CONTROL_COLLECTION(object) \
  (XTD_TYPE_CAST(object, XTD_FORMS_CONTROL_COLLECTION_TYPE, xtd_forms_control_collection))
/** @} */

xtd_forms_control_collection* xtd_forms_control_collection_create(void);
void xtd_forms_control_collection_destroy(xtd_forms_control_collection* value);
