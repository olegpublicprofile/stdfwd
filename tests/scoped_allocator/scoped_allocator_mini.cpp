#include "tests/scoped_allocator/scoped_allocator_mini.hpp"

#include "tests/scoped_allocator/scoped_allocator_fwd.hpp"

//------------------------------------------------------------------------------

namespace scoped_allocator_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
