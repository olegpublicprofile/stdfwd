#include "tests/regex/regex_full.hpp"

#include "tests/regex/regex_fwd.hpp"

#ifdef STDFWD_IS_CPP11
#include <regex>
#endif

//------------------------------------------------------------------------------

namespace regex_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_REGEX_ERROR
	std::regex_error regex_error = testObj.getRegexError();
	(void)regex_error;
	#endif

	#ifdef STDFWD_IS_REGEX_TRAITS
	std::regex_traits<char> regex_traits = testObj.getRegexTraits();
	(void)regex_traits;
	#endif

	#ifdef STDFWD_IS_BASIC_REGEX
	std::basic_regex<char> basic_regex = testObj.getBasicRegex();
	(void)basic_regex;
	#endif

	#ifdef STDFWD_IS_SUB_MATCH
	std::sub_match<const char*> sub_match = testObj.getSubMatch();
	(void)sub_match;
	#endif

	#ifdef STDFWD_IS_MATCH_RESULTS
	std::match_results<const char*> match_results = testObj.getMatchResults();
	(void)match_results;
	#endif

	#ifdef STDFWD_IS_CSUB_MATCH
	std::csub_match csub_match = testObj.getCsubMatch();
	(void)csub_match;
	#endif

	#ifdef STDFWD_IS_WCSUB_MATCH
	std::wcsub_match wcsub_match = testObj.getWsubMatch();
	(void)wcsub_match;
	#endif

	#ifdef STDFWD_IS_REGEX
	std::regex regex = testObj.getRegex();
	(void)regex;
	#endif

	#ifdef STDFWD_IS_WREGEX
	std::wregex wregex = testObj.getWregex();
	(void)wregex;
	#endif

	#ifdef STDFWD_IS_CMATCH
	std::cmatch cmatch = testObj.getCmatch();
	(void)cmatch;
	#endif

	#ifdef STDFWD_IS_WCMATCH
	std::wcmatch wcmatch = testObj.getWcmatch();
	(void)wcmatch;
	#endif
}

//------------------------------------------------------------------------------

}
