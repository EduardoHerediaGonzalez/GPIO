/* system headers */


/* used headers */
#include "vector"
#include "CppUTest/CommandLineTestRunner.h"


/* own headers */



/*[EXPORTED]****************************************************************************/



/* public_variables */



/*[INTERNAL]****************************************************************************/



/* internal__pre-processor macros */


/* internal__types */


/* private__variables */


/* private__functions */


/* public_functions */

int main(int argc, char** argv)
{
	std::vector<const char*> args(argv, argv + argc); // Insert all arguments
	args.push_back("-v"); // Set verbose mode

	return RUN_ALL_TESTS(args.size(), &args[0]);
}


/* EOF */
