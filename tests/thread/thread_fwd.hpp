#pragma once

#include <stdfwd/thread>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_THREAD
#endif

//------------------------------------------------------------------------------

namespace thread_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_THREAD
	std::thread getThread();
	#endif
};

//------------------------------------------------------------------------------

}
