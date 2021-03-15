#include "tests/future/future_fwd.hpp"

#include <future>

//------------------------------------------------------------------------------

namespace future_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_PROMISE
std::promise< int > TestClass::getPromise()
{
	return std::promise< int >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_PROMISE
std::packaged_task< int() > TestClass::getPackagedTask()
{
	return std::packaged_task< int() >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FUTURE
std::future< int > TestClass::getFuture()
{
	return std::future< int >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SHARED_FUTURE
std::shared_future< int > TestClass::getSharedFuture()
{
	return std::shared_future< int >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_LAUNCH
std::launch TestClass::getLaunch()
{
	return std::launch();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FUTURE_STATUS
std::future_status TestClass::getFutureStatus()
{
	return std::future_status();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FUTURE_ERRC
std::future_errc TestClass::getFutureErrc()
{
	return std::future_errc();
}
#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


