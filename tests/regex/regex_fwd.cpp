#include "tests/regex/regex_fwd.hpp"

#ifdef STDFWD_IS_CPP11
#include <regex>
#endif

//------------------------------------------------------------------------------

namespace regex_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_REGEX_ERROR
std::regex_error TestClass::getRegexError()
{
	return std::regex_error( std::regex_constants::error_collate );
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_REGEX_TRAITS
std::regex_traits<char> TestClass::getRegexTraits()
{
	return std::regex_traits<char>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_BASIC_REGEX
stdfwd::basic_regex<char> TestClass::getBasicRegex()
{
	return std::basic_regex<char>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SUB_MATCH
std::sub_match<const char*> TestClass::getSubMatch()
{
	return std::sub_match<const char*>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MATCH_RESULTS
stdfwd::match_results<const char*> TestClass::getMatchResults()
{
	return std::match_results<const char*>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CSUB_MATCH
std::csub_match TestClass::getCsubMatch()
{
	return std::csub_match();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_WCSUB_MATCH
std::wcsub_match TestClass::getWsubMatch()
{
	return std::wcsub_match();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_REGEX
stdfwd::regex TestClass::getRegex()
{
	return std::regex();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_WREGEX
stdfwd::wregex TestClass::getWregex()
{
	return std::wregex();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CMATCH
stdfwd::cmatch TestClass::getCmatch()
{
	return std::cmatch();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_WCMATCH
stdfwd::wcmatch TestClass::getWcmatch()
{
	return std::wcmatch();
}
#endif

//------------------------------------------------------------------------------

}

