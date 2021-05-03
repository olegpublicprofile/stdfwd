#include "tests/variant/variant_mini.hpp"

#include "tests/variant/variant_fwd.hpp"

//------------------------------------------------------------------------------

namespace variant_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
