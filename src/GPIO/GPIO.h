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
