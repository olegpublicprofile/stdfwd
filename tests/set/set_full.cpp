#include "tests/set/set_full.hpp"

#include "tests/set/set_fwd.hpp"

#include <set>

//------------------------------------------------------------------------------

namespace set_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	auto set = testObj.getSet();
	(void)set;

	auto multiset = testObj.getMultiset();
	(void)multiset;
}

//------------------------------------------------------------------------------

}
