#include "tests/initializer_list/initializer_list_full.hpp"

#include "tests/initializer_list/initializer_list_fwd.hpp"

#include <initializer_list>

//------------------------------------------------------------------------------

namespace initializer_list_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_INITIALIZER_LIST
	auto list = testObj.getList();
	(void)list;
	#endif
}

//------------------------------------------------------------------------------

}
