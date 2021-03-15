#include "tests/forward_list/forward_list_full.hpp"

#include "tests/forward_list/forward_list_fwd.hpp"

#include <forward_list>

//------------------------------------------------------------------------------

namespace forward_list_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_FORWARD_LIST

	auto list = testObj.getList();
	(void)list;

	#endif
}

//------------------------------------------------------------------------------

}
