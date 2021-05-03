#pragma once

#include <stdfwd/variant>

//------------------------------------------------------------------------------

#ifdef __has_include
	#if __has_include(<version>)
		#include <version>
	#endif
#endif

//------------------------------------------------------------------------------

#ifdef __cpp_lib_variant
	#if STDFWD_CPP_VERSION >= __cpp_lib_optional
		#define STDFWD_IS_VARIANT
		#define STDFWD_IS_VARIANT_SIZE
		#define STDFWD_IS_VARIANT_ALTERNATIVE
		#define STDFWD_IS_MONOSTATE
		#define STDFWD_IS_BAD_VARIANT_ACCESS
	#endif
#endif

//------------------------------------------------------------------------------

namespace variant_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	#ifdef STDFWD_IS_VARIANT_ALTERNATIVE
	using VariantAlternativeType = stdfwd::variant_alternative<0, std::variant<int>>;
	#endif

	int getInt();

	#ifdef STDFWD_IS_VARIANT
	std::variant<int, float> getVariant();
	#endif

	#ifdef STDFWD_IS_VARIANT_ALTERNATIVE
	VariantAlternativeType getVariantAlternative();
	#endif

	#ifdef STDFWD_IS_MONOSTATE
	std::monostate getMonostate();
	#endif

	#ifdef STDFWD_IS_BAD_VARIANT_ACCESS
	std::bad_variant_access getBadCariantAccess();
	#endif
};

//------------------------------------------------------------------------------

}
