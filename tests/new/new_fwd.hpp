#pragma once

#include <stdfwd/new>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_BAD_ARRAY_NEW_LENGTH
	#define STDFWD_IS_NOTHROW_T
#endif

#ifdef STDFWD_IS_CPP17
	#define STDFWD_IS_ALIGN_VAL_T
#endif

//------------------------------------------------------------------------------

namespace new_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	std::bad_alloc getBadAlloc();

	#ifdef STDFWD_IS_BAD_ARRAY_NEW_LENGTH
	std::bad_array_new_length getBadArrayNewLength();
	#endif

	#ifdef STDFWD_IS_NOTHROW_T
	std::nothrow_t getNothrowT();
	#endif

	#ifdef STDFWD_IS_ALIGN_VAL_T
	std::align_val_t getAlignValT();
	#endif
};

//------------------------------------------------------------------------------

}
