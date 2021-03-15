#include "tests/exception/exception_fwd.hpp"

#include <exception>

//------------------------------------------------------------------------------

namespace exception_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

std::exception TestClass::getException()
{
	return std::exception();
}

//------------------------------------------------------------------------------

std::bad_exception TestClass::getBadException()
{
	return std::bad_exception();
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_NESTED_EXCEPTION
std::nested_exception TestClass::getNestedException()
{
	return std::nested_exception();
}
#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


