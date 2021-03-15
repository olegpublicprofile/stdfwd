#pragma once

#include <stdfwd/shared_mutex>

//------------------------------------------------------------------------------

#ifdef __has_include
	#if __has_include(<version>)
		#include <version>
	#endif
#endif

//------------------------------------------------------------------------------

#ifdef __cpp_lib_shared_mutex
	#if __cplusplus >= __cpp_lib_shared_mutex
		#define STDFWD_IS_SHARED_MUTEX
	#endif
#else
	#ifdef STDFWD_IS_CPP17
		#define STDFWD_IS_SHARED_MUTEX
	#endif
#endif

#ifdef __cpp_lib_shared_timed_mutex
	#if __cplusplus >= __cpp_lib_shared_timed_mutex
		#define STDFWD_IS_SHARED_TIMED_MUTEX
	#endif
#else
	#ifdef STDFWD_IS_CPP14
		#define STDFWD_IS_SHARED_TIMED_MUTEX
	#endif
#endif

#ifdef STDFWD_IS_CPP14
	#define STDFWD_IS_SHARED_LOCK
#endif

//------------------------------------------------------------------------------

namespace shared_mutex_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_SHARED_MUTEX
	std::shared_mutex getSharedMutex();
	#endif

	#ifdef STDFWD_IS_SHARED_TIMED_MUTEX
	std::shared_timed_mutex & getSharedTimedMutex();
	#endif

	#if ( defined(STDFWD_IS_SHARED_LOCK) && defined (STDFWD_IS_SHARED_MUTEX) )
	std::shared_lock< std::shared_mutex > getSharedLock();
	#endif
};

//------------------------------------------------------------------------------

}
