#pragma once

#include <stdfwd/chrono>

#include <ratio>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_DURATION
	#define STDFWD_IS_TIME_POINT
	#define STDFWD_IS_TREAT_AS_FLOATING_POINT
	#define STDFWD_IS_DURATION_VALUES
	#define STDFWD_IS_SYSTEM_CLOCK
	#define STDFWD_IS_STEADY_CLOCK
	#define STDFWD_IS_HIGH_RESOLUTION_CLOCK
#endif

//------------------------------------------------------------------------------

namespace chrono_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_DURATION
	using Minutes = std::chrono::duration< int, std::ratio< 60 > >;
	Minutes getMinutesDuration();
	#endif

	#ifdef STDFWD_IS_SYSTEM_CLOCK
	std::chrono::system_clock getSystemClock();
	#endif

	#ifdef STDFWD_IS_STEADY_CLOCK
	std::chrono::steady_clock getSteadyClock();
	#endif

	#ifdef STDFWD_IS_HIGH_RESOLUTION_CLOCK
	std::chrono::high_resolution_clock getHighResolutionClock();
	#endif

};

//------------------------------------------------------------------------------

}
