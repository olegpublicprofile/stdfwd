#include "tests/filesystem/filesystem_mini.hpp"

#include "tests/filesystem/filesystem_fwd.hpp"

//------------------------------------------------------------------------------

namespace filesystem_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
