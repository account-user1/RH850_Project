/***************************************************************************
 * TS_PACKET.H
 *--------------------------------------------------------------------------
 *                  TraceServ Packet Type
 *         Copyright 2002-2011 Green Hills Software
 *--------------------------------------------------------------------------
 * A TS_Packet is a unit of data that corresponds to a single event in the
 * trace stream.  Each packet has a type and additional data that depends on
 * this type.
 *--------------------------------------------------------------------------
 *    This program is the property of Green Hills Software,
 *    its contents are proprietary information and no part of it
 *    is to be disclosed to anyone except employees of Green Hills
 *    Software, or as agreed in writing signed by the President
 *    of Green Hills Software.
 **************************************************************************/

#ifndef __TS_PACKET_H__
#define __TS_PACKET_H__

/***************************************************************************
 * TS_PacketType
 *--------------------------------------------------------------------------
 * This typedef contains the valid trace packet types.  Each type is
 * explained briefly.  For more information on each type of packet, refer to
 * the structures and data that corresponds to each packet type.
 **************************************************************************/
typedef enum {
    /* A TSP_Instruction packet contains information about a single
     * instruction that was executed and captured as part of the trace data. */
    TSP_Instruction = 0,
    /* A TSP_Data packet contains information about a single data access.  This
     * packet usually corresponds with the instruction preceding this packet,
     * unless the uncorrelated flag is set to true, in which case it is not
     * known what instruction caused the data access. */
    TSP_Data = 1,
    /* A TSP_Event packet contains information about a CPU event.  The event
     * type and other information is encoded in the packet. */
    TSP_Event = 2,
    /* A TSP_RawData packet contains 16 bytes of data, which consists of 16
     * characters in a string of data. */
    TSP_RawData = 3,
    /* A TSP_RawData_Start packet contains 16 bytes of data and indicates that
     * this is the beginning of a group of raw data packets.  To reconstruct
     * the string for a set of raw data packets, simply concatenate the
     * TSP_RawData_Start packet with any TSP_RawData packets that follow. */
    TSP_RawData_Start = 4,
    /* A TSP_PID packet indicates that a new task and/or address space began
     * executing.  All packets that follow the TSP_PID packet refer to
     * addresses in the new task and/or address space. */
    TSP_PID = 5,
    /* A TSP_ExtendedOpcode packet contains information about opcodes for
     * instructions that are larger than 4 bytes. */
    TSP_ExtendedOpcode = 6,
    /* Obsolete: TSP_LASample = 7, */
    /* A TSP_RegVal packet contains a register value at a given point in time.
     * This is sometimes used to feed extra information to the register
     * reconstruction engine in TimeMachine. */
    TSP_RegVal = 8,
    /* A TSP_RawTracePacket contains a 64-bit timestamp, 1-byte size, and a
       7-byte trace packet. This is a single trace packet exactly as it was
       captured. */
    TSP_RawTracePacket = 9,
    /* A TSP_FunctionEvent packet indicates that a function was called or
     * returned from.  This is used when doing sparse, function-level tracing.
     */
    TSP_FunctionEvent = 10,
    /* A TSP_AddressSync packet indicates that the PC is known at this point.
     * This is useful when instruction trace is not available, but addresses
     * are known for other events. */
    TSP_AddressSync = 11
} TS_PacketType;


/***************************************************************************
 * TSP_AccessType
 *--------------------------------------------------------------------------
 * This enumeration defines a bitfield that contains information about a
 * traced data access.  The possible values depend on the trace
 * architecture -- some values will never appear for certain trace
 * architectures.
 **************************************************************************/
typedef enum {
    /* TSPA_None indicates that there is no information available about this
     * access. */
    TSPA_None=0,
    /* TSPA_Read indicates that this data access is a read from memory. */
    TSPA_Read=1,
    /* TSPA_Write indicates that this data access is a write to memory. */
    TSPA_Write=2,
    /* TSPA_Fetch indicates that this data access is fetching an instruction
     * from memory.  A fetch is distinguished from a read in that a fetch
     * loads an instruction to be executed whereas a read is caused by an
     * instruction loading data into the CPU. */
    TSPA_Fetch=4,
    /* TSPA_DataUnavailable indicates that the data value is unknown for this
     * access because the information was not traced. */
    TSPA_DataUnavailable=8,
    /* TSPA_AddressUnavailable indicates that the address is unknown for this
     * access because the information was not traced. */
    TSPA_AddressUnavailable=16,
    /* TSPA_AddressPartial indicates that the address field is not complete
     * for this access.  It is not specified which bits are known/unknown in
     * this case. */
    TSPA_AddressPartial=32,
    /* TSPA_Coprocessor indicates that this access was to or from a
     * coprocessor rather than memory. */
    TSPA_Coprocessor=64,
    /* TSPA_CacheMiss indicates that this access missed in the cache and went
     * through to main memory. */
    TSPA_CacheMiss=128
} TSP_AccessType;


/***************************************************************************
 * TSP_EventType
 *--------------------------------------------------------------------------
 * This enumeration defines the event types for a TSP_Event packet.  The
 * possible values depend on the trace architecture -- some values will never
 * appear for certain trace architectures.  TimeMachine API programs can call
 * tm_get_event_name to get an ASCII string that represents each event type.
 **************************************************************************/
typedef enum {
    TSPE_Trigger=0, TSPE_TraceDisabled, TSPE_FifoOverflow, TSPE_DebugMode,
    TSPE_Reset, TSPE_UndefinedInstruction, TSPE_SoftwareInterrupt, 
    TSPE_PrefetchAbort, TSPE_DataAbort, TSPE_UnknownException,
    TSPE_IRQ, TSPE_FIQ, TSPE_Invalid5PacketAddress, TSPE_NoFullBroadcast,
    TSPE_DataMismatch, TSPE_DataMismatch2, TSPE_UndefinedEvent,
    TSPE_CheckMultiVersion, TSPE_FailedToReadCTR, TSPE_BranchError,
    TSPE_InvalidData, TSPE_IRQError, TSPE_IRQError2,
    TSPE_UnconditionalBranchNotTaken, TSPE_NoBranchToTake, TSPE_Interrupt,
    TSPE_OutOfSequenceError, TSPE_JavaMode, TSPE_PCChanged,
    TSPE_UnconditionalNotExecuted, TSPE_TraceDisabledByContextSwitch,
    TSPE_OutOfSync, TSPE_UnknownAddressSpace, TSPE_NotByteAligned,
    TSPE_UnrecognizedPacket, TSPE_UnrecognizedPheader, TSPE_ImpreciseDataAbort,
    TSPE_UncorrelatedDataStart, TSPE_UncorrelatedDataEnd,
    TSPE_InvalidDataPacket, TSPE_Hidden, TSPE_OutOfOrderDataError,
    TSPE_InvalidTraceData, TSPE_ExpectedDataPacket, TSPE_UncorrelatedStore,
    TSPE_UnexpectedDataPacket, TSPE_InvalidPCPacketAddress,
    TSPE_OpcodeReadFailure, TSPE_PreciseDataAbort, TSPE_SecureMonitor,
    TSPE_UntracedFunctions, TSPE_CallbackFromUntracedFunctions,
    TSPE_StoreFailed, TSPE_RegistersInvalidated, TSPE_HardFault, TSPE_BusFault,
    TSPE_DebugMonitor, TSPE_NMInterrupt, TSPE_UsageFault, TSPE_MemManage, TSPE_SVC,
    TSPE_PendSV, TSPE_SysTick, TSPE_Error, TSPE_Warning, TSPE_ReturnFromException,
    TSPE_MAX
} TSP_EventType;



/***************************************************************************
 * TSP_FunctionEventType
 *--------------------------------------------------------------------------
 * This structure defines the two types of function events: calls and returns.
 **************************************************************************/
typedef enum {
    TSPF_Entry, TSPF_Exit
} TSP_FunctionEventType;


/***************************************************************************
 * TS_Packet_Memory_Data
 *--------------------------------------------------------------------------
 * This structure defines the information stored along with a memory access
 * packet.
 **************************************************************************/
typedef struct TS_Packet_Memory_Data_t {
    /* The value field contains the value read or written for this data
     * access.  It is undefined if the TSPA_DataUnavailable flag is set. */
    uint64 value;
    /* The access field contains the access flags for this data access.
     * This field is a bitfield using the flags defined in TSP_AccessType. */
    uint8 access;
    /* The size field contains the size, in bytes, of this memory access. */
    uint8 size;
    /* The uncorrelated field contains 1 if this data access is uncorrelated
     * with any instruction and 0 if it is correlated to the instruction
     * preceding this access.  The rest of the bits in this field are reserved
     * for future use. */
    uint8 uncorrelated;
} TS_Packet_Memory_Data;


/***************************************************************************
 * TS_Packet_RegVal
 *--------------------------------------------------------------------------
 * This structure defines the information for a TSP_RegVal packet.
 **************************************************************************/
typedef struct {
    /* This field contains the register value */
    uint64 value;
    /* This field contains a target-specific register number. */
    uint32 regnum;
    /* This field contains the size of the register value. */
    uint8 size;
    /* The access field contains the access flags for this register access.
     * It is a bitfield using the flags defined in TSP_AccessType. The only
     * fields which have meaning are TSPA_Read and TSPA_Write. */
    uint8 access;
} TS_Packet_RegVal;

/***************************************************************************
 * TS_Packet_AddressSync
 *--------------------------------------------------------------------------
 * This structure defines the information for a TSP_AddressSync packet.
 **************************************************************************/
typedef struct {
    /* This field contains the timestamp for this instruction.  A
     * timestamp can be negative to indicate its position relative to a
     * trigger.  The unit of this field is one of:
     *   * instruction count
     *   * cycle count
     *   * picoseconds
     * When the unit of this field is cycles, the actual cycle count
     * is the value in this field shifted right 8 bits (value / 256).
     * This allows us to ensure that no two instructions have the same
     * timetag, which is an assumption that some of the visualization
     * tools make. */
    int64 timetag;
} TS_Packet_AddressSync;

/* PowerPC VLE constants and helper-macros. */
#define IS_PPC_VLE     1
/* Pass a packet into this macro to determine whether it executed in PowerPC
 * VLE mode or not.  This macro is only usable on PowerPC chips that support
 * VLE. */
#define IS_VLE(packet) ((packet)->u.instr.is_PPC_VLE & IS_PPC_VLE)

#ifdef __cplusplus
/* When the tid of a process is unknown */
const uint32 TSP_TID_Unknown = (uint32)-1;
/* For system interrupts and exceptions */
const uint32 TSP_TID_System = (uint32)-2;
/* The invalid Task ID */
const uint32 TSP_TID_NULL = (uint32)-3;
/* An alias for the kernel's address space id */
const uint32 TSP_AID_Kernel = (uint32)0;
/* The invalid address space id */
const uint32 TSP_AID_NULL = (uint32)-1;
#endif

/***************************************************************************
 * TS_Packet_Union
 *--------------------------------------------------------------------------
 * This union defines the information that depends on the packet type that
 * is stored along with each TS_Packet.  For each element in this union,
 * the type of packet associated with this element is listed below.
 **************************************************************************/
typedef union 
{
    /* instr: TSP_Instruction */
    struct {
	/* This field contains the timestamp for this instruction.  A
	 * timestamp can be negative to indicate its position relative to a
	 * trigger.  The unit of this field is one of:
	 *   * instruction count
	 *   * cycle count
	 *   * picoseconds
	 * When the unit of this field is cycles, the actual cycle count
	 * is the value in this field shifted right 8 bits (value / 256).
	 * This allows us to ensure that no two instructions have the same
	 * timetag, which is an assumption that some of the visualization
	 * tools make. */
	int64 timetag;
	/* This field contains the opcode for this instruction.  If the
	 * opcode does not fit in 4 bytes then a packet of type
	 * TSP_ExtendedOpcode will follow this packet. */
	uint32 opcode;
	/* Instruction size field */
	union {
	    /* For ARM and MIPS architectures, use the is16bit field as a bool
	     * to determine whether this instruction executed in 16-bit
	     * (Thumb/MIPS16) or 32-bit (ARM/MIPS32) mode. */
	    uint8 is16bit;
	    /* For architectures with variable length instructions, this field
	     * indicates the size of this instruction in bytes. */
	    uint8 opcode_length;
	    /* For PowerPC processors with VLE support, this field indicates
	     * whether this instruction executed in VLE mode.  Use the macro
	     * IS_VLE() defined above to access this field. */
	    uint8 is_PPC_VLE;
	};
	/* This field is a boolean that determines whether this instruction
	 * was executed or not. */
	uint8 executed;
	/* This field indicates the number of cycles that this instruction
	 * took.  This field is only valid if cycle-accurate tracing is
	 * enabled. */
	uint16 cycles;
    } instr;
    /* data: TSP_Data */
    /* See the definition of the TS_Packet_Memory_Data structure above. */
    TS_Packet_Memory_Data data;
    /* event: TSP_Event */
    /* See the definition of the TSP_EventType enumeration above. */
    TSP_EventType event;
    /* rawdata: TSP_RawData_Start and TSP_RawData */
    char rawdata[16];
    /* pid: TSP_PID */
    struct {
        /* This field contains the task ID corresponding with all packets that
	 * follow this packet until the next PID packet. */
        uint64 tid;
        /* This field contains the address space ID corresponding with all
	 * packets that follow this packet until the next PID packet.
         * NOTE: For kernel space this will always be TSP_AID_Kernel
         * regardless of what the real AddressSpace ID for kernel space is.
         */
        uint64 aid;
    } pid;
    /* extended_opcode: TSP_ExtendedOpcode */
    struct {
	/* The number of bytes of the opcode included in this packet. */
	uint32 num_bytes;
	/* The opcode bytes included in this packet. */
	uint8  data[12];
    } extended_opcode;
    /* regval: TSP_RegVal */
    TS_Packet_RegVal regval;
    /* raw_trace_packet: TSP_RawTracePacket */
    struct {
    /* This field contains the timestamp for this trace packet. The unit
     * of this field is one of:
     *   * instruction count
     *   * cycle count
     *   * picoseconds
     * When the unit of this field is cycles, the actual cycle count
     * is the value in this field shifted right 8 bits (value / 256).
     * This allows us to ensure that no two instructions have the same
     * timetag, which is an assumption that some of the visualization
     * tools make. */
    int64 timetag;
    /* The raw trace packet. */
    uint8 size;
    uint8 data[7];
    } raw_trace_packet;
    struct {
	/* This field specifies the type of function event -- either a call
	 * or return. */
	TSP_FunctionEventType type;
	/* This field contains the timetag for this function event. */
	int64 timetag;
    } fn_event;
    TS_Packet_AddressSync addr_sync;
} TS_Packet_Union;


/***************************************************************************
 * TS_Packet
 *--------------------------------------------------------------------------
 * This structure defines the packets of trace data in the trace stream.
 **************************************************************************/
typedef struct
{
    /* This field contains the type of this packet.  See TS_PacketType above
     * for the values that can appear in this field. */
    uint8 type;
    /* This field indicates whether this packet was reconstructed by the trace
     * tools during decompression or came directly from the trace port.  This
     * field is a boolean. */
    uint8 reconstructed;
    /* This field contains the address associated with this packet.  This
     * field is valid for TSP_Instruction and TSP_Data packets. */
    uint64 address;
    /* This field contains information that is specific to the packet type.
     * See the definition of the TS_Packet_Union type above for more
     * information. */
    TS_Packet_Union u;
} TS_Packet;




#endif /* __TS_PACKET_H__ */
