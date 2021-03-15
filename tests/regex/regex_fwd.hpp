#pragma once

#include <stdfwd/regex>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_REGEX_ERROR
	#define STDFWD_IS_REGEX_TRAITS
	#define STDFWD_IS_BASIC_REGEX
	#define STDFWD_IS_SUB_MATCH
	#define STDFWD_IS_MATCH_RESULTS
	#define STDFWD_IS_REGEX_ITERATOR
	#define STDFWD_IS_REGEX_TOKEN_ITERATOR
	#define STDFWD_IS_CSUB_MATCH
	#define STDFWD_IS_WCSUB_MATCH
	#define STDFWD_IS_REGEX
	#define STDFWD_IS_WREGEX
	#define STDFWD_IS_CMATCH
	#define STDFWD_IS_WCMATCH
#endif

//------------------------------------------------------------------------------

namespace regex_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:
	int getInt();

	#ifdef STDFWD_IS_REGEX_ERROR
	std::regex_error getRegexError();
	#endif

	#ifdef STDFWD_IS_REGEX_TRAITS
	std::regex_traits<char> getRegexTraits();
	#endif

	#ifdef STDFWD_IS_BASIC_REGEX
	stdfwd::basic_regex<char> getBasicRegex();
	#endif

	#ifdef STDFWD_IS_SUB_MATCH
	std::sub_match<const char*> getSubMatch();
	#endif

	#ifdef STDFWD_IS_MATCH_RESULTS
	stdfwd::match_results<const char*> getMatchResults();
	#endif

	#ifdef STDFWD_IS_CSUB_MATCH
	std::csub_match getCsubMatch();
	#endif

	#ifdef STDFWD_IS_WCSUB_MATCH
	std::wcsub_match getWsubMatch();
	#endif

	#ifdef STDFWD_IS_REGEX
	stdfwd::regex getRegex();
	#endif

	#ifdef STDFWD_IS_WREGEX
	stdfwd::wregex getWregex();
	#endif

	#ifdef STDFWD_IS_CMATCH
	stdfwd::cmatch getCmatch();
	#endif

	#ifdef STDFWD_IS_WCMATCH
	stdfwd::wcmatch getWcmatch();
	#endif

};

//------------------------------------------------------------------------------

}
