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


/* public_functions */
TEST_GROUP(GPIO_InitFunction)
{
    void setup()
    {
    	/* Code intended for Test Group initializing */
    }
    void teardown()
    {
    	/* Code intended for Test Group destruction */
    }
};

/**
 *	Test to check that function set the bit PENA of the clock control register
 *	(CLKCNTL).
 */
TEST(GPIO_InitFunction, Test_1)
{
	uint8 u8ActualResult = (uint8)STD_nLOW;
	uint8 u8ExpectedResult = (uint8)STD_nHIGH;

	GPIO_vInit();

	u8ActualResult = (uint8)((*GPIO_s_pu32ClkCntlReg & (STD_nHIGH << GPIO_s_nPENA_BIT)) >> GPIO_s_nPENA_BIT);

	BYTES_EQUAL(u8ExpectedResult, u8ActualResult);
}

/**
 * Test to check that function clear the bit PS[16] of the peripheral power-down
 * clear register 2 (PSPWRDWNCLR2).
 */
TEST(GPIO_InitFunction, Test_2)
{
	uint8 u8ActualResult = (uint8)STD_nHIGH;
	uint8 u8ExpectedResult = (uint8)STD_nLOW;

	GPIO_vInit();

	u8ActualResult = (uint8)((*GPIO_s_pu32PwrDwnClr2Reg & (STD_nHIGH << GPIO_s_nPS16_BIT)) >> GPIO_s_nPS16_BIT);

	BYTES_EQUAL(u8ExpectedResult, u8ActualResult);
}

/**
 * Test to check that function set the RESET bit of the global control register
 * (GIOGCR0).
 */
TEST(GPIO_InitFunction, Test_3)
{
	uint8 u8ActualResult = (uint8)STD_nLOW;
	uint8 u8ExpectedResult = (uint8)STD_nHIGH;

	GPIO_vInit();

	u8ActualResult = (uint8)((GPIO_s_pstControlStatusBaseAddress->GIOGCR0 & (STD_nHIGH << GPIO_s_nRESET_BIT)) >> GPIO_s_nRESET_BIT);

	BYTES_EQUAL(u8ExpectedResult, u8ActualResult);
}

/* EOF */
