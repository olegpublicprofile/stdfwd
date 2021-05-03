#include "tests/optional/optional_full.hpp"

#include "tests/optional/optional_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<optional>)
		#include <optional>
	#endif
#endif

//------------------------------------------------------------------------------

namespace optional_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_OPTIONAL
	std::optional< int > optional = testObj.getOptional();
	(void)optional;
	#endif

	#ifdef STDFWD_IS_OPTIONAL
	std::bad_optional_access bad_optional_access = testObj.getBadOptionalAccess();
	(void)bad_optional_access;
	#endif
}

//------------------------------------------------------------------------------

}
