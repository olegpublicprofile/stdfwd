#include "tests/memory/memory_mini.hpp"

#include "tests/memory/memory_fwd.hpp"

//------------------------------------------------------------------------------

namespace memory_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
