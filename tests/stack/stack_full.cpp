#include "tests/stack/stack_full.hpp"

#include "tests/stack/stack_fwd.hpp"

#include <stack>

//------------------------------------------------------------------------------

namespace stack_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	auto stack = testObj.getStack();
	(void)stack;
}

//------------------------------------------------------------------------------

}
