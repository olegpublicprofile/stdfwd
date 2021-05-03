#pragma once

#include <stdfwd/execution>

//------------------------------------------------------------------------------

#ifdef __has_include
	#if __has_include(<version>)
		#include <version>
	#endif
#endif

//------------------------------------------------------------------------------

#ifdef __cpp_lib_parallel_algorithm
	#if STDFWD_CPP_VERSION >= __cpp_lib_parallel_algorithm
		#define STDFWD_IS_SEQUENCED_POLICY
		#define STDFWD_IS_PARALLEL_POLICY
		#define STDFWD_IS_PARALLEL_UNSEQUENCED_POLICY
		#if STDFWD_IS_CPP20
			#define STDFWD_IS_UNSEQUENCED_POLICY
		#endif
	#endif
#endif

//------------------------------------------------------------------------------

namespace execution_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_SEQUENCED_POLICY
	stdfwd::execution::sequenced_policy getSequencedPolicy();
	#endif

	#ifdef STDFWD_IS_PARALLEL_POLICY
	stdfwd::execution::parallel_policy getParallelPolicy();
	#endif

	#ifdef STDFWD_IS_PARALLEL_UNSEQUENCED_POLICY
	stdfwd::execution::parallel_unsequenced_policy getParallelUnsequencedPolicy();
	#endif

	#ifdef STDFWD_IS_UNSEQUENCED_POLICY
	stdfwd::execution::unsequenced_policy getUnsequencedPolicy();
	#endif
};

//------------------------------------------------------------------------------

}
