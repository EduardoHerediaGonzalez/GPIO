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
#define GPIO_TEST_s_nFIRST_BIT_MASK	(0x00000001U)

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
	uint32 u32ActualResult = (uint32)STD_nLOW;
	uint32 u32ExpectedResult = (uint32)STD_nHIGH;

	GPIO_vInit();

	u32ActualResult = (uint32)((*GPIO_s_pu32ClkCntlReg >> GPIO_s_nPENA_BIT) && GPIO_TEST_s_nFIRST_BIT_MASK);

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32ActualResult);
}

/**
 * Test to check that function clear the bit PS[16] of the peripheral power-down
 * clear register 2 (PSPWRDWNCLR2).
 */
TEST(GPIO_InitFunction, Test_2)
{
	uint32 u32ActualResult = (uint32)STD_nHIGH;
	uint32 u32ExpectedResult = (uint32)STD_nLOW;

	GPIO_vInit();

	u32ActualResult = (uint32)((*GPIO_s_pu32PwrDwnClr2Reg >> GPIO_s_nPS16_BIT) && GPIO_TEST_s_nFIRST_BIT_MASK);

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32ActualResult);
}

/**
 * Test to check that function set the RESET bit of the global control register
 * (GIOGCR0).
 */
TEST(GPIO_InitFunction, Test_3)
{
	uint32 u32ActualResult = (uint32)STD_nLOW;
	uint32 u32ExpectedResult = (uint32)STD_nHIGH;

	GPIO_vInit();

	u32ActualResult = (uint32)(GPIO_s_pstControlStatusBaseAddress->GIOGCR0);

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32ActualResult);
}

/* EOF */
