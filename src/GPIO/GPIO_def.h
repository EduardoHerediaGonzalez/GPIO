/**
 * Copyright © 2023 
 *
 * @file    GPIO_def.h
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   GPIO_def 
 * @version No oficial
 *     
 */

#ifndef GPIO_def_H_
#define GPIO_def_H_

/* system headers */

/* exported macros */

/* exported types */
typedef enum
{
	GPIO_enPortA = 0,
	GPIO_enPortB,
	GPIO_enPortC,
	GPIO_enPortD,
	GPIO_enPortE,
	GPIO_enPortF,
	GPIO_enPortG,
	GPIO_enPortH,
	GPIO_enTotalOfPorts
}GPIO_tenPorts;

typedef enum
{
	GPIO_enPin0 = 0,
	GPIO_enPin1,
	GPIO_enPin2,
	GPIO_enPin3,
	GPIO_enPin4,
	GPIO_enPin5,
	GPIO_enPin6,
	GPIO_enPin7,
	GPIO_enTotalOfPins
}GPIO_tenPins;

typedef enum
{
	GPIO_enInputPullDown = 0,
	GPIO_enInputPullUp,
	GPIO_enInputPullDisable,
	GPIO_enOutputOpenDrain,
	GPIO_enOutputPushPull,
	GPIO_enTotalOfPinModes
}GPIO_tenIOModes;

#endif /* GPIO_def_H_ */
