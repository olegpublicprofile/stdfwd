#include "tests/locale/locale_mini.hpp"

#include "tests/locale/locale_fwd.hpp"

//------------------------------------------------------------------------------

namespace locale_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
