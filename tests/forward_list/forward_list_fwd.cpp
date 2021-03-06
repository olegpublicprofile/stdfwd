#include "forward_list_fwd.hpp"

#include <forward_list>

//------------------------------------------------------------------------------

namespace forward_list_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FORWARD_LIST

stdfwd::forward_list< int > TestClass::getList()
{
	return std::forward_list< int >{ 1, 2, 3 };
}

#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


