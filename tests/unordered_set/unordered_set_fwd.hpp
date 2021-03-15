#pragma once

#include <stdfwd/unordered_set>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_UNORDERED_SET
#endif

//------------------------------------------------------------------------------

namespace unordered_set_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

#ifdef STDFWD_IS_UNORDERED_SET

	stdfwd::unordered_set< int > getSet();
	stdfwd::unordered_multiset< int > getMultiset();

#endif
};

//------------------------------------------------------------------------------

}
