/**
 @file
 @brief Contains object definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "types.h"

/**
 @brief Represent an instance of the ultimate base object.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system object
 */
struct xtd_object {
  /**
   @brief Internal handle.
   @warning Internal use only
   */
  xtd_handle internal_handle;
};

/** @cond */
typedef struct xtd_object xtd_object;

#define XTD_OBJECT_TYPE \
  (xtd_object())
/** @endcond */

/**
 @name Converter
 
 @{
 */

/**
 @brief Convert n xtd object to ultimate base object.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system object
 */
#define XTD_OBJECT(object) \
  (XTD_TYPE_CAST(object, XTD_OBJECT_TYPE, xtd_object))

/**
 @}
 */

/**
 @name Creation/Destruction

 @{
 */

/**
@brief Create a new instance of the ultimate base object.
@return New object created.
@par Library
xtd_c.core
@ingroup xtd_c_core system object
@remarks You must call xtd_object_destroy to free memory and resources.
@par Examples
This example shows how to use xtd_object_create and xtd_object_destroy to create and destroy an xtd_object.
@code
int main(int argc, char* argv[]) {
  xtd_object* object = xtd_object_create();
  xtd_object_destroy(object);
}
@endcode
*/
xtd_object* xtd_object_create(void);

/**
@brief Destroy the instance of the specfied object
@param value The object to delete.
@par Library
xtd_c.core
@ingroup xtd_c_core system object
@remarks You can use this method to destroy any xtd object.
@par Examples
This example shows how to use xtd_object_create and xtd_object_destroy to create and destroy an xtd_object.
@code
int main(int argc, char* argv[]) {
  xtd_object* object = xtd_object_create();
  xtd_object_destroy(object);
}
@endcode
 This example shows how to use xtd_object_destroy to destroy an xtd_version object by using the XTD_OBJECT method to convert xtd_version to xtd_object.
@code
int main(int argc, char* argv[]) {
  xtd_version* version = xtd_create_version(1, 2, 3);
  xtd_object_destroy(XTD_OBJECT(version));
}
@endcode
*/
void xtd_object_destroy(xtd_object* value);

/**
 @}
 */

/**
 @name Methods

 @{
 */

/**
 @brief Returns a string that represents the specified object.
 @param value The object to retrieve the string.
 @param string A pointer to the string that will contain the representation of the specified object.
 @param size The size og the specified string.
 @return The size in characters of the representation of the specified object.
 @par Library
 xtd_c.core
 @ingroup xtd_c_core system object
 @remarks If the string is NULL, this method returns only the necessary size with the ending 0 character that you can use to allocate your string.
 @par Examples
 This example shows how to use xtd_object_to_string with an xtd_version object.
 @code
 int main(int argc, char* argv[]) {
   xtd_version* version = xtd_create_version(1, 2, 3);
   size_t size = xtd_object_to_string(XTD_OBJECT(version), NULL, 0);
   char version_string[256];
   xtd_object_to_string(XTD_OBJECT(version), version_string, 256);
   console::write_line("%s", version_string);
   xtd_version_destroy(version);
 }
 @endcode
 @par Examples
 This example shows how to use xtd_object_to_string with the xtd_version object by using the possibility to get the size before allocating the string.
 @code
   xtd_version* version = xtd_create_version(1, 2, 3);
   size_t size = xtd_object_to_string(XTD_OBJECT(version), NULL, 0);
   char* version_string = (char*)malloc(size);
   xtd_object_to_string(XTD_OBJECT(version), version_string, size);
   console_write_line("%s", version_string);
   free(version_string);
   xtd_version_destroy(version);
 }
 @endcode
 */
size_t xtd_object_to_string(const xtd_object* value, char* string, size_t size);
/**
 @}
 */
