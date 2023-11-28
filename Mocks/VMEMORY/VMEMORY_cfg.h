/**
 * Copyright © 2023 
 *
 * @file    VMEMORY_cfg.h
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   VMEMORY_cfg 
 * @version No oficial
 *     
 */

#ifndef VMEMORY_cfg_H_
#define VMEMORY_cfg_H_

/* system headers */

/*****************************************************************************/
/* exported configuration macros */
#define GPIO_nBASE_ADDRESS_cfg			(&VMEMORY_stControlStatus)
#define GPIO_nBASE_ADDRESS_PORTA_cfg	(&VMEMORY_astPort[0])
#define GPIO_nBASE_ADDRESS_PORTB_cfg	(&VMEMORY_astPort[1])
#define GPIO_nBASE_ADDRESS_PORTC_cfg	(&VMEMORY_astPort[2])
#define GPIO_nBASE_ADDRESS_PORTD_cfg	(&VMEMORY_astPort[3])
#define GPIO_nBASE_ADDRESS_PORTE_cfg	(&VMEMORY_astPort[4])
#define GPIO_nBASE_ADDRESS_PORTF_cfg	(&VMEMORY_astPort[5])
#define GPIO_nBASE_ADDRESS_PORTG_cfg	(&VMEMORY_astPort[6])
#define GPIO_nBASE_ADDRESS_PORTH_cfg	(&VMEMORY_astPort[7])

#define GPIO_PORTS_ADDRESSES_TABLE_cfg	\
{	\
	GPIO_nBASE_ADDRESS_PORTA_cfg,	\
	GPIO_nBASE_ADDRESS_PORTB_cfg,	\
	GPIO_nBASE_ADDRESS_PORTC_cfg,	\
	GPIO_nBASE_ADDRESS_PORTD_cfg,	\
	GPIO_nBASE_ADDRESS_PORTE_cfg,	\
	GPIO_nBASE_ADDRESS_PORTF_cfg,	\
	GPIO_nBASE_ADDRESS_PORTG_cfg,	\
	GPIO_nBASE_ADDRESS_PORTH_cfg	\
}

#endif /* VMEMORY_cfg_H_ */
