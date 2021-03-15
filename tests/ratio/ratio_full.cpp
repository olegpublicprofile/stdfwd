#include "tests/ratio/ratio_full.hpp"

#include "tests/ratio/ratio_fwd.hpp"

#ifdef STDFWD_IS_CPP11
#include <ratio>
#endif

//------------------------------------------------------------------------------

namespace ratio_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_RATIO
	auto ratio = testObj.getRatio();
	(void)ratio;
	#endif

	#ifdef STDFWD_IS_RATIO_EQUAL
	auto ratio_equal = testObj.getRatioEqual();
	(void)ratio_equal;
	#endif

	#ifdef STDFWD_IS_RATIO_NOT_EQUAL
	auto ratio_not_equal = testObj.getRatioNotEqual();
	(void)ratio_not_equal;
	#endif

	#ifdef STDFWD_IS_RATIO_LESS
	auto ratio_less = testObj.getRatioLess();
	(void)ratio_less;
	#endif

	#ifdef STDFWD_IS_RATIO_LESS_EQUAL
	auto ratio_less_equal = testObj.getRatioLessEqual();
	(void)ratio_less_equal;
	#endif

	#ifdef STDFWD_IS_RATIO_GREATER
	auto ratio_greater = testObj.getRatioRreater();
	(void)ratio_greater;
	#endif

	#ifdef STDFWD_IS_RATIO_GREATER_EQUAL
	auto ratio_greater_equal = testObj.getRatioRreaterEqual();
	(void)ratio_greater_equal;
	#endif
}

//------------------------------------------------------------------------------

}
