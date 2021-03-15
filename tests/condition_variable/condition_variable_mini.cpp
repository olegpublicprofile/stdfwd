#include "tests/condition_variable/condition_variable_mini.hpp"

#include "tests/condition_variable/condition_variable_fwd.hpp"

//------------------------------------------------------------------------------

namespace condition_variable_tests {

//------------------------------------------------------------------------------

void run_mini()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;
}

//------------------------------------------------------------------------------

}
