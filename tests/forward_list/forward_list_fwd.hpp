#pragma once

#include <stdfwd/forward_list>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_FORWARD_LIST
#endif

//------------------------------------------------------------------------------

namespace forward_list_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_FORWARD_LIST

	stdfwd::forward_list< int > getList();

	#endif
};

//------------------------------------------------------------------------------

}
