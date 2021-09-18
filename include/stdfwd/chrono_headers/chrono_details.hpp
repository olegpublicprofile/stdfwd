#pragma once

#include "../stdfwd_details.hpp"

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_LIBSTDCPP
	#define STDFWD_BEGIN_CHRONO_CLOCKS inline namespace _V2 {
	#define STDFWD_END_CHRONO_CLOCKS }
#else
	#define STDFWD_BEGIN_CHRONO_CLOCKS
	#define STDFWD_END_CHRONO_CLOCKS
#endif

//------------------------------------------------------------------------------


