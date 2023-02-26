// MULTI Event Analyzer Configuration File for:
// 	ThreadX Real Time Kernel

// General information about the syntax:
// 1. A comment is a line that starts with two forward slashes.
// Comments cannot be placed on the same line as an option definition.
// 2. If a definition spans multiple lines, put "\" at the end of the line
// to be continued 
// 3. Keywords start with "MEV_", and are case insensitive.


// Threads status values
// Format:
//     MEV_Object:MEV_Status:<INTERNAL_CODE>:<STATUS_NAME>:<RGB>:\
//     <STYLE>:<THICKNESS>:MEV_Visible|MEV_Invisible

MEV_Object:MEV_Status:0x0:ready:0x40f040:MEV_Dash:2:MEV_Visible
MEV_Object:MEV_Status:0x1:completed:0x0:MEV_Solid:1:MEV_Visible
MEV_Object:MEV_Status:0x2:terminated:0x0:MEV_Solid:2:MEV_Visible
MEV_Object:MEV_Status:0x3:executing:0x40f040:MEV_Solid:4:MEV_Visible
MEV_Object:MEV_Status:0x4:sleep_susp:0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0x5:queue_susp:0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0x6:semaphore_susp:0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0x7:event_flag_susp:0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0x8:block_memory_susp:0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0x9:byte_memory_susp:0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0xa:unknown:0x0:MEV_Dash:1:MEV_Visible
MEV_Object:MEV_Status:0xb:self_susp:0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0xc:tcp_ip_susp:0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0xd:mutex_susp:0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0xffff:Context Switch:0x0:MEV_Dot:1:MEV_Visible


// Event Categories and Events
// Format: 
//     MEV_Event_Category:<CATEGORY_NAME>:MEV_Visible|MEV_Invisible
//     MEV_Event:<TYPE>:<SUBTYPE>:<EVENT_NAME>:<BITMAP's_NAME>:\
//     [MEV_Extra="<EXTRA_DATA_FORMAT>":]MEV_Visible|MEV_Invisible

MEV_Event_Category:Byte Pool:MEV_Visible
MEV_Event:0x3:0x0:tx_byte_allocate:tx_by_allocate:MEV_Extra="pool_ptr=%4X memory_ptr=%4X memory_size=%4X memory_addr=%4X":MEV_Visible
MEV_Event:0x3:0x1:tx_byte_pool_create:tx_by_create:MEV_Extra="pool_ptr=%4X pool_start=%4X pool_size=%4X":MEV_Visible
MEV_Event:0x3:0x2:tx_byte_pool_delete:tx_by_delete:MEV_Extra="pool_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x3:tx_byte_release:tx_by_release:MEV_Extra="pool_ptr=%4X memory_addr=%4X":MEV_Visible
//*********** New Events for ThreadX 4.0 *************
MEV_Event:0x3:0x2a:tx_byte_pool_info_get:tx_by_info:MEV_Extra="pool_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x2b:tx_byte_pool_prioritize:tx_by_prioritize:MEV_Extra="pool_ptr=%4X":MEV_Visible
//*********** New Events for ThreadX 5.0 *************
MEV_Event:0x3:0x3d:tx_byte_pool_performance_info_get:tx_by_perfinfo:MEV_Extra="pool_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x3e:tx_byte_pool_performance_system_info_get:tx_by_perfsysinfo:MEV_Visible

MEV_Event_Category:Block Pool:MEV_Visible
MEV_Event:0x3:0x4:tx_block_allocate:tx_b_allocate:MEV_Extra="pool_ptr=%4X block_ptr=%4X block_addr=%4X":MEV_Visible
MEV_Event:0x3:0x5:tx_block_pool_create:tx_b_create:MEV_Extra="pool_ptr=%4X start=%4X size=%4X":MEV_Visible
MEV_Event:0x3:0x6:tx_block_pool_delete:tx_b_delete:MEV_Extra="pool_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x7:tx_block_release:tx_b_release:MEV_Extra="pool_ptr=%4X block_addr=%4X":MEV_Visible
//*********** New Events for ThreadX 4.0 *************
MEV_Event:0x3:0x28:tx_block_pool_info_get:tx_b_info:MEV_Extra="pool_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x29:tx_block_pool_prioritize:tx_b_prioritize:MEV_Extra="pool_ptr=%4X":MEV_Visible
//*********** New Events for ThreadX 5.0 *************
MEV_Event:0x3:0x3b:tx_block_pool_performance_info_get:tx_b_perfinfo:MEV_Extra="pool_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x3c:tx_block_pool_performance_system_info_get:tx_b_perfsysinfo:MEV_Visible

MEV_Event_Category:Event Flags:MEV_Visible
MEV_Event:0x3:0x8:tx_event_flags_create:tx_e_create:MEV_Extra="group_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x9:tx_event_flags_delete:tx_e_delete:MEV_Extra="group_ptr=%4X":MEV_Visible
MEV_Event:0x3:0xa:tx_event_flags_get:tx_e_get:MEV_Extra="group_ptr=%4X flags=%4X option=%4X":MEV_Visible
MEV_Event:0x3:0xb:tx_event_flags_set:tx_e_set:MEV_Extra="group_ptr=%4X flags_to_set=%4X set_option=%4X":MEV_Visible
//*********** New Events for ThreadX 4.0 *************
MEV_Event:0x3:0x2c:tx_event_flags_info_get:tx_e_info:MEV_Extra="group_ptr=%4X":MEV_Visible
//*********** New Events for ThreadX 5.0 *************
MEV_Event:0x3:0x3f:tx_event_flags_performance_info_get:tx_e_perfinfo:MEV_Extra="group_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x40:tx_event_flags_performance_system_info_get:tx_e_perfsysinfo:MEV_Visible
MEV_Event:0x3:0x41:tx_event_flags_set_notify:tx_e_setnotify:MEV_Extra="group_ptr=%4X notify=%4X":MEV_Visible

MEV_Event_Category:Queue:MEV_Visible
MEV_Event:0x3:0xd:tx_queue_create:tx_q_create:MEV_Extra="queue_ptr=%4X queue_start=%4X queue_size=%4X message_size=%4X":MEV_Visible
MEV_Event:0x3:0xe:tx_queue_delete:tx_q_delete:MEV_Extra="queue_ptr=%4X":MEV_Visible
MEV_Event:0x3:0xf:tx_queue_flush:tx_q_flush:MEV_Extra="queue_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x10:tx_queue_receive:tx_q_receive:MEV_Extra="queue_ptr=%4X destination_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x11:tx_queue_send:tx_q_send:MEV_Extra="queue_ptr=%4X source_ptr=%4X":MEV_Visible
//*********** New Events for ThreadX 4.0 *************
MEV_Event:0x3:0x33:tx_queue_info_get:tx_q_info:MEV_Extra="queue_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x34:tx_queue_front_send:tx_q_front_send:MEV_Extra="queue_ptr=%4X source_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x35:tx_queue_prioritize:tx_q_prioritize:MEV_Extra="queue_ptr=%4X":MEV_Visible
//*********** New Events for ThreadX 5.0 *************
MEV_Event:0x3:0x44:tx_queue_performance_info_get:tx_q_perfinfo:MEV_Extra="queue_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x45:tx_queue_performance_system_info_get:tx_q_perfsysinfo:MEV_Visible
MEV_Event:0x3:0x46:tx_queue_send_notify:tx_q_sendnotify:MEV_Extra="queue_ptr=%4X notify=%4X":MEV_Visible

MEV_Event_Category:Semaphore:MEV_Visible
MEV_Event:0x3:0x12:tx_semaphore_create:tx_s_create:MEV_Extra="semaphore_ptr=%4X initial_count=%4X":MEV_Visible
MEV_Event:0x3:0x13:tx_semaphore_delete:tx_s_delete:MEV_Extra="semaphore_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x14:tx_semaphore_get:tx_s_get:MEV_Extra="semaphore_ptr=%4X count=%4X":MEV_Visible
MEV_Event:0x3:0x15:tx_semaphore_put:tx_s_put:MEV_Extra="semaphore_ptr=%4X count=%4X":MEV_Visible
//*********** New Events for ThreadX 4.0 *************
MEV_Event:0x3:0x36:tx_semaphore_info_get:tx_s_info:MEV_Extra="semaphore_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x37:tx_semaphore_prioritize:tx_s_prioritize:MEV_Extra="semaphore_ptr=%4X":MEV_Visible
//*********** New Events for ThreadX 5.0 *************
MEV_Event:0x3:0x47:tx_semaphore_ceiling_put:tx_s_ceilingput:MEV_Extra="semaphore_ptr=%4X count=%4X ceiling=%4X":MEV_Visible
MEV_Event:0x3:0x48:tx_semaphore_performance_info_get:tx_s_perfinfo:MEV_Extra="semaphore_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x49:tx_semaphore_performance_system_info_get:tx_s_perfsysinfo:MEV_Visible
MEV_Event:0x3:0x4a:tx_semaphore_put_notify:tx_s_putnotify:MEV_Extra="semaphore_ptr=%4X notify=%4X":MEV_Visible

MEV_Event_Category:Thread:MEV_Visible
MEV_Event:0x3:0x16:tx_thread_create:tx_t_create:MEV_Extra="thread_ptr=%4X statck_start=%4X stack_size=%4X priority=%4X":MEV_Visible
MEV_Event:0x3:0x17:tx_thread_delete:tx_t_delete:MEV_Extra="thread_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x18:tx_thread_identify:tx_t_indentify:MEV_Visible
MEV_Event:0x3:0x19:tx_thread_preemption_change:tx_t_preempt:MEV_Extra="thread_ptr=%4X old_threshold=%4X new_threshold=%4X":MEV_Visible
MEV_Event:0x3:0x1a:tx_thread_priority_change:tx_t_priority:MEV_Extra="Thread=%4X old_priority=%4X new_priority=%4X":MEV_Visible
MEV_Event:0x3:0x1b:tx_thread_relinquish:tx_t_relinquish:MEV_Visible
MEV_Event:0x3:0x1c:tx_thread_resume:tx_t_resume:MEV_Extra="thread_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x1d:tx_thread_sleep:tx_t_sleep:MEV_Extra="timer_ticks=%4X":MEV_Visible
MEV_Event:0x3:0x1e:tx_thread_suspend:tx_t_suspend:MEV_Extra="thread_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x1f:tx_thread_terminate:tx_t_terminate:MEV_Extra="thread_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x20:tx_thread_time_slice_change:tx_t_timeslice:MEV_Extra="thread_ptr=%4X old_time_slice=%4X new_time_slice=%4X":MEV_Visible
//*********** New Events for ThreadX 4.0 *************
MEV_Event:0x3:0x38:tx_thread_info_get:tx_t_info:MEV_Extra="thread_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x39:tx_thread_wait_abort:tx_t_wait_abort:MEV_Extra="thread_ptr=%4X":MEV_Visible
//*********** New Events for ThreadX 5.0 *************
MEV_Event:0x3:0x4b:tx_thread_entry_exit_notify:tx_t_eenotify:MEV_Extra="thread_ptr=%4X notify=%4X":MEV_Visible
MEV_Event:0x3:0x4c:tx_thread_reset:tx_t_reset:MEV_Extra="thread_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x4d:tx_thread_performance_info_get:tx_t_perfinfo:MEV_Extra="thread_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x4e:tx_thread_performance_system_info_get:tx_t_perfsysinfo:MEV_Visible
MEV_Event:0x3:0x4f:tx_thread_stack_error_notify:tx_t_senotify:MEV_Extra="notify=%4X":MEV_Visible

MEV_Event_Category:Timer:MEV_Visible
MEV_Event:0x3:0x23:tx_timer_activate:tx_tm_activate:MEV_Extra="timer_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x24:tx_timer_change:tx_tm_change:MEV_Extra="timer_ptr=%4X initialticks=%4X reschedticks=%4X":MEV_Visible
MEV_Event:0x3:0x25:tx_timer_create:tx_tm_create:MEV_Extra="timer_ptr=%4X initialticks=%4X reschedticks=%4X activate=%4X":MEV_Visible
MEV_Event:0x3:0x26:tx_timer_deactivate:tx_tm_deactivate:MEV_Extra="timer_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x27:tx_timer_delete:tx_tm_delete:MEV_Extra="timer_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x21:tx_time_get:tx_tm_get:MEV_Extra="current_time=%4X":MEV_Visible
MEV_Event:0x3:0x22:tx_time_set:tx_tm_set:MEV_Extra="new_time=%4X":MEV_Visible
//*********** New Events for ThreadX 4.0 *************
MEV_Event:0x3:0x3a:tx_timer_info_get:tx_tm_info:MEV_Extra="timer_ptr=%4X":MEV_Visible
//*********** New Events for ThreadX 5.0 *************
MEV_Event:0x3:0x50:tx_timer_performance_info_get:tx_tm_perfinfo:MEV_Extra="timer_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x51:tx_timer_performance_system_info_get:tx_tm_perfsysinfo:MEV_Visible

//*********** New Events for ThreadX 4.0 *************
MEV_Event_Category:Mutex:MEV_Visible
MEV_Event:0x3:0x2d:tx_mutex_create:tx_m_create:MEV_Extra="mutex_ptr=%4X priority_inheritance=%4X":MEV_Visible
MEV_Event:0x3:0x2e:tx_mutex_delete:tx_m_delete:MEV_Extra="mutex_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x2f:tx_mutex_get:tx_m_get:MEV_Extra="mutex_ptr=%4X owner=%4X count=%4X":MEV_Visible
MEV_Event:0x3:0x32:tx_mutex_put:tx_m_put:MEV_Extra="mutex_ptr=%4X owner=%4X count=%4X":MEV_Visible
MEV_Event:0x3:0x30:tx_mutex_info_get:tx_m_info:MEV_Extra="mutex_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x31:tx_mutex_prioritize:tx_m_prioritize:MEV_Extra="mutex_ptr=%4X":MEV_Visible
//*********** New Events for ThreadX 5.0 *************
MEV_Event:0x3:0x42:tx_mutex_performance_info_get:tx_m_perfinfo:MEV_Extra="mutex_ptr=%4X":MEV_Visible
MEV_Event:0x3:0x43:tx_mutex_performance_system_info_get:tx_m_perfsysinfo:MEV_Visible

MEV_Event_Category:Misc:MEV_Visible
MEV_Event:0x5:*:StatusChange:statuschange:MEV_Invisible
// MEV_Event:1:0:TaskChange:statuschange:MEV_Invisible
MEV_Event:0x0:0x0:Unknown:genericevent:MEV_Visible
MEV_Event:0x3:0xc:tx_interrupt_control:tx_i_control:MEV_Extra="posture=%4X":MEV_Visible

MEV_Event_Category:Interrupt:MEV_Visible
MEV_Event:0x2:0x0:Fatal Exception:fatalexcept:MEV_Extra="Exception=%4X TheAddress=%4X":MEV_Visible
MEV_Event:0x2:0x1:Interrupt:interrupt:MEV_Extra="Vector=%4X":MEV_Visible
MEV_Event:0x2:0x3:End Interrupt:interruptend:MEV_Extra="Vector=%4X":MEV_Visible
// TaskNameRefresh is for recording tasknames.  Event 6 is a generic
// information refresh event.   Subtype 10 indicates "unknown" status,  
// since this event is attempting to update only the name and priority,
// nothing else 
MEV_Event:0x6:0xa:TaskNameRefresh:statuschange:MEV_Invisible
MEV_Event:0x1:0x0:context_switch:merge:MEV_Invisible

// Misc 

MEV_Misc:MEV_Refresh_Interval:250
//MEV_Misc:MEV_Max_Refreshed_Events:600
//MEV_Misc:MEV_Target_Timeout:5000
MEV_Misc:MEV_Extra_Data_Warning:0
MEV_Misc:MEV_Object_Term:Thread
MEV_Misc:MEV_Center_Status:true

// The overlap entry cannot be changed via the Legend window at runtime.
// It must be enabled or disabled before starting the EventAnalyzer.   
// If enabled,  overlapping event icons will be filled with this special
// icon (a gray box) indicating that multiple events occur in the area.
// As the graph is zoomed in further and further and events no longer 
// overlap,  gray boxes are replaced by the actual event icons.
// This overlap feature has the advantage of speeding up GUI redraws
// and some users may find the overlapped event icons confusing.  However,
// the gray boxes prevent the user from distinguishing events until
// the graph has been zoomed in far enough.
//
// MEV_Misc:MEV_Overlap:dimmask

// Here is an example of a User Event. Uncomment and customize the
// following line to display user events in the EventAnalyzer.
//
// MEV_Event:0x4:0x0:MyUserEvent:userevent:MEV_Extra="count=%4D":MEV_Visible
