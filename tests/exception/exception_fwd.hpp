#pragma once

#include <stdfwd/exception>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_NESTED_EXCEPTION
#endif

//------------------------------------------------------------------------------

namespace exception_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	std::exception getException();
	std::bad_exception getBadException();

	#ifdef STDFWD_IS_NESTED_EXCEPTION
	std::nested_exception getNestedException();
	#endif
};

//------------------------------------------------------------------------------

}
