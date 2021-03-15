#pragma once

#include <stdfwd/string>

//------------------------------------------------------------------------------

namespace string_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	std::string getString();
	std::wstring getWstring();

	#ifdef STDFWD_IS_U8STRING
	std::u8string getU16string();
	#endif

	#ifdef STDFWD_IS_U16STRING
	std::u16string getU16string();
	#endif

	#ifdef STDFWD_IS_U32STRING
	std::u32string getU32string();
	#endif
};

//------------------------------------------------------------------------------

}
