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

/* own headers */

/*****************************************************************************/
/* helper macros */

/* exported variables */

/* exported functions */
/**
 * @Fn - GPIO_vInit
 *
 * @Brief - Interface that enable the clocks and initialize all the ports of the
 * 			microcontroller with the parameters defined on the macros
 * 			GPIO_PORTx_CONFIG_TABLE_cfg, where x = {A,B,C,D,E,H}.
 *
 * @Return - None
 *
 * @Note - This interface is necessary to call it after the reset of the
 * 		   microcontroller.
 *
 */
void GPIO_vInit(void);

/**
 * @Fn -
 *
 * @Brief -
 *
 * @Param[in] -
 * @Param[out] -
 *
 * @Return -
 *
 * @Note -
 *
 */
void GPIO_u8SetPinState(void);

/**
 * @Fn -
 *
 * @Brief -
 *
 * @Param[in] -
 * @Param[out] -
 *
 * @Return -
 *
 * @Note -
 *
 */
void GPIO_u8GetPinState(void);

/**
 * @Fn -
 *
 * @Brief -
 *
 * @Param[in] -
 * @Param[out] -
 *
 * @Return -
 *
 * @Note -
 *
 */
void GPIO_pstGetPinConfig(void);

/**
 * @Fn -
 *
 * @Brief -
 *
 * @Param[in] -
 * @Param[out] -
 *
 * @Return -
 *
 * @Note -
 *
 */
void GPIO_u8SetPortState(void);

/**
 * @Fn -
 *
 * @Brief -
 *
 * @Param[in] -
 * @Param[out] -
 *
 * @Return -
 *
 * @Note -
 *
 */
void GPIO_u8GetPortState(void);

/**
 * @Fn -
 *
 * @Brief -
 *
 * @Param[in] -
 * @Param[out] -
 *
 * @Return -
 *
 * @Note -
 *
 */
void GPIO_pstGetPortConfig(void);

#endif /* GPIO_H_ */
