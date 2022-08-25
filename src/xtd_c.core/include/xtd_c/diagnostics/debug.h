/**
 @file
 @brief Contains debug definitions.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once
#include "../types.h"
#include "stack_frame.h"

/*
xtd_bool __xtd_debug_should_aborted__(xtd_bool condition) {return __should_aborted__(condition, "", CSF);}
xtd_bool __xtd_debug_should_aborted__(xtd_bool condition, const char* message) {return __should_aborted__(condition, message, CSF);}
xtd_bool __xtd_debug_should_aborted__(xtd_bool condition, const xtd_stack_frame& stack_frame) {return __should_aborted__(condition, "", stack_frame);}
xtd_bool __xtd_debug_should_aborted__(xtd_bool condition, const char* message, const xtd_stack_frame& stack_frame);
*/
