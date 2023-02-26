/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  
 *        \brief  VStdLib Header for RTE Analyzer
 *
 *      \details  This header provides the compiler defines of the vstdlib
 *                that are required for the static analysis with RTE Analyzer.
 *
 *********************************************************************************************************************/
 /**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Sascha Sommer                 So            Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2016-10-19  So                    Initial creation
 *********************************************************************************************************************/
#ifndef VSTDLIB_H
# define VSTDLIB_H
# include "string.h"
typedef uint32_least VStdLib_CntType;
# define VStdLib_MemClr(pDst, nCnt)             memset((pDst), 0, (nCnt))
/* Set nCnt bytes to the character nPattern at pDst (any alignment) */
# define VStdLib_MemSet(pDst, nPattern, nCnt)   memset((pDst), (nPattern), (nCnt))
/* Copy nCnt bytes from pSrc to pDst (any alignment) */
# define VStdLib_MemCpy(pDst, pSrc, nCnt)       memcpy((pDst), (pSrc), (nCnt))
/* Copy nCnt 16bit blocks from pSrc to pDst (both pointers 16-bit aligned) */
# define VStdLib_MemCpy16(pDst, pSrc, nCnt)     memcpy((pDst), (pSrc), ((nCnt)<<1))
/* Copy nCnt 32bit blocks from pSrc to pDst (both pointers 32-bit aligned) */
# define VStdLib_MemCpy32(pDst, pSrc, nCnt)     memcpy((pDst), (pSrc), ((nCnt)<<2))
# define VStdInitPowerOn()
# define VStdLib_MemCpyRom(d, s, c)          VStdLib_MemCpy((d), (s), (c))
# define VStdMemClr(d, c)                    VStdLib_MemClr((d), (c))
# define VStdMemNearClr(d, c)                VStdLib_MemClr((d), (c))
# define VStdMemFarClr(d, c)                 VStdLib_MemClr((d), (c))
# define VStdMemSet(d, p, c)                 VStdLib_MemSet((d), (p), (c))
# define VStdMemNearSet(d, p, c)             VStdLib_MemSet((d), (p), (c))
# define VStdMemFarSet(d, p, c)              VStdLib_MemSet((d), (p), (c))
# define VStdMemCpy(d, s, c)                 VStdLib_MemCpy((d), (s), (c))
# define VStdMemCpyRom(d, s, c)              VStdLib_MemCpyRom((d), (s), (c))
# define VStdMemCpyRamToRam(d, s, c)         VStdLib_MemCpy((d), (s), (c))
# define VStdMemCpyRomToRam(d, s, c)         VStdLib_MemCpyRom((d), (s), (c))
# define VStdMemCpyRamToNearRam(d, s, c)     VStdLib_MemCpy((d), (s), (c))
# define VStdMemCpyRomToNearRam(d, s, c)     VStdLib_MemCpyRom((d), (s), (c))
# define VStdMemCpyRamToFarRam(d, s, c)      VStdLib_MemCpy((d), (s), (c))
# define VStdMemCpyRomToFarRam(d, s, c)      VStdLib_MemCpyRom((d), (s), (c))
# define VStdMemCpyFarRamToRam(d, s, c)      VStdLib_MemCpy((d), (s), (c))
# define VStdMemCpyFarRamToFarRam(d, s, c)   VStdLib_MemCpy((d), (s), (c))
# define VStdMemCpyFarRomToFarRam(d, s, c)   VStdLib_MemCpyRom((d), (s), (c))
# define VStdRamMemCpy(d, s, c)              VStdLib_MemCpy((d), (s), (c))
# define VStdRomMemCpy(d, s, c)              VStdLib_MemCpyRom((d), (s), (c))
# define VStdMemCpy16(d, s, c)               VStdLib_MemCpy16((d), (s), (c))
# define VStdMemCpy16RamToRam(d, s, c)       VStdLib_MemCpy16((d), (s), (c))
# define VStdMemCpy16RamToNearRam(d, s, c)   VStdLib_MemCpy16((d), (s), (c))
# define VStdMemCpy16NearRamToRam(d, s, c)   VStdLib_MemCpy16((d), (s), (c))
# define VStdMemCpy16RamToFarRam(d, s, c)    VStdLib_MemCpy16((d), (s), (c))
# define VStdMemCpy16FarRamToRam(d, s, c)    VStdLib_MemCpy16((d), (s), (c))
# define VStdRamMemCpy16(d, s, c)            VStdLib_MemCpy16((d), (s), (c))
# define VStdMemCpy32(d, s, c)               VStdLib_MemCpy32((d), (s), (c))
# define VStdMemCpy32RamToRam(d, s, c)       VStdLib_MemCpy32((d), (s), (c))
# define VStdMemCpy32RamToNearRam(d, s, c)   VStdLib_MemCpy32((d), (s), (c))
# define VStdMemCpy32NearRamToRam(d, s, c)   VStdLib_MemCpy32((d), (s), (c))
# define VStdMemCpy32RamToFarRam(d, s, c)    VStdLib_MemCpy32((d), (s), (c))
# define VStdMemCpy32FarRamToRam(d, s, c)    VStdLib_MemCpy32((d), (s), (c))
# define VStdRamMemCpy32(d, s, c)            VStdLib_MemCpy32((d), (s), (c))
# define VStdLib_MemCpyRomMacro(d, s, c)     VStdLib_MemCpyMacro((d), (s), (c))
# define VStdMemClr_Macro(d, c)              VStdLib_MemClrMacro((d), (c))
# define VStdMemSet_Macro(d, p, c)           VStdLib_MemSetMacro((d), (p), (c))
# define VStdMemCpy_Macro(d, s, c)           VStdLib_MemCpyMacro((d), (s), (c))
# define VStdMemCpyRom_Macro(d, s, c)        VStdLib_MemCpyRomMacro((d), (s), (c))
# define VStdLib_MemCpyLarge_s(pDst, nDstSize, pSrc, nCnt)  VStdLib_MemCpy((pDst), (pSrc), (nCnt))
# define VStdLib_MemCpy_s(d, n, s, c)        VStdLib_MemCpy((d), (s), (c))

#endif
