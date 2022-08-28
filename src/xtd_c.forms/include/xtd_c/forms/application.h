/**
 @file
 @brief Contains application definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "control.h"
#include "form.h"

/**
 @defgroup application application
 @brief Provides static methods and properties to manage an application, such as methods to start and stop an application, to process Windows messages, and methods to get information about an application. This class cannot be inherited.
 @ingroup gui
 @remarks The application class has methods to start and stop applications and threads, and to process Windows messages, as follows:
 * xtd_forms_application_run() starts an application message loop on the current thread and, optionally, makes a form visible.
 * xtd_forms_application_exit() or exit_thread() stops a message loop.
 * xtd_forms_application_do_events() processes messages while your program is in a loop.
 * xtd_forms_application_add_message_filter() adds a message filter to the application message pump to monitor Windows messages.
 @remarks You cannot create an instance of this class.
 @par Examples
 The following code example demonstrates the use of application class.
 @include application.c
 @par Examples
  How to manage exception with application class.
 @include application_and_exception.c
 */
/** @name Methods */
 
/** @{ */
/**
 @brief Begins running a standard application message loop on the current thread, and makes the specified form visible.
 @param main_form A form that represents the form to make visible.
 @remarks Typically, the main function of an application calls this method and passes to it the main window of the application.
 @par Library
 xtd_c.forms
 @ingroup xtd_c_forms application
 @remarks This method adds an event handler to the main_form parameter for the closed event. The event handler calls exit_thread to clean up the application.
 @par Examples
 The following code example demonstrates the use of application run method.
 @include application.c
*/
void xtd_forms_application_run(xtd_forms_form* main_form);
/** @} */
