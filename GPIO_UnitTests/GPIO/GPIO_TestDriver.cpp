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
#include "../../src/GPIO/GPIO.c"
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
	FAIL("TEST FAIL");
}

/* EOF */
