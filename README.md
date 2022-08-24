# xtd_c

**C11 framework to create console (CLI), forms (GUI like WinForms) and tunit (unit tests like Microsoft Unit Testing Framework) applications on Windows, macOS, Linux, iOS and android (*).**

![logo](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/logo.png)

(*) See [portability](https://github.com/gammasoft71/xtd/blob/master/docs/portability.md#the-xtd-libraries-portability-list) for more information.

[![License](https://img.shields.io/github/license/gammasoft71/xtd)](https://github.com/gammasoft71/xtd_c/blob/main/docs/license.md) [![Language](https://img.shields.io/badge/language-C11/20-004080.svg)]() [![web](https://img.shields.io/badge/website-xtd_c-004080.svg)](https://gammasoft71.wixsite.com/xtd_cpro) [![Reference Guide](https://img.shields.io/badge/code-reference%20guide-004080.svg)](https://codedocs.xyz/gammasoft71/xtd_c/index.html) [![wiki](https://img.shields.io/badge/wiki-documentation-004080.svg)](https://github.com/gammasoft71/xtd_c/blob/main/docs/home.md) [![discord](https://img.shields.io/badge/discord-gammasoft-7289DA.svg)](https://discordapp.com/users/gammasoft#9288)

## Warning

⚠️ xtd_c IS UNDER INTENSIVE DEVELOPMENT AND IS NOT READY TO BE USED. ⚠️

## Features

* Free and open-source ([MIT License](https://github.com/gammasoft71/xtd_c/blob/main/docs/license.md));
* a collection of native C11 libraries, to complete C11 standard;
* API close to the [xtd](https://gammasoft71.wixsite.com/xtdpro) with a modern C11 approach and full integration with the ANSI/ISO standard;
* xtd_c is designed to manage GUI controls and dialogs in pure [native mode]() or with [CSS styles]().
* written in efficient, C11;
* and [highly portable](y) and available on [many different platforms]();

## Dependency

xtd_c is a C11 wrapper on [xtd](https://gammasoft71.wixsite.com/xtdpro) framework.
You need to [install](https://gammasoft71.wixsite.com/xtdpro/download) xtd before using xtd_c.

## xtd libraries architecture

![architecture_logo](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/block_diagram_onion.png)

xtd_c is composed of several libraries.

### xtd_c.core

[![core](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/xtd_c.core.png)](https://codedocs.xyz/gammasoft71/xtd_c/group__xtd__c__core.html)
The [xtd_c.core](https://codedocs.xyz/gammasoft71/xtd_c/group__xtd__c__core.html) library is C11 libraries of struct, enum, and value types that provide access to system functionality. It is the foundation on which C11 applications, components, and controls are built.

### xtd_c.drawing

[![drawing](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/xtd_c.drawing.png)](https://codedocs.xyz/gammasoft71/xtd_c/group__xtd__c__drawing.html)
The [xtd_c.drawing](https://codedocs.xyz/gammasoft71/xtd_c/group__xtd__c__drawing.html) library contains types that support basic GDI+ graphics functionality. Child namespaces support advanced two-dimensional and vector graphics functionality, advanced imaging functionality, and print-related and typographical services. A child namespace also contains types that extend design-time user-interface logic and drawing.

### xtd_c.forms

[![forms](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/xtd_c.forms.png)](https://codedocs.xyz/gammasoft71/xtd_c/group__xtd__c__forms.html)
The [xtd_c.forms](https://codedocs.xyz/gammasoft71/xtd_c/group__xtd__c__forms.html) library contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows, Apple macOS and linux base operating system.

### xtd_c.tunit

[![tunit](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/xtd_c.tunit.png)](https://codedocs.xyz/gammasoft71/xtd_c/group__xtd__c__tunit.html)
The [xtd_c.tunit](https://codedocs.xyz/gammasoft71/xtd_c/group__xtd__c__tunit.html) library is a unit-testing framework for modern C11, inspired by [Microsoft.VisualStudio.TestTools.Cpp](https://docs.microsoft.com/en-us/visualstudio/test/microsoft-visualstudio-testtools-cppunittestframework-api-reference).

## Getting Started

* Comming soon...

## Development status

* Comming soon...

## Current release status

* Comming soon...
  
This project is an open source project. The developers who participate do so on their own time. It is therefore difficult to fix realese dates. 

But you can follow the evolution of the development. We keep the status up to date.

## Continuous Integration build status

* Comming soon...

## Issues status

* Comming soon...

## Examples

The classic first application 'Hello World'.

### Console (CLI)

#### hello_world_console.c

```c
#include <xtd_c/xtd_c.h>

int main(void) {
  xtd_console_set_background_color(xtd_console_color_blue);
  xtd_console_set_foreground_color(xtd_console_color_white);
  xtd_console_write_line("Hello, World!");
  return EXIT_SUCCESS;
}
```

#### CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.3)

project(hello_world_console)
find_package(xtd_c REQUIRED)
add_sources(hello_world_console.c)
target_type(C_CONSOLE_APPLICATION)
```

#### Build and run

Open "Command Prompt" or "Terminal". Navigate to the folder that contains the project and type the following:

```shell
xtdc run
```

#### Output

![Screenshot](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/examples/hello_world_console.png)

### Forms (GUI like WinForms)

#### hello_world_forms.c

```c
#include <xtd_c/xtd_c.h>

void on_button1_click(xtd_object* sender, xtd_event_args e) {
  xtd_message_box_show(NULL, "Hello, World!", "", xtd_message_box_buttons_ok, xtd_message_box_icon_none, xtd_message_box_default_button_1, xtd_message_box_options_none, xtd_false);
}

int main(void) {
  xtd_control* form1 = xtd_form_create();
  xtd_control_set_text(form1, "Hello world (message_box)");
  
  xtd_control* button1 = xtd_button_create();
  xtd_control_set_location(button1, (xtd_point){10, 10});
  xtd_control_set_parent(button1, form1);
  xtd_control_set_text(button1, "&Click me");
  xtd_control_set_click_event(button1, &on_button1_click, NULL);

  xtd_application_run(xtd_ptr_to_xtd_form_ptr(form1));
  
  xtd_control_destroy(button1);
  xtd_control_destroy(form1);
  return EXIT_SUCCESS;
}
```

#### CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.3)

project(hello_world_forms)
find_package(xtd_c REQUIRED)
add_sources(hello_world_forms.c)
target_type(C_GUI_APPLICATION)
```

#### Build and run

Open "Command Prompt" or "Terminal". Navigate to the folder that contains the project and type the following:

```shell
xtdc run
```

#### Output

##### Windows

![Screenshot](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/examples/hello_world_message_box_w.png)

![Screenshot](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/examples/hello_world_message_box_wd.png)

##### macOS

![Screenshot](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/examples/hello_world_message_box_m.png)

![Screenshot](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/examples/hello_world_message_box_md.png)

##### Linux Gnome

![Screenshot](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/examples/hello_world_message_box_g.png)

![Screenshot](https://github.com/gammasoft71/xtd_c/blob/main/docs/pictures/examples/hello_world_message_box_gd.png)

### tunit (Unit tests like Microsoft Unit Testing Framework)

#### hello_world_test.c

```c++
  Comming soon...
```

#### CMakeLists.txt

```cmake
  Comming soon...
```

#### Build and run

Open "Command Prompt" or "Terminal". Navigate to the folder that contains the project and type the following:

```shell
xtdc run
```

#### Output

* Comming soon...

## xtd

For more information about xtd framework see [xtd website](https://gammasoft71.wixsite.com/xtdpro).

## Contributing

The [authors file](https://github.com/gammasoft71/xtd_c/blob/main/AUTHORS.md) lists contributors together with contact information. If you make a contribution, please add yourself to the list.

**Your contributions are welcome.**

* First read [Code of conduct](https://github.com/gammasoft71/xtd_c/blob/main/CODE_OF_CONDUCT.md) and the [design guidelines](https://gammasoft71.wixsite.com/xtdpro/designguidelines) to make sure your contribution follows the rules.
* [Fork](https://github.com/gammasoft71/xtd_c/fork) the project and use a pull request for adding your contribution.
* If you face any problems feel free to open an issue at the [issues tracker](https://github.com/gammasoft71/xtd_c/issues), If you feel like there is a missing feature, please raise a ticket on Github. Pull request are also welcome.

**Your feedback is important for the evolution of the project.**

### Beginners

The following project aims to simplify and guide the way beginners make their first contribution. If you are looking to make your first contribution, check out the project below.

[First Contributions](https://github.com/firstcontributions/first-contributions)

Now you are ready to make your first contribution to xtd.

## See also

* Comming soon...

______________________________________________________________________________________________

© 2022 Gammasoft.
