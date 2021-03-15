#include "tests/thread/thread_full.hpp"

#include "tests/thread/thread_fwd.hpp"

#include <thread>

//------------------------------------------------------------------------------

namespace thread_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_THREAD
	std::thread thread = testObj.getThread();
	(void)thread;
	#endif
}

//------------------------------------------------------------------------------

}
