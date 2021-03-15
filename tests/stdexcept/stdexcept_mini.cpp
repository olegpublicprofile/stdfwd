#include "tests/stdexcept/stdexcept_mini.hpp"

#include "tests/stdexcept/stdexcept_fwd.hpp"

//------------------------------------------------------------------------------

namespace stdexcept_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
