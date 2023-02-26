// MULTI Event Analyzer Configuration File for:
// 	u-velOSity Real Time Kernel

// General information about the syntax:
// 1. A comment is a line that starts with two forward slashes.
// Comments cannot be placed on the same line as an option definition.
// 2. If a definition spans multiple lines, put "\" at the end of the line
// to be continued 
// 3. Keywords start with "MEV_", and are case insensitive.


// Task status values
// Format:
//     MEV_Object:MEV_Status:<INTERNAL_CODE>:<STATUS_NAME>:<RGB>:\
//     <STYLE>:<THICKNESS>:MEV_Visible|MEV_Invisible

MEV_Object:MEV_Status:0x1:Exited:0x0:MEV_Solid:1:MEV_Visible
MEV_Object:MEV_Status:0x2:Halted:0x0:MEV_Solid:2:MEV_Visible
MEV_Object:MEV_Status:0x3:MEV_Execution=Running:0x40f040:MEV_Solid:5:MEV_Visible
MEV_Object:MEV_Status:0x4:Pended (sleep):0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0x5:Pended (queue):0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0x6:Pended (semaphore):0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0x7:Pended (event flags):0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0x8:Pended (block pool):0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0x9:Pended (mutex):0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0xa:Unknown:0x0:MEV_Dash:1:MEV_Invisible
MEV_Object:MEV_Status:0xb:Task Status Count:0xffff00:MEV_Solid:3:MEV_Visible
MEV_Object:MEV_Status:0xc:Pended:0x0:MEV_Dash:1:MEV_Visible
MEV_Object:MEV_Status:0xd:Ready:0x40f040:MEV_Dash:2:MEV_Visible
MEV_Object:MEV_Status:0x0:Ready:0x40f040:MEV_Dash:2:MEV_Visible
MEV_Object:MEV_Status:0xffff:Context Switch:0x0:MEV_Dot:1:MEV_Visible

// Event Categories and Events
// Format: 
//     MEV_Event_Category:<CATEGORY_NAME>:MEV_Visible|MEV_Invisible
//     MEV_Event:<TYPE>:<SUBTYPE>:<EVENT_NAME>:<BITMAP's_NAME>:\
//     [MEV_Extra="<EXTRA_DATA_FORMAT>":]MEV_Visible|MEV_Invisible


// Miscellaneous
MEV_Misc:MEV_Refresh_Interval:250
//MEV_Misc:MEV_Max_Refreshed_Events:600
//MEV_Misc:MEV_Target_Timeout:5000
MEV_Misc:MEV_Extra_Data_Warning:0
MEV_Misc:MEV_Object_Term:Task
MEV_Misc:MEV_Center_Status:true

// The overlap entry cannot be changed via the Legend window at runtime.
// It must be enabled or disabled before starting the GUI.   
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

// Interrupts (type must be 0x1)
MEV_Event_Category:Interrupt:MEV_Visible
MEV_Event:0x01:0x12:Interrupt:interrupt:MEV_Extra="PC=%4X info=%4X":MEV_Visible
MEV_Event:0x01:0x13:End Interrupt:interruptend:MEV_Extra="PC=%4X info=%4X":MEV_Visible
MEV_Event:0x02:0x12:Interrupt:interrupt:MEV_Extra="PC=%4X info=%4X":MEV_Visible
MEV_Event:0x02:0x13:End Interrupt:interruptend:MEV_Extra="PC=%4X info=%4X":MEV_Visible

// Tasks
MEV_Event_Category:Task:MEV_Visible
MEV_Event:0x03:0x21:uv_task_create:tx_t_create:MEV_Extra="PC=%4X task=%4X":MEV_Visible
MEV_Event:0x03:0x22:uv_task_close:tx_t_delete:MEV_Extra="PC=%4X task=%4X":MEV_Visible
MEV_Event:0x03:0x23:uv_task_exit:tx_t_terminate:MEV_Extra="PC=%4X task=%4X":MEV_Visible
MEV_Event:0x03:0x24:uv_task_run:tx_t_resume:MEV_Extra="PC=%4X task=%4X":MEV_Visible
MEV_Event:0x03:0x25:uv_task_halt:tx_t_suspend:MEV_Extra="PC=%4X task=%4X":MEV_Visible
MEV_Event:0x03:0x26:uv_task_yield:tx_t_relinquish:MEV_Extra="PC=%4X task=%4X":MEV_Visible
MEV_Event:0x03:0x27:uv_task_sleep:tx_t_sleep:MEV_Extra="PC=%4X task=%4X":MEV_Visible
MEV_Event:0x03:0x28:uv_task_wait_abort:tx_t_wait_abort:MEV_Extra="PC=%4X task=%4X":MEV_Visible
MEV_Event:0x03:0x29:uv_task_set_priority:tx_t_priority:MEV_Extra="PC=%4X task=%4X":MEV_Visible
MEV_Event:0x03:0x2a:uv_task_set_timeslice:tx_t_timeslice:MEV_Extra="PC=%4X task=%4X":MEV_Visible
MEV_Event:0x03:0x2a:uv_task_set_preempt_threshold:tx_t_preempt:MEV_Extra="PC=%4X task=%4X":MEV_Visible

// Mutex
MEV_Event_Category:Mutex:MEV_Visible
MEV_Event:0x03:0x31:uv_mutex_create:tx_m_create:MEV_Extra="PC=%4X mutex=%4X":MEV_Visible
MEV_Event:0x03:0x32:uv_mutex_close:tx_m_delete:MEV_Extra="PC=%4X mutex=%4X":MEV_Visible
MEV_Event:0x03:0x33:uv_mutex_acquire:tx_m_get:MEV_Extra="PC=%4X mutex=%4X":MEV_Visible
MEV_Event:0x03:0x34:uv_mutex_release:tx_m_put:MEV_Extra="PC=%4X mutex=%4X":MEV_Visible

// Semaphore
MEV_Event_Category:uv_semaphore:MEV_Visible
MEV_Event:0x03:0x41:uv_sem_create:tx_s_create:MEV_Extra="PC=%4X sem=%4X":MEV_Visible
MEV_Event:0x03:0x42:uv_sem_close:tx_s_delete:MEV_Extra="PC=%4X sem=%4X":MEV_Visible
MEV_Event:0x03:0x43:uv_sem_acquire:tx_s_get:MEV_Extra="PC=%4X sem=%4X":MEV_Visible
MEV_Event:0x03:0x44:uv_sem_release:tx_s_put:MEV_Extra="PC=%4X sem=%4X":MEV_Visible

// Queue
MEV_Event_Category:uv_queue:MEV_Visible
MEV_Event:0x03:0x51:uv_queue_create:tx_q_create:MEV_Extra="PC=%4X queue=%4X":MEV_Visible
MEV_Event:0x03:0x52:uv_queue_close:tx_q_delete:MEV_Extra="PC=%4X queue=%4X":MEV_Visible
MEV_Event:0x03:0x53:uv_queue_send:tx_q_send:MEV_Extra="PC=%4X queue=%4X":MEV_Visible
MEV_Event:0x03:0x54:uv_queue_receive:tx_q_receive:MEV_Extra="PC=%4X queue=%4X":MEV_Visible
MEV_Event:0x03:0x55:uv_queue_flush:tx_q_flush:MEV_Extra="PC=%4X queue=%4X":MEV_Visible

// Event Flags
MEV_Event_Category:uv_eflags:MEV_Visible
MEV_Event:0x03:0x61:uv_eflags_create:tx_e_create:MEV_Extra="PC=%4X eflags=%4X":MEV_Visible
MEV_Event:0x03:0x62:uv_eflags_close:tx_e_delete:MEV_Extra="PC=%4X eflags=%4X":MEV_Visible
MEV_Event:0x03:0x63:uv_eflags_set:tx_e_set:MEV_Extra="PC=%4X eflags=%4X":MEV_Visible
MEV_Event:0x03:0x64:uv_eflags_get:tx_e_get:MEV_Extra="PC=%4X eflags=%4X":MEV_Visible

// Block Pool
MEV_Event_Category:uv_bpool:MEV_Visible
MEV_Event:0x03:0x71:uv_bpool_create:tx_b_create:MEV_Extra="PC=%4X bpool=%4X":MEV_Visible
MEV_Event:0x03:0x72:uv_bpool_close:tx_b_delete:MEV_Extra="PC=%4X bpool=%4X":MEV_Visible
MEV_Event:0x03:0x73:uv_bpool_allocate:tx_b_allocate:MEV_Extra="PC=%4X bpool=%4X":MEV_Visible
MEV_Event:0x03:0x74:uv_bpool_free:tx_b_release:MEV_Extra="PC=%4X bpool=%4X":MEV_Visible

// Timer
MEV_Event_Category:uv_timer:MEV_Visible
MEV_Event:0x03:0x81:uv_timer_create:tx_tm_create:MEV_Extra="PC=%4X timer=%4X":MEV_Visible
MEV_Event:0x03:0x82:uv_timer_close:tx_tm_delete:MEV_Extra="PC=%4X timer=%4X":MEV_Visible
MEV_Event:0x03:0x83:uv_timer_set:tx_tm_set:MEV_Extra="PC=%4X timer=%4X":MEV_Visible
MEV_Event:0x03:0x84:uv_timer_cancel:tx_tm_deactivate:MEV_Extra="PC=%4X timer=%4X":MEV_Visible

// Malloc Pool
MEV_Event_Category:uv_mpool:MEV_Visible
MEV_Event:0x03:0x91:uv_mpool_create:tx_by_create:MEV_Extra="PC=%4X mpool=%4X":MEV_Visible
MEV_Event:0x03:0x92:uv_mpool_close:tx_by_delete:MEV_Extra="PC=%4X mpool=%4X":MEV_Visible
MEV_Event:0x03:0x93:uv_mpool_allocate:tx_by_allocate:MEV_Extra="PC=%4X mpool=%4X":MEV_Visible
MEV_Event:0x03:0x94:uv_mpool_free:tx_by_release:MEV_Extra="PC=%4X mpool=%4X":MEV_Visible

// Context Switch and Task Name Refresh (do not change type:subtype)
MEV_Event:0x06:0xa:TaskNameRefresh:statuschange:MEV_Invisible
MEV_Event:0x01:0x0:context_switch:merge:MEV_Invisible

// Event Status
MEV_Event_Category:uv_eventstatus
MEV_Event:0x5:0x0:uv_ready:statuschange:MEV_Invisible
MEV_Event:0x5:0xd:uv_ready:statuschange:MEV_Invisible
MEV_Event:0x5:0x1:uv_exited:statuschange:MEV_Invisible
MEV_Event:0x5:0x2:uv_halted:statuschange:MEV_Invisible
MEV_Event:0x5:0x4:uv_pending_sleep:statuschange:MEV_Invisible
MEV_Event:0x5:0x5:uv_pending_queue:statuschange:MEV_Invisible
MEV_Event:0x5:0x6:uv_pending_semaphore:statuschange:MEV_Invisible
MEV_Event:0x5:0x7:uv_pending_event_flags:statuschange:MEV_Invisible
MEV_Event:0x5:0x8:uv_pending_block_pool:statuschange:MEV_Invisible
MEV_Event:0x5:0x9:uv_pending_mutex:statuschange:MEV_Invisible
MEV_Event:0x5:*:uv_status_change:statuschange:MEV_Invisible
