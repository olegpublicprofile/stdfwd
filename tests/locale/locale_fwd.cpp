#include "tests/locale/locale_fwd.hpp"

#include <locale>

//------------------------------------------------------------------------------

namespace locale_tests {

//------------------------------------------------------------------------------

std::locale TestClass::getLocate()
{
	return std::locale();
}

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_WSTRING_CONVERT
stdfwd::wstring_convert<std::codecvt_utf8<wchar_t>> & TestClass::getWstringConvert()
{
	static std::wstring_convert<std::codecvt_utf8<wchar_t>> t;
	return t;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_WBUFFER_CONVERT
stdfwd::wbuffer_convert<std::codecvt_utf8<wchar_t>> & TestClass::getWbufferConvert()
{
	static std::wbuffer_convert<std::codecvt_utf8<wchar_t>> t;
	return t;
}
#endif

//------------------------------------------------------------------------------

std::ctype_base & TestClass::getCtypeBase()
{
	static std::ctype_base b;
	return b;
}

//------------------------------------------------------------------------------

std::codecvt_base & TestClass::getCodecvtBase()
{
	static std::codecvt_base b;
	return b;
}

//------------------------------------------------------------------------------

std::time_base & TestClass::getTimeBase()
{
	static std::time_base b;
	return b;
}

//------------------------------------------------------------------------------

std::money_base & TestClass::getMoneyBase()
{
	static std::money_base b;
	return b;
}

//------------------------------------------------------------------------------

std::messages_base & TestClass::getMessagesBase()
{
	static std::messages_base b;
	return b;
}

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


