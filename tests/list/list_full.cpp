#include "tests/list/list_full.hpp"

#include "tests/list/list_fwd.hpp"

#include <list>

//------------------------------------------------------------------------------

namespace list_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	auto list = testObj.getList();
	(void)list;
}

//------------------------------------------------------------------------------

}
