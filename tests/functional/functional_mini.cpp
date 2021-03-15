#include "tests/functional/functional_mini.hpp"

#include "tests/functional/functional_fwd.hpp"

//------------------------------------------------------------------------------

namespace functional_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
