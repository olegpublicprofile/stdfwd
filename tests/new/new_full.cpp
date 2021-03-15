#include "tests/new/new_full.hpp"

#include "tests/new/new_fwd.hpp"

#include <new>

//------------------------------------------------------------------------------

namespace new_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	std::bad_alloc bad_alloc = testObj.getBadAlloc();
	(void)bad_alloc;

	#ifdef STDFWD_IS_BAD_ARRAY_NEW_LENGTH
	std::bad_array_new_length bad_array_new_length = testObj.getBadArrayNewLength();
	(void)bad_array_new_length;
	#endif

	#ifdef STDFWD_IS_NOTHROW_T
	std::nothrow_t nothrow_t = testObj.getNothrowT();
	(void)nothrow_t;
	#endif

	#ifdef STDFWD_IS_ALIGN_VAL_T
	std::align_val_t align_val_t = testObj.getAlignValT();
	(void)align_val_t;
	#endif

}

//------------------------------------------------------------------------------

}
