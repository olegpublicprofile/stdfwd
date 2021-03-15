#include "tests/clocale/clocale_mini.hpp"

#include "tests/clocale/clocale_fwd.hpp"

//------------------------------------------------------------------------------

namespace clocale_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
