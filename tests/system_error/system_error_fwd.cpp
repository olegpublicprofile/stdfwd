#include "tests/system_error/system_error_fwd.hpp"

#ifdef STDFWD_IS_CPP11
#include <system_error>
#endif

//------------------------------------------------------------------------------

namespace system_error_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ERROR_CATEGORY
std::error_category & TestClass::getErrorCategory()
{
	struct TempClass: public std::error_category
	{
		const char* name() const noexcept { return ""; }
		std::string message( int  ) const { return ""; }
	};

	static TempClass tempObj;
	return tempObj;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ERROR_CODE
std::error_code TestClass::getErrorCode()
{
	return std::error_code();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ERROR_CONDITION
std::error_condition TestClass::getErrorCondition()
{
	return std::error_condition();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SYSTEM_ERROR
std::system_error TestClass::getSystemError()
{
	return std::system_error( std::error_code(), "" );
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ERROR_CODE_ENUM
std::is_error_code_enum<int> TestClass::getIsErrorCodeEnum()
{
	return std::is_error_code_enum<int>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ERROR_CONDITION_ENUM
std::is_error_condition_enum<int> TestClass::getIsErrorConditionEnum()
{
	return std::is_error_condition_enum<int>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ERRC
std::errc TestClass::getErrc()
{
	return std::errc();
}
#endif

//------------------------------------------------------------------------------

}
