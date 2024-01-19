/**
 * Copyright © 2024 
 *
 * @file    GPIO.c
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
/* system headers */
#include "PLATFORM_TYPES_def.h"
#include "STD_VALUES_def.h"
#include "ASSERT_def.h"
#include "ASSERT.h"

/* used headers */
#ifdef _SWDEVELOPMENT_
#include "VMEMORY.h"
#endif

/* own headers */
#include "GPIO_cfg.h"
#include "GPIO_def.h"
#include "GPIO.h"

/*[EXPORTED]****************************************************************************/

/* public_variables */

/*[INTERNAL]****************************************************************************/

/* internal__pre-processor macros */

/* internal__types */
typedef struct
{
	uint8 u8PinNumber;
	uint8 u8PinMode;
	uint8 u8PinSpeed;
	uint8 u8PinAF;
}GPIO_s_tstPinConfig;

typedef struct
{
	uint8 u8Port;
	GPIO_s_tstPinConfig astPinConfig[GPIO_enTotalOfPins];
}GPIO_s_tstPortConfig;

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
}GPIO_s_tstRegisters;

/* private__variables */
static GPIO_s_tstPortConfig GPIO_s_astPortConfig[GPIO_enTotalOfPorts] = GPIO_PORTS_CONFIG_TABLE_cfg;
static void* GPIO_s_apvPortAddress[GPIO_enTotalOfPorts] = GPIO_PORTS_ADDRESSES_TABLE_cfg;
static GPIO_s_tstRegisters* GPIO_s_pstPort = (GPIO_s_tstRegisters*)NULL;

/* private__functions */

/* public_functions */
<<<<<<< HEAD
void GPIO_vInit(void)
{
	uint8 u8PortIndex;
	uint8 u8PinIndex;

	for(u8PortIndex = (uint8)STD_nZERO; u8PortIndex < (uint8)GPIO_enTotalOfPorts; u8PortIndex++)
	{
		ASSERT((uint8)(GPIO_s_apvPortAddress[u8PortIndex] != (void*)NULL), (sint8)ASSERT_nNULL_POINTER);
		ASSERT((uint8)(GPIO_s_astPortConfig[u8PortIndex].u8Port < (uint8)GPIO_enTotalOfPorts), (sint8)ASSERT_nINVALID_CONFIG);

		for(u8PinIndex = (uint8)STD_nZERO; u8PinIndex < (uint8)GPIO_enTotalOfPins; u8PinIndex++)
		{
			ASSERT((GPIO_s_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinNumber < (uint8)GPIO_enTotalOfPins), (sint8)ASSERT_nINVALID_CONFIG);
			ASSERT((GPIO_s_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinMode < (uint8)GPIO_enTotalOfPinModes), (sint8)ASSERT_nINVALID_CONFIG);
			ASSERT((GPIO_s_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinSpeed < (uint8)GPIO_enTotalOfPinSpeeds), (sint8)ASSERT_nINVALID_CONFIG);
			ASSERT((GPIO_s_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinAF < (uint8)GPIO_enTotalOfAlternateFunctions), (sint8)ASSERT_nINVALID_CONFIG);
		}

		GPIO_s_pstPort = (GPIO_s_tstRegisters*)GPIO_s_apvPortAddress[u8PortIndex];
	}
}
=======
>>>>>>> f728814950be2938a4228d9f0e9acc7000568731

/* EOF */
