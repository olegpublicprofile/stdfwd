#include "tests/optional/optional_mini.hpp"

#include "tests/optional/optional_fwd.hpp"

//------------------------------------------------------------------------------

namespace optional_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
