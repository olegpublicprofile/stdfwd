#include "tests/exception/exception_full.hpp"

#include "tests/exception/exception_fwd.hpp"

#include <exception>

//------------------------------------------------------------------------------

namespace exception_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	std::exception exception = testObj.getException();
	(void)exception;

	std::bad_exception bad_exception = testObj.getBadException();
	(void)bad_exception;

	#ifdef STDFWD_IS_NESTED_EXCEPTION
	std::nested_exception nested_exception = testObj.getNestedException();
	(void)nested_exception;
	#endif

}

//------------------------------------------------------------------------------

}
