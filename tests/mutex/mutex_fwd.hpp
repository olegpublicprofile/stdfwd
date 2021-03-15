#pragma once

#include <stdfwd/mutex>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_MUTEX
	#define STDFWD_IS_TIMED_MUTEX
	#define STDFWD_IS_RECURSIVE_MUTEX
	#define STDFWD_IS_RECURSIVE_TIMED_MUTEX
	#define STDFWD_IS_LOCK_GUARD
	#define STDFWD_IS_UNIQUE_LOCK
	#define STDFWD_IS_DEFER_LOCK_T
	#define STDFWD_IS_TRY_TO_LOCK_T
	#define STDFWD_IS_ADOPT_LOCK_T
	#define STDFWD_IS_ONCE_FLAG
#endif

//------------------------------------------------------------------------------

namespace mutex_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_MUTEX
	std::mutex & getMutex();
	#endif

	#ifdef STDFWD_IS_TIMED_MUTEX
	std::timed_mutex & getTimedMutex();
	#endif

	#ifdef STDFWD_IS_RECURSIVE_MUTEX
	std::recursive_mutex & getRecursiveMutex();
	#endif

	#ifdef STDFWD_IS_RECURSIVE_TIMED_MUTEX
	std::recursive_timed_mutex & getRecursiveTimedMutex();
	#endif

	#ifdef STDFWD_IS_LOCK_GUARD
	std::lock_guard< std::mutex > & getLockGuard();
	#endif

	#ifdef STDFWD_IS_UNIQUE_LOCK
	std::unique_lock< std::mutex > getUniqueLock();
	#endif

	#ifdef STDFWD_IS_DEFER_LOCK_T
	std::defer_lock_t getDeferLockT();
	#endif

	#ifdef STDFWD_IS_TRY_TO_LOCK_T
	std::try_to_lock_t getTryToLockT();
	#endif

	#ifdef STDFWD_IS_ADOPT_LOCK_T
	std::adopt_lock_t getAdoptLockT();
	#endif

	#ifdef STDFWD_IS_ONCE_FLAG
	std::once_flag & getOnceFlag();
	#endif
};

//------------------------------------------------------------------------------

}
