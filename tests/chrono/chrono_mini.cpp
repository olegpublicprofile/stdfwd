#include "tests/chrono/chrono_mini.hpp"

#include "tests/chrono/chrono_fwd.hpp"

//------------------------------------------------------------------------------

namespace chrono_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
