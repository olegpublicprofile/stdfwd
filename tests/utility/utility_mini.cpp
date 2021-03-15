#include "tests/utility/utility_mini.hpp"

#include "tests/utility/utility_fwd.hpp"

//------------------------------------------------------------------------------

namespace utility_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
