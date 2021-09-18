#pragma once

#include <stdfwd/chars_format>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP17
	#define STDFWD_IS_CHARS_FORMAT
#endif

//------------------------------------------------------------------------------

namespace chars_format_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_CHARS_FORMAT
	std::chars_format getCharsFormat();
	#endif

};

//------------------------------------------------------------------------------

}
