/**
 * Copyright © 2023 
 *
 * @file    GPIO_cfg.h
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   GPIO_cfg 
 * @version No oficial
 *     
 */

#ifndef GPIO_cfg_H_
#define GPIO_cfg_H_

/* system headers */
#include "PLATFORM_TYPES_def.h"

/*****************************************************************************/
/* exported configuration macros */
#define GPIO_nBASE_ADDRESS_cfg			(0xFFF7BC00)
#define GPIO_nBASE_ADDRESS_PORTA_cfg	(0xFFF7BC34)
#define GPIO_nBASE_ADDRESS_PORTB_cfg	(0xFFF7BC54)
#define GPIO_nBASE_ADDRESS_PORTC_cfg	(0xFFF7BC74)
#define GPIO_nBASE_ADDRESS_PORTD_cfg	(0xFFF7BC94)
#define GPIO_nBASE_ADDRESS_PORTE_cfg	(0xFFF7BCB4)
#define GPIO_nBASE_ADDRESS_PORTF_cfg	(0xFFF7BCD4)
#define GPIO_nBASE_ADDRESS_PORTG_cfg	(0xFFF7BCF4)
#define GPIO_nBASE_ADDRESS_PORTH_cfg	(0xFFF7BD14)

/** @brief     Table that contain the base address where start the registers
 * 		       that configure each port of the microcontroller.
 */
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

/** @brief     Table that contain the configuration of all the pins of the
 * 			   PORTA.
 *             When u8PinMode is configure as an input, the value of
 *             u8PinInitState can keep with the default value of "0U".
 *
 *
 *  @param[in] u8PinNumber:     {[GPIO_enPin0, GPIO_enTotalOfPins)}
 *  @param[in] u8PinMode:       {[GPIO_enOutputOpenDrain,
 *  							  GPIO_enTotalOfPinModes)}
 *  @param[in] u8PinInitState:  {STD_VALUES_LOW, STD_VALUES_HIGH}
 */
#if GPIO_nBASE_ADDRESS_PORTA_cfg != 0
#define  GPIO_PORTA_CONFIG_TABLE_cfg \
{   \
    /* u8PinNumber,         u8PinMode,                      u8PinInitState*/ \
    {(uint8)GPIO_enPin0,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin1,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin2,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin3,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin4,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin5,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin6,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin7,    (uint8)GPIO_enInputPullDown,    (uint8)0U}	\
}
#endif

/** @brief     Table that contain the configuration of all the pins of the
 * 			   PORTB.
 *             When u8PinMode is configure as an input, the value of
 *             u8PinInitState can keep with the default value of "0U".
 *
 *
 *  @param[in] u8PinNumber:     {[GPIO_enPin0, GPIO_enTotalOfPins)}
 *  @param[in] u8PinMode:       {[GPIO_enOutputOpenDrain,
 *  							  GPIO_enTotalOfPinModes)}
 *  @param[in] u8PinInitState:  {STD_VALUES_LOW, STD_VALUES_HIGH}
 */
#if GPIO_nBASE_ADDRESS_PORTB_cfg != 0
#define  GPIO_PORTB_CONFIG_TABLE_cfg \
{   \
    /* u8PinNumber,         u8PinMode,                      u8PinInitState*/ \
    {(uint8)GPIO_enPin0,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin1,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin2,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin3,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin4,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin5,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin6,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin7,    (uint8)GPIO_enInputPullDown,    (uint8)0U}	\
}
#endif

/** @brief     Table that contain the configuration of all the pins of the
 * 			   PORTC.
 *             When u8PinMode is configure as an input, the value of
 *             u8PinInitState can keep with the default value of "0U".
 *
 *
 *  @param[in] u8PinNumber:     {[GPIO_enPin0, GPIO_enTotalOfPins)}
 *  @param[in] u8PinMode:       {[GPIO_enOutputOpenDrain,
 *  							  GPIO_enTotalOfPinModes)}
 *  @param[in] u8PinInitState:  {STD_VALUES_LOW, STD_VALUES_HIGH}
 */
#if GPIO_nBASE_ADDRESS_PORTC_cfg != 0
#define  GPIO_PORTC_CONFIG_TABLE_cfg \
{   \
    /* u8PinNumber,         u8PinMode,                      u8PinInitState*/ \
    {(uint8)GPIO_enPin0,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin1,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin2,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin3,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin4,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin5,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin6,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin7,    (uint8)GPIO_enInputPullDown,    (uint8)0U}	\
}
#endif

/** @brief     Table that contain the configuration of all the pins of the
 * 			   PORTD.
 *             When u8PinMode is configure as an input, the value of
 *             u8PinInitState can keep with the default value of "0U".
 *
 *
 *  @param[in] u8PinNumber:     {[GPIO_enPin0, GPIO_enTotalOfPins)}
 *  @param[in] u8PinMode:       {[GPIO_enOutputOpenDrain,
 *  							  GPIO_enTotalOfPinModes)}
 *  @param[in] u8PinInitState:  {STD_VALUES_LOW, STD_VALUES_HIGH}
 */
#if GPIO_nBASE_ADDRESS_PORTD_cfg != 0
#define  GPIO_PORTD_CONFIG_TABLE_cfg \
{   \
    /* u8PinNumber,         u8PinMode,                      u8PinInitState*/ \
    {(uint8)GPIO_enPin0,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin1,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin2,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin3,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin4,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin5,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin6,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin7,    (uint8)GPIO_enInputPullDown,    (uint8)0U}	\
}
#endif

/** @brief     Table that contain the configuration of all the pins of the
 * 			   PORTE.
 *             When u8PinMode is configure as an input, the value of
 *             u8PinInitState can keep with the default value of "0U".
 *
 *
 *  @param[in] u8PinNumber:     {[GPIO_enPin0, GPIO_enTotalOfPins)}
 *  @param[in] u8PinMode:       {[GPIO_enOutputOpenDrain,
 *  							  GPIO_enTotalOfPinModes)}
 *  @param[in] u8PinInitState:  {STD_VALUES_LOW, STD_VALUES_HIGH}
 */
#if GPIO_nBASE_ADDRESS_PORTE_cfg != 0
#define  GPIO_PORTE_CONFIG_TABLE_cfg \
{	\
    /* u8PinNumber,         u8PinMode,                      u8PinInitState*/ \
	{(uint8)GPIO_enPin0,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin1,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin2,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin3,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin4,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin5,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin6,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin7,    (uint8)GPIO_enInputPullDown,    (uint8)0U}	\
}
#endif

/** @brief     Table that contain the configuration of all the pins of the
 * 			   PORTF.
 *             When u8PinMode is configure as an input, the value of
 *             u8PinInitState can keep with the default value of "0U".
 *
 *
 *  @param[in] u8PinNumber:     {[GPIO_enPin0, GPIO_enTotalOfPins)}
 *  @param[in] u8PinMode:       {[GPIO_enOutputOpenDrain,
 *  							  GPIO_enTotalOfPinModes)}
 *  @param[in] u8PinInitState:  {STD_VALUES_LOW, STD_VALUES_HIGH}
 */
#if GPIO_nBASE_ADDRESS_PORTF_cfg != 0
#define  GPIO_PORTF_CONFIG_TABLE_cfg \
{   \
    /* u8PinNumber,         u8PinMode,                      u8PinInitState*/ \
	{(uint8)GPIO_enPin0,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin1,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin2,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin3,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin4,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin5,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin6,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin7,    (uint8)GPIO_enInputPullDown,    (uint8)0U}	\
}
#endif

/** @brief     Table that contain the configuration of all the pins of the
 * 			   PORTG.
 *             When u8PinMode is configure as an input, the value of
 *             u8PinInitState can keep with the default value of "0U".
 *
 *
 *  @param[in] u8PinNumber:     {[GPIO_enPin0, GPIO_enTotalOfPins)}
 *  @param[in] u8PinMode:       {[GPIO_enOutputOpenDrain,
 *  							  GPIO_enTotalOfPinModes)}
 *  @param[in] u8PinInitState:  {STD_VALUES_LOW, STD_VALUES_HIGH}
 */
#if GPIO_nBASE_ADDRESS_PORTG_cfg != 0
#define  GPIO_PORTG_CONFIG_TABLE_cfg \
{   \
    /* u8PinNumber,         u8PinMode,                      u8PinInitState*/ \
	{(uint8)GPIO_enPin0,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin1,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin2,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin3,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin4,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin5,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin6,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin7,    (uint8)GPIO_enInputPullDown,    (uint8)0U}	\
}
#endif

/** @brief     Table that contain the configuration of all the pins of the
 * 			   PORTH.
 *             When u8PinMode is configure as an input, the value of
 *             u8PinInitState can keep with the default value of "0U".
 *
 *
 *  @param[in] u8PinNumber:     {[GPIO_enPin0, GPIO_enTotalOfPins)}
 *  @param[in] u8PinMode:       {[GPIO_enOutputOpenDrain,
 *  							  GPIO_enTotalOfPinModes)}
 *  @param[in] u8PinInitState:  {STD_VALUES_LOW, STD_VALUES_HIGH}
 */
#if GPIO_nBASE_ADDRESS_PORTH_cfg != 0
#define  GPIO_PORTH_CONFIG_TABLE_cfg \
{   \
    /* u8PinNumber,         u8PinMode,                      u8PinInitState*/ \
    {(uint8)GPIO_enPin0,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin1,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin2,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin3,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin4,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin5,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin6,    (uint8)GPIO_enInputPullDown,    (uint8)0U}, \
    {(uint8)GPIO_enPin7,    (uint8)GPIO_enInputPullDown,    (uint8)0U}	\
}
#endif

#endif /* GPIO_cfg_H_ */
