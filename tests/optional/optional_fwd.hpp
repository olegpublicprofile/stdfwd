#pragma once

#include <stdfwd/optional>

//------------------------------------------------------------------------------

#ifdef __has_include
	#if __has_include(<version>)
		#include <version>
	#endif
#endif

//------------------------------------------------------------------------------

#ifdef __cpp_lib_optional
	#if STDFWD_CPP_VERSION >= __cpp_lib_optional
		#define STDFWD_IS_OPTIONAL
		#define STDFWD_IS_BAD_OPTIONAL_ACCESS
	#endif
#endif

//------------------------------------------------------------------------------

namespace optional_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_OPTIONAL
	std::optional< int > getOptional();
	#endif

	#ifdef STDFWD_IS_BAD_OPTIONAL_ACCESS
	std::bad_optional_access getBadOptionalAccess();
	#endif
};

//------------------------------------------------------------------------------

}

