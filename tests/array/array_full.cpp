#include "tests/array/array_full.hpp"

#include "tests/array/array_fwd.hpp"

#include <array>

//------------------------------------------------------------------------------

namespace array_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_ARRAY
	auto array = testObj.getArray();
	(void)array;
	#endif
}

//------------------------------------------------------------------------------

}
