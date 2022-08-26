/**
 @file
 @brief Contains debug definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "../types.h"
#include "current_stack_frame.h"

xtd_bool __xtd_debug_should_aborted_with_condition__(xtd_bool condition);
xtd_bool __xtd_debug_should_aborted_with_condition_message___(xtd_bool condition, const char* message);
xtd_bool __xtd_debug_should_aborted_with_condition_current_stack_frame__(xtd_bool condition, const xtd_current_stack_frame* current_stack_frame);
xtd_bool __xtd_debug_should_aborted_with_conditio_message_current_stack_frame__(xtd_bool condition, const char* message, const xtd_current_stack_frame* current_stack_frame);
