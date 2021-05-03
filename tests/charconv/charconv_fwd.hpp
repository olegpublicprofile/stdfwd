#pragma once

#include <stdfwd/charconv>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP17
	#define STDFWD_IS_CHARS_FORMAT
	#define STDFWD_IS_TO_CHARS_RESULT
	#define STDFWD_IS_FROM_CHARS_RESULT
#endif

//------------------------------------------------------------------------------

namespace charconv_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_CHARS_FORMAT
	std::chars_format getCharsFormat();
	#endif

	#ifdef STDFWD_IS_TO_CHARS_RESULT
	std::to_chars_result getToCharsResult();
	#endif

	#ifdef STDFWD_IS_FROM_CHARS_RESULT
	std::from_chars_result getFromCharsResult();
	#endif
};

//------------------------------------------------------------------------------

}
