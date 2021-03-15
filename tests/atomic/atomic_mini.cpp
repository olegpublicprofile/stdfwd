#include "tests/atomic/atomic_mini.hpp"

#include "tests/atomic/atomic_fwd.hpp"

//------------------------------------------------------------------------------

namespace atomic_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
