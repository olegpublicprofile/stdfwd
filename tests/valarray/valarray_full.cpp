#include "tests/valarray/valarray_full.hpp"

#include "tests/valarray/valarray_fwd.hpp"

#include <valarray>

//------------------------------------------------------------------------------

namespace valarray_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	std::slice slice = testObj.getSlice();
	(void)slice;

	std::gslice gslice = testObj.getGslice();
	(void)gslice;

	std::valarray<int> valarray = testObj.getValarray();
	(void)valarray;

	std::slice_array<int> slice_array = testObj.getSliceArray();
	(void)slice_array;

	std::gslice_array<int> gslice_array = testObj.getGliceArray();
	(void)gslice_array;

	std::mask_array<int> mask_array = testObj.getMaskArray();
	(void)mask_array;

	std::indirect_array<int> indirect_array = testObj.getIndirectArray();
	(void)indirect_array;

}

//------------------------------------------------------------------------------

}
