#include "tests/future/future_mini.hpp"

#include "tests/future/future_fwd.hpp"

//------------------------------------------------------------------------------

namespace future_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
