#include "tests/new/new_fwd.hpp"

#include <new>

//------------------------------------------------------------------------------

namespace new_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

std::bad_alloc TestClass::getBadAlloc()
{
	return std::bad_alloc();
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_BAD_ARRAY_NEW_LENGTH
std::bad_array_new_length TestClass::getBadArrayNewLength()
{
	return std::bad_array_new_length();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_NOTHROW_T
std::nothrow_t TestClass::getNothrowT()
{
	return std::nothrow_t();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ALIGN_VAL_T
std::align_val_t TestClass::getAlignValT()
{
	return std::align_val_t();
}
#endif

//------------------------------------------------------------------------------

}
