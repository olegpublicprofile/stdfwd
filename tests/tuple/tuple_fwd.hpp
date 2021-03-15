#pragma once

#include <stdfwd/tuple>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_TUPLE
#endif

//------------------------------------------------------------------------------

namespace tuple_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_TUPLE
	std::tuple<int, char> getTuple();
	#endif
};

//------------------------------------------------------------------------------

}
