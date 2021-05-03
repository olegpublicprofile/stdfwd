#include "tests/charconv/charconv_full.hpp"

#include "tests/charconv/charconv_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<charconv>)
		#include <charconv>
	#endif
#endif

//------------------------------------------------------------------------------

namespace charconv_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_CHARS_FORMAT
	std::chars_format chars_format = testObj.getCharsFormat();
	(void)chars_format;
	#endif

	#ifdef STDFWD_IS_TO_CHARS_RESULT
	std::to_chars_result to_chars_result = testObj.getToCharsResult();
	(void)to_chars_result;
	#endif

	#ifdef STDFWD_IS_FROM_CHARS_RESULT
	std::from_chars_result from_chars_result = testObj.getFromCharsResult();
	(void)from_chars_result;
	#endif
}

//------------------------------------------------------------------------------

}
