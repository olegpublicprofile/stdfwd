#include "tests/tuple/tuple_full.hpp"

#include "tests/tuple/tuple_fwd.hpp"

#include <tuple>

//------------------------------------------------------------------------------

namespace tuple_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_TUPLE
	std::tuple<int, char> tuple = testObj.getTuple();
	(void)tuple;
	#endif
}

//------------------------------------------------------------------------------

}
