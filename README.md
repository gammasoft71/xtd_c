# xtdc

**C11 framework to create console (CLI), forms (GUI like WinForms) and tunit (unit tests like Microsoft Unit Testing Framework) applications on Windows, macOS, Linux, iOS and android (*).**

[![logo](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/logo.png)](https://gammasoft71.wixsite.com/xtdpro)

(*) See [portability](https://github.com/gammasoft71/xtd/blob/master/docs/portability.md#the-xtd-libraries-portability-list) for more information.

[![License](https://img.shields.io/github/license/gammasoft71/xtd)](https://gammasoft71.wixsite.com/xtdpro/license) [![Language](https://img.shields.io/badge/language-C++17/20-004080.svg)](https://gammasoft71.wixsite.com/xtdpro/portability) [![web](https://img.shields.io/badge/website-xtd-004080.svg)](https://gammasoft71.wixsite.com/xtdpro) [![Reference Guide](https://img.shields.io/badge/code-reference%20guide-004080.svg)](https://codedocs.xyz/gammasoft71/xtd/index.html) [![wiki](https://img.shields.io/badge/wiki-documentation-004080.svg)](https://github.com/gammasoft71/xtd/blob/master/docs/home.md) [![discord](https://img.shields.io/badge/discord-gammasoft-7289DA.svg)](https://discordapp.com/users/gammasoft#9288) [![Download xtd](https://img.shields.io/sourceforge/dt/xtdpro.svg)](https://sourceforge.net/projects/xtdpro/files/latest/download)
## Features

* Free and open-source ([MIT License](https://gammasoft71.wixsite.com/xtdpro/license));
* a collection of native C++ classes libraries, to complete std;
* API close to the .net API with a modern C++ approach and full integration with the std standard;
* xtd is designed to manage GUI controls and dialogs in pure [native mode](https://github.com/gammasoft71/xtd/blob/master/docs/control_appearance.md) or with [CSS styles](https://github.com/gammasoft71/xtd/blob/master/docs/guide_style_sheets_overview.md).
* written in efficient, modern C++17 / C++20 with [RAII](https://en.wikipedia.org/wiki/Resource_acquisition_is_initialization) programming idiom;
* and [highly portable](https://gammasoft71.wixsite.com/xtdpro/portability) and available on [many different platforms](https://gammasoft71.wixsite.com/xtdpro/portability);

## xtd libraries architecture

[![architecture_logo](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/block_diagram_onion.png)](https://gammasoft71.wixsite.com/xtdpro/hierarchy)

xtd is composed of several libraries.

### xtd.core

[![core](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/xtd.core.png)](https://codedocs.xyz/gammasoft71/xtd/group__xtd__core.html)
The [xtd.core](https://codedocs.xyz/gammasoft71/xtd/group__xtd__core.html) library is modern C++17/20 libraries of classes, interfaces, and value types that provide access to system functionality. It is the foundation on which c++ applications, components, and controls are built.

### xtd.drawing

[![drawing](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/xtd.drawing.png)](https://codedocs.xyz/gammasoft71/xtd/group__xtd__drawing.html)
The [xtd.drawing](https://codedocs.xyz/gammasoft71/xtd/group__xtd__drawing.html) library contains types that support basic GDI+ graphics functionality. Child namespaces support advanced two-dimensional and vector graphics functionality, advanced imaging functionality, and print-related and typographical services. A child namespace also contains types that extend design-time user-interface logic and drawing.

### xtd.forms

[![forms](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/xtd.forms.png)](https://codedocs.xyz/gammasoft71/xtd/group__xtd__forms.html)
The [xtd.forms](https://codedocs.xyz/gammasoft71/xtd/group__xtd__forms.html) library contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows, Apple macOS and linux base operating system.

### xtd.tunit

[![tunit](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/xtd.tunit.png)](https://codedocs.xyz/gammasoft71/xtd/group__xtd__tunit.html)
The [xtd.tunit](https://codedocs.xyz/gammasoft71/xtd/group__xtd__tunit.html) library is a unit-testing framework for modern C++17/20, inspired by [Microsoft.VisualStudio.TestTools.Cpp](https://docs.microsoft.com/en-us/visualstudio/test/microsoft-visualstudio-testtools-cppunittestframework-api-reference).

## Getting Started

* [Installation](https://gammasoft71.wixsite.com/xtdpro/download) provides download, install and uninstall documentation.
* [Guides](https://gammasoft71.wixsite.com/xtdpro/guides) provides xtd guides and tutorials.
* [Examples](https://github.com/gammasoft71/xtd/blob/master/examples/README.md) provides some examples.

## Development status

* [Release notes](https://github.com/gammasoft71/xtd/blob/master/docs/release_notes.md) provides release notes information.
* [Roadmap](https://github.com/gammasoft71/xtd/blob/master/docs/roadmap.md) provides a view of the xtd roadmap.
* [Kanban board](https://github.com/users/gammasoft71/projects/3) provides a Kanban view for all tasks (enhancements, pull requests, bugs, questions,...).
* [Development status](https://github.com/gammasoft71/xtd/blob/master/docs/development_status.md) provides information about classes and libraries development status.
* [Translation status](https://github.com/gammasoft71/xtd/blob/master/docs/translations_status.md) provides information about translations status.

## Current release status

[![GitHub milestone](https://img.shields.io/github/milestones/progress/gammasoft71/xtd/1?color=004080&style=for-the-badge)](https://github.com/gammasoft71/xtd/milestone/1) [![GitHub milestone](https://img.shields.io/github/milestones/progress-percent/gammasoft71/xtd/1?color=004080&label=complete%20&style=for-the-badge)](https://github.com/gammasoft71/xtd/milestone/1)
  
This project is an open source project. The developers who participate do so on their own time. It is therefore difficult to fix realese dates. 

But you can follow the evolution of the development. We keep the status up to date.

## Continuous Integration build status

At each commit, a build and unit tests are performed for the following configurations :

| Operating system | Debug                                                                                                                                                                                       | Release                                                                                                                                                                                                 |
|------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Windows (x64)    | [![Windows (x64) Debug](https://img.shields.io/github/workflow/status/gammasoft71/xtd/Windows%20(x64)%20Debug)](https://github.com/gammasoft71/xtd/actions/workflows/windows.yml)           | [![Windows (x64) Release](https://img.shields.io/github/workflow/status/gammasoft71/xtd/Windows%20(x64)%20Release)](https://github.com/gammasoft71/xtd/actions/workflows/windows_release.yml)           |
| Windows (x86)    | [![Windows (x86) Debug](https://img.shields.io/github/workflow/status/gammasoft71/xtd/Windows%20(win32)%20Debug)](https://github.com/gammasoft71/xtd/actions/workflows/windows_win32.yml)   | [![Windows (x86) Release](https://img.shields.io/github/workflow/status/gammasoft71/xtd/Windows%20(win32)%20Release)](https://github.com/gammasoft71/xtd/actions/workflows/windows_win32_release.yml)   |
| macOS            | [![macOS Debug](https://img.shields.io/github/workflow/status/gammasoft71/xtd/macOS%20Debug/master)](https://github.com/gammasoft71/xtd/actions/workflows/macos.yml)                        | [![macOS Release](https://img.shields.io/github/workflow/status/gammasoft71/xtd/macOS%20Release/master)](https://github.com/gammasoft71/xtd/actions/workflows/macos_release.yml)                        |
| Ubuntu           | [![Ubuntu Debug](https://img.shields.io/github/workflow/status/gammasoft71/xtd/Ubuntu%20Debug/master)](https://github.com/gammasoft71/xtd/actions/workflows/ubuntu.yml)                     | [![Ubuntu Release](https://img.shields.io/github/workflow/status/gammasoft71/xtd/Ubuntu%20Release/master)](https://github.com/gammasoft71/xtd/actions/workflows/ubuntu_release.yml)                     |
| iOS (**)         | Coming soon...                                                                                                                                                                              | Coming soon...                                                                                                                                                                                          |
| Android (**)     | Coming soon...                                                                                                                                                                              | Coming soon...                                                                                                                                                                                          |

 (**) [xtd.core and xtd.tunit only](https://gammasoft71.wixsite.com/xtdpro/portability).

## Issues status

As xtd is managed by a [Kanban project](https://github.com/users/gammasoft71/projects/3), the number of open issues can be quite large. The table below gives a clearer view on the number of open bugs/questions and enhancements.

| Issues                                  | Open                                                                                                                                                                                                                                                                                                       | Closed                                                                                                                                                                                                                                                                                                            |
|-----------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Bugs / Questions from users             | [![GitHub issue custom search in repo](https://img.shields.io/github/issues-search/gammasoft71/xtd?color=red&label=query&query=is%3Aopen%20is%3Aissue+-label%3Aenhancement)](https://github.com/gammasoft71/xtd/issues?q=is%3Aopen+is%3Aissue+-label%3Aenhancement)                                        | [![GitHub issue custom search in repo](https://img.shields.io/github/issues-search/gammasoft71/xtd?color=lighgreen&label=query&query=is%3Aclosed%20is%3Aissue%20-label%3Aenhancement)](https://github.com/gammasoft71/xtd/issues?q=is%3Aissue+-label%3Aenhancement+is%3Aclosed)                                   |
| xtd 0.2.0 - Enhancements / Developments | [![GitHub issue custom search in repo](https://img.shields.io/github/issues-search/gammasoft71/xtd?color=004080&label=query&query=is%3Aopen%20is%3Aissue%20label%3Aenhancement+milestone%3A0.2.0)](https://github.com/gammasoft71/xtd/issues?q=is%3Aissue+label%3Aenhancement+is%3Aopen+milestone%3A0.2.0) | [![GitHub issue custom search in repo](https://img.shields.io/github/issues-search/gammasoft71/xtd?color=lighgreen&label=query&query=is%3Aclosed%20is%3Aissue%20label%3Aenhancement+milestone%3A0.2.0)](https://github.com/gammasoft71/xtd/issues?q=is%3Aclosed+is%3Aissue+label%3Aenhancement+milestone%3A0.2.0) |
| xtd 0.3.0 - Enhancements / Developments | [![GitHub issue custom search in repo](https://img.shields.io/github/issues-search/gammasoft71/xtd?color=004080&label=query&query=is%3Aopen%20is%3Aissue%20label%3Aenhancement+milestone%3A0.3.0)](https://github.com/gammasoft71/xtd/issues?q=is%3Aissue+label%3Aenhancement+is%3Aopen+milestone%3A0.3.0) | [![GitHub issue custom search in repo](https://img.shields.io/github/issues-search/gammasoft71/xtd?color=lighgreen&label=query&query=is%3Aclosed%20is%3Aissue%20label%3Aenhancement+milestone%3A0.3.0)](https://github.com/gammasoft71/xtd/issues?q=is%3Aclosed+is%3Aissue+label%3Aenhancement+milestone%3A0.3.0) |
| xtd 0.4.0 - Enhancements / Developments | [![GitHub issue custom search in repo](https://img.shields.io/github/issues-search/gammasoft71/xtd?color=004080&label=query&query=is%3Aopen%20is%3Aissue%20label%3Aenhancement+milestone%3A0.4.0)](https://github.com/gammasoft71/xtd/issues?q=is%3Aissue+label%3Aenhancement+is%3Aopen+milestone%3A0.4.0) | [![GitHub issue custom search in repo](https://img.shields.io/github/issues-search/gammasoft71/xtd?color=lighgreen&label=query&query=is%3Aclosed%20is%3Aissue%20label%3Aenhancement+milestone%3A0.4.0)](https://github.com/gammasoft71/xtd/issues?q=is%3Aclosed+is%3Aissue+label%3Aenhancement+milestone%3A0.4.0) |
| xtd 1.0.0 - Enhancements / Developments | [![GitHub issue custom search in repo](https://img.shields.io/github/issues-search/gammasoft71/xtd?color=004080&label=query&query=is%3Aopen%20is%3Aissue%20label%3Aenhancement+milestone%3A1.0.0)](https://github.com/gammasoft71/xtd/issues?q=is%3Aissue+label%3Aenhancement+is%3Aopen+milestone%3A1.0.0) | [![GitHub issue custom search in repo](https://img.shields.io/github/issues-search/gammasoft71/xtd?color=lighgreen&label=query&query=is%3Aclosed%20is%3Aissue%20label%3Aenhancement+milestone%3A1.0.0)](https://github.com/gammasoft71/xtd/issues?q=is%3Aclosed+is%3Aissue+label%3Aenhancement+milestone%3A1.0.0) |

## Examples

The classic first application 'Hello World'.

### Console (CLI)

#### hello_world_console.c

```c
#include <xtdc/xtdc.h>

int main() {
  xtd_console_set_background_color(xtd_console_color_blue);
  xtd_console_set_foreground_color(xtd_console_color_white);
  xtd_console_write_line("Hello, World!");
}
```

#### CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.3)

project(hello_world_console)
find_package(xtdc REQUIRED)
add_sources(hello_world_console.c)
target_type(C_CONSOLE_APPLICATION)
```

#### Build and run

Open "Command Prompt" or "Terminal". Navigate to the folder that contains the project and type the following:

```shell
xtdc run
```

#### Output

![Screenshot](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/examples/hello_world_console.png)

### Forms (GUI like WinForms)

#### hello_world_forms.c

```c
#include <xtdc/xtdc.h>

void on_button1_click(xtd_control* sender, xtd_event_args e) {
  xtd_message_box_show(NULL, "Hello, World!", "", xtd_message_box_buttons_ok, xtd_message_box_icon_none, xtd_message_box_default_button_1, (xtd_message_box_options)0);
}

int main() {
  xtd_control* form1 = xtd_form_create();
  xtd_control_set_text(form1, "Hello world (message_box)");

  xtd_control* button1 = xtd_button_create();
  xtd_control_set_location(button1, (xtd_point){10, 10});
  xtd_control_set_parent(button1, form1);
  xtd_control_set_text(button1, "&Click me");
  xtd_control_add_click(button1, &on_button1_click);
  
  xtd_application_run(xtd_ptr_to_xtd_form_ptr(form1));
  
  xtd_control_destroy(button1);
  xtd_control_destroy(form1);
}
```

#### CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.3)

project(hello_world_forms)
find_package(xtdc REQUIRED)
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

![Screenshot](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/examples/hello_world_message_box_w.png)

![Screenshot](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/examples/hello_world_message_box_wd.png)

##### macOS

![Screenshot](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/examples/hello_world_message_box_m.png)

![Screenshot](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/examples/hello_world_message_box_md.png)

##### Linux Gnome

![Screenshot](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/examples/hello_world_message_box_g.png)

![Screenshot](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/examples/hello_world_message_box_gd.png)

### tunit (Unit tests like Microsoft Unit Testing Framework)

#### hello_world_test.cpp

```c++
#include <xtd/xtd>
#include <string>

using namespace std;
using namespace xtd::tunit;

namespace unit_tests {
  class test_class_(hello_world_test) {
  public:
    void test_method_(create_string_from_literal) {
      string s = "Hello, World!";
      valid::are_equal(13, s.size());
      assert::are_equal("Hello, World!", s);
    }
    
    void test_method_(create_string_from_chars) {
      string s = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
      valid::are_equal(13, s.size());
      string_assert::starts_with("Hello,", s);
      string_assert::ends_with(" World!", s);
    }
  };
}

int main() {
  return console_unit_test().run();
}
```

#### CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.3)

project(hello_world_test)
find_package(xtd REQUIRED)
add_sources(hello_world_test.cpp)
target_type(TEST_APPLICATION)
```

#### Build and run

Open "Command Prompt" or "Terminal". Navigate to the folder that contains the project and type the following:

```shell
xtdc run
```

#### Output

![Screenshot](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/examples/hello_world_tunit.png)

## Gallery

[![minesweeper](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/minesweeper.png)](https://github.com/gammasoft71/xtd/blob/master/examples/xtd.forms.examples/games/minesweeper/README.md)

[minesweeper (on Windows)](https://github.com/gammasoft71/xtd/blob/master/examples/xtd.forms.examples/games/minesweeper/README.md)

______________________________________________________________________________________________

[![game_of_life](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/game_of_life.png)](https://github.com/gammasoft71/xtd/blob/master/examples/xtd.forms.examples/games/game_of_life/README.md)

[game_of_life (on macOS)](https://github.com/gammasoft71/xtd/blob/master/examples/xtd.forms.examples/games/game_of_life/README.md)

______________________________________________________________________________________________

[![xtdc-gui](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/xtdc-gui.png)](https://github.com/gammasoft71/xtd/blob/master/tools/xtdc-gui/README.md)

[xtdc-gui - Create a new project (on macOS)](https://github.com/gammasoft71/xtd/blob/master/tools/xtdc-gui/README.md)

______________________________________________________________________________________________

[![calculator](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/calculator.png)](https://github.com/gammasoft71/xtd/blob/master/examples/xtd.forms.examples/others/calculator/README.md)

[calculator (on Ubuntu)](https://github.com/gammasoft71/xtd/blob/master/examples/xtd.forms.examples/others/calculator/README.md)

______________________________________________________________________________________________

[![stopwatch](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/stopwatch.png)](https://github.com/gammasoft71/xtd/blob/master/examples/xtd.forms.examples/others/stopwatch_form/README.md)

[stopwatch (on Windows)](https://github.com/gammasoft71/xtd/blob/master/examples/xtd.forms.examples/others/stopwatch_form/README.md)

______________________________________________________________________________________________

[![painting](https://github.com/gammasoft71/xtd/blob/master/docs/pictures/painting.png)](https://github.com/gammasoft71/xtd/blob/master/examples/xtd.forms.examples/others/painting/README.md)

[painting (on Ubuntu)](https://github.com/gammasoft71/xtd/blob/master/examples/xtd.forms.examples/others/painting/README.md)

## Contributing

The [authors file](https://github.com/gammasoft71/xtd/blob/master/AUTHORS.md) lists contributors together with contact information. If you make a contribution, please add yourself to the list.

**Your contributions are welcome.**

* First read [Code of conduct](https://github.com/gammasoft71/xtd/blob/master/CODE_OF_CONDUCT.md) and the [design guidelines](https://gammasoft71.wixsite.com/xtdpro/designguidelines) to make sure your contribution follows the rules.
* [Fork](https://github.com/gammasoft71/xtd/fork) the project and use a pull request for adding your contribution.
* If you face any problems feel free to open an issue at the [issues tracker](https://github.com/gammasoft71/xtd/issues), If you feel like there is a missing feature, please raise a ticket on Github. Pull request are also welcome.

**Your feedback is important for the evolution of the project.**

### Beginners

The following project aims to simplify and guide the way beginners make their first contribution. If you are looking to make your first contribution, check out the project below.

[First Contributions](https://github.com/firstcontributions/first-contributions)

Now you are ready to make your first contribution to xtd.

## See also

* [website](https://gammasoft71.wixsite.com/xtdpro)
* [wiki](https://github.com/gammasoft71/xtd/blob/master/docs/home.md)
* [github](https://github.com/gammasoft71/xtd) 
* [project](https://sourceforge.net/projects/xtdpro/) 
* [Reference Guide](https://codedocs.xyz/gammasoft71/xtd/index.html)
* [Support](https://gammasoft71.wixsite.com/xtdpro/support)

______________________________________________________________________________________________

© 2022 Gammasoft.
