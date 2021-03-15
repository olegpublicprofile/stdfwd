#include "tests/tuple/tuple_fwd.hpp"

#include <tuple>

//------------------------------------------------------------------------------

namespace tuple_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_TUPLE
std::tuple< int, char > TestClass::getTuple()
{
	return std::tuple< int, char >();
}
#endif

//------------------------------------------------------------------------------

}
