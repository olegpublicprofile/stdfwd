#include "tests/string/string_full.hpp"

#include "tests/string/string_fwd.hpp"

#include <string>

//------------------------------------------------------------------------------

namespace string_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	auto string = testObj.getString();
	(void)string;

	auto wstring = testObj.getWstring();
	(void)wstring;

	#ifdef STDFWD_IS_U8STRING
	auto u16string = testObj.getU16string();
	(void)u16string;
	#endif

	#ifdef STDFWD_IS_U16STRING
	auto u16string = testObj.getU16string();
	(void)u16string;
	#endif

	#ifdef STDFWD_IS_U32STRING
	auto u32string = testObj.getU32string();
	(void)u32string;
	#endif
}

//------------------------------------------------------------------------------

}
