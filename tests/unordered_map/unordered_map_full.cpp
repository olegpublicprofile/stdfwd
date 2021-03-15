#include "tests/unordered_map/unordered_map_full.hpp"

#include "tests/unordered_map/unordered_map_fwd.hpp"

#ifdef STDFWD_IS_UNORDERED_MAP
#include <unordered_map>
#endif

//------------------------------------------------------------------------------

namespace unordered_map_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

#ifdef STDFWD_IS_UNORDERED_MAP

	auto map = testObj.getMap();
	(void)map;

	auto multimap = testObj.getMultimap();
	(void)multimap;

#endif
}

//------------------------------------------------------------------------------

}
