#include "tests/string_view/string_view_full.hpp"

#include "tests/string_view/string_view_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<string_view>)
		#include <string_view>
	#endif
#endif


//------------------------------------------------------------------------------

namespace string_view_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_STRING_VIEW
	std::string_view string_view = testObj.getStringView();
	(void)string_view;
	#endif

	#ifdef STDFWD_IS_WSTRING_VIEW
	std::wstring_view wstring_view = testObj.getWstring();
	(void)wstring_view;
	#endif

	#ifdef STDFWD_IS_U8STRING_VIEW
	std::u8string_view u8string_view = testObj.getU16stringView();
	(void)u8string_view;
	#endif

	#ifdef STDFWD_IS_U16STRING_VIEW
	std::u16string_view u16string_view = testObj.getU16stringView();
	(void)u16string_view;
	#endif

	#ifdef STDFWD_IS_U32STRING_VIEW
	std::u32string_view u32string_view = testObj.getU32stringView();
	(void)u32string_view;
	#endif
}

//------------------------------------------------------------------------------

}
