/**
 * Copyright © 2023 
 *
 * @file    VMEMORY.h
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   VMEMORY 
 * @version No oficial
 *     
 */

#ifndef VMEMORY_H_
#define VMEMORY_H_

/* system headers */

/* own headers */
#include "VMEMORY_def.h"

/*****************************************************************************/
/* helper macros */

/* exported variables */
extern uint32 VMEMORY_u32ClkCntlReg;
extern uint32 VMEMORY_u32PsPwrDwnClrReg;
extern VMEMORY_tstControlStatusRegisters VMEMORY_stControlStatus;
extern VMEMORY_tstPortRegisters VMEMORY_astPort[VMEMORY_nTOTAL_OF_PORTS];

/* exported functions */

#endif /* VMEMORY_H_ */
