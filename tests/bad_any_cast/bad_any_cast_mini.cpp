#include "tests/bad_any_cast/bad_any_cast_mini.hpp"

#include "tests/bad_any_cast/bad_any_cast_fwd.hpp"

//------------------------------------------------------------------------------

namespace bad_any_cast_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
