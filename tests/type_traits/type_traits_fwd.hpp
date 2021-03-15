#pragma once

#include <stdfwd/type_traits>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_INTEGRAL_CONSTANT
#endif

#ifdef STDFWD_IS_CPP17
	#define STDFWD_IS_BOOL_CONSTANT
#endif

//------------------------------------------------------------------------------

namespace type_traits_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_INTEGRAL_CONSTANT
	std::integral_constant<int, 42> getIntegralConstant();
	#endif
};

//------------------------------------------------------------------------------

}
