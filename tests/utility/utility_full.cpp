#include "tests/utility/utility_fwd.hpp"

#include "tests/utility/utility_full.hpp"

#include <utility>

//------------------------------------------------------------------------------

namespace utility_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	std::pair< int, int > pair = testObj.getPair();
	(void)pair;

#ifdef STDFWD_IS_INTEGER_SEQUENCE
	std::integer_sequence< int, 1,2,3 > integer_sequence =
		testObj.getIntegerSequence();
	(void)integer_sequence;
#endif
}

//------------------------------------------------------------------------------

}
