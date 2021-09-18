#include "tests/bad_any_cast/bad_any_cast_full.hpp"

#include "tests/bad_any_cast/bad_any_cast_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<any>)
		#include <any>
	#endif
#endif

//------------------------------------------------------------------------------

namespace bad_any_cast_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_ANY
	std::bad_any_cast bad_any_cast = testObj.getBadAnyCast();
	(void)bad_any_cast;
	#endif
}

//------------------------------------------------------------------------------

}
