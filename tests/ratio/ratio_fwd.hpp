#pragma once

#include <stdfwd/ratio>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_RATIO
	#define STDFWD_IS_RATIO_EQUAL
	#define STDFWD_IS_RATIO_NOT_EQUAL
	#define STDFWD_IS_RATIO_LESS
	#define STDFWD_IS_RATIO_LESS_EQUAL
	#define STDFWD_IS_RATIO_GREATER
	#define STDFWD_IS_RATIO_GREATER_EQUAL
#endif

//------------------------------------------------------------------------------

namespace ratio_tests {

#ifdef STDFWD_IS_RATIO
using R1 = std::ratio<1,1>;
using R2 = std::ratio<1,1>;
#endif

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_RATIO
	std::ratio<1,1> getRatio();
	#endif

	#ifdef STDFWD_IS_RATIO_EQUAL
	std::ratio_equal<R1,R2> getRatioEqual();
	#endif

	#ifdef STDFWD_IS_RATIO_NOT_EQUAL
	std::ratio_not_equal<R1,R2> getRatioNotEqual();
	#endif

	#ifdef STDFWD_IS_RATIO_LESS
	std::ratio_less<R1,R2> getRatioLess();
	#endif

	#ifdef STDFWD_IS_RATIO_LESS_EQUAL
	std::ratio_less_equal<R1,R2> getRatioLessEqual();
	#endif

	#ifdef STDFWD_IS_RATIO_GREATER
	std::ratio_greater<R1,R2> getRatioRreater();
	#endif

	#ifdef STDFWD_IS_RATIO_GREATER_EQUAL
	std::ratio_greater_equal<R1,R2> getRatioRreaterEqual();
	#endif

};

//------------------------------------------------------------------------------

}
