#include "tests/unordered_map/unordered_map_fwd.hpp"

#ifdef STDFWD_IS_UNORDERED_MAP
#include <unordered_map>
#endif

//------------------------------------------------------------------------------

namespace unordered_map_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_UNORDERED_MAP

//------------------------------------------------------------------------------

stdfwd::unordered_map< int, int > TestClass::getMap()
{
	return std::unordered_map< int, int >{};
}

//------------------------------------------------------------------------------

stdfwd::unordered_multimap< int, int > TestClass::getMultimap()
{
	return std::unordered_multimap< int, int >{};
}

//------------------------------------------------------------------------------

#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


