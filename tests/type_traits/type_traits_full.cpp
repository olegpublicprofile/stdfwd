#include "tests/type_traits/type_traits_full.hpp"

#include "tests/type_traits/type_traits_fwd.hpp"

#include <type_traits>

//------------------------------------------------------------------------------

namespace type_traits_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_INTEGRAL_CONSTANT
	std::integral_constant<int, 42> t = testObj.getIntegralConstant();
	(void)t;
	#endif
}

//------------------------------------------------------------------------------

}
