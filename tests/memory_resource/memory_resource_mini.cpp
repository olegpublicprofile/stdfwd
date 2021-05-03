#include "tests/memory_resource/memory_resource_mini.hpp"

#include "tests/memory_resource/memory_resource_fwd.hpp"

//------------------------------------------------------------------------------

namespace memory_resource_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
