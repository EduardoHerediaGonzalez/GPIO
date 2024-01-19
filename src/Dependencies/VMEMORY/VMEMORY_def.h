/**
 * Copyright © 2024
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

/* exported macros */
#define VMEMORY_nTOTAL_OF_PORTS	(6U)

/* exported types */
typedef struct
{
	uint32 MODER;	/* Mode reg */
	uint32 OTYPER;	/* Output type reg */
	uint32 OSPEEDR;	/* Output speed reg */
	uint32 PUPDR;	/* Pull-up/Pull-down reg */
	uint32 IDR;	/* Input data reg */
	uint32 ODR;	/* Output data reg */
	uint32 BSRR;	/* Bit set/reset reg */
	uint32 LCKR;	/* Configuration lock reg */
	uint32 AFRL;	/* Alternate function low reg */
	uint32 AFRH;	/* Alternate function high reg */
}VMEMORY_tstGPIORegisters;

#endif /* VMEMORY_def_H_ */
