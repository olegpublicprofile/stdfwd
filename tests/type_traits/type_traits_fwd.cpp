#include "tests/type_traits/type_traits_fwd.hpp"

#include <type_traits>

//------------------------------------------------------------------------------

namespace type_traits_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_INTEGRAL_CONSTANT
std::integral_constant<int, 42> TestClass::getIntegralConstant()
{
	return std::integral_constant<int, 42>();
}
#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


