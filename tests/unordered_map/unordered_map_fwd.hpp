#pragma once

#include <stdfwd/unordered_map>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_UNORDERED_MAP
#endif

//------------------------------------------------------------------------------

namespace unordered_map_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

#ifdef STDFWD_IS_UNORDERED_MAP

	stdfwd::unordered_map< int, int > getMap();
	stdfwd::unordered_multimap< int, int > getMultimap();

#endif
};

//------------------------------------------------------------------------------

}
