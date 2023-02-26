/*===========================================================================*/
/* Module       = dr7f701373.ld                                              */
/* Version      = E1.00a                                                     */
/*                extracted from device file dr7f701373.dvf                  */
/*                by DeFiXRH850 0.7.8.0                                      */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2015 by Renesas Electronics Europe GmbH,                    */
/*               a company of the Renesas Electronics Corporation            */
/*===========================================================================*/
/* Purpose:     Template of linker directive file                            */
/*                                                                           */
/*===========================================================================*/
/*                                                                           */
/* Warranty Disclaimer                                                       */
/*                                                                           */
/* Because the Product(s) is licensed free of charge, there is no warranty   */
/* of any kind whatsoever and expressly disclaimed and excluded by Renesas,  */
/* either expressed or implied, including but not limited to those for       */
/* non-infringement of intellectual property, merchantability and/or         */
/* fitness for the particular purpose.                                       */
/* Renesas shall not have any obligation to maintain, service or provide bug */
/* fixes for the supplied Product(s) and/or the Application.                 */
/*                                                                           */
/* Each User is solely responsible for determining the appropriateness of    */
/* using the Product(s) and assumes all risks associated with its exercise   */
/* of rights under this Agreement, including, but not limited to the risks   */
/* and costs of program errors, compliance with applicable laws, damage to   */
/* or loss of data, programs or equipment, and unavailability or             */
/* interruption of operations.                                               */
/*                                                                           */
/* Limitation of Liability                                                   */
/*                                                                           */
/* In no event shall Renesas be liable to the User for any incidental,       */
/* consequential, indirect, or punitive damage (including but not limited    */
/* to lost profits) regardless of whether such liability is based on breach  */
/* of contract, tort, strict liability, breach of warranties, failure of     */
/* essential purpose or otherwise and even if advised of the possibility of  */
/* such damages. Renesas shall not be liable for any services or products    */
/* provided by third party vendors, developers or consultants identified or  */
/* referred to the User by Renesas in connection with the Product(s) and/or  */
/* the Application.                                                          */
/*                                                                           */
/*===========================================================================*/
/* Environment:                                                              */
/*              Device:         R7F701373xABG                                */
/*              IDE:            GHS Multi for V800  V6.xx or later           */
/*===========================================================================*/

/**********************************************************************************************************************
* Module File Name  : dr7f701313.ld
* Module Description: T3T6 Linker Directive File
* Project           : Ford T3T6
* Author            : Bobby O'Steen
***********************************************************************************************************************
* Version Control:
* %version:          11 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/07/17  1        BDO       Modifications from Renesas Template for O/S regions
* 09/22/17  3        XL        Seperated Application and Bootloader region                                     EA4#14121
* 11/27/17  4        XL        Added checksum region                                                           EA4#17162
* 12/15/17  5        XL        Added DMA RAM base address                                                      EA4#17162
* 01/04/18  6        XL        Added BackUp RAM and clean up                                                   EA4#17162
* 02/02/18  7        XL        Added calibration region definition                                             EA4#20290
* 02/21/18  8        XL        Updated comments for TL124 measurement                                          EA4#20166
* 03/06/18  9        XL        Updated CCT CAL adress                                                          EA4#21554
* 03/12/18  10       XL        Updated for AR400A integration                                                  EA4#21616
* 05/08/18  11       XL        Added FIH section                                                               EA4#22836
**********************************************************************************************************************/

CONSTANTS
{
  zero_start = 0xffff8000
}

MEMORY
 {
  /* Application */
  APPVECTOR        (RX) : ORIGIN=0x00018000, LENGTH=0x00000A00
  APP_FLASH        (RX) : ORIGIN=0x00018A00, LENGTH=0x001673F0
  FIHBB_FLASH      (RX) : ORIGIN=0x0017FDF0, LENGTH=0x00040000		/* FIH (Ford In House) "Black Box" software ROM requirements: 256k = 8 * 32 K sectors */
  APP_CRC          (RX) : ORIGIN=0x001BFDF0, LENGTH=0x00000010
  APPPRESENCE      (RX) : ORIGIN=0x001BFE00, LENGTH=0x00000100
  APP_VALDBLK      (RX) : ORIGIN=0x001BFF00, LENGTH=0x00000100

  /* Nexteer Cal */
  NXTRCAL_FLASH    (RX) : ORIGIN=0x001C0000, LENGTH=0x0000FDF0
  NXTRCAL_CRC      (RX) : ORIGIN=0x001CFDF0, LENGTH=0x00000010
  NXTRCALPRESENCE  (RX) : ORIGIN=0x001CFE00, LENGTH=0x00000100
  NXTRCALVALDBLK   (RX) : ORIGIN=0x001CFF00, LENGTH=0x00000100

  /* Ford Cal */
  FORDCAL_FLASH    (RX) : ORIGIN=0x001D0000, LENGTH=0x0002FDF0
  FORDCAL_CRC      (RX) : ORIGIN=0x001FFDF0, LENGTH=0x00000010
  FORDCALPRESENCE  (RX) : ORIGIN=0x001FFE00, LENGTH=0x00000100
  FORDCALVALDBLK   (RX) : ORIGIN=0x001FFF00, LENGTH=0x00000100
  
  iRAM_0         	: ORIGIN = 0xFEBE0000,  LENGTH = 110k   
  FIHBB_QM_RAM   	: ORIGIN = 0xFEBFB800,  LENGTH = 6k  	/* FIH "Black Box" Software RAM segment for QM features */
  FIHBB_ASILB_RAM       : ORIGIN = 0xFEBFD000,  LENGTH = 4k  	/* FIH "Black Box" Software RAM segment for ASIL_B features */
  iRAM_DMAWRITE  	: ORIGIN = 0xFEBFE000,  LENGTH = 4k
  iRAM_DUMMY     	: ORIGIN = 0xFEBFF000,  LENGTH = 3k
  iRAM_BACKUP    	: ORIGIN = 0xFEBFFC00,  LENGTH = 1k
  
  gRAM_0         	: ORIGIN = 0xFEED8000,  LENGTH = 320k	/* Global RAM */
}

SECTIONS
 {

    .N_PresPattAppSeg                     : {*(.APPPRESENCE)} > APPPRESENCE
    .N_ValidPattAppSeg                    : {*(.APP_VALDBLK)} > APP_VALDBLK


/*--------------------------------------------------------------------------------------------------*/
/*                            Start of internal ROM area (APP_FLASH)                                   */
/*--------------------------------------------------------------------------------------------------*/

    .appstrtvect   FILL(0xFF)             :{*(.APPVECTOR) .=align(4);}>APPVECTOR /* Start of interrupt vector */
    
    .rozdata  FILL(0xFF)                  :{*(.rozdata) .=align(4);}>APP_FLASH      /* constant datas in ZDA area */
    .robase   align(4)                    :>.      /* initialize textpointer TP for SDA addressing */
    .rosdata  align(4)                    :>.      /* constant datas in SDA area */
    .rodata   align(4)                    :>.      /* constant datas in normal area */
    
    .ROM.FLS_PRIVATE_CODE_RAM  ROM(.FLS_PRIVATE_CODE_RAM) :{}>.
  
  
  #define OS_LINK_INTVEC_CONST
  #define OS_LINK_EXCVEC_CONST
  #define OS_LINK_CONST
  #include "Os_Link_Core0.ld"
  #define OS_LINK_INTVEC_CONST
  #define OS_LINK_CONST
  #include "Os_Link.ld"
    .text     align(4)                    :>.      /* program code area */
  #define OS_LINK_CODE
  #define OS_LINK_INTVEC_CODE
  #define OS_LINK_EXCVEC_CODE
  #define OS_LINK_CALLOUT_CODE
  #include "Os_Link_Core0.ld"
  #define OS_LINK_CODE
  #define OS_LINK_INTVEC_CODE
  #define OS_LINK_CALLOUT_CODE
  #include "Os_Link.ld"
  
  
    .ROM_OS_Appl10_VAR                    ROM(.OS_Appl10_VAR)  :>.
    .ROM_OS_Appl10_VAR_FAST               ROM(.OS_Appl10_VAR_FAST)  :>.
    .ROM_OS_GLOBALSHARED_VAR_FAST         ROM(.OS_GLOBALSHARED_VAR_FAST)  :>.
    
    .fixaddr  align(4)                    :>.      /* ghs internal (compiler) */
    .fixtype  align(4)                    :>.      /* ghs internal (compiler) */
    .secinfo  align(4)                    :>.      /* ghs internal (runtime library) */
    .syscall  align(4)                    :>.      /* ghs internal (linker) */
    
    .romdata  ROM(.data)                  :>.      /* constant data to initialize variables (copied to RAM at startup)*/
    .romzdata ROM(.zdata)                 :>.      /* constant data to initialize variables in ZDA area (copied to RAM at startup)*/
    .romsdata ROM(.sdata)                 :>.      /* constant data to initialize variables in SDA area (copied to RAM at startup)*/
    .romtdata ROM(.tdata)                 :>.      /* constant data to initialize variables in TDA area (copied to RAM at startup)*/
    .romsldata ROM(.sldata)               :>.      /* constant data to initialize variables in LSDA area (copied to GRAM at startup)*/

    .ROM_data_dma_128   ROM(.data_dma_128)  FILL(0xFF)    :{}>.
    .ROM_sdata_dma_128  ROM(.sdata_dma_128) FILL(0xFF)    :{}>.

    __top_of_iROM_0 = MEMENDADDR(APP_FLASH);


/*--------------------------------------------------------------------------------------------------*/
/*                         Start of Ford FIH "black box" software ROM AREA                          */
/*--------------------------------------------------------------------------------------------------*/

    /*** Ford FIH "black box" ROM area (FIHBB_FLASH) ***/
    .FIHBBASILB_text 	:{ libFIHASILB.a(*(.text))    } > FIHBB_FLASH
    .FIHBBASILB_rozdata :{ libFIHASILB.a(*(.rozdata)) } > FIHBB_FLASH
    .FIHBBASILB_robase 	:{ libFIHASILB.a(*(.robase))  } > FIHBB_FLASH
    .FIHBBASILB_rodata 	:{ libFIHASILB.a(*(.rodata))  } > FIHBB_FLASH 	
    .FIHBBASILB_rosdata :{ libFIHASILB.a(*(.rosdata)) } > FIHBB_FLASH	

    .FIHBBQM_text 	:{ libFIHQM.a(*(.text))       } > FIHBB_FLASH
    .FIHBBQM_rozdata 	:{ libFIHQM.a(*(.rozdata))    } > FIHBB_FLASH
    .FIHBBQM_robase 	:{ libFIHQM.a(*(.robase))     } > FIHBB_FLASH
    .FIHBBQM_rodata 	:{ libFIHQM.a(*(.rodata))     } > FIHBB_FLASH 	
    .FIHBBQM_rosdata 	:{ libFIHQM.a(*(.rosdata))    } > FIHBB_FLASH	

	
    .romFIHBBASILB_data  	ROM(.FIHBBASILB_data)	    :>FIHBB_FLASH      /* constant data to initialize variables (copied to RAM at startup)*/
    .romFIHBBASILB_zdata 	ROM(.FIHBBASILB_zdata)      :>FIHBB_FLASH      /* constant data to initialize variables in ZDA area (copied to RAM at startup)*/
    .romFIHBBASILB_sdata 	ROM(.FIHBBASILB_sdata)      :>FIHBB_FLASH      /* constant data to initialize variables in SDA area (copied to RAM at startup)*/
    .romFIHBBASILB_tdata 	ROM(.FIHBBASILB_tdata)      :>FIHBB_FLASH      /* constant data to initialize variables in TDA area (copied to RAM at startup)*/

    .romFIHBBQM_data  		ROM(.FIHBBQM_data)          :>FIHBB_FLASH      /* constant data to initialize variables (copied to RAM at startup)*/
    .romFIHBBQM_zdata 		ROM(.FIHBBQM_zdata)         :>FIHBB_FLASH      /* constant data to initialize variables in ZDA area (copied to RAM at startup)*/
    .romFIHBBQM_sdata 		ROM(.FIHBBQM_sdata)         :>FIHBB_FLASH      /* constant data to initialize variables in SDA area (copied to RAM at startup)*/
    .romFIHBBQM_tdata 		ROM(.FIHBBQM_tdata)         :>FIHBB_FLASH      /* constant data to initialize variables in TDA area (copied to RAM at startup)*/


/*--------------------------------------------------------------------------------------------------*/
/*                            Start of Nexteer Cal area                                             */
/*--------------------------------------------------------------------------------------------------*/

    .CalRegn01                            :> NXTRCAL_FLASH
	
    .N_PresPattNxtrCalSeg                 : {*(.NXTRCALPRESENCE)} > NXTRCALPRESENCE
    .N_ValidPatNxtrCalSeg                 : {*(.NXTRCALVALDBLK)} > NXTRCALVALDBLK

	
/*--------------------------------------------------------------------------------------------------*/
/*                            Start of Ford Cal area                                                */
/*--------------------------------------------------------------------------------------------------*/

    .dummyFordCaldata                     : {*(.FORDCAL_FLASH)} > FORDCAL_FLASH

    .CalRegn02                            :> FORDCAL_FLASH

	
//TODO: NEED TO FINALIZE HOW TO HANDLE FIH CALS - RUN FROM RAM, COPY AT INIT, COPY AT TUNE ON THE FLY SESSION START, ETC???	
//      There are sections defined in Ford Black Box software to provide method to place there tunable CALs
//      Need to define FIH_SECTION_ACTIVE in Ford code. This would be part of the build environment provided. Define in a new header file.
//		#ifdef FIH_SECTION_ACTIVE
//		#define FIH_CAL_QM __attribute__((section(".FIH_CAL_QM")))
//		#define FIH_CAL_ASILB __attribute__((section(".FIH_CAL_ASILB")))
//		#define FIH_SECTION_ACTIVE

	
    .N_PresPattFordCalSeg                 : {*(.FORDCALPRESENCE)} > FORDCALPRESENCE
    .N_ValidPatFordCalSeg                 : {*(.FORDCALVALDBLK)} > NXTRCALVALDBLK
	
	
/*--------------------------------------------------------------------------------------------------*/
/*                            Start of internal RAM area (iRAM)                                     */
/*--------------------------------------------------------------------------------------------------*/

    .                                     :>iRAM_0    /* initialized data */     /* Start of data area */

  #define OS_LINK_KERNEL_STACKS
  #include "Os_Link_Core0_Stacks.ld"

    _osSystemStack_c0_EndAddr = _OS_STACK_OSCORE_CORE0_KERNEL_VAR_NOINIT_END; // Temp added
	
    _GeneralRam_StartAddr = .;
    
    _clearedRamStart = .;                             /* Cleared RAM Section Start */
    .data                                :>.         /* initialized data */
    .bss      align(4)                   :>.         /* zero initialized data*/
    
    .FLS_PRIVATE_CODE_RAM    align(4)    :>.
  

  #define OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE_CORE0
  #include "Os_Link_Core0.ld"
  #define OS_LINK_VAR_APP_APPL0
  #include "Os_Link_Core0.ld"
  #define OS_LINK_VAR_APP_APPL10
  #include "Os_Link_Core0.ld"
  #define OS_LINK_VAR_KERNEL
  #define OS_LINK_KERNEL_BARRIERS
  #define OS_LINK_KERNEL_CORESTATUS
  #include "Os_Link_Core0.ld"
  #define OS_LINK_VAR_GLOBALSHARED
  #include "Os_Link.ld"
  #define OS_LINK_VAR_KERNEL
  #include "Os_Link.ld"
  
	
	
    _RESET_CORE0 = 0;

    .sdabase  align(4)                    :>.         /* initialize globalpointer GP for SDA addressing */
    .sdata    align(4)                    :>.         /* initialized data in SDA area*/
    .sbss     align(4)                    :>.         /* zero initialized data in SDA area*/
    .zdata    align(4)                    :>.         /* initialized data in ZDA area*/
    .zbss     align(4)                    :>.         /* zero initialized data in ZDA area*/
    
    .tdata    align(4)  MAX_SIZE(0x0100)  :>.         /* initialized and zero-initialized data in TDA area */

    _clearedRamEnd = .;                               /* Cleared RAM Section End */
	
	
    //.heapbase align(4)                    :>.
    //.heap     align(4)
    //	        pad(endaddr(iRAM_0)-addr(.heapbase))
    	        NOCLEAR	                  :>.         /* definition of heap size */ 

    __top_of_iRAM_0 = MEMENDADDR(iRAM_0);
  
    _GeneralRam_EndAddr = 0xFEBFFFFF;
    
	
/*--------------------------------------------------------------------------------------------------*/
/*                         Start of Ford FIH "black box" software RAM AREA                          */
/*--------------------------------------------------------------------------------------------------*/
//TODO: Consider placing Ford FIH "black box" data in Global RAM (GRAM) 

    /***  Ford FIH "black box" RAM area (FIHBB_QM_RAM & FIHBB_ASILB_RAM) ***/

    .FIHBBASILB_data 	:{ libFIHASILB.a(*(.data))  } > FIHBB_ASILB_RAM //TODO - align all sections here and below: align(4) 
    .FIHBBASILB_bss 	:{ libFIHASILB.a(*(.bss))   } > FIHBB_ASILB_RAM
    .FIHBBASILB_sbss 	:{ libFIHASILB.a(*(.sbss))  } > FIHBB_ASILB_RAM
    .FIHBBASILB_sdata	:{ libFIHASILB.a(*(.sdata)) } > FIHBB_ASILB_RAM
    .FIHBBASILB_zdata	:{ libFIHASILB.a(*(.zdata)) } > FIHBB_ASILB_RAM
    .FIHBBASILB_zbss	:{ libFIHASILB.a(*(.zbss))  } > FIHBB_ASILB_RAM
    .FIHBBASILB_tdata	:{ libFIHASILB.a(*(.tdata)) } > FIHBB_ASILB_RAM //TODO - align(4)  MAX_SIZE(0x0100)

    .FIHBBQM_data 		:{ libFIHQM.a(*(.data))  } > FIHBB_QM_RAM 
    .FIHBBQM_bss 		:{ libFIHQM.a(*(.bss))   } > FIHBB_QM_RAM //TODO - align all sections here and below: align(4) 
    .FIHBBQM_sbss 		:{ libFIHQM.a(*(.sbss))  } > FIHBB_QM_RAM
    .FIHBBQM_sdata		:{ libFIHQM.a(*(.sdata)) } > FIHBB_QM_RAM
    .FIHBBQM_zdata		:{ libFIHQM.a(*(.zdata)) } > FIHBB_QM_RAM
    .FIHBBQM_zbss		:{ libFIHQM.a(*(.zbss))  } > FIHBB_QM_RAM
    .FIHBBQM_tdata		:{ libFIHQM.a(*(.tdata)) } > FIHBB_QM_RAM //TODO - align(4)  MAX_SIZE(0x0100)


/*--------------------------------------------------------------------------------------------------*/
/*                            iRAM_DMAWRITE                                                         */
/*--------------------------------------------------------------------------------------------------*/

    .data_dma_128                         :>iRAM_DMAWRITE
    .sdata_dma_128                        :>.

	_DmaWrRamBasAddr = MEMADDR(iRAM_DMAWRITE);

	
/*--------------------------------------------------------------------------------------------------*/
/*                            iRAM_BACKUP                                                           */
/*--------------------------------------------------------------------------------------------------*/

    .data_backup                          :>iRAM_BACKUP
    .sdata_backup                         :>.
    .bss_backup                           :>.
    .sbss_backup                          :>.
	

/*--------------------------------------------------------------------------------------------------*/
/*                            Start of internal global RAM area (gRAM_0)                            */
/*--------------------------------------------------------------------------------------------------*/

    .slsync   min_size(4)                 :>gRAM_0    /* user defined segment for semaphore data located in global RAM */
    .sldata   align(4)                    :>.         /* user defined segment for initialized data located in global RAM */
    .slbss    align(4)                    :>.         /* user defined segment for initialized data located in global RAM */
    
	__top_of_gRAM_0 = MEMENDADDR(gRAM_0);

	
/*--------------------------------------------------------------------------------------------------*/
/*                            Checksum Definitions                                                  */
/*--------------------------------------------------------------------------------------------------*/

    .APPLCRC    FILL(0xFF)  align(4)   :{*(.APPLCRC) .= sizeof(APP_CRC);  } > APP_CRC
    .CAL1CRC    FILL(0xFF)  align(4)   :{*(.CAL1CRC) .= sizeof(NXTRCAL_CRC); } > NXTRCAL_CRC
    .CAL2CRC    FILL(0xFF)  align(4)   :{*(.CAL2CRC) .= sizeof(FORDCAL_CRC); } > FORDCAL_CRC
	
    _CCT_Range_01_Start = 0x00018A00;
    _CCT_Range_01_Length = 0x001A73F0;
    _CCT_Range_01_BitAddrGran = 8;
    _CCT_Range_01_Category = 300;
    _CCT_Range_01_Algorithm = 14;
    _CCT_Range_01_Address = addr(APP_CRC);

    _CCT_Range_02_Start =  0x001C0000;
    _CCT_Range_02_Length = 0x0000FDF0;
    _CCT_Range_02_BitAddrGran = 8;
    _CCT_Range_02_Category = 200;
    _CCT_Range_02_Algorithm = 14;
    _CCT_Range_02_Address = addr(NXTRCAL_CRC);

    _CCT_Range_03_Start  = 0x001D0000;
    _CCT_Range_03_Length = 0x0002FDF0;
    _CCT_Range_03_BitAddrGran = 8;
    _CCT_Range_03_Category = 200;
    _CCT_Range_03_Algorithm = 14;
    _CCT_Range_03_Address = addr(FORDCAL_CRC);
	
	
/*--------------------------------------------------------------------------------------------------*/
/*                            Symbols for compiler references                                       */
/*--------------------------------------------------------------------------------------------------*/

  ___ghs_romstart   = MEMADDR(APPVECTOR);
  ___ghs_romend     = MEMENDADDR(FORDCALVALDBLK);

  ___ghs_ramstart   = MEMADDR(iRAM_0);
  ___ghs_ramend     = MEMENDADDR(FIHBB_ASILB_RAM);

  ___ghs_gramstart0 = MEMADDR(gRAM_0);
  ___ghs_gramend0   = MEMENDADDR(gRAM_0);

 }

 
/*===========================================================================*/
/*      End of File                                                          */
/*===========================================================================*/
