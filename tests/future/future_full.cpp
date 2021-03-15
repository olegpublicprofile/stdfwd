#include "tests/future/future_full.hpp"

#include "tests/future/future_fwd.hpp"

#include <future>

//------------------------------------------------------------------------------

namespace future_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_PROMISE
	std::promise< int > promise = testObj.getPromise();
	(void)promise;
	#endif

	#ifdef STDFWD_IS_PACKAGED_TASK
	std::packaged_task< int() > packaged_task = testObj.getPackagedTask();
	(void)packaged_task;
	#endif

	#ifdef STDFWD_IS_FUTURE
	std::future< int > future = testObj.getFuture();
	(void)future;
	#endif

	#ifdef STDFWD_IS_SHARED_FUTURE
	std::shared_future< int > shared_future = testObj.getSharedFuture();
	(void)shared_future;
	#endif

	#ifdef STDFWD_IS_LAUNCH
	std::launch launch = testObj.getLaunch();
	(void)launch;
	#endif

	#ifdef STDFWD_IS_FUTURE_STATUS
	std::future_status future_status = testObj.getFutureStatus();
	(void)future_status;
	#endif

	#ifdef STDFWD_IS_FUTURE_ERRC
	std::future_errc future_errc = testObj.getFutureErrc();
	(void)future_errc;
	#endif
}

//------------------------------------------------------------------------------

}
