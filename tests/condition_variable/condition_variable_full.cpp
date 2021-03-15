#include "tests/condition_variable/condition_variable_full.hpp"

#include "tests/condition_variable/condition_variable_fwd.hpp"

#include <condition_variable>

//------------------------------------------------------------------------------

namespace condition_variable_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_CONDITION_VARIABLE
	const std::condition_variable & condition_variable = testObj.getConditionVariable();
	(void)condition_variable;
	#endif

	#ifdef STDFWD_IS_CONDITION_VARIABLE_ANY
	std::condition_variable_any & condition_variable_any =
		testObj.getConditionVariableAny();
	(void)condition_variable_any;
	#endif

	#ifdef STDFWD_IS_CV_STATUS
	std::cv_status cv_status = testObj.getCvStatus();
	(void)cv_status;
	#endif

}

//------------------------------------------------------------------------------

}
