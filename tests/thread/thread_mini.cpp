#include "tests/thread/thread_mini.hpp"

#include "tests/thread/thread_fwd.hpp"

//------------------------------------------------------------------------------

namespace thread_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
