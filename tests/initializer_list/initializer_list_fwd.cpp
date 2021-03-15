#include "tests/initializer_list/initializer_list_fwd.hpp"

#include <initializer_list>

//------------------------------------------------------------------------------

namespace initializer_list_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_INITIALIZER_LIST
std::initializer_list< int > TestClass::getList()
{
	return std::initializer_list< int >{};
}
#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


