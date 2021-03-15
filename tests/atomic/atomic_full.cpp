#include "tests/atomic/atomic_full.hpp"

#include "tests/atomic/atomic_fwd.hpp"

#include <atomic>

//------------------------------------------------------------------------------

namespace atomic_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_ATOMIC
	std::atomic< int > & atomic = testObj.getAtomic();
	(void)atomic;
	#endif

	#ifdef STDFWD_IS_ATOMIC_FLAG
	std::atomic_flag & atomic_flag = testObj.getAtomicFlag();
	(void)atomic_flag;
	#endif
}

//------------------------------------------------------------------------------

}
