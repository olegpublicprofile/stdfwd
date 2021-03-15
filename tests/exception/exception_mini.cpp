#include "tests/exception/exception_mini.hpp"

#include "tests/exception/exception_fwd.hpp"

//------------------------------------------------------------------------------

namespace exception_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
