#include "tests/shared_mutex/shared_mutex_fwd.hpp"

#include <shared_mutex>

//------------------------------------------------------------------------------

namespace shared_mutex_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SHARED_MUTEX
std::shared_mutex TestClass::getSharedMutex()
{
	return std::shared_mutex();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SHARED_TIMED_MUTEX
std::shared_timed_mutex & TestClass::getSharedTimedMutex()
{
	static std::shared_timed_mutex m;
	return m;
}
#endif

//------------------------------------------------------------------------------

#if ( defined(STDFWD_IS_SHARED_LOCK) && defined (STDFWD_IS_SHARED_MUTEX) )
std::shared_lock< std::shared_mutex > TestClass::getSharedLock()
{
	static std::shared_mutex m;
	return std::shared_lock< std::shared_mutex >( m );
}
#endif

//------------------------------------------------------------------------------

}
