#include "tests/locale/locale_full.hpp"

#include "tests/locale/locale_fwd.hpp"

#include <locale>
#include <codecvt>

//------------------------------------------------------------------------------

namespace locale_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	std::locale locale = testObj.getLocate();
	(void)locale;

	#ifdef STDFWD_IS_WSTRING_CONVERT
	const std::wstring_convert<
		std::codecvt_utf8<wchar_t>,
		wchar_t,
		std::allocator<wchar_t>,
		std::allocator<char>
	> & wstring_convert =
		testObj.getWstringConvert();
	(void)wstring_convert;
	#endif

	#ifdef STDFWD_IS_WBUFFER_CONVERT
	std::wbuffer_convert<
		std::codecvt_utf8<wchar_t>,
		wchar_t,
		std::char_traits<wchar_t>
	> & wbuffer_convert =
		testObj.getWbufferConvert();
	(void)wbuffer_convert;
	#endif

	std::ctype_base & ctype_base = testObj.getCtypeBase();
	(void)ctype_base;

	std::codecvt_base & codecvt_base = testObj.getCodecvtBase();
	(void)codecvt_base;

	std::time_base & time_base = testObj.getTimeBase();
	(void)time_base;

	std::money_base & money_base = testObj.getMoneyBase();
	(void)money_base;

	std::messages_base & messages_base = testObj.getMessagesBase();
	(void)messages_base;
}

//------------------------------------------------------------------------------

}
