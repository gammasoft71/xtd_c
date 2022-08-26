/**
 @file
 @brief Contains trace_options enum class.
 @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
 */
#pragma once

/**
 @brief Specifies trace data options to be written to the trace output.
 @par Library
 xtdc.core
 @ingroup xtd_core diagnostics
 @remarks This enumeration is used by trace listeners to determine which options, or elements, should be included in the trace output. Trace listeners store the trace options in the trace_output_options property.
 */
enum xtd_diagnostics_trace_options {
  /** @brief Do not write any elements. */
  xtd_diagnostics_trace_options_none = 0x00,
  /** @brief Write the logical operation stack, which is represented by the return value of the CorrelationManager.LogicalOperationStack property. */
  xtd_diagnostics_trace_options_logical_operation_stack = 0x01,
  /** @brief Write the date and time. */
  xtd_diagnostics_trace_options_date_time = 0x02,
  /** @brief Write the timestamp, which is represented by the return value of the GetTimestamp method. */
  xtd_diagnostics_trace_options_timestamp = 0x04,
  /** @brief Write the process identity, which is represented by the return value of the Process.Id property. */
  xtd_diagnostics_trace_options_process_id = 0x08,
  /** @brief Write the thread identity, which is represented by the return value of the Thread.ManagedThreadId property for the current thread. */
  xtd_diagnostics_trace_options_thread_id = 0x10,
  /** @brief Write the call stack, which is represented by the return value of the Environment.StackTrace property. */
  xtd_diagnostics_trace_options_callstack = 0x20
};

/** @cond */
typedef enum xtd_diagnostics_trace_options xtd_diagnostics_trace_options;
/** @endcond */
