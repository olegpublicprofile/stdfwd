#include "tests/chars_format/chars_format_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<charconv>)
		#include <charconv>
	#endif
#endif

//------------------------------------------------------------------------------

namespace chars_format_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CHARS_FORMAT
std::chars_format TestClass::getCharsFormat()
{
	return std::chars_format();
}
#endif

//------------------------------------------------------------------------------

}
