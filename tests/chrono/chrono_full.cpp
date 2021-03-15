#include "tests/chrono/chrono_full.hpp"

#include "tests/chrono/chrono_fwd.hpp"

#include <chrono>

//------------------------------------------------------------------------------

namespace chrono_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_DURATION
	TestClass::Minutes minutes = testObj.getMinutesDuration();
	(void)minutes;
	#endif

	#ifdef STDFWD_IS_SYSTEM_CLOCK
	std::chrono::system_clock system_clock = testObj.getSystemClock();
	(void)system_clock;
	#endif

	#ifdef STDFWD_IS_STEADY_CLOCK
	std::chrono::steady_clock steady_clock = testObj.getSteadyClock();
	(void)steady_clock;
	#endif

	#ifdef STDFWD_IS_HIGH_RESOLUTION_CLOCK
	std::chrono::high_resolution_clock high_resolution_clock =
		testObj.getHighResolutionClock();
	(void)high_resolution_clock;
	#endif

}

//------------------------------------------------------------------------------

}
