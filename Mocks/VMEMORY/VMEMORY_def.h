/**
 * Copyright © 2023 
 *
 * @file    VMEMORY_def.h
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   VMEMORY_def 
 * @version No oficial
 *     
 */

#ifndef VMEMORY_def_H_
#define VMEMORY_def_H_

/* system headers */
#include "PLATFORM_TYPES_def.h"

/* exported macros */

/* exported types */
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
}VMEMORY_tstControlStatusRegisters;

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
}VMEMORY_tstPortRegisters;

#endif /* VMEMORY_def_H_ */
