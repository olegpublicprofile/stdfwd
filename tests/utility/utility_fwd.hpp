#pragma once

#include <stdfwd/utility>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP14
	#define STDFWD_IS_INTEGER_SEQUENCE
#endif

//------------------------------------------------------------------------------

namespace utility_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	std::pair< int, int > getPair();

	#ifdef STDFWD_IS_INTEGER_SEQUENCE
	std::integer_sequence< int, 1,2,3 > getIntegerSequence();
	#endif
};

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------
