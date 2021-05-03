#include "tests/string_view/string_view_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<string_view>)
		#include <string_view>
	#endif
#endif

//------------------------------------------------------------------------------

namespace string_view_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_STRING_VIEW
std::string_view TestClass::getStringView()
{
	return std::string_view();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_WSTRING_VIEW
std::wstring_view TestClass::getWstring()
{
	return std::wstring_view();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_U8STRING_VIEW
std::u8string_view TestClass::getU16stringView()
{
	return std::u8string_view();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_U16STRING_VIEW
std::u16string_view TestClass::getU16stringView()
{
	return std::u16string_view();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_U32STRING_VIEW
std::u32string_view TestClass::getU32stringView()
{
	return std::u32string_view();
}
#endif

//------------------------------------------------------------------------------

}
