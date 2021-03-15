#include "tests/clocale/clocale_full.hpp"

#include "tests/clocale/clocale_fwd.hpp"

#include <clocale>

//------------------------------------------------------------------------------

namespace clocale_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	std::lconv lconv = testObj.getLconv();
	(void)lconv;
}

//------------------------------------------------------------------------------

}
