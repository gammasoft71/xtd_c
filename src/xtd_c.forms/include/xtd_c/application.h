/**
 @file
 @brief Contains application definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "control.h"
#include "form.h"

/**
 @name Methods
 
 @{
 */

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
void xtd_forms_forms_application_run(xtd_forms_form* main_form);

/**
 @}
 */
