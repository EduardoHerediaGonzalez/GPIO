/**
 * Copyright © 2024 
 *
 * @file    GPIO.h
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

#ifndef GPIO_H_
#define GPIO_H_

/* system headers */
#include "PLATFORM_TYPES_def.h"

/* own headers */
#include "GPIO_def.h"

/*****************************************************************************/
/* helper macros */

/* exported variables */

/* exported functions */
/**
 * @Fn - GPIO_vInit
 *
 * @Brief - Interface that enable the clocks and initialize all the ports of the
 * 			microcontroller with the parameters values defined on the macros
 * 			GPIO_PORTx_CONFIG_TABLE_cfg, where x = {A,B,C,D,E,H}.
 *
 * @Return - None
 *
 * @Note - This interface is necessary to call it after the reset of the
 * 		   microcontroller.
 *
 */
extern void GPIO_vInit(void);

/**
 * @Fn - GPIO_u8SetPinState
 *
 * @Brief - Interface that set the state of "u8Pin" of the port "u8Port" of the
 * 			microcontroller with the state "u8State".
 *
 * @Param[in] - u8Port = {[GPIO_enPortA, GPIO_enTotalOfPorts)}.
 * @Param[in] - u8Pin = {[GPIO_enPin0, GPIO_enTotalOfPins)}.
 * @Param[in] - u8State = {STD_nLOW, STD_nHIGH}.
 *
 * @Return = {STD_nUNDEFINED, STD_nDEFINED}.
 *
 * @Note - None
 *
 */
extern uint8 GPIO_u8SetPinState(uint8 u8Port, uint8 u8Pin, uint8 u8State);

/**
 * @Fn - GPIO_u8GetPinState
 *
 * @Brief - Interface that get the state of the "u8Pin" of the port "u8Port" of
 * 			the microcontroller.
 *
 * @Param[in] - u8Port = {[GPIO_enPortA, GPIO_enTotalOfPorts)}.
 * @Param[in] - u8Pin = {[GPIO_enPin0, GPIO_enTotalOfPins)}.
 *
 * @Return = {STD_nLOW, STD_nHIGH, STD_nUNDEFINED}.
 *
 * @Note - None
 *
 */
extern uint8 GPIO_u8GetPinState(uint8 u8Port, uint8 u8Pin);

/**
 * @Fn - GPIO_vSetPinConfig
 *
 * @Brief - This interface set the configuration of the "u8Pin" of the "u8Port"
 * 			of the microcontroller.
 *
 * @Param[in] - u8Port = {[GPIO_enPortA, GPIO_enTotalOfPorts)}.
 * @Param[in/out] - pstPinConfig
 *
 *
 * @Return = {STD_nUNDEFINED, STD_nDEFINED}.
 *
 * @Note - None
 *
 */
extern uint8 GPIO_u8SetPinConfig(uint8 u8Port, GPIO_tstPinConfig *pstPinConfig);

/**
 * @Fn - GPIO_vGetPinConfig
 *
 * @Brief - This interface get the configuration of the "u8Pin" of the "u8Port"
 * 			of the microcontroller.
 *
 * @Param[in] - u8Port = {[GPIO_enPortA, GPIO_enTotalOfPorts)}.
 * @Param[in] - u8Pin = {[GPIO_enPin0, GPIO_enTotalOfPins)}.
 * @Param[in/out] - pstPinConfig
 *
 *
 * @Return = Return the pin configuration throw the pointer parameter
 * 			 "pstPinConfig".
 *
 * @Note - None
 *
 */
extern void GPIO_vGetPinConfig(uint8 u8Port, uint8 u8Pin, GPIO_tstPinConfig *pstPinConfig);

/**
 * @Fn - GPIO_vGetPortConfig
 *
 * @Brief - This interface get the configuration of the "u8Port"
 * 			of the microcontroller.
 *
 * @Param[in] - u8Port = {[GPIO_enPortA, GPIO_enTotalOfPorts)}.
 * @Param[in/out] - pstPortConfig
 *
 * @Return = Return the port configuration throw the pointer parameter
 * 			 "pstPortConfig".
 *
 * @Note - None
 *
 */
extern void GPIO_vGetPortConfig(uint8 u8Port, GPIO_tstPortConfig *pstPortConfig);

/**
 * @Fn - GPIO_u8LockPinConfig
 *
 * @Brief - This interface lock the configuration of the "u8Pin"
 * 			of the "u8Port" of the microcontroller.
 *
 * @Param[in] - u8Port = {[GPIO_enPortA, GPIO_enTotalOfPorts)}.
 * @Param[in] - u8Pin = {[GPIO_enPin0, GPIO_enTotalOfPins)}.
 *
 * @Return = {[STD_nUNLOCK, STD_nLOCK]}.
 *
 * @Note - None
 *
 */
extern uint8 GPIO_u8LockPinConfig(uint8 u8Port, uint8 u8Pin);

/**
 * @Fn - GPIO_u8GetLockPinState
 *
 * @Brief - This interface get the state of the lock pin configuration of the 
 *          "u8Pin" of the "u8Port" of the microcontroller.
 *
 * @Param[in] - u8Port = {[GPIO_enPortA, GPIO_enTotalOfPorts)}.
 * @Param[in] - u8Pin = {[GPIO_enPin0, GPIO_enTotalOfPins)}.
 *
 * @Return = {[STD_nUNLOCK, STD_nLOCK]}.
 *
 * @Note - None
 *
 */
extern uint8 GPIO_u8GetLockPinState(uint8 u8Port, uint8 u8Pin);

#endif /* GPIO_H_ */
