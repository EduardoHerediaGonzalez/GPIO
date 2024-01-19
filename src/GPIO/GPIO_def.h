/**
 * Copyright © 2024 
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
	GPIO_enPin8,
	GPIO_enPin9,
	GPIO_enPin10,
	GPIO_enPin11,
	GPIO_enPin12,
	GPIO_enPin13,
	GPIO_enPin14,
	GPIO_enPin15,
	GPIO_enTotalOfPins
}GPIO_tenPins;

typedef enum
{
	GPIO_enInFloating = 0,
	GPIO_enInPU,
	GPIO_enInPD,
	GPIO_enOutPP,
	GPIO_enOutPP_PU,
	GPIO_enOutPP_PD,
	GPIO_enOutOD,
	GPIO_enOutOD_PU,
	GPIO_enOutOD_PD,
	GPIO_enAF_PP,
	GPIO_enAF_PP_PU,
	GPIO_enAF_PP_PD,
	GPIO_enAF_OD,
	GPIO_enAF_OD_PU,
	GPIO_enAF_OD_PD,
	GIPO_enAnalog,
	GPIO_enTotalOfPinModes
}GPIO_tenPinModes;

typedef enum
{
	GPIO_enLowSpeed = 0,
	GPIO_enMediumSpeed,
	GPIO_enHighSpeed,
	GPIO_enVeryHighSpeed,
	GPIO_enTotalOfPinSpeeds
}GPIO_tenPinSpeeds;

typedef enum
{
	GPIO_enAF0 = 0,
	GPIO_enAF1,
	GPIO_enAF2,
	GPIO_enAF3,
	GPIO_enAF4,
	GPIO_enAF5,
	GPIO_enAF6,
	GPIO_enAF7,
	GPIO_enAF8,
	GPIO_enAF9,
	GPIO_enAF10,
	GPIO_enAF11,
	GPIO_enAF12,
	GPIO_enAF13,
	GPIO_enAF14,
	GPIO_enAF15,
	GPIO_enTotalOfAlternateFunctions
}GPIO_tenAlternateFunctions;

#endif /* GPIO_def_H_ */
