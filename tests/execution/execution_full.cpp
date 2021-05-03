#include "tests/execution/execution_full.hpp"

#include "tests/execution/execution_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<execution>)
		#include <execution>
	#endif
#endif

//------------------------------------------------------------------------------

namespace execution_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_SEQUENCED_POLICY
	std::execution::sequenced_policy sequenced_policy = testObj.getSequencedPolicy();
	(void)sequenced_policy;
	#endif

	#ifdef STDFWD_IS_PARALLEL_POLICY
	std::execution::parallel_policy parallel_policy = testObj.getParallelPolicy();
	(void)parallel_policy;
	#endif

	#ifdef STDFWD_IS_PARALLEL_UNSEQUENCED_POLICY
	std::execution::parallel_unsequenced_policy parallel_unsequenced_policy =
		testObj.getParallelUnsequencedPolicy();
	(void)parallel_unsequenced_policy;
	#endif

	#ifdef STDFWD_IS_UNSEQUENCED_POLICY
	std::execution::unsequenced_policy unsequenced_policy =
		testObj.getUnsequencedPolicy();
	(void)unsequenced_policy;
	#endif

}

//------------------------------------------------------------------------------

}
