import static com.vector.cfg.automation.api.ScriptApi.*

//daVinci enables the IDE code completion support
daVinci {

    /* 
     * Task: SimpleApplTask
     * Type: DV_APPLICATION
     * -------------------------------------------------------------------------------------------------------
     * Prints "HelloApplication" to console and logs a message to the scriptLogger
     * -------------------------------------------------------------------------------------------------------
     */
    scriptTask("SimpleApplTask", DV_APPLICATION) {
        taskDescription 'Prints "HelloApplication" to console and logs a message to the scriptLogger'
        
        taskHelp '''Simple Application task to show the creation of a task.
The task will print  "HelloApplication" to console.
Logs the message "Logging message from the script" to the scriptLogger.
        '''
        
        code{
        
            println "HelloApplication"
            scriptLogger.info "Logging message from the script"
        }
    }


}