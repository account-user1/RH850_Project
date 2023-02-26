#include "pst_stub_types.h"

extern void assert(int);


#define PST_TRUE() pst_random_int

/* Definition of max array size */

/* Number of bits of 1 byte and addressable unit size */

#define PST_SIZE_CHAR_IN_BITS 8

/* Memory zone addressable according to the target and the pointer configuration */

#define ARRAY_SIZE (2147483647 / PST_SIZE_CHAR_IN_BITS)
#define ARRAY_NBELEM_0(TY) (((ARRAY_SIZE / 2) - 1) / sizeof (TY))
#define ARRAY_NBELEM(TY) (ARRAY_NBELEM_0(TY) < 1 ? 1 : ARRAY_NBELEM_0(TY))


/* Declaration of random variables */

static volatile __PST__CHAR pst_random_char;

static volatile int pst_random_int;

static volatile __PST__SINT8 pst_random_g_2;
static volatile __PST__FLOAT32 pst_random_g_10;
static volatile __PST__UINT8 pst_random_g_6;
static volatile __PST__UINT32 pst_random_g_8;
static volatile __PST__UINT16 pst_random_g_7;


/* Definition of needed stubs for function pointers */


/* Definition of init procedures */

extern __PST__UINT32 _main_gen_init_g8(void);

extern __PST__UINT8 _main_gen_init_g6(void);

extern __PST__FLOAT32 _main_gen_init_g10(void);

extern struct __PST__g__36 _main_gen_init_g36(void);

extern __PST__SINT8 _main_gen_init_g2(void);

__PST__SINT8 _main_gen_init_g2(void)
{
    __PST__SINT8 x;
    /* base type */
    x = pst_random_g_2;
    return x;
}

__PST__FLOAT32 _main_gen_init_g10(void)
{
    __PST__FLOAT32 x;
    /* base type */
    x = pst_random_g_10;
    return x;
}

__PST__UINT8 _main_gen_init_g6(void)
{
    __PST__UINT8 x;
    /* base type */
    x = pst_random_g_6;
    return x;
}

struct __PST__g__36 _main_gen_init_g36(void)
{
    static struct __PST__g__36 x;
    /* struct/union type */
    x.OffsTrim = _main_gen_init_g10();
    x.OffsTrimPrfmdSts = _main_gen_init_g6();
    return x;
}

__PST__UINT32 _main_gen_init_g8(void)
{
    __PST__UINT32 x;
    /* base type */
    x = pst_random_g_8;
    return x;
}


/* Definition of variables init procedures */

static void _main_gen_init_sym_HwTq9Meas_Ip_HwTq9Polarity(void)
{
    extern __PST__SINT8 HwTq9Meas_Ip_HwTq9Polarity;
    
    /* initialization with random value */
    {
        HwTq9Meas_Ip_HwTq9Polarity = _main_gen_init_g2();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Pim_HwTq9Offs(void)
{
    extern struct __PST__g__36 HwTq9Meas_Pim_HwTq9Offs;
    
    /* initialization with random value */
    {
        HwTq9Meas_Pim_HwTq9Offs = _main_gen_init_g36();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Pim_HwTq9DataPlsHiLim(void)
{
    extern __PST__UINT32 HwTq9Meas_Pim_HwTq9DataPlsHiLim;
    
    /* initialization with random value */
    {
        HwTq9Meas_Pim_HwTq9DataPlsHiLim = _main_gen_init_g8();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Pim_HwTq9DataPlsLoLim(void)
{
    extern __PST__UINT32 HwTq9Meas_Pim_HwTq9DataPlsLoLim;
    
    /* initialization with random value */
    {
        HwTq9Meas_Pim_HwTq9DataPlsLoLim = _main_gen_init_g8();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Pim_HwTq9PrevHwTq(void)
{
    extern __PST__FLOAT32 HwTq9Meas_Pim_HwTq9PrevHwTq;
    
    /* initialization with random value */
    {
        HwTq9Meas_Pim_HwTq9PrevHwTq = _main_gen_init_g10();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Pim_HwTq9RawDataBuf(void)
{
    extern __PST__g__38 HwTq9Meas_Pim_HwTq9RawDataBuf;
    
    /* initialization with random value */
    {
        { /* array type */
            __PST__UINT32 _main_gen_tmp_0_0;
            
            for (_main_gen_tmp_0_0 = 0; _main_gen_tmp_0_0 < 5; _main_gen_tmp_0_0++)
            {
                /* base type */
                HwTq9Meas_Pim_HwTq9RawDataBuf[_main_gen_tmp_0_0] = pst_random_g_7;
            }
        }
    }
}

static void _main_gen_init_sym_HwTq9Meas_Pim_HwTq9RollgCntrPrev(void)
{
    extern __PST__UINT8 HwTq9Meas_Pim_HwTq9RollgCntrPrev;
    
    /* initialization with random value */
    {
        HwTq9Meas_Pim_HwTq9RollgCntrPrev = _main_gen_init_g6();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Pim_HwTq9SyncPlsHiLim(void)
{
    extern __PST__UINT32 HwTq9Meas_Pim_HwTq9SyncPlsHiLim;
    
    /* initialization with random value */
    {
        HwTq9Meas_Pim_HwTq9SyncPlsHiLim = _main_gen_init_g8();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Pim_HwTq9SyncPlsLoLim(void)
{
    extern __PST__UINT32 HwTq9Meas_Pim_HwTq9SyncPlsLoLim;
    
    /* initialization with random value */
    {
        HwTq9Meas_Pim_HwTq9SyncPlsLoLim = _main_gen_init_g8();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Pim_HwTq9TiStamp(void)
{
    extern __PST__UINT32 HwTq9Meas_Pim_HwTq9TiStamp;
    
    /* initialization with random value */
    {
        HwTq9Meas_Pim_HwTq9TiStamp = _main_gen_init_g8();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Pim_HwTq9TiStampPrev(void)
{
    extern __PST__UINT32 HwTq9Meas_Pim_HwTq9TiStampPrev;
    
    /* initialization with random value */
    {
        HwTq9Meas_Pim_HwTq9TiStampPrev = _main_gen_init_g8();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Srv_GetNtcQlfrSts_NtcQlfr(void)
{
    extern __PST__UINT8 HwTq9Meas_Srv_GetNtcQlfrSts_NtcQlfr;
    
    /* initialization with random value */
    {
        HwTq9Meas_Srv_GetNtcQlfrSts_NtcQlfr = _main_gen_init_g6();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Srv_GetNtcQlfrSts_Return(void)
{
    extern __PST__UINT8 HwTq9Meas_Srv_GetNtcQlfrSts_Return;
    
    /* initialization with random value */
    {
        HwTq9Meas_Srv_GetNtcQlfrSts_Return = _main_gen_init_g6();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Srv_GtmGetSent0Data_BufStrtAdr(void)
{
    extern __PST__g__40 HwTq9Meas_Srv_GtmGetSent0Data_BufStrtAdr;
    
    /* initialization with random value */
    {
        { /* array type */
            __PST__UINT32 _main_gen_tmp_1_0;
            
            for (_main_gen_tmp_1_0 = 0; _main_gen_tmp_1_0 < 32; _main_gen_tmp_1_0++)
            {
                /* base type */
                HwTq9Meas_Srv_GtmGetSent0Data_BufStrtAdr[_main_gen_tmp_1_0] = pst_random_g_8;
            }
        }
    }
}

static void _main_gen_init_sym_HwTq9Meas_Srv_GtmGetSent0Data_Return(void)
{
    extern __PST__UINT8 HwTq9Meas_Srv_GtmGetSent0Data_Return;
    
    /* initialization with random value */
    {
        HwTq9Meas_Srv_GtmGetSent0Data_Return = _main_gen_init_g6();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Srv_HwTq9Offs_SetRamBlockStatus_Return(void)
{
    extern __PST__UINT8 HwTq9Meas_Srv_HwTq9Offs_SetRamBlockStatus_Return;
    
    /* initialization with random value */
    {
        HwTq9Meas_Srv_HwTq9Offs_SetRamBlockStatus_Return = _main_gen_init_g6();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Srv_SetNtcSts_Return(void)
{
    extern __PST__UINT8 HwTq9Meas_Srv_SetNtcSts_Return;
    
    /* initialization with random value */
    {
        HwTq9Meas_Srv_SetNtcSts_Return = _main_gen_init_g6();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Srv_SetNtcStsAndSnpshtData_Return(void)
{
    extern __PST__UINT8 HwTq9Meas_Srv_SetNtcStsAndSnpshtData_Return;
    
    /* initialization with random value */
    {
        HwTq9Meas_Srv_SetNtcStsAndSnpshtData_Return = _main_gen_init_g6();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_RequestResultPtr(void)
{
    extern __PST__UINT8 HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_RequestResultPtr;
    
    /* initialization with random value */
    {
        HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_RequestResultPtr = _main_gen_init_g6();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_Return(void)
{
    extern __PST__UINT8 HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_Return;
    
    /* initialization with random value */
    {
        HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_Return = _main_gen_init_g6();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Cli_HwTq9MeasHwTq9ReadTrim_HwTqReadTrimData(void)
{
    extern __PST__FLOAT32 HwTq9Meas_Cli_HwTq9MeasHwTq9ReadTrim_HwTqReadTrimData;
    
    /* initialization with random value */
    {
        HwTq9Meas_Cli_HwTq9MeasHwTq9ReadTrim_HwTqReadTrimData = _main_gen_init_g10();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Cli_HwTq9MeasHwTq9TrimPrfmdSts_HwTqOffsTrimPrfmdStsData(void)
{
    extern __PST__UINT8 HwTq9Meas_Cli_HwTq9MeasHwTq9TrimPrfmdSts_HwTqOffsTrimPrfmdStsData;
    
    /* initialization with random value */
    {
        HwTq9Meas_Cli_HwTq9MeasHwTq9TrimPrfmdSts_HwTqOffsTrimPrfmdStsData = _main_gen_init_g6();
    }
}

static void _main_gen_init_sym_HwTq9Meas_Cli_HwTq9MeasHwTq9WrTrim_HwTqWrOffsTrimData(void)
{
    extern __PST__FLOAT32 HwTq9Meas_Cli_HwTq9MeasHwTq9WrTrim_HwTqWrOffsTrimData;
    
    /* initialization with random value */
    {
        HwTq9Meas_Cli_HwTq9MeasHwTq9WrTrim_HwTqWrOffsTrimData = _main_gen_init_g10();
    }
}


/* Definition of functions */


/* Extern init */

void _extern_init(void)
{
    /* Initialization of extern variables */

    /* init for variable HwTq9Meas_Ip_HwTq9Polarity */
    _main_gen_init_sym_HwTq9Meas_Ip_HwTq9Polarity();
    
    /* init for variable HwTq9Meas_Op_HwTq9 : useless (never read) */

    /* init for variable HwTq9Meas_Op_HwTq9Qlfr : useless (never read) */

    /* init for variable HwTq9Meas_Op_HwTq9RollgCntr : useless (never read) */

    /* init for variable HwTq9Meas_Pim_HwTq9Offs */
    _main_gen_init_sym_HwTq9Meas_Pim_HwTq9Offs();
    
    /* init for variable HwTq9Meas_Pim_HwTq9DataPlsHiLim */
    _main_gen_init_sym_HwTq9Meas_Pim_HwTq9DataPlsHiLim();
    
    /* init for variable HwTq9Meas_Pim_HwTq9DataPlsLoLim */
    _main_gen_init_sym_HwTq9Meas_Pim_HwTq9DataPlsLoLim();
    
    /* init for variable HwTq9Meas_Pim_HwTq9PrevHwTq */
    _main_gen_init_sym_HwTq9Meas_Pim_HwTq9PrevHwTq();
    
    /* init for variable HwTq9Meas_Pim_HwTq9RawDataBuf */
    _main_gen_init_sym_HwTq9Meas_Pim_HwTq9RawDataBuf();
    
    /* init for variable HwTq9Meas_Pim_HwTq9RollgCntrPrev */
    _main_gen_init_sym_HwTq9Meas_Pim_HwTq9RollgCntrPrev();
    
    /* init for variable HwTq9Meas_Pim_HwTq9SyncPlsHiLim */
    _main_gen_init_sym_HwTq9Meas_Pim_HwTq9SyncPlsHiLim();
    
    /* init for variable HwTq9Meas_Pim_HwTq9SyncPlsLoLim */
    _main_gen_init_sym_HwTq9Meas_Pim_HwTq9SyncPlsLoLim();
    
    /* init for variable HwTq9Meas_Pim_HwTq9TiStamp */
    _main_gen_init_sym_HwTq9Meas_Pim_HwTq9TiStamp();
    
    /* init for variable HwTq9Meas_Pim_HwTq9TiStampPrev */
    _main_gen_init_sym_HwTq9Meas_Pim_HwTq9TiStampPrev();
    
    /* init for variable HwTq9Meas_Srv_GetNtcQlfrSts_NtcNr : useless (never read) */

    /* init for variable HwTq9Meas_Srv_GetNtcQlfrSts_NtcQlfr */
    _main_gen_init_sym_HwTq9Meas_Srv_GetNtcQlfrSts_NtcQlfr();
    
    /* init for variable HwTq9Meas_Srv_GetNtcQlfrSts_Return */
    _main_gen_init_sym_HwTq9Meas_Srv_GetNtcQlfrSts_Return();
    
    /* init for variable HwTq9Meas_Srv_GtmGetSent0Data_BufStrtAdr */
    _main_gen_init_sym_HwTq9Meas_Srv_GtmGetSent0Data_BufStrtAdr();
    
    /* init for variable HwTq9Meas_Srv_GtmGetSent0Data_Return */
    _main_gen_init_sym_HwTq9Meas_Srv_GtmGetSent0Data_Return();
    
    /* init for variable HwTq9Meas_Srv_HwTq9Offs_SetRamBlockStatus_BlockChanged : useless (never read) */

    /* init for variable HwTq9Meas_Srv_HwTq9Offs_SetRamBlockStatus_Return */
    _main_gen_init_sym_HwTq9Meas_Srv_HwTq9Offs_SetRamBlockStatus_Return();
    
    /* init for variable HwTq9Meas_Srv_SetNtcSts_NtcNr : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcSts_NtcStInfo : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcSts_NtcSts : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcSts_DebStep : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcSts_Return */
    _main_gen_init_sym_HwTq9Meas_Srv_SetNtcSts_Return();
    
    /* init for variable HwTq9Meas_Srv_SetNtcStsAndSnpshtData_NtcNr : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcStsAndSnpshtData_NtcStInfo : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcStsAndSnpshtData_NtcSts : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcStsAndSnpshtData_DebStep : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0 : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1 : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2 : useless (never read) */

    /* init for variable HwTq9Meas_Srv_SetNtcStsAndSnpshtData_Return */
    _main_gen_init_sym_HwTq9Meas_Srv_SetNtcStsAndSnpshtData_Return();
    
    /* init for variable HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_RequestResultPtr */
    _main_gen_init_sym_HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_RequestResultPtr();
    
    /* init for variable HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_Return */
    _main_gen_init_sym_HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_Return();
    
    /* init for variable HwTq9Meas_Cli_HwTq9MeasHwTq9ReadTrim_HwTqReadTrimData */
    _main_gen_init_sym_HwTq9Meas_Cli_HwTq9MeasHwTq9ReadTrim_HwTqReadTrimData();
    
    /* init for variable HwTq9Meas_Cli_HwTq9MeasHwTq9TrimPrfmdSts_HwTqOffsTrimPrfmdStsData */
    _main_gen_init_sym_HwTq9Meas_Cli_HwTq9MeasHwTq9TrimPrfmdSts_HwTqOffsTrimPrfmdStsData();
    
    /* init for variable HwTq9Meas_Cli_HwTq9MeasHwTq9WrTrim_HwTqWrOffsTrimData */
    _main_gen_init_sym_HwTq9Meas_Cli_HwTq9MeasHwTq9WrTrim_HwTqWrOffsTrimData();
    
}
