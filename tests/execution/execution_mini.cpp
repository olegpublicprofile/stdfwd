#include "tests/execution/execution_mini.hpp"

#include "tests/execution/execution_fwd.hpp"

//------------------------------------------------------------------------------

namespace execution_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
