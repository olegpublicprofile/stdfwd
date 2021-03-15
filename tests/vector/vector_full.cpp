#include "tests/vector/vector_full.hpp"

#include "tests/vector/vector_fwd.hpp"

#include <vector>

//------------------------------------------------------------------------------

namespace vector_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	auto vector = testObj.getVector();
	(void)vector;
}

//------------------------------------------------------------------------------

}
