#include "tests/utility/utility_fwd.hpp"

#include <utility>

//------------------------------------------------------------------------------

namespace utility_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

std::pair< int, int > TestClass::getPair()
{
	return std::pair< int, int >{0,0};
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_INTEGER_SEQUENCE
std::integer_sequence< int, 1,2,3 > TestClass::getIntegerSequence()
{
	return std::integer_sequence< int, 1,2,3 >{};
}
#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------
