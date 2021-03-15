#include "tests/shared_mutex/shared_mutex_full.hpp"

#include "tests/shared_mutex/shared_mutex_fwd.hpp"

#include <shared_mutex>

//------------------------------------------------------------------------------

namespace shared_mutex_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_SHARED_MUTEX
	std::shared_mutex shared_mutex = testObj.getSharedMutex();
	(void)shared_mutex;
	#endif

	#ifdef STDFWD_IS_SHARED_TIMED_MUTEX
	std::shared_timed_mutex & shared_timed_mutex = testObj.getSharedTimedMutex();
	(void)shared_timed_mutex;
	#endif

	#if ( defined(STDFWD_IS_SHARED_LOCK) && defined (STDFWD_IS_SHARED_MUTEX) )
	{
		std::shared_lock< std::shared_mutex > shared_lock = testObj.getSharedLock();
		(void)shared_lock;
	}
	#endif

}

//------------------------------------------------------------------------------

}
