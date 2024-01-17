/**
 * Copyright © 2024 
 *
 * @file    GPIO_cfg.h
 * @note
 *        ______________      
 *        Eduardo Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   GPIO_cfg 
 * @version No oficial
 *     
 */

#ifndef GPIO_cfg_H_
#define GPIO_cfg_H_

/* system headers */

/*****************************************************************************/
/* exported configuration macros */
#define GPIO_nPORTA_BASE_ADDRESS_cfg	(0x40020000U)
#define GPIO_nPORTB_BASE_ADDRESS_cfg	(0x40020400U)
#define GPIO_nPORTC_BASE_ADDRESS_cfg	(0x40020800U)
#define GPIO_nPORTD_BASE_ADDRESS_cfg	(0x40020C00U)
#define GPIO_nPORTE_BASE_ADDRESS_cfg	(0x40021000U)
#define GPIO_nPORTH_BASE_ADDRESS_cfg	(0x40021C00U)

#define GPIO_PORTA_CONFIG_TABLE_cfg	\
{	\
	/* PinNumber, PinMode, PinPullState */	\
	{(uint8)GPIO_enPin0, (uint8)GPIO_enInFloating},	\
	\
}

#endif /* GPIO_cfg_H_ */
