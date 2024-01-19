/**
 * @file    GPIO_TestDriver.cpp
 *
 * @brief   Código de ensayos para el componente GPIO.
 *
 * @note
 *        ______________
 *        Eduardo
 *        Heredia Gonzalez
 *        Encargado de
 *	      ensayos
 *
 * @version
 * - Eduardo Heredia Gonzalez -- 28/11/2023 -- Actual
 * 	- Versión inicial.
 *
 *
 */


/* system headers */
#include "CppUTest/TestHarness.h"
#include "STD_VALUES_def.h"
extern "C"
{
/* System headers written in C */
#include "ASSERT.c"
}

/* used headers */
extern "C"
{
/* Used headers written in C */
#include "VMEMORY.c"
}

/******************** Start of Code Under Test ********************/
extern "C"
{
#include "GPIO.c"
}
/******************** End of Code Under Test ********************/


/*[EXPORTED]****************************************************************************/

/* public_variables */

/*[INTERNAL]****************************************************************************/

/* internal__pre-processor macros */

/* internal__types */


/* private__variables */


/* private__functions */
void resetComponentStaticVariables(void)
{
	uint8 u8PortIndex;
	uint8 u8PinIndex;
	GPIO_s_tstPortConfig GPIO_astPortConfig[GPIO_enTotalOfPorts] = GPIO_PORTS_CONFIG_TABLE_cfg;
	void* GPIO_apvPortAddress[GPIO_enTotalOfPorts] = GPIO_PORTS_ADDRESSES_TABLE_cfg;

	for(u8PortIndex = (uint8)STD_nZERO; u8PortIndex < (uint8)GPIO_enTotalOfPorts; u8PortIndex++)
	{
		GPIO_s_apvPortAddress[u8PortIndex] = GPIO_apvPortAddress[u8PortIndex];
		GPIO_s_astPortConfig[u8PortIndex].u8Port = GPIO_astPortConfig[u8PortIndex].u8Port;

		for(u8PinIndex = (uint8)STD_nZERO; u8PinIndex < (uint8)GPIO_enTotalOfPins; u8PinIndex++)
		{
			GPIO_s_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinNumber = GPIO_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinNumber;
			GPIO_s_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinMode = GPIO_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinMode;
			GPIO_s_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinSpeed= GPIO_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinSpeed;
			GPIO_s_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinAF = GPIO_astPortConfig[u8PortIndex].astPinConfig[u8PinIndex].u8PinAF;
		}
	}
}

/* public_functions */
TEST_GROUP(GPIO_vInit)
{
    void setup()
    {
    	/* Code intended for Test Group initializing */
    }
    void teardown()
    {
    	/* Code intended for Test Group destruction */
    	ASSERT_vResetAssertVariables();
    	resetComponentStaticVariables();

    }
};

/**
 *	Test to check that function enter to an assert if the port address has an
 *	invalid address.
 */
TEST(GPIO_vInit, Test_1)
{
	sint8 s8ExpectedValue = (sint8)ASSERT_nNULL_POINTER;

	GPIO_s_apvPortAddress[GPIO_enPortC] = (void*)NULL;

	GPIO_vInit();

	SIGNED_BYTES_EQUAL(s8ExpectedValue, ASSERT_s_s8Error);
}

/**
 *	Test to check that function enter to an assert if the port has an
 *	invalid configuration value.
 */
TEST(GPIO_vInit, Test_2)
{
	sint8 s8ExpectedValue = (sint8)ASSERT_nINVALID_CONFIG;

	GPIO_s_astPortConfig[GPIO_enPortC].u8Port = (uint8)GPIO_enTotalOfPorts;

	GPIO_vInit();

	SIGNED_BYTES_EQUAL(s8ExpectedValue, ASSERT_s_s8Error);
}

/**
 *	Test to check that function enter to an assert if the pin number has an
 *	invalid configuration value.
 */
TEST(GPIO_vInit, Test_3)
{
	sint8 s8ExpectedValue = (sint8)ASSERT_nINVALID_CONFIG;

	GPIO_s_astPortConfig[GPIO_enPortC].astPinConfig[GPIO_enPin7].u8PinNumber = (uint8)GPIO_enTotalOfPins;

	GPIO_vInit();

	SIGNED_BYTES_EQUAL(s8ExpectedValue, ASSERT_s_s8Error);
}

/**
 *	Test to check that function enter to an assert if the pin mode has an
 *	invalid configuration value.
 */
TEST(GPIO_vInit, Test_4)
{
	sint8 s8ExpectedValue = (sint8)ASSERT_nINVALID_CONFIG;

	GPIO_s_astPortConfig[GPIO_enPortC].astPinConfig[GPIO_enPin7].u8PinMode = (uint8)GPIO_enTotalOfPinModes;

	GPIO_vInit();

	SIGNED_BYTES_EQUAL(s8ExpectedValue, ASSERT_s_s8Error);
}

/**
 *	Test to check that function enter to an assert if the pin speed has an
 *	invalid configuration value.
 */
TEST(GPIO_vInit, Test_5)
{
	sint8 s8ExpectedValue = (sint8)ASSERT_nINVALID_CONFIG;

	GPIO_s_astPortConfig[GPIO_enPortC].astPinConfig[GPIO_enPin7].u8PinSpeed = (uint8)GPIO_enTotalOfPinSpeeds;

	GPIO_vInit();

	SIGNED_BYTES_EQUAL(s8ExpectedValue, ASSERT_s_s8Error);
}

/**
 *	Test to check that function enter to an assert if the pin alternate
 *	function has an invalid configuration value.
 */
TEST(GPIO_vInit, Test_6)
{
	sint8 s8ExpectedValue = (sint8)ASSERT_nINVALID_CONFIG;

	GPIO_s_astPortConfig[GPIO_enPortC].astPinConfig[GPIO_enPin7].u8PinAF = (uint8)GPIO_enTotalOfAlternateFunctions;

	GPIO_vInit();

	SIGNED_BYTES_EQUAL(s8ExpectedValue, ASSERT_s_s8Error);
}

/* EOF */
