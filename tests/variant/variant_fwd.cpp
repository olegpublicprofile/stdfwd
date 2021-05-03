#include "tests/variant/variant_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<variant>)
		#include <variant>
	#endif
#endif

//------------------------------------------------------------------------------

namespace variant_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_VARIANT
std::variant<int, float> TestClass::getVariant()
{
	return std::variant<int, float>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_VARIANT_ALTERNATIVE
TestClass::VariantAlternativeType TestClass::getVariantAlternative()
{
	return VariantAlternativeType();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MONOSTATE
std::monostate TestClass::getMonostate()
{
	return std::monostate();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_BAD_VARIANT_ACCESS
std::bad_variant_access TestClass::getBadCariantAccess()
{
	return std::bad_variant_access();
}
#endif

//------------------------------------------------------------------------------

}
