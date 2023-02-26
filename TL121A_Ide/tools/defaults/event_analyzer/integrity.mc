// MULTI Event Analyzer Configuration File for:
// 	INTEGRITY Real-time Operating System 

// General information about the syntax:
// 1. Comments are leaded by "//" and occupy the whole line. So, don't
// put comments with option definitions in the same line.
// 2. If a definition spans multiple lines, put "\" at the end of the line
// to be continued 
// 3. The keywords start with "MEV_", and are case insensitive.


// Task's statuses
// Format:
//     MEV_Object:MEV_Status:<INTERNAL_CODE>:<STATUS_NAME>:<RGB>:\
//     <STYLE>:<THICKNESS>:MEV_Visible|MEV_Invisible

MEV_Object:MEV_Status:0x2:pend:0xffff00:MEV_Solid:2:MEV_Visible
MEV_Object:MEV_Status:0x0:ready:0x40f040:MEV_Dot:2:MEV_Visible
MEV_Object:MEV_Status:0x3:running:0x40f040:MEV_Solid:5:MEV_Visible
MEV_Object:MEV_Status:0x4:halted:0x0000ff:MEV_Solid:2:MEV_Visible
MEV_Object:MEV_Status:0x1:suspend:0xff0000:MEV_Solid:2:MEV_Visible
MEV_Object:MEV_Status:0x7:evwait:0x0:MEV_Solid:1:MEV_Visible
MEV_Object:MEV_Status:0x8:endoflog:0x0:MEV_Solid:1:MEV_Visible
MEV_Object:MEV_Status:0x9:terminated:0x008080:MEV_Solid:1:MEV_Visible
MEV_Object:MEV_Status:0xa:unknown:0x0:MEV_Dash:1:MEV_Invisible
MEV_Object:MEV_Status:0xff00:MEV_Context_Switch:0x0:MEV_Dot:1:MEV_Visible

// Event Categories and Events
// Format: 
//     MEV_Event_Category:<CATEGORY_NAME>:MEV_Visible|MEV_Invisible
//     MEV_Event:<TYPE>:<SUBTYPE>:<EVENT_NAME>:<BITMAP's_NAME>:\
//     [MEV_Extra="<EXTRA_DATA_FORMAT>":]MEV_Visible|MEV_Invisible

MEV_Event_Category:Task:MEV_Visible
MEV_Event:0x3:0x25:CreateTask:createtask:MEV_Extra="PC=%pX EntryPoint=%pX NewTaskID=%pX":MEV_Visible
MEV_Event:0x3:0x26:RunTask:runtask:MEV_Extra="PC=%pX TaskID=%pX Task Object=%pX":MEV_Visible
MEV_Event:0x3:0x27:HaltTask:halttask:MEV_Extra="PC=%pX TaskID=%pX Task Object=%pX":MEV_Visible
MEV_Event:0x3:0x2e:SetTaskInterruptPriorityLevel:genericevent:MEV_Extra="PC=%pX TaskID=%pX InterruptPriorityLevel=%pX":MEV_Visible
MEV_Event:0x3:0x2f:GetTaskInterruptPriorityLevel:genericevent:MEV_Extra="PC=%pX TaskID=%pX InterruptPriorityLevel=%pX":MEV_Visible
MEV_Event:0x3:0x4d:RaiseCurrentTaskPriority:genericevent:MEV_Extra="PC=%pX TaskID=%pX NewPriority=%pX":MEV_Visible
MEV_Event:0x3:0x4e:LowerCurrentTaskPriority:genericevent:MEV_Extra="PC=%pX TaskID=%pX NewPriority=%pX":MEV_Visible
MEV_Event:0x3:0x52:FillTask:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x53:GetProcessorType:genericevent:MEV_Extra="PC=%pX ProcessType=%pX":MEV_Visible
MEV_Event:0x3:0x54:SetTaskIdentification:genericevent:MEV_Extra="PC=%pX Task=%pX":MEV_Visible
MEV_Event:0x3:0x55:GetTaskIdentification:genericevent:MEV_Extra="PC=%pX Task=%pX":MEV_Visible
MEV_Event:0x3:0x56:SetTaskInterruptVector:genericevent:MEV_Extra="PC=%pX Task=%pX Vector=%pX":MEV_Visible
MEV_Event:0x3:0x57:GetTaskStatusChangeOverruns:genericevent:MEV_Extra="PC=%pX Task=%pX":MEV_Visible
MEV_Event:0x3:0x58:SetTaskStatusNotificationMask:genericevent:MEV_Extra="PC=%pX Task=%pX Mask=%pX":MEV_Visible
MEV_Event:0x3:0x59:GetTaskStatusNotificationMask:genericevent:MEV_Extra="PC=%pX Task=%pX":MEV_Visible
MEV_Event:0x3:0x5a:GetMaximumPriorityAndWeight:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x5b:SetMaximumPriorityAndWeight:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x5c:GetPriorityAndWeight:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x5d:SetPriorityAndWeight:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x5e:GetTaskCount:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x5f:SetTaskCount:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x60:GetActivityPriority:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x61:GetTaskTimer:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x62:SetTaskTimer:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x63:GetTaskStatus:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x64:TaskExecuteOneInstruction:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x65:YieldTask:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x66:GetTaskProgramCounter:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x67:SetTaskProgramCounter:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x68:GetTaskStackPointer:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x69:SetTaskStackPointer:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x6a:GetTaskStackLimit:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x6b:SetTaskStackLimit:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x6c:GetTaskStackRegister:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x6d:SetTaskStackRegister:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x6e:ReadFromTask:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x6f:WriteToTask:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x70:CopyToTask:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x71:CopyFromTask:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x72:SetTaskName:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x73:GetTaskName:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x74:SetTaskExecutableFile:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x75:GetTaskExecutableFile:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x77:ExitTask:genericevent:MEV_Extra="PC=%pX Task=%pX ExitCode=%pX":MEV_Visible
MEV_Event:0x3:0x79:FinishMove:genericevent:MEV_Extra="PC=%pX AddressSpace=%pX ObjectIndex=%pX":MEV_Visible
MEV_Event:0x3:0x7a:ReadFromAddressSpace:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x7b:WriteToAddressSpace:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x7c:FillAddressSpace:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x7d:CopyToAddressSpace:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x7e:CopyFromAddressSpace:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x83:GetTaskExceptionStatus:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x84:SetTaskOptionMask:genericevent:MEV_Extra="PC=%pX Task Object=%pX OptionMask=%pX":MEV_Visible
MEV_Event:0x3:0x85:GetTaskOptionMask:genericevent:MEV_Extra="PC=%pX Task Object=%pX":MEV_Visible
MEV_Event:0x3:0x86:WriteTaskRegisterBlock:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x87:ReadTaskRegisterBlock:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x88:GetTaskUniqueId:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x89:Log2CacheLineSize:genericevent:MEV_Extra="PC=%pX MemoryRegion Object=%pX":MEV_Visible
MEV_Event:0x3:0x8a:SetTaskBootCode:genericevent:MEV_Extra="PC=%pX Task Object=%pX":MEV_Visible
MEV_Event:0x3:0x8b:GetTaskBootCode:genericevent:MEV_Extra="PC=%pX Task Object=%pX":MEV_Visible

MEV_Event:0x1:0x1:StartMajorFrame:all_green:MEV_Visible
MEV_Event:0x1:0x2:StartPartition:green_stop:MEV_Extra="Domain=%pX":MEV_Visible
MEV_Event:0x1:0x3:StopPartition:red_stop:MEV_Extra="Domain=%pX":MEV_Visible

MEV_Event_Category:Semaphore:MEV_Visible
MEV_Event:0x3:0x16:CreateBinarySemaphore:createbinarysem:MEV_Extra="PC=%pX NewSemaphore=%pX":MEV_Visible
MEV_Event:0x3:0x17:CreateSemaphore:createsem:MEV_Extra="PC=%pX InitialValue=%pD NewSemaphore=%pX":MEV_Visible
MEV_Event:0x3:0x18:TryToObtainSemaphore:trytoobtainsem:MEV_Extra="PC=%pX TheSemaphore=%pX":MEV_Visible
MEV_Event:0x3:0x19:ReleaseSemaphore:releasesem:MEV_Extra="PC=%pX TheSemaphore=%pX":MEV_Visible
MEV_Event:0x3:0x24:WaitForSemaphore:waitforsem:MEV_Extra="PC=%pX TheSemaphore=%pX":MEV_Visible
MEV_Event:0x3:0x1a:GetSemaphoreValue:getsemvalue:MEV_Extra="PC=%pX TheSemaphore=%pX TheValue=%pX":MEV_Visible
MEV_Event:0x3:0x2d:TryToClearSemaphore:genericevent:MEV_Extra="PC=%pX TheSemaphore=%pX TheValue=%pX":MEV_Visible

MEV_Event_Category:Connection:MEV_Visible
MEV_Event:0x3:0x7:CreateConnection:createconnect:MEV_Extra="PC=%pX Connection1=%pX Connection2=%pX":MEV_Visible
MEV_Event:0x3:0x2:SynchronousSend:send:MEV_Extra="PC=%pX TheConnection=%pX":MEV_Visible
MEV_Event:0x3:0x3:SynchronousReceive:receive:MEV_Extra="PC=%pX TheConnection=%pX":MEV_Visible
MEV_Event:0x3:0x8:AsynchronousSend:asynchsend:MEV_Extra="PC=%pX TheActivity=%pX TheConnection=%pX":MEV_Visible
MEV_Event:0x3:0x82:AsynchronousSendOneWay:asynchsend:MEV_Extra="PC=%pX TheActivity=%pX TheConnection=%pX Status=%pD":MEV_Visible
MEV_Event:0x3:0x5:AsynchronousReceive:asynchrecv:MEV_Extra="PC=%pX TheActivity=%pX TheConnection=%pX":MEV_Visible
MEV_Event:0x3:0x28:TrySynchronousSend:send:MEV_Extra="PC=%pX TheConnection=%pX":MEV_Visible

MEV_Event_Category:Clock:MEV_Visible
MEV_Event:0x3:0xb:SynchronousReceiveClockAlarm:syncrecvclockalarm:MEV_Extra="PC=%pX TheClock=%pX":MEV_Visible
MEV_Event:0x3:0x0:SetClockAlarm:setalarm:MEV_Extra="PC=%pX TheClock=%pX":MEV_Visible
MEV_Event:0x3:0x6:SetClockTime:setalarm:MEV_Extra="PC=%pX TheClock=%pX":MEV_Visible
MEV_Event:0x3:0xc:AsynchronousReceiveClockAlarm:syncrecvclockalarm:MEV_Extra="PC=%pX TheActivity=%pX TheClock=%pX":MEV_Visible
MEV_Event:0x3:0x2a:CreateVirtualClock:createvirclock:MEV_Extra="PC=%pX TheClock=%pX Permissions=%pX NewClock=%pX":MEV_Visible
MEV_Event:0x3:0x39:GetClockTime:genericevent:MEV_Extra="PC=%pX Clock=%pX":MEV_Visible
MEV_Event:0x3:0x3a:SetClockTime:setalarm:MEV_Extra="PC=%pX Clock=%pX":MEV_Visible
MEV_Event:0x3:0x3b:GetClockAlarm:genericevent:MEV_Extra="PC=%pX Clock=%pX":MEV_Visible
MEV_Event:0x3:0x3c:GetClockAlarmOverruns:genericevent:MEV_Extra="PC=%pX Clock=%pX":MEV_Visible
MEV_Event:0x3:0x3d:GetClockPermissions:genericevent:MEV_Extra="PC=%pX Clock=%pX":MEV_Visible
MEV_Event:0x3:0x3e:GetClockResolution:genericevent:MEV_Extra="PC=%pX Clock=%pX":MEV_Visible
MEV_Event:0x3:0x3f:GetClockName:genericevent:MEV_Extra="PC=%pX Clock=%pX":MEV_Visible
MEV_Event:0x3:0x76:AdjustClockTime:genericevent:MEV_Extra="PC=%pX Clock=%pX":MEV_Visible
MEV_Event:0x3:0x81:ClearClockAlarmOverruns:genericevent:MEV_Extra="PC=%pX Clock=%pX":MEV_Visible

MEV_Event_Category:MemoryRegion:MEV_Visible
MEV_Event:0x3:0xf:CopyToMemoryRegion:copytomemory:MEV_Extra="PC=%pX TheMemoryRegion=%pX":MEV_Visible
MEV_Event:0x3:0x10:CopyFromMemoryRegion:copyfrommemory:MEV_Extra="PC=%pX TheMemoryRegion=%pX":MEV_Visible
MEV_Event:0x3:0x32:PutPageOnAddressSpaceFreeList:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x33:GetPageFromAddressSpaceFreeList:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x34:GetAddressSpaceFreeListCount:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x40:GetPhysicalAddress:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x41:SplitMemoryRegion:genericevent:MEV_Extra="PC=%pX MemoryRegion=%pX":MEV_Visible
MEV_Event:0x3:0x42:MergeMemoryRegions:genericevent:MEV_Extra="PC=%pX MemoryRegion=%pX PreviousMemoryRegion=%pX":MEV_Visible
MEV_Event:0x3:0x43:GetMemoryRegionAddresses:genericevent:MEV_Extra="PC=%pX MemoryRegion=%pX":MEV_Visible
MEV_Event:0x3:0x44:GetMemoryRegionAttributes:genericevent:MEV_Extra="PC=%pX MemoryRegion=%pX":MEV_Visible
MEV_Event:0x3:0x45:Log2PageSize:genericevent:MEV_Extra="PC=%pX MemoryRegion=%pX":MEV_Visible
MEV_Event:0x3:0x46:ReadFromMemoryRegion:genericevent:MEV_Extra="PC=%pX MemoryRegion=%pX":MEV_Visible
MEV_Event:0x3:0x47:WriteToMemoryRegion:genericevent:MEV_Extra="PC=%pX MemoryRegion=%pX":MEV_Visible
MEV_Event:0x3:0x48:FillMemoryRegion:genericevent:MEV_Extra="PC=%pX MemoryRegion=%pX":MEV_Visible
MEV_Event:0x3:0x4b:MemoryRegionUsage:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x4f:SetMemoryRegionAttributes:genericevent:MEV_Extra="PC=%pX MemoryRegion=%pX Attributes=%pX":MEV_Visible
MEV_Event:0x3:0x50:MapMemoryRegion:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x51:UnMapMemoryRegion:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x89:Log2CacheLineSize:genericevent:MEV_Extra="PC=%pX MemoryRegion=%pX":MEV_Visible

MEV_Event_Category:AddressSpace:MEV_Visible
MEV_Event:0x3:0xd:AddressSpaceAddressFaultOverruns:addressfaultoverrun:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x2b:CreateVirtualAddressSpace:createvirtualaddress:MEV_Extra="PC=%pX NewAddressSpace=%pX":MEV_Visible
MEV_Event:0x3:0x32:PutPageOnAddressSpaceFreeList:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x33:GetPageOnAddressSpaceFreeList:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x35:GetObjectCount:genericevent:MEV_Extra="PC=%pX ObjectCount=%pX":MEV_Visible
MEV_Event:0x3:0x36:SetObjectCount:genericevent:MEV_Extra="PC=%pX ObjectCount=%pX":MEV_Visible
MEV_Event:0x3:0x37:GetAddressSpaceUniqueId:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x38:RestartAddressSpace:genericevent:MEV_Extra="PC=%pX AddressSpace=%X":MEV_Visible
MEV_Event:0x3:0x49:TakeObject:genericevent:MEV_Extra="PC=%pX AddressSpace=%pX ObjectIndex=%pX To=%pX":MEV_Visible
MEV_Event:0x3:0x4a:GiveObject:genericevent:MEV_Extra="PC=%pX AddressSpace=%pX ObjectIndex=%pX From=%pX":MEV_Visible
MEV_Event:0x3:0x4b:MemoryRegionUsage:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x4c:DeliverAddressFault:genericevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x7f:PutPageOnKernelSpaceFreeList:genericevent:MEV_Extra="PC=%pX":MEV_Visible

MEV_Event_Category:Activity:MEV_Visible
MEV_Event:0x3:0x4:CreateActivity:createact:MEV_Extra="PC=%pX Priority=%pX Interrupt=%pX NewActivity=%pX":MEV_Visible
MEV_Event:0x3:0x14:CheckForActivity:checkforact:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x29:WaitForActivity:waitforact:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x3:0x11:GetActivityStatus:getactstatus:MEV_Extra="PC=%pX TheActivity=%pX Status=%pX":MEV_Visible
MEV_Event:0x3:0x12:ResetActivity:resetact:MEV_Extra="PC=%pX TheActivity=%pX":MEV_Visible
MEV_Event:0x3:0xe:ContinueActivity:continueact:MEV_Extra="PC=%pX TheActivity=%pX":MEV_Visible
MEV_Event:0x3:0x13:SuspendActivity:suspendact:MEV_Extra="PC=%pX TheActivity=%pX":MEV_Visible
MEV_Event:0x3:0x2c:GetCurrentActivity:genericevent:MEV_Extra="PC=%pX TheActivity=%pX":MEV_Visible
MEV_Event:0x3:0x30:ContinueActivityWithUserError:genericevent:MEV_Extra="PC=%pX Activity=%pX":MEV_Visible
MEV_Event:0x3:0x31:MoveActivityBuffer:genericevent:MEV_Extra="PC=%pX Activity=%pX":MEV_Visible
MEV_Event:0x3:0x60:GetActivityPriority:genericevent:MEV_Extra="PC=%pX":MEV_Visible

MEV_Event_Category:IODevice:MEV_Visible
MEV_Event:0x3:0x1b:CreateIODevice:createiodevice:MEV_Extra="PC=%pX NewIODevice=%pX":MEV_Visible
MEV_Event:0x3:0x1c:ReadBlockFromIODevice:readblockfromio:MEV_Extra="PC=%pX TheIODevice=%pX BlockType=%pX BlockNumber=%pX":MEV_Visible
MEV_Event:0x3:0x1d:WriteBlockToIODevice:writeblocktoio:MEV_Extra="PC=%pX TheIODevice=%pX BlockType=%pX BlockNumber=%pX":MEV_Visible
MEV_Event:0x3:0x1e:ReadIODeviceRegister:readioregister:MEV_Extra="PC=%pX TheIODevice=%pX RegisterNumber=%pX":MEV_Visible
MEV_Event:0x3:0x1f:WriteIODeviceRegister:writeioregister:MEV_Extra="PC=%pX TheIODevice=%pX RegisterNumber=%pX RegisterValue=%pX":MEV_Visible
MEV_Event:0x3:0x20:ReadIODeviceStatus:readiostatus:MEV_Extra="PC=%pX TheIODevice=%pX StatusNumber=%pX":MEV_Visible
MEV_Event:0x3:0x21:WriteIODeviceStatus:writeiostatus:MEV_Extra="PC=%pX TheIODevice=%pX StatusNumber=%pX":MEV_Visible
MEV_Event:0x3:0x22:GetIODeviceOverruns:getiooverrun:MEV_Extra="PC=%pX TheIODevice=%pX":MEV_Visible
MEV_Event:0x3:0x80:ClearIoDeviceOverruns:genericevent:MEV_Extra="PC=%pX TheIODevice=%pX":MEV_Visible

MEV_Event_Category:Create-Close:MEV_Visible
MEV_Event:0x3:0x25:CreateTask:createtask:MEV_Extra="PC=%pX EntryPoint=%pX NewTaskID=%pX":MEV_Visible
MEV_Event:0x3:0x16:CreateBinarySemaphore:createbinarysem:MEV_Extra="PC=%pX NewSemaphore=%pX":MEV_Visible
MEV_Event:0x3:0x7:CreateConnection:createconnect:MEV_Extra="PC=%pX Connection1=%pX Connection2=%pX":MEV_Visible
MEV_Event:0x3:0x17:CreateSemaphore:createsem:MEV_Extra="PC=%pX InitialValue=%pD NewSemaphore=%pX":MEV_Visible
MEV_Event:0x3:0x9:StartClose:startclose:MEV_Extra="PC=%pX ObjectIndex=%pX":MEV_Visible
MEV_Event:0x3:0xa:FinishClose:finishclose:MEV_Extra="PC=%pX ObjectIndex=%pX":MEV_Visible
MEV_Event:0x3:0x4:CreateActivity:createact:MEV_Extra="PC=%pX Priority=%pX Interrupt=%pX NewActivity=%pX":MEV_Visible
MEV_Event:0x3:0x1b:CreateIODevice:createiodevice:MEV_Extra="PC=%pX NewIODevice=%pX":MEV_Visible
MEV_Event:0x3:0x23:CreateLink:createlink:MEV_Extra="PC=%pX NewObject=%pX":MEV_Visible
MEV_Event:0x3:0x2a:CreateVirtualClock:createvirclock:MEV_Extra="PC=%pX TheClock=%pX Permissions=%pX NewClock=%pX":MEV_Visible
MEV_Event:0x3:0x2b:CreateVirtualAddressSpace:createvirtualaddress:MEV_Extra="PC=%pX NewAddressSpace=%pX":MEV_Visible

MEV_Event_Category:Misc
MEV_Event:0x9:0x0:Fatal Exception:fatalexcept:MEV_Extra="Exception=%pX TheAddress=%pX PC=%pX":MEV_Visible
MEV_Event:0x2:*:Interrupt:interrupt:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x4:0x0:UserEventExampleForPizzaDemo:userevent:MEV_Extra="PC=%pX count=%4D":MEV_Visible
MEV_Event:0x3:0x78:KernelUserCall:userevent:MEV_Extra="PC=%pX":MEV_Visible
MEV_Event:0x4:0x1:UMLProbeEvent:uml_event:MEV_Extra="%px Entered Probe State %px%S1C":MEV_Visible
MEV_Event:0x4:0x2:UMLEnterState:uml_enter:MEV_Extra="%px Entering State %px%S1C":MEV_Visible
MEV_Event:0x4:0x3:UMLExitState:uml_exit:MEV_Extra="%px Exiting State %px%S1C":MEV_Visible
MEV_Event:0x4:0x4:UMLTransition:uml_trans:MEV_Extra="%px Transition %px%S1C":MEV_Visible
MEV_Event:0xa:0x0:Start Transfer:xpandd:MEV_Extra="receiver=%pX SendActivity=%pX ReceiveActivity=%pX":MEV_Visible
MEV_Event:0xa:0x1:End Transfer:xpanda:MEV_Extra="sender=%pX ReceiveActivity=%pX SendActivity=%pX ReceiveStatus=%pD SendStatus=%pD":MEV_Visible
MEV_Event:0x4:0xfffe:Discontinuity:disabledtp:MEV_Extra="%40C":MEV_Visible
MEV_Event:0x4:0xffff:TracePoint:tp:MEV_Extra="PC=%pX DataCnt=%pX Data=%S1X":MEV_Visible
// The following user events are used in MULTI EventAnalyzer new project demo.
MEV_Event:0x4:0xf001:MEV_Interval_Search=BeginSnack:letter_r:MEV_Extra="Demo Event: begin to eat snack. PC=%pX count=%4D":MEV_Visible
MEV_Event:0x4:0xf002:MEV_Interval_Search=BackToWork:letter_w:MEV_Extra="Demo Event: go back to work. PC=%pX count=%4D":MEV_Visible
MEV_Event:0x4:*:UserEvent:userevent:MEV_Visible

MEV_Event:0x5:0x8:EventLogOff:stopsign20:MEV_Visible

MEV_Event:0x5:0:Ready:statuschange:MEV_Invisible
MEV_Event:0x5:1:Suspended:statuschange:MEV_Invisible
MEV_Event:0x5:2:Pended:statuschange:MEV_Invisible
MEV_Event:0x5:3:Running:statuschange:MEV_Invisible
MEV_Event:0x5:4:Halted:statuschange:MEV_Invisible
MEV_Event:0x5:7:HostIO:statuschange:MEV_Invisible

MEV_Event:0x5:*:StatusChange:statuschange:MEV_Invisible
MEV_Event:0x1:0x0:TaskChange:statuschange:MEV_Extra="CoreId=%4D":MEV_Invisible
MEV_Event:0x0:0x0:Unknown:genericevent:MEV_Visible

// TaskNameRefresh is for recording tasknames.  Event 6 is a generic
// information refresh event.   Subtype 10 indicates "unknown" status,  
// since this event is attempting to update only the name and priority,
// nothing else 
MEV_Event:0x6:0xa:TaskNameRefresh:statuschange:MEV_Invisible
// A heartbeat message is periodically sent up by the target.   Currently,
// this is ignored by mevgui.
MEV_Event:0x7:*:HeartBeat:statuschange:MEV_Invisible

// Misc 

MEV_Misc:MEV_Refresh_Interval:250
MEV_Misc:MEV_Max_Refreshed_Events:1000
MEV_Misc:MEV_Object_Term:Task
MEV_Misc:MEV_Center_Status:true

MEV_Misc:MEV_Extra_Data_Warning:false
MEV_Misc:MEV_Unused_Extra_Data_Warning:false

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

// The HideIcons entry must be enabled or disabled before starting the
// GUI. If disabled, all event icons will be shown irregardless of
// how close they are to other event icons. This may slow down the
// display in live mode.
// MEV_Misc:MEV_Hide_Icons:false
