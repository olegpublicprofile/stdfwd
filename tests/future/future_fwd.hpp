#pragma once

#include <stdfwd/future>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_PROMISE
	#define STDFWD_IS_PACKAGED_TASK
	#define STDFWD_IS_FUTURE
	#define STDFWD_IS_SHARED_FUTURE
	#define STDFWD_IS_LAUNCH
	#define STDFWD_IS_FUTURE_STATUS
	#define STDFWD_IS_FUTURE_ERROR
	#define STDFWD_IS_FUTURE_ERRC
#endif

//------------------------------------------------------------------------------

namespace future_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_PROMISE
	std::promise< int > getPromise();
	#endif

	#ifdef STDFWD_IS_PACKAGED_TASK
	std::packaged_task< int() > getPackagedTask();
	#endif

	#ifdef STDFWD_IS_FUTURE
	std::future< int > getFuture();
	#endif

	#ifdef STDFWD_IS_SHARED_FUTURE
	std::shared_future< int > getSharedFuture();
	#endif

	#ifdef STDFWD_IS_LAUNCH
	std::launch getLaunch();
	#endif

	#ifdef STDFWD_IS_FUTURE_STATUS
	std::future_status getFutureStatus();
	#endif

	#ifdef STDFWD_IS_FUTURE_ERRC
	std::future_errc getFutureErrc();
	#endif
};

//------------------------------------------------------------------------------

}
