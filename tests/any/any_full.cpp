#include "tests/any/any_full.hpp"

#include "tests/any/any_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<any>)
		#include <any>
	#endif
#endif

//------------------------------------------------------------------------------

namespace any_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_ANY
	std::any any = testObj.getAny();
	(void)any;
	#endif

	#ifdef STDFWD_IS_ANY
	std::bad_any_cast bad_any_cast = testObj.getBadAnyCast();
	(void)bad_any_cast;
	#endif
}

//------------------------------------------------------------------------------

}
