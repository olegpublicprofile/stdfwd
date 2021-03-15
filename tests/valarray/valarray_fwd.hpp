#pragma once

#include <stdfwd/valarray>

//------------------------------------------------------------------------------

namespace valarray_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	std::slice getSlice();
	std::gslice getGslice();

	std::valarray<int> getValarray();
	std::slice_array<int> getSliceArray();
	std::gslice_array<int> getGliceArray();
	std::mask_array<int> getMaskArray();
	std::indirect_array<int> getIndirectArray();
};

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------
