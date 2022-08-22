#include <xtdc/object.h>
#include <xtdc/ustring.h>
#include <stdio.h>
#include <stdlib.h>

/* The main entry point for the application. */
int main(int argc, char* argv[]) {
  /*printf("Hello, World!\n");*/
  /*
  xtd_ustring* str = xtd_ustring_create_from_char_ptr("c Hello, World! \U0001F428");
  xtd_ustring* wstr = xtd_ustring_create_from_wchar_ptr(L"w Hello, World! \U0001F428");
  xtd_ustring* str16 = xtd_ustring_create_from_char16_ptr(u"u Hello, World! \U0001F428");
  xtd_ustring* str32 = xtd_ustring_create_from_char32_ptr(U"U Hello, World! \U0001F428");

  printf("%s\n", xtd_ustring_get_char_ptr(str));
  printf("%s\n", xtd_ustring_get_char_ptr(wstr));
  printf("%s\n", xtd_ustring_get_char_ptr(str16));
  printf("%s\n", xtd_ustring_get_char_ptr(str32));

  char string[5];
  xtd_object_to_string(XTD_OBJECT_PTR(str), string, 5);
  printf("to_string : %s\n", string);

  xtd_object_destroy(xtd_ptr_to_xtd_object_ptr(str));
  xtd_ustring_destroy(wstr);
  xtd_ustring_destroy(str16);
  xtd_ustring_destroy(str32);
   */
  xtd_object* my_object = xtd_object_create(); //xtd_create_version(1, 2, 3);
  size_t size = xtd_object_to_string(xtd_ptr_to_xtd_object_ptr(my_object), NULL, 0);
  char* string = (char*)malloc(size);
  xtd_object_to_string(xtd_ptr_to_xtd_object_ptr(my_object), string, size);
  printf("%s\n", string);
  free(string);
  xtd_object_destroy(my_object);
}
