#include "tests/mutex/mutex_full.hpp"

#include "tests/mutex/mutex_fwd.hpp"

#include <mutex>

//------------------------------------------------------------------------------

namespace mutex_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_MUTEX
	std::mutex & mutex = testObj.getMutex();
	(void)mutex;
	#endif

	#ifdef STDFWD_IS_TIMED_MUTEX
	std::timed_mutex & timed_mutex = testObj.getTimedMutex();
	(void)timed_mutex;
	#endif

	#ifdef STDFWD_IS_RECURSIVE_MUTEX
	std::recursive_mutex & recursive_mutex = testObj.getRecursiveMutex();
	(void)recursive_mutex;
	#endif

	#ifdef STDFWD_IS_RECURSIVE_TIMED_MUTEX
	std::recursive_timed_mutex & recursive_timed_mutex = testObj.getRecursiveTimedMutex();
	(void)recursive_timed_mutex;
	#endif

	#ifdef STDFWD_IS_LOCK_GUARD
	{
		std::lock_guard< std::mutex > & lock_guard_mutex = testObj.getLockGuard();
		(void)lock_guard_mutex;
	}
	#endif

	#ifdef STDFWD_IS_UNIQUE_LOCK
	{
		std::unique_lock< std::mutex > unique_lock_mutex = testObj.getUniqueLock();
		(void)unique_lock_mutex;
	}
	#endif

	#ifdef STDFWD_IS_SCOPED_LOCK
	{
		std::scoped_lock< std::mutex > scoped_lock_mutex = testObj.getScopedLock();
		(void)scoped_lock_mutex;
	}
	#endif

	#ifdef STDFWD_IS_RECURSIVE_TIMED_MUTEX
	std::defer_lock_t defer_lock_t = testObj.getDeferLockT();
	(void)defer_lock_t;
	#endif

	#ifdef STDFWD_IS_TRY_TO_LOCK_T
	std::try_to_lock_t try_to_lock_t = testObj.getTryToLockT();
	(void)try_to_lock_t;
	#endif

	#ifdef STDFWD_IS_ADOPT_LOCK_T
	std::adopt_lock_t adopt_lock_t = testObj.getAdoptLockT();
	(void)adopt_lock_t;
	#endif

	#ifdef STDFWD_IS_ONCE_FLAG
	std::once_flag & once_flag = testObj.getOnceFlag();
	(void)once_flag;
	#endif
}

//------------------------------------------------------------------------------

}
