#include "tests/charconv/charconv_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<charconv>)
		#include <charconv>
	#endif
#endif

//------------------------------------------------------------------------------

namespace charconv_tests {

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

#ifdef STDFWD_IS_TO_CHARS_RESULT
std::to_chars_result TestClass::getToCharsResult()
{
	return std::to_chars_result();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FROM_CHARS_RESULT
std::from_chars_result TestClass::getFromCharsResult()
{
	return std::from_chars_result();
}
#endif

//------------------------------------------------------------------------------

}
