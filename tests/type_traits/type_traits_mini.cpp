#include "tests/type_traits/type_traits_mini.hpp"

#include "tests/type_traits/type_traits_fwd.hpp"

//------------------------------------------------------------------------------

namespace type_traits_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
