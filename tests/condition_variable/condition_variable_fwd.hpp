#pragma once

#include <stdfwd/condition_variable>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_CONDITION_VARIABLE
	#define STDFWD_IS_CONDITION_VARIABLE_ANY
	#define STDFWD_IS_CV_STATUS
#endif

//------------------------------------------------------------------------------

namespace condition_variable_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_CONDITION_VARIABLE
	std::condition_variable & getConditionVariable();
	#endif

	#ifdef STDFWD_IS_CONDITION_VARIABLE_ANY
	std::condition_variable_any & getConditionVariableAny();
	#endif

	#ifdef STDFWD_IS_CV_STATUS
	std::cv_status getCvStatus();
	#endif

};

//------------------------------------------------------------------------------

}
