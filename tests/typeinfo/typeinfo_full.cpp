#include "tests/typeinfo/typeinfo_full.hpp"

#include "tests/typeinfo/typeinfo_fwd.hpp"

#include <typeinfo>

//------------------------------------------------------------------------------

namespace typeinfo_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	std::bad_cast badCast = testObj.getBadCast();
	(void)badCast;

	std::bad_typeid badTypeid = testObj.getBadTypeid();
	(void)badTypeid;
}

//------------------------------------------------------------------------------

}
