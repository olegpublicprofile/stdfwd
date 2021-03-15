#pragma once

#include <stdfwd/locale>

#include <cwchar>
#include <codecvt>
#include <string>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_WSTRING_CONVERT
	#define STDFWD_IS_WBUFFER_CONVERT
#endif

#ifdef STDFWD_IS_CPP17
	#undef STDFWD_IS_WSTRING_CONVERT
	#undef STDFWD_IS_WBUFFER_CONVERT
#endif

//------------------------------------------------------------------------------

namespace locale_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	std::locale getLocate();

	#ifdef STDFWD_IS_WSTRING_CONVERT
	stdfwd::wstring_convert<std::codecvt_utf8<wchar_t>> & getWstringConvert();
	#endif

	#ifdef STDFWD_IS_WBUFFER_CONVERT
	stdfwd::wbuffer_convert<std::codecvt_utf8<wchar_t>> & getWbufferConvert();
	#endif

	std::ctype_base & getCtypeBase();
	std::codecvt_base & getCodecvtBase();
	std::time_base & getTimeBase();
	std::money_base & getMoneyBase();
	std::messages_base & getMessagesBase();
};

//------------------------------------------------------------------------------

}
