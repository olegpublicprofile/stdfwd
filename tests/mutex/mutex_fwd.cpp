#include "tests/mutex/mutex_fwd.hpp"

#include <mutex>

//------------------------------------------------------------------------------

namespace mutex_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MUTEX
std::mutex & TestClass::getMutex()
{
	static std::mutex m;
	return m;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_TIMED_MUTEX
std::timed_mutex & TestClass::getTimedMutex()
{
	static std::timed_mutex m;
	return m;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RECURSIVE_MUTEX
std::recursive_mutex & TestClass::getRecursiveMutex()
{
	static std::recursive_mutex m;
	return m;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RECURSIVE_TIMED_MUTEX
std::recursive_timed_mutex & TestClass::getRecursiveTimedMutex()
{
	static std::recursive_timed_mutex m;
	return m;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_LOCK_GUARD
std::lock_guard< std::mutex > & TestClass::getLockGuard()
{
	static std::mutex m;
	static std::lock_guard< std::mutex > l( m );
	return l;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_UNIQUE_LOCK
std::unique_lock< std::mutex > TestClass::getUniqueLock()
{
	static std::mutex m;
	return std::unique_lock< std::mutex >( m );
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_DEFER_LOCK_T
std::defer_lock_t TestClass::getDeferLockT()
{
	return std::defer_lock_t();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_TRY_TO_LOCK_T
std::try_to_lock_t TestClass::getTryToLockT()
{
	return std::try_to_lock_t();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ADOPT_LOCK_T
std::adopt_lock_t TestClass::getAdoptLockT()
{
	return std::adopt_lock_t();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ONCE_FLAG
std::once_flag & TestClass::getOnceFlag()
{
	static std::once_flag f;
	return f;
}
#endif

//------------------------------------------------------------------------------

}
