#include "tests/condition_variable/condition_variable_fwd.hpp"

#include <condition_variable>

//------------------------------------------------------------------------------

namespace condition_variable_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CONDITION_VARIABLE
std::condition_variable & TestClass::getConditionVariable()
{
	static std::condition_variable v;
	return v;
}
#endif


//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CONDITION_VARIABLE_ANY
std::condition_variable_any & TestClass::getConditionVariableAny()
{
	static std::condition_variable_any v;
	return v;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CV_STATUS
std::cv_status TestClass::getCvStatus()
{
	return std::cv_status();
}
#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


