#include "tests/iterator/iterator_mini.hpp"

#include "tests/iterator/iterator_fwd.hpp"

//------------------------------------------------------------------------------

namespace iterator_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
