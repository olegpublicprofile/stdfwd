#include "tests/unordered_set/unordered_set_full.hpp"

#include "tests/unordered_set/unordered_set_fwd.hpp"

#ifdef STDFWD_IS_UNORDERED_SET
#include <unordered_set>
#endif

//------------------------------------------------------------------------------

namespace unordered_set_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

#ifdef STDFWD_IS_UNORDERED_SET

	auto set = testObj.getSet();
	(void)set;

	auto multiset = testObj.getMultiset();
	(void)multiset;

#endif
}

//------------------------------------------------------------------------------

}
