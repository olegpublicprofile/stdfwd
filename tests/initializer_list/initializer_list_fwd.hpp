#pragma once

#include <stdfwd/initializer_list>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_INITIALIZER_LIST
#endif

//------------------------------------------------------------------------------

namespace initializer_list_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_INITIALIZER_LIST
	std::initializer_list< int > getList();
	#endif
};

//------------------------------------------------------------------------------

}
