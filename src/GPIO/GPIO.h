/**
 * Copyright © 2024 
 *
 * @file    GPIO.h
 * @note
 *        ______________      
 *        Eduardo Heredia Gonzalez
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
void GPIO_vInit(void);
void GPIO_u8SetPinState(void);
void GPIO_u8GetPinState(void);
void GPIO_pstGetPinConfig(void);
void GPIO_u8SetPortState(void);
void GPIO_u8GetPortState(void);
void GPIO_pstGetPortConfig(void);

#endif /* GPIO_H_ */
