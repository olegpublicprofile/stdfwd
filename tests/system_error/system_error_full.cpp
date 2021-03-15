#include "tests/system_error/system_error_full.hpp"

#include "tests/system_error/system_error_fwd.hpp"

#ifdef STDFWD_IS_CPP11
#include <system_error>
#endif

//------------------------------------------------------------------------------

namespace system_error_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_ERROR_CODE
	std::error_code error_code = testObj.getErrorCode();
	(void)error_code;
	#endif

	#ifdef STDFWD_IS_ERROR_CONDITION
	std::error_condition error_condition = testObj.getErrorCondition();
	(void)error_condition;
	#endif

	#ifdef STDFWD_IS_SYSTEM_ERROR
	std::system_error system_error = testObj.getSystemError();
	(void)system_error;
	#endif

	#ifdef STDFWD_IS_ERROR_CODE_ENUM
	std::is_error_code_enum<int> is_error_code_enum = testObj.getIsErrorCodeEnum();
	(void)is_error_code_enum;
	#endif

	#ifdef STDFWD_IS_ERROR_CONDITION_ENUM
	std::is_error_condition_enum<int> is_error_condition_enum =
			testObj.getIsErrorConditionEnum();
	(void)is_error_condition_enum;
	#endif

	#ifdef STDFWD_IS_ERRC
	std::errc errc = testObj.getErrc();
	(void)errc;
	#endif

}

//------------------------------------------------------------------------------

}
