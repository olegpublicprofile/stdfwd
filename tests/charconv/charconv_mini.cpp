#include "tests/charconv/charconv_mini.hpp"

#include "tests/charconv/charconv_fwd.hpp"

//------------------------------------------------------------------------------

namespace charconv_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
