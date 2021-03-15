#include "tests/random/random_mini.hpp"

#include "tests/random/random_fwd.hpp"

//------------------------------------------------------------------------------

namespace random_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
