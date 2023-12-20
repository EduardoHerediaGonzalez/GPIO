/**
 * Copyright © 2023 
 *
 * @file    GPIO.c
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   GPIO 
 * @version No oficial
 *     
 */
/* system headers */

/* used headers */
#include "PLATFORM_TYPES_def.h"
#include "STD_VALUES_def.h"
#if defined(_SWDEVELOPMENT_) || defined(_UNITTESTS_)
#include "VMEMORY.h"
#endif

/* own headers */
#include "GPIO_cfg.h"
#include "GPIO_def.h"
#include "GPIO.h"

/*[EXPORTED]****************************************************************************/

/* public_variables */

/*[INTERNAL]****************************************************************************/

/* internal__pre-processor macros */
#define GPIO_s_nPENA_BIT	(8U)
#define GPIO_s_nRESET_BIT	(0U)
#define GPIO_s_nPS16_BIT	(16U)
#if defined(_SWDEVELOPMENT_) || defined(_UNITTESTS_)
#define GPIO_s_nCLKCNTL_REG	(&VMEMORY_u32ClkCntlReg)
#define GPIO_s_nPSPWRDWNCLR2_REG	(&VMEMORY_u32PsPwrDwnClrReg)
#else
#define GPIO_s_nCLKCNTL_REG	(0xFFFFFFD0U)
#define GPIO_s_nPSPWRDWNCLR2_REG	(0xFFF780A8U)
#endif

/* internal__types */
typedef struct
{
	uint32 GIOGCR0;	/* Global control reg */
	uint32 Padding;	/* Unreserved */
	uint32 GIOINTDET;	/* Interrupt detect reg */
	uint32 GIOPOL;	/* Interrupt polarity reg */
	uint32 GIOENASET;	/* Interrupt enable set reg */
	uint32 GIOENACLR;	/* Interrupt enable clear reg */
	uint32 GIOLVLSET;	/* Interrup priority set reg */
	uint32 GIOLVLCLR;	/* Interrup priority clear reg */
	uint32 GIOFLG;	/* Interrupt flag reg */
	uint32 GIOOFF1;	/* Offset 1 reg */
	uint32 GIOOFF2;	/* Offset 2 reg */
	uint32 GIOEMU1;	/* Emulation 1 reg */
	uint32 GIOEMU2;	/* Emulation 2 reg */
}volatile GPIO_tstControlStatusRegisters;

typedef struct
{
	uint32 GIODIR;	/* Data direction reg */
	uint32 GIODIN;	/* Data input reg */
	uint32 GIODOUT;	/* Data output reg */
	uint32 GIODSET;	/* Data set reg */
	uint32 GIODCLR;	/* Data clear reg */
	uint32 GIOPDR;	/* Open drain reg */
	uint32 GIOPULDIS;	/* Pull disable reg */
	uint32 GIOPSL;	/* Pull select reg */
}volatile GPIO_tstPortRegisters;

/* private__variables */
static GPIO_tstControlStatusRegisters *GPIO_s_pstControlStatusBaseAddress = (GPIO_tstControlStatusRegisters*)GPIO_nBASE_ADDRESS_cfg;
static void *GPIO_s_apstPortBaseAddress[GPIO_enTotalOfPorts] = GPIO_PORTS_ADDRESSES_TABLE_cfg;
static GPIO_tstPortRegisters *GPIO_s_pstPortBaseAddress = (GPIO_tstPortRegisters*)NULL;
static uint32 *GPIO_s_pu32ClkCntlReg = (uint32*)GPIO_s_nCLKCNTL_REG;
static uint32 *GPIO_s_pu32PwrDwnClr2Reg = (uint32*)GPIO_s_nPSPWRDWNCLR2_REG;

/* private__functions */

/* public_functions */
extern void GPIO_vInit(void)
{
	/* Release peripheral reset */
	*GPIO_s_pu32ClkCntlReg |= (uint32)(STD_nHIGH << GPIO_s_nPENA_BIT);

	/* Enable clock to GIO*/
	*GPIO_s_pu32PwrDwnClr2Reg &= (uint32)~(STD_nHIGH << GPIO_s_nPS16_BIT);

	/* Bring GIO out of reset */
	GPIO_s_pstControlStatusBaseAddress->GIOGCR0 |= (uint32)(STD_nHIGH << GPIO_s_nRESET_BIT);
}

/* EOF */
