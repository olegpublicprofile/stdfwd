#pragma once

#include <stdfwd/string_view>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP17
	#define STDFWD_IS_STRING_VIEW
	#define STDFWD_IS_WSTRING_VIEW
	#define STDFWD_IS_U16STRING_VIEW
	#define STDFWD_IS_U32STRING_VIEW
#endif

#ifdef STDFWD_IS_CPP20
	#define STDFWD_IS_U8STRING_VIEW
#endif

//------------------------------------------------------------------------------

namespace string_view_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_STRING_VIEW
	std::string_view getStringView();
	#endif

	#ifdef STDFWD_IS_WSTRING_VIEW
	std::wstring_view getWstring();
	#endif

	#ifdef STDFWD_IS_U8STRING_VIEW
	std::u8string_view getU16stringView();
	#endif

	#ifdef STDFWD_IS_U16STRING_VIEW
	std::u16string_view getU16stringView();
	#endif

	#ifdef STDFWD_IS_U32STRING_VIEW
	std::u32string_view getU32stringView();
	#endif
};

//------------------------------------------------------------------------------

}
