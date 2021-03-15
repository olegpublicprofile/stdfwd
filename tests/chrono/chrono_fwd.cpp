#include "tests/chrono/chrono_fwd.hpp"

#include <chrono>

//------------------------------------------------------------------------------

namespace chrono_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_DURATION
TestClass::Minutes TestClass::getMinutesDuration()
{
	return Minutes();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SYSTEM_CLOCK
std::chrono::system_clock TestClass::getSystemClock()
{
	return std::chrono::system_clock();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_STEADY_CLOCK
std::chrono::steady_clock TestClass::getSteadyClock()
{
	return std::chrono::steady_clock();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_HIGH_RESOLUTION_CLOCK
std::chrono::high_resolution_clock TestClass::getHighResolutionClock()
{
	return std::chrono::high_resolution_clock();
}
#endif

//------------------------------------------------------------------------------

}
