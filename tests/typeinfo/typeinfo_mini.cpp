#include "tests/typeinfo/typeinfo_mini.hpp"

#include "tests/typeinfo/typeinfo_fwd.hpp"

//------------------------------------------------------------------------------

namespace typeinfo_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
