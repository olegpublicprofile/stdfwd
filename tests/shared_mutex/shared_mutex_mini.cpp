#include "tests/shared_mutex/shared_mutex_mini.hpp"

#include "tests/shared_mutex/shared_mutex_fwd.hpp"

//------------------------------------------------------------------------------

namespace shared_mutex_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
