#pragma once

#include <stdfwd/any>

//------------------------------------------------------------------------------

#ifdef __has_include
	#if __has_include(<version>)
		#include <version>
	#endif
#endif

//------------------------------------------------------------------------------

#ifdef __cpp_lib_any
	#if __cplusplus >= __cpp_lib_any
		#define STDFWD_IS_ANY
		#define STDFWD_IS_BAD_ANY_CAST
	#endif
#endif

//------------------------------------------------------------------------------

namespace any_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_ANY
	std::any getAny();
	#endif

	#ifdef STDFWD_IS_BAD_ANY_CAST
	std::bad_any_cast getBadAnyCast();
	#endif

};

//------------------------------------------------------------------------------

}
