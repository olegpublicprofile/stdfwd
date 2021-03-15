#include "tests/ratio/ratio_fwd.hpp"

#ifdef STDFWD_IS_CPP11
#include <ratio>
#endif

//------------------------------------------------------------------------------

namespace ratio_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RATIO
std::ratio<1,1> TestClass::getRatio()
{
	return std::ratio<1,1>();
}
#endif
//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RATIO_EQUAL
std::ratio_equal<R1,R2> TestClass::getRatioEqual()
{
	return std::ratio_equal<R1,R2>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RATIO_NOT_EQUAL
std::ratio_not_equal<R1,R2> TestClass::getRatioNotEqual()
{
	return std::ratio_not_equal<R1,R2>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RATIO_LESS
std::ratio_less<R1,R2> TestClass::getRatioLess()
{
	return std::ratio_less<R1,R2>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RATIO_LESS_EQUAL
std::ratio_less_equal<R1,R2> TestClass::getRatioLessEqual()
{
	return std::ratio_less_equal<R1,R2>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RATIO_GREATER
std::ratio_greater<R1,R2> TestClass::getRatioRreater()
{
	return std::ratio_greater<R1,R2>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RATIO_GREATER_EQUAL
std::ratio_greater_equal<R1,R2> TestClass::getRatioRreaterEqual()
{
	return std::ratio_greater_equal<R1,R2>();
}
#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


