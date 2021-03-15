#include "tests/tuple/tuple_mini.hpp"

#include "tests/tuple/tuple_fwd.hpp"

//------------------------------------------------------------------------------

namespace tuple_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
