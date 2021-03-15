#include "tests/initializer_list/initializer_list_mini.hpp"

#include "tests/initializer_list/initializer_list_fwd.hpp"

//------------------------------------------------------------------------------

namespace initializer_list_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
