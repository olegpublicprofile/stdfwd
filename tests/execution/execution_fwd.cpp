#include "tests/execution/execution_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<execution>)
		#include <execution>
	#endif
#endif

//------------------------------------------------------------------------------

namespace execution_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SEQUENCED_POLICY
stdfwd::execution::sequenced_policy TestClass::getSequencedPolicy()
{
	return std::execution::seq;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_PARALLEL_POLICY
stdfwd::execution::parallel_policy TestClass::getParallelPolicy()
{
	return std::execution::par;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_PARALLEL_UNSEQUENCED_POLICY
stdfwd::execution::parallel_unsequenced_policy TestClass::getParallelUnsequencedPolicy()
{
	return std::execution::par_unseq;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_UNSEQUENCED_POLICY
stdfwd::execution::unsequenced_policy TestClass::getUnsequencedPolicy()
{
	return std::execution::unseq;
}
#endif

//------------------------------------------------------------------------------

}
