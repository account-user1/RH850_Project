# This file was generated on Tue Jun 27 09:08:00 2006, 
# please don't manually change it.

# It defines ThreadX API for auto-completion purpose only.

language {
    general {
        case_sensitive = true
    }
    autocomplete {
	# From file /home/20/threadx/50/syncolor/tx_api.h
	name += {"tx_application_define;VOID tx_application_define(VOID *)"}
	name += {"tx_kernel_enter;VOID tx_kernel_enter(VOID)"}
	name += {"tx_byte_allocate;UINT tx_byte_allocate(TX_BYTE_POOL *pool_ptr, VOID **memory_ptr, ULONG memory_size, ULONG wait_option)"}
	name += {"tx_byte_pool_create;UINT tx_byte_pool_create(TX_BYTE_POOL *pool_ptr, CHAR *name_ptr, VOID *pool_start, ULONG pool_size)"}
	name += {"tx_byte_pool_delete;UINT tx_byte_pool_delete(TX_BYTE_POOL *pool_ptr)"}
	name += {"tx_byte_pool_info_get;UINT tx_byte_pool_info_get(TX_BYTE_POOL *pool_ptr, CHAR **name, ULONG *available_bytes, ULONG *fragments, TX_THREAD **first_suspended, ULONG *suspended_count, TX_BYTE_POOL **next_pool)"}
	name += {"tx_byte_pool_performance_info_get;UINT tx_byte_pool_performance_info_get(TX_BYTE_POOL *pool_ptr, ULONG *allocates, ULONG *releases, ULONG *fragments_searched, ULONG *merges, ULONG *splits, ULONG *suspensions, ULONG *timeouts)"}
	name += {"tx_byte_pool_performance_system_info_get;UINT tx_byte_pool_performance_system_info_get(ULONG *allocates, ULONG *releases, ULONG *fragments_searched, ULONG *merges, ULONG *splits, ULONG *suspensions, ULONG *timeouts)"}
	name += {"tx_byte_pool_prioritize;UINT tx_byte_pool_prioritize(TX_BYTE_POOL *pool_ptr)"}
	name += {"tx_byte_release;UINT tx_byte_release(VOID *memory_ptr)"}
	name += {"tx_block_allocate;UINT tx_block_allocate(TX_BLOCK_POOL *pool_ptr, VOID **block_ptr, ULONG wait_option)"}
	name += {"tx_block_pool_create;UINT tx_block_pool_create(TX_BLOCK_POOL *pool_ptr, CHAR *name_ptr, ULONG block_size, VOID *pool_start, ULONG pool_size)"}
	name += {"tx_block_pool_delete;UINT tx_block_pool_delete(TX_BLOCK_POOL *pool_ptr)"}
	name += {"tx_block_pool_info_get;UINT tx_block_pool_info_get(TX_BLOCK_POOL *pool_ptr, CHAR **name, ULONG *available_blocks, ULONG *total_blocks, TX_THREAD **first_suspended, ULONG *suspended_count, TX_BLOCK_POOL **next_pool)"}
	name += {"tx_block_pool_performance_info_get;UINT tx_block_pool_performance_info_get(TX_BLOCK_POOL *pool_ptr, ULONG *allocates, ULONG *releases, ULONG *suspensions, ULONG *timeouts)"}
	name += {"tx_block_pool_performance_system_info_get;UINT tx_block_pool_performance_system_info_get(ULONG *allocates, ULONG *releases, ULONG *suspensions, ULONG *timeouts)"}
	name += {"tx_block_pool_prioritize;UINT tx_block_pool_prioritize(TX_BLOCK_POOL *pool_ptr)"}
	name += {"tx_block_release;UINT tx_block_release(VOID *block_ptr)"}
	name += {"tx_event_flags_create;UINT tx_event_flags_create(TX_EVENT_FLAGS_GROUP *group_ptr, CHAR *name_ptr)"}
	name += {"tx_event_flags_delete;UINT tx_event_flags_delete(TX_EVENT_FLAGS_GROUP *group_ptr)"}
	name += {"tx_event_flags_get;UINT tx_event_flags_get(TX_EVENT_FLAGS_GROUP *group_ptr, ULONG requested_flags, UINT get_option, ULONG *actual_flags_ptr, ULONG wait_option)"}
	name += {"tx_event_flags_info_get;UINT tx_event_flags_info_get(TX_EVENT_FLAGS_GROUP *group_ptr, CHAR **name, ULONG *current_flags, TX_THREAD **first_suspended, ULONG *suspended_count, TX_EVENT_FLAGS_GROUP **next_group)"}
	name += {"tx_event_flags_performance_info_get;UINT tx_event_flags_performance_info_get(TX_EVENT_FLAGS_GROUP *group_ptr, ULONG *sets, ULONG *gets, ULONG *suspensions, ULONG *timeouts)"}
	name += {"tx_event_flags_performance_system_info_get;UINT tx_event_flags_performance_system_info_get(ULONG *sets, ULONG *gets, ULONG *suspensions, ULONG *timeouts)"}
	name += {"tx_event_flags_set;UINT tx_event_flags_set(TX_EVENT_FLAGS_GROUP *group_ptr, ULONG flags_to_set, UINT set_option)"}
	name += {"tx_event_flags_set_notify;UINT tx_event_flags_set_notify(TX_EVENT_FLAGS_GROUP *group_ptr, VOID (*events_set_notify)(TX_EVENT_FLAGS_GROUP *))"}
	name += {"tx_interrupt_control;UINT tx_interrupt_control(UINT new_posture)"}
	name += {"tx_queue_create;UINT tx_queue_create(TX_QUEUE *queue_ptr, CHAR *name_ptr, UINT message_size, VOID *queue_start, ULONG queue_size)"}
	name += {"tx_queue_delete;UINT tx_queue_delete(TX_QUEUE *queue_ptr)"}
	name += {"tx_queue_flush;UINT tx_queue_flush(TX_QUEUE *queue_ptr)"}
	name += {"tx_queue_info_get;UINT tx_queue_info_get(TX_QUEUE *queue_ptr, CHAR **name, ULONG *enqueued, ULONG *available_storage, TX_THREAD **first_suspended, ULONG *suspended_count, TX_QUEUE **next_queue)"}
	name += {"tx_queue_performance_info_get;UINT tx_queue_performance_info_get(TX_QUEUE *queue_ptr, ULONG *messages_sent, ULONG *messages_received, ULONG *empty_suspensions, ULONG *full_suspensions, ULONG *full_errors, ULONG *timeouts)"}
	name += {"tx_queue_performance_system_info_get;UINT tx_queue_performance_system_info_get(ULONG *messages_sent, ULONG *messages_received, ULONG *empty_suspensions, ULONG *full_suspensions, ULONG *full_errors, ULONG *timeouts)"}
	name += {"tx_queue_receive;UINT tx_queue_receive(TX_QUEUE *queue_ptr, VOID *destination_ptr, ULONG wait_option)"}
	name += {"tx_queue_send;UINT tx_queue_send(TX_QUEUE *queue_ptr, VOID *source_ptr, ULONG wait_option)"}
	name += {"tx_queue_send_notify;UINT tx_queue_send_notify(TX_QUEUE *queue_ptr, VOID (*queue_send_notify)(TX_QUEUE *))"}
	name += {"tx_queue_front_send;UINT tx_queue_front_send(TX_QUEUE *queue_ptr, VOID *source_ptr, ULONG wait_option)"}
	name += {"tx_queue_prioritize;UINT tx_queue_prioritize(TX_QUEUE *queue_ptr)"}
	name += {"tx_semaphore_ceiling_put;UINT tx_semaphore_ceiling_put(TX_SEMAPHORE *semaphore_ptr, ULONG ceiling)"}
	name += {"tx_semaphore_create;UINT tx_semaphore_create(TX_SEMAPHORE *semaphore_ptr, CHAR *name_ptr, ULONG initial_count)"}
	name += {"tx_semaphore_delete;UINT tx_semaphore_delete(TX_SEMAPHORE *semaphore_ptr)"}
	name += {"tx_semaphore_get;UINT tx_semaphore_get(TX_SEMAPHORE *semaphore_ptr, ULONG wait_option)"}
	name += {"tx_semaphore_info_get;UINT tx_semaphore_info_get(TX_SEMAPHORE *semaphore_ptr, CHAR **name, ULONG *current_value, TX_THREAD **first_suspended, ULONG *suspended_count, TX_SEMAPHORE **next_semaphore)"}
	name += {"tx_semaphore_performance_info_get;UINT tx_semaphore_performance_info_get(TX_SEMAPHORE *semaphore_ptr, ULONG *puts, ULONG *gets, ULONG *suspensions, ULONG *timeouts)"}
	name += {"tx_semaphore_performance_system_info_get;UINT tx_semaphore_performance_system_info_get(ULONG *puts, ULONG *gets, ULONG *suspensions, ULONG *timeouts)"}
	name += {"tx_semaphore_prioritize;UINT tx_semaphore_prioritize(TX_SEMAPHORE *semaphore_ptr)"}
	name += {"tx_semaphore_put;UINT tx_semaphore_put(TX_SEMAPHORE *semaphore_ptr)"}
	name += {"tx_semaphore_put_notify;UINT tx_semaphore_put_notify(TX_SEMAPHORE *semaphore_ptr, VOID (*semaphore_put_notify)(TX_SEMAPHORE *))"}
	name += {"tx_mutex_create;UINT tx_mutex_create(TX_MUTEX *mutex_ptr, CHAR *name_ptr, UINT inherit)"}
	name += {"tx_mutex_delete;UINT tx_mutex_delete(TX_MUTEX *mutex_ptr)"}
	name += {"tx_mutex_get;UINT tx_mutex_get(TX_MUTEX *mutex_ptr, ULONG wait_option)"}
	name += {"tx_mutex_info_get;UINT tx_mutex_info_get(TX_MUTEX *mutex_ptr, CHAR **name, ULONG *count, TX_THREAD **owner, TX_THREAD **first_suspended, ULONG *suspended_count, TX_MUTEX **next_mutex)"}
	name += {"tx_mutex_performance_info_get;UINT tx_mutex_performance_info_get(TX_MUTEX *mutex_ptr, ULONG *puts, ULONG *gets, ULONG *suspensions, ULONG *timeouts, ULONG *inversions, ULONG *inheritances)"}
	name += {"tx_mutex_performance_system_info_get;UINT tx_mutex_performance_system_info_get(ULONG *puts, ULONG *gets, ULONG *suspensions, ULONG *timeouts, ULONG *inversions, ULONG *inheritances)"}
	name += {"tx_mutex_prioritize;UINT tx_mutex_prioritize(TX_MUTEX *mutex_ptr)"}
	name += {"tx_mutex_put;UINT tx_mutex_put(TX_MUTEX *mutex_ptr)"}
	name += {"tx_thread_create;UINT tx_thread_create(TX_THREAD *thread_ptr, CHAR *name_ptr, VOID (*entry_function)(ULONG), ULONG entry_input, VOID *stack_start, ULONG stack_size, UINT priority, UINT preempt_threshold, ULONG time_slice, UINT auto_start)"}
	name += {"tx_thread_delete;UINT tx_thread_delete(TX_THREAD *thread_ptr)"}
	name += {"tx_thread_entry_exit_notify;UINT tx_thread_entry_exit_notify(TX_THREAD *thread_ptr, VOID (*thread_entry_exit_notify)(TX_THREAD *, UINT))"}
	name += {"tx_thread_identify;TX_THREAD *tx_thread_identify(VOID)"}
	name += {"tx_thread_info_get;UINT tx_thread_info_get(TX_THREAD *thread_ptr, CHAR **name, UINT *state, ULONG *run_count, UINT *priority, UINT *preemption_threshold, ULONG *time_slice, TX_THREAD **next_thread, TX_THREAD **next_suspended_thread)"}
	name += {"tx_thread_performance_info_get;UINT tx_thread_performance_info_get(TX_THREAD *thread_ptr, ULONG *resumptions, ULONG *suspensions, ULONG *solicited_preemptions, ULONG *interrupt_preemptions, ULONG *priority_inversions, ULONG *time_slices, ULONG *relinquishes, ULONG *timeouts, ULONG *wait_aborts, TX_THREAD **last_preempted_by)"}
	name += {"tx_thread_performance_system_info_get;UINT tx_thread_performance_system_info_get(ULONG *resumptions, ULONG *suspensions, ULONG *solicited_preemptions, ULONG *interrupt_preemptions, ULONG *priority_inversions, ULONG *time_slices, ULONG *relinquishes, ULONG *timeouts, ULONG *wait_aborts, ULONG *non_idle_returns, ULONG *idle_returns)"}
	name += {"tx_thread_preemption_change;UINT tx_thread_preemption_change(TX_THREAD *thread_ptr, UINT new_threshold, UINT *old_threshold)"}
	name += {"tx_thread_priority_change;UINT tx_thread_priority_change(TX_THREAD *thread_ptr, UINT new_priority, UINT *old_priority)"}
	name += {"tx_thread_relinquish;VOID tx_thread_relinquish(VOID)"}
	name += {"tx_thread_reset;UINT tx_thread_reset(TX_THREAD *thread_ptr)"}
	name += {"tx_thread_resume;UINT tx_thread_resume(TX_THREAD *thread_ptr)"}
	name += {"tx_thread_sleep;UINT tx_thread_sleep(ULONG timer_ticks)"}
	name += {"tx_thread_stack_error_notify;UINT tx_thread_stack_error_notify(VOID (*stack_error_handler)(TX_THREAD *))"}
	name += {"tx_thread_suspend;UINT tx_thread_suspend(TX_THREAD *thread_ptr)"}
	name += {"tx_thread_terminate;UINT tx_thread_terminate(TX_THREAD *thread_ptr)"}
	name += {"tx_thread_time_slice_change;UINT tx_thread_time_slice_change(TX_THREAD *thread_ptr, ULONG new_time_slice, ULONG *old_time_slice)"}
	name += {"tx_thread_wait_abort;UINT tx_thread_wait_abort(TX_THREAD *thread_ptr)"}
	name += {"tx_time_get;ULONG tx_time_get(VOID)"}
	name += {"tx_time_set;VOID tx_time_set(ULONG new_time)"}
	name += {"tx_timer_activate;UINT tx_timer_activate(TX_TIMER *timer_ptr)"}
	name += {"tx_timer_change;UINT tx_timer_change(TX_TIMER *timer_ptr, ULONG initial_ticks, ULONG reschedule_ticks)"}
	name += {"tx_timer_create;UINT tx_timer_create(TX_TIMER *timer_ptr, CHAR *name_ptr, VOID (*expiration_function)(ULONG), ULONG expiration_input, ULONG initial_ticks, ULONG reschedule_ticks, UINT auto_activate)"}
	name += {"tx_timer_deactivate;UINT tx_timer_deactivate(TX_TIMER *timer_ptr)"}
	name += {"tx_timer_delete;UINT tx_timer_delete(TX_TIMER *timer_ptr)"}
	name += {"tx_timer_info_get;UINT tx_timer_info_get(TX_TIMER *timer_ptr, CHAR **name, UINT *active, ULONG *remaining_ticks, ULONG *reschedule_ticks, TX_TIMER **next_timer)"}
	name += {"tx_timer_performance_info_get;UINT tx_timer_performance_info_get(TX_TIMER *timer_ptr, ULONG *activates, ULONG *reactivates, ULONG *deactivates, ULONG *expirations, ULONG *expiration_adjusts)"}
	name += {"tx_timer_performance_system_info_get;UINT tx_timer_performance_system_info_get(ULONG *activates, ULONG *reactivates, ULONG *deactivates, ULONG *expirations, ULONG *expiration_adjusts)"}
	# From file /home/20/threadx/50/syncolor/tx_el.h
	name += {"_tx_el_initialize;VOID _tx_el_initialize(VOID)"}
	name += {"_tx_el_thread_register;UINT _tx_el_thread_register(TX_THREAD *thread_ptr)"}
	name += {"_tx_el_thread_unregister;UINT _tx_el_thread_unregister(TX_THREAD *thread_ptr)"}
	name += {"_tx_el_user_event_insert;VOID _tx_el_user_event_insert(UINT sub_type, ULONG info_1, ULONG info_2, ULONG info_3, ULONG info_4)"}
	name += {"_tx_el_thread_running;VOID _tx_el_thread_running(TX_THREAD *thread_ptr)"}
	name += {"_tx_el_thread_preempted;VOID _tx_el_thread_preempted(TX_THREAD *thread_ptr)"}
	name += {"_tx_el_interrupt;VOID _tx_el_interrupt(UINT interrupt_number)"}
	name += {"_tx_el_interrupt_end;VOID _tx_el_interrupt_end(UINT interrupt_number)"}
	name += {"_tx_el_interrupt_control_call;VOID _tx_el_interrupt_control_call(void)"}
	name += {"_tx_el_event_log_on;VOID _tx_el_event_log_on(void)"}
	name += {"_tx_el_event_log_off;VOID _tx_el_event_log_off(void)"}
	name += {"_tx_el_event_filter_set;VOID _tx_el_event_filter_set(UINT filter)"}
	# From file /home/20/threadx/50/syncolor/tx_port.h
	# From file /home/20/threadx/50/syncolor/fx_api.h
	name += {"fx_system_initialize;VOID fx_system_initialize(VOID)"}
	name += {"fx_system_date_set;UINT fx_system_date_set(UINT year, UINT month, UINT day)"}
	name += {"fx_system_time_set;UINT fx_system_time_set(UINT hour, UINT minute, UINT second)"}
	name += {"fx_system_date_get;UINT fx_system_date_get(UINT *year, UINT *month, UINT *day)"}
	name += {"fx_system_time_get;UINT fx_system_time_get(UINT *hour, UINT *minute, UINT *second)"}
	name += {"fx_media_open;UINT fx_media_open(FX_MEDIA *media_ptr, CHAR *media_name, VOID (*media_driver)(FX_MEDIA *), VOID *driver_info_ptr, VOID *memory_ptr, ULONG memory_size)"}
	name += {"fx_media_close;UINT fx_media_close(FX_MEDIA *media_ptr)"}
	name += {"fx_media_flush;UINT fx_media_flush(FX_MEDIA *media_ptr)"}
	name += {"fx_media_space_available;UINT fx_media_space_available(FX_MEDIA *media_ptr, ULONG *available_bytes_ptr)"}
	name += {"fx_media_read;UINT fx_media_read(FX_MEDIA *media_ptr, ULONG logical_sector, VOID *buffer_ptr)"}
	name += {"fx_media_write;UINT fx_media_write(FX_MEDIA *media_ptr, ULONG logical_sector, VOID *buffer_ptr)"}
	name += {"fx_media_abort;UINT fx_media_abort(FX_MEDIA *media_ptr)"}
	name += {"fx_directory_create;UINT fx_directory_create(FX_MEDIA *media_ptr, CHAR *directory_name)"}
	name += {"fx_directory_delete;UINT fx_directory_delete(FX_MEDIA *media_ptr, CHAR *directory_name)"}
	name += {"fx_directory_rename;UINT fx_directory_rename(FX_MEDIA *media_ptr, CHAR *old_directory_name, CHAR *new_directory_name)"}
	name += {"fx_directory_first_entry_find;UINT fx_directory_first_entry_find(FX_MEDIA *media_ptr, CHAR *directory_name)"}
	name += {"fx_directory_next_entry_find;UINT fx_directory_next_entry_find(FX_MEDIA *media_ptr, CHAR *directory_name)"}
	name += {"fx_directory_name_test;UINT fx_directory_name_test(FX_MEDIA *media_ptr, CHAR *directory_name)"}
	name += {"fx_directory_information_get;UINT fx_directory_information_get(FX_MEDIA *media_ptr, CHAR *directory_name, UINT *attributes, ULONG *size, UINT *year, UINT *month, UINT *day, UINT *hour, UINT *minute, UINT *second)"}
	name += {"fx_directory_default_set;UINT fx_directory_default_set(FX_MEDIA *media_ptr, CHAR *new_path_name)"}
	name += {"fx_directory_default_get;UINT fx_directory_default_get(FX_MEDIA *media_ptr, CHAR **return_path_name)"}
	name += {"fx_directory_local_path_clear;UINT fx_directory_local_path_clear(FX_MEDIA *media_ptr)"}
	name += {"fx_directory_local_path_get;UINT fx_directory_local_path_get(FX_MEDIA *media_ptr, CHAR **return_path_name)"}
	name += {"fx_directory_local_path_set;UINT fx_directory_local_path_set(FX_MEDIA *media_ptr, FX_LOCAL_PATH *local_path_ptr, CHAR *new_path_name)"}
	name += {"fx_directory_local_path_restore;UINT fx_directory_local_path_restore(FX_MEDIA *media_ptr, FX_LOCAL_PATH *local_path_ptr)"}
	name += {"fx_file_create;UINT fx_file_create(FX_MEDIA *media_ptr, CHAR *file_name)"}
	name += {"fx_file_delete;UINT fx_file_delete(FX_MEDIA *media_ptr, CHAR *file_name)"}
	name += {"fx_file_rename;UINT fx_file_rename(FX_MEDIA *media_ptr, CHAR *old_file_name, CHAR *new_file_name)"}
	name += {"fx_file_attributes_set;UINT fx_file_attributes_set(FX_MEDIA *media_ptr, CHAR *file_name, UINT attributes)"}
	name += {"fx_file_attributes_read;UINT fx_file_attributes_read(FX_MEDIA *media_ptr, CHAR *file_name, UINT *attributes_ptr)"}
	name += {"fx_file_open;UINT fx_file_open(FX_MEDIA *media_ptr, FX_FILE *file_ptr, CHAR *file_name, UINT open_type)"}
	name += {"fx_file_close;UINT fx_file_close(FX_FILE *file_ptr)"}
	name += {"fx_file_read;UINT fx_file_read(FX_FILE *file_ptr, VOID *buffer_ptr, ULONG request_size, ULONG *actual_size)"}
	name += {"fx_file_write;UINT fx_file_write(FX_FILE *file_ptr, VOID *buffer_ptr, ULONG size)"}
	name += {"fx_file_allocate;UINT fx_file_allocate(FX_FILE *file_ptr, ULONG size)"}
	name += {"fx_file_seek;UINT fx_file_seek(FX_FILE *file_ptr, ULONG byte_offset)"}
	name += {"fx_file_truncate;UINT fx_file_truncate(FX_FILE *file_ptr, ULONG size)"}
	name += {"_fx_utility_16_unsigned_read;UINT _fx_utility_16_unsigned_read(UCHAR_PTR source_ptr)"}
	name += {"_fx_utility_16_unsigned_write;VOID _fx_utility_16_unsigned_write(UCHAR_PTR dest_ptr, UINT value)"}
	name += {"_fx_utility_32_unsigned_read;ULONG _fx_utility_32_unsigned_read(UCHAR_PTR source_ptr)"}
	name += {"_fx_utility_32_unsigned_write;VOID _fx_utility_32_unsigned_write(UCHAR_PTR dest_ptr, ULONG value)"}
	name += {"_fx_utility_memory_copy;VOID _fx_utility_memory_copy(UCHAR_PTR source_ptr, UCHAR_PTR dest_ptr, ULONG size)"}
	# From file /home/20/threadx/50/syncolor/fx_port.h
    }
}
