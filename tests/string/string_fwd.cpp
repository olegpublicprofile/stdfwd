#include "tests/string/string_fwd.hpp"

#include <string>

//------------------------------------------------------------------------------

namespace string_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

std::string TestClass::getString()
{
	return std::string{};
}

//------------------------------------------------------------------------------

std::wstring TestClass::getWstring()
{
	return std::wstring{};
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_U8STRING
std::u8string TestClass::getU8string()
{
	return std::u8string{};
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_U16STRING
std::u16string TestClass::getU16string()
{
	return std::u16string{};
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_U32STRING
std::u32string TestClass::getU32string()
{
	return std::u32string{};
}
#endif

//------------------------------------------------------------------------------

}
