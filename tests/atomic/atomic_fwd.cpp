#include "tests/atomic/atomic_fwd.hpp"

#include <atomic>

//------------------------------------------------------------------------------

namespace atomic_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------


#ifdef STDFWD_IS_ATOMIC
std::atomic< int > & TestClass::getAtomic()
{
	static std::atomic< int > a;
	return a;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ATOMIC_FLAG
std::atomic_flag & TestClass::getAtomicFlag()
{
	static std::atomic_flag f;
	return f;
}
#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------
