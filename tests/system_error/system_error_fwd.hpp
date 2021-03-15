#pragma once

#include <stdfwd/system_error>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_ERROR_CATEGORY
	#define STDFWD_IS_ERROR_CODE
	#define STDFWD_IS_ERROR_CONDITION
	#define STDFWD_IS_SYSTEM_ERROR
	#define STDFWD_IS_ERROR_CODE_ENUM
	#define STDFWD_IS_ERROR_CONDITION_ENUM
	#define STDFWD_IS_ERRC
#endif

//------------------------------------------------------------------------------

namespace system_error_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_ERROR_CATEGORY
	std::error_category & getErrorCategory();
	#endif

	#ifdef STDFWD_IS_ERROR_CODE
	std::error_code getErrorCode();
	#endif

	#ifdef STDFWD_IS_ERROR_CONDITION
	std::error_condition getErrorCondition();
	#endif

	#ifdef STDFWD_IS_SYSTEM_ERROR
	std::system_error getSystemError();
	#endif

	#ifdef STDFWD_IS_ERROR_CODE_ENUM
	std::is_error_code_enum<int> getIsErrorCodeEnum();
	#endif

	#ifdef STDFWD_IS_ERROR_CONDITION_ENUM
	std::is_error_condition_enum<int> getIsErrorConditionEnum();
	#endif

	#ifdef STDFWD_IS_ERRC
	std::errc getErrc();
	#endif

};

//------------------------------------------------------------------------------

}
