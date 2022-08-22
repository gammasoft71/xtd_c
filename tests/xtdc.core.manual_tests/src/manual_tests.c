#include <xtdc/object.h>
#include <xtdc/ustring.h>
#include <stdio.h>
#include <stdlib.h>

struct xtd_point {
  int32_t x;
  int32_t y;
};
typedef struct xtd_point xtd_point;

struct xtd_size {
  int32_t width;
  int32_t height;
};
typedef struct xtd_size xtd_size;

struct xtd_graphics;
typedef struct xtd_graphics xtd_graphics;

void xtd_graphics_draw_line(xtd_graphics* graphics, xtd_point point) {
  printf("xtd_graphics_draw_line : graphics %p, point [%d, %d]\n", (void*)graphics, point.x, point.y);
}

enum xtd_dialog_result {
  xtd_dialog_result_none = 0,
  xtd_dialog_result_ok = 1,
  xtd_dialog_result_cancel = 2,
  xtd_dialog_result_abort = 3,
  xtd_dialog_result_retry = 4,
  xtd_dialog_result_ignore = 5,
  xtd_dialog_result_yes = 6,
  xtd_dialog_result_no = 7,
};
typedef enum xtd_dialog_result xtd_dialog_result;

enum xtd_message_box_buttons {
  xtd_message_box_buttons_ok = 0,
  xtd_message_box_buttons_ok_cancel = 1,
  xtd_message_box_buttons_abort_retry_ignore = 2,
  xtd_message_box_buttons_yes_no_cancel = 3,
  xtd_message_box_buttons_yes_no = 4,
  xtd_message_box_buttons_retry_ignore = 5,
};
typedef enum xtd_message_box_buttons xtd_message_box_buttons;

enum xtd_message_box_icon {
  xtd_message_box_icon_none = 0,
  xtd_message_box_icon_hand = 0x00000010L,
  xtd_message_box_icon_stop = 0x00000010L,
  xtd_message_box_icon_error = 0x00000010L,
  xtd_message_box_icon_question = 0x00000020L,
  xtd_message_box_icon_exclamation = 0x00000030L,
  xtd_message_box_icon_warning = 0x00000030L,
  xtd_message_box_icon_asterisk = 0x00000040L,
  xtd_message_box_icon_information = 0x00000040L,
};
typedef enum xtd_message_box_icon xtd_message_box_icon;

enum xtd_message_box_default_button {
  xtd_message_box_default_button_1,
  xtd_message_box_default_button_2,
  xtd_message_box_default_button_3,
};
typedef enum xtd_message_box_default_button xtd_message_box_default_button;

enum xtd_message_box_options {
  xtd_message_box_options_default_desktop_only = 0x00020000L,
  xtd_message_box_options_right_align = 0x00080000L,
  xtd_message_box_options_rtl_reading = 0x00100000L,
  xtd_message_box_options_service_notification = 0x00200000L
};
typedef enum xtd_message_box_options xtd_message_box_options;

xtd_dialog_result xtd_message_box_show(const char* text, const char* caption, xtd_message_box_buttons buttons, xtd_message_box_icon icon, xtd_message_box_default_button default_button, xtd_message_box_options options) {
  printf("xtd_message_box_show : \n");
  printf("  text           : %s\n", text);
  printf("  caption        : %s\n", caption);
  printf("  buttons        : %d\n", (int32_t)buttons);
  printf("  icon           : %d\n", (int32_t)icon);
  printf("  default_button : %d\n", (int32_t)default_button);
  printf("  options        : %d\n", (int32_t)options);

  return xtd_dialog_result_ok;
}

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
  //xtd_point point = {10, 20};
  xtd_graphics_draw_line(NULL, (xtd_point){10, 20});
  xtd_message_box_show("Text", "", xtd_message_box_buttons_ok, xtd_message_box_icon_none, xtd_message_box_default_button_1, (xtd_message_box_options)0);
  xtd_object* my_object = xtd_object_create(); //xtd_create_version(1, 2, 3);
  size_t size = xtd_object_to_string(xtd_ptr_to_xtd_object_ptr(my_object), NULL, 0);
  char* string = (char*)malloc(size);
  xtd_object_to_string(xtd_ptr_to_xtd_object_ptr(my_object), string, size);
  printf("%s\n", string);
  free(string);
  xtd_object_destroy(my_object);
}
