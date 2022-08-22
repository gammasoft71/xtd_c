/**
 @file
 @brief Contains object methods.
 */
#pragma once
#include <stddef.h>
#include <stdint.h>

/**
 @brief Represent an instance of the ultimate base object.
 @par Library
 xtdc.core
 @ingroup xtdc_core system object
 */
struct xtd_object;
typedef struct xtd_object xtd_object;

/**
 @brief Convert a pointer of any xtd object to ultimate base object.
 @par Library
 xtdc.core
 @ingroup xtdc_core system object
 */
xtd_object* xtd_to_xtd_object_ptr(void* ptr);

 /**
 @brief Create a new instance of the ultimate base object.
 @return New object created.
 @par Library
 xtdc.core
 @ingroup xtdc_core system object
 @remarks You must call xtd_object_destroy to free memory and resources.
 @par Examples
 This example shows how to use xtd_object_create and xtd_object_destroy to create and destroy an xtd_object.
 @code
 int main(int argc, char* argv[]) {
   xtd_object* object = xtd_object_create();
   xtd_version_destroy(object);
 }
 @endcode
 */
xtd_object* xtd_object_create();

 /**
 @brief Destroy the instance of the specfied object
 @param value The object to delete.
 @par Library
 xtdc.core
 @ingroup xtdc_core system object
 @remarks You can use this method to destroy any xtd object.
 @par Examples
 This example shows how to use xtd_object_create and xtd_object_destroy to create and destroy an xtd_object.
 @code
 int main(int argc, char* argv[]) {
   xtd_object* object = xtd_object_create();
   xtd_version_destroy(object);
 }
 @endcode
 This example shows how to use xtd_object_destroy to destroy an xtd_version object.
 @code
 int main(int argc, char* argv[]) {
   xtd_version* version = xtd_create_version(1, 2, 3);
   xtd_version_destroy(XTD_OBJECT_PTR(version));
 }
 @endcode
 */
void xtd_object_destroy(xtd_object* value);

/**
 @brief Returns a string that represents the specified object.
 @param value The object to retrieve the string.
 @param string A pointer to the string that will contain the representation of the specified object.
 @param size The size og the specified string.
 @return The size in characters of the representation of the specified object.
 @par Library
 xtdc.core
 @ingroup xtdc_core system object
 @remarks If the string is NULL, this method returns only the necessary size with the ending 0 character that you can use to allocate your string.
 @par Examples
 This example shows how to use xtd_object_to_string with an xtd_version object.
 @code
 int main(int argc, char* argv[]) {
   xtd_version* version = xtd_create_version(1, 2, 3);
   size_t size = xtd_object_to_string(XTD_OBJECT_PTR(version), NULL, 0);
   char version_string[256];
   xtd_object_to_string(XTD_OBJECT_PTR(version), version_string, 256);
   printf("%s\n", version_string);
   xtd_version_destroy(version);
 }
 @endcode
 @par Examples
 This example shows how to use xtd_object_to_string with the xtd_version object by using the possibility to get the size before allocating the string.
 @code
   xtd_version* version = xtd_create_version(1, 2, 3);
   size_t size = xtd_object_to_string(XTD_OBJECT_PTR(version), NULL, 0);
   char* version_string = (char*)malloc(size);
   xtd_object_to_string(XTD_OBJECT_PTR(version), version_string, size);
   printf("%s\n", version_string);
   free(version_string);
   xtd_version_destroy(version);
 }
 @endcode
 */
size_t xtd_object_to_string(const xtd_object* value, char* string, size_t size);
