#include "tests/variant/variant_full.hpp"

#include "tests/variant/variant_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<variant>)
		#include <variant>
	#endif
#endif

//------------------------------------------------------------------------------

namespace variant_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_VARIANT
	std::variant<int, float> variant = testObj.getVariant();
	(void)variant;
	#endif

	#ifdef STDFWD_IS_VARIANT_ALTERNATIVE
	auto variant_alternative = testObj.getVariantAlternative();
	(void)variant_alternative;
	#endif

	#ifdef STDFWD_IS_MONOSTATE
	std::monostate monostate = testObj.getMonostate();
	(void)monostate;
	#endif

	#ifdef STDFWD_IS_BAD_VARIANT_ACCESS
	std::bad_variant_access bad_variant_access = testObj.getBadCariantAccess();
	(void)bad_variant_access;
	#endif
}

//------------------------------------------------------------------------------

}
