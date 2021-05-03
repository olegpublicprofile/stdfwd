#include "tests/optional/optional_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<optional>)
		#include <optional>
	#endif
#endif

//------------------------------------------------------------------------------

namespace optional_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_OPTIONAL
std::optional< int > TestClass::getOptional()
{
	return std::optional< int >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_BAD_OPTIONAL_ACCESS
std::bad_optional_access TestClass::getBadOptionalAccess()
{
	return std::bad_optional_access();
}
#endif

//------------------------------------------------------------------------------

}
