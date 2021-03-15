#include "tests/map/map_full.hpp"

#include "tests/map/map_fwd.hpp"

#include <map>

//------------------------------------------------------------------------------

namespace map_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	auto map = testObj.getMap();
	(void)map;

	auto multimap = testObj.getMultimap();
	(void)multimap;
}

//------------------------------------------------------------------------------

}
