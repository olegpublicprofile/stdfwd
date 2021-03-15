#pragma once

#include <stdfwd/atomic>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_ATOMIC
	#define STDFWD_IS_ATOMIC_FLAG
#endif

//------------------------------------------------------------------------------

namespace atomic_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_ATOMIC
	std::atomic< int > & getAtomic();
	#endif

	#ifdef STDFWD_IS_ATOMIC_FLAG
	std::atomic_flag & getAtomicFlag();
	#endif

};

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------
