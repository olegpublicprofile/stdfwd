#include "tests/any/any_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<any>)
		#include <any>
	#endif
#endif

//------------------------------------------------------------------------------

namespace any_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ANY
std::any TestClass::getAny()
{
	return std::any();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_BAD_ANY_CAST
std::bad_any_cast TestClass::getBadAnyCast()
{
	return std::bad_any_cast();
}
#endif

//------------------------------------------------------------------------------

}
