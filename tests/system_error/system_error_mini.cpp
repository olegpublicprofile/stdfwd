#include "tests/system_error/system_error_mini.hpp"

#include "tests/system_error/system_error_fwd.hpp"

//------------------------------------------------------------------------------

namespace system_error_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
