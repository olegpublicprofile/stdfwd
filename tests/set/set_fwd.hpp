#pragma once

#include <stdfwd/set>

//------------------------------------------------------------------------------

namespace set_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	stdfwd::set< int > getSet();
	stdfwd::multiset< int > getMultiset();
};

//------------------------------------------------------------------------------

}
