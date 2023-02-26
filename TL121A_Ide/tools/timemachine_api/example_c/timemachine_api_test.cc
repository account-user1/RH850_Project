/*
 * timemachine_api_test.cc
 *
 * An example program for the TimeMachine API
 */

#include <stdio.h>
#include <stdlib.h>
#include "timemachine_api.h"

#if !defined(MIN)
#define MIN(x,y) ((x < y) ? x : y)
#endif


// Example data access function - prints values from the TS_Packet structure
void print_packets(TM_CONNECTION conn, TS_Packet *data, int num)
{
    for(int i=0; i<num; i++) {
	tm_mprintf(conn, "Packet %d: ", i);
	if(data[i].type == TSP_Instruction) {
	    tm_mprintf(conn, "Instr    PC   = 0x%08x\n",
		    (uint32)(data[i].address & 0xffffffff));
	    char buf[80];
	    int src_line;
	    int offset;
	    if(tm_get_instruction_symbol(conn, data[i].address,
		    buf, sizeof(buf), &src_line, &offset) >= 0) {
		if(src_line != -1) {
		    tm_mprintf(conn, "    %s#%d\n", buf, src_line);
		} else {
		    tm_mprintf(conn, "    %s+0x%x\n", buf, offset);
		}
	    } else {
		tm_mprintf(conn, "    symbol unknown\n");
	    }
	} else if(data[i].type == TSP_ExtendedOpcode) {
	    tm_mprintf(conn, "ExtOpc   PC   = 0x%08x\n",
		    (uint32)(data[i].address & 0xffffffff));
	} else if(data[i].type == TSP_Data) {
	    uint8 access = data[i].u.data.access;
	    char access_string[] = "    ", *as = access_string;
	    if (access & TSPA_Read)  *as++ = 'R';
	    if (access & TSPA_Write) *as++ = 'W';
	    if (access & TSPA_Fetch) *as++ = 'F';
	    if ((access & TSPA_DataUnavailable)
		    || (access & TSPA_AddressUnavailable))
		*as++ = 'U';
	    tm_mprintf(conn, "Data%s Addr = 0x%08x   Value  = 0x",
		    access_string, (uint32)(data[i].address & 0xffffffff));
	    // value is uint64. print the upper 32 bits if they're used
	    int size = data[i].u.data.size;
	    if (size > 4)
		tm_mprintf(conn, "%08x", (uint32)(data[i].u.data.value >> 32));
	    // print the lower 32 bits and the size
	    tm_mprintf(conn, "%08x  Size = %d\n",
		    (uint32)data[i].u.data.value, size);
	    char buf[80];
	    if(tm_get_data_symbol(conn, data[i].address, buf, sizeof(buf)) >= 0)
		tm_mprintf(conn, "    %s\n", buf);
	    else
		tm_mprintf(conn, "    symbol unknown\n");
	} else if(data[i].type == TSP_Event) {
	    tm_mprintf(conn, "Event    Type = %d\n", data[i].u.event);
	} else if(data[i].type == TSP_RawData) {
	    tm_mprintf(conn, "Raw Data\n");
	} else if(data[i].type == TSP_RawData_Start) {
	    tm_mprintf(conn, "Raw Data Start\n");
	} else if(data[i].type == TSP_FunctionEvent) {
	    char buf[80];
	    int src_line, offset;
	    if (tm_get_instruction_symbol(conn, data[i].address, buf, sizeof(buf),
		    &src_line, &offset) < 0)
		sprintf(buf, "<unknown>");
	    tm_mprintf(conn, "Function Event type=%s, timetag=0x%016llx, func=%s\n",
		    (data[i].u.fn_event.type == TSPF_Entry) ? "Entry" : "Exit",
		    data[i].u.fn_event.timetag, buf);
	} else if (data[i].type == TSP_AddressSync) {
	    tm_mprintf(conn, "Address Sync addr=0x%016llx\n",
		    data[i].address);
	} else {
	    tm_mprintf(conn, "Undefined type: %d\n", data[i].type);
	}
    }
}


// Example analysis function - counts instructions and memory accesses
void print_stats(TM_CONNECTION conn, TS_Packet *data, int num)
{
    int num_instructions = 0;
    int num_reads = 0;
    int num_writes = 0;
    for(int i=0; i<num; i++) {
	if(data[i].type == TSP_Instruction) {
	    num_instructions++;
	} else if(data[i].type == TSP_Data) {
	    if(data[i].u.data.access & TSPA_Read)
		num_reads++;
	    else if(data[i].u.data.access & TSPA_Write)
		num_writes++;
	}
    }
    tm_mprintf(conn, "Num packets: %d\n", num);
    tm_mprintf(conn, "Num Instructions: %d\n", num_instructions);
    tm_mprintf(conn, "Num Accesses: %d\n", num_reads + num_writes);
    tm_mprintf(conn, "    Reads:  %d\n", num_reads);
    tm_mprintf(conn, "    Writes: %d\n", num_writes);
}


int main(int argc, char **argv)
{
    // Initialize the TimeMachine API
    if(tm_init_arg(&argc, argv) == -1) {
	printf("Error: this program must be run from MULTI\n");
	exit(1);
    }

    // Connect to the MULTI Debugger which started this script
    TM_CONNECTION conn = tm_connect(0);
    if(conn == NULL) {
	printf("Unable to connect to traceserv or session_id was invalid\n");
	exit(1);
    }

    // Print the number of trace packets currently collected
    uint64 num_packets = tm_get_num_packets(conn);
    tm_mprintf(conn, "Num Packets: %lld\n", num_packets);

    // Check if the symbol table is initialzed
    if(tm_is_symbol_table_initialized(conn) == 0)
	tm_mprintf(conn, "Warning: Symbol table is not initialized\n");

    if(num_packets) {
	// Buffer all of the trace packets in memory
        // Note that this is generally not a safe thing to do. There could
        // be an arbitrarily large number of packets and this could easily
        // exhaust virtual memory. To be robust a TimeMachine API
        // application should limit the number of packets loaded into RAM
        // at once.
	TS_Packet *packets = new TS_Packet[num_packets];
	num_packets = tm_get_packets(conn, 0, num_packets, packets);

	// Print out the first 100 packets
	print_packets(conn, packets, MIN(100, (int)num_packets));

	// Compute and print some statistics on the packets
	print_stats(conn, packets, (int)num_packets);

	// Free the trace packet buffer
	delete[] packets;
    }

    // Disconnect from the MULTI Debugger
    tm_disconnect(conn);

    return 0;
}

