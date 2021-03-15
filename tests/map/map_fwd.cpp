#include "tests/map/map_fwd.hpp"

#include <map>

//------------------------------------------------------------------------------

namespace map_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

stdfwd::map< int, int > TestClass::getMap()
{
	return std::map< int, int >{};
}

//------------------------------------------------------------------------------

stdfwd::multimap< int, int > TestClass::getMultimap()
{
	return std::multimap< int, int >{};
}

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


