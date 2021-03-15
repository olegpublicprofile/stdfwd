#include "tests/mutex/mutex_mini.hpp"

#include "tests/mutex/mutex_fwd.hpp"

//------------------------------------------------------------------------------

namespace mutex_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
