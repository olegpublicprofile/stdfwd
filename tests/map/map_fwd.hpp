#pragma once

#include <stdfwd/map>

//------------------------------------------------------------------------------

namespace map_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	stdfwd::map< int, int > getMap();
	stdfwd::multimap< int, int > getMultimap();
};

//------------------------------------------------------------------------------

}
